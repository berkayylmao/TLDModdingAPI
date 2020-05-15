// clang-format off
//
//   BSD 4-Clause License
//   
//   Copyright (c) 2020 Berkay Yigit <berkaytgy@gmail.com>
//   All rights reserved.
//   
//   Redistribution and use in source and binary forms, with or without
//   modification, are permitted provided that the following conditions are met:
//   1. Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//   2. Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
//   3. All advertising materials mentioning features or use of this software
//      must display the following acknowledgement:
//      This product includes software developed by Berkay Yigit.
//      To support the developer, please donate to:
//      "https://www.paypal.me/berkayylmao".
//   4. Neither the name of "berkayylmao's The Long Dark Mods" nor the
//      names of its contributors may be used to endorse or promote products
//      derived from this software without specific prior written permission.
//   
//   THIS SOFTWARE IS PROVIDED BY Berkay Yigit ''AS IS'' AND  ANY EXPRESS OR
//   IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
//   OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
//   IN NO EVENT SHALL Berkay Yigit BE LIABLE FOR ANY DIRECT, INDIRECT, 
//   INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
//   BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//   LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
//   ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// clang-format on

#pragma once
#include "pch.h"
#include "Hooks/HookGameManager_Update.hpp"

MODDINGAPI_NAMESPACE_BEGIN()
namespace Internals {
#pragma region Exported Functions
  static DWORD64     baseAddress = NULL;
  DWORD64 MODDINGAPI GetBaseAddress(const bool blockUntilReturn) {
#pragma ExportedFunction
    if (baseAddress) return baseAddress;

    HMODULE gaHandle = GetModuleHandleW(L"GameAssembly.dll");
    if (blockUntilReturn) {
      while (!gaHandle) {
        gaHandle = GetModuleHandleW(L"GameAssembly.dll");
        Sleep(100);
      }
    } else {
      if (!gaHandle) return NULL;
    }

    baseAddress = (DWORD64)gaHandle;
    return baseAddress;
  }

  void MODDINGAPI ExecuteInGameThread_Once_NoArg(const std::function<void()>& fn) {
#pragma ExportedFunction
    Hooks::vFnQueue.push_back(fn);
  }
  void MODDINGAPI ExecuteInGameThread_Once_WArg(const std::function<void(void* arg)>& fn,
                                                void*                                 arg) {
#pragma ExportedFunction
    Hooks::vFnQueueWArg.push_back(std::make_pair(fn, arg));
  }
  void MODDINGAPI ExecuteInGameThread_Always_NoArg(const std::function<bool()>& fn) {
#pragma ExportedFunction
    Hooks::vPermFnQueue.push_back(fn);
  }
  void MODDINGAPI ExecuteInGameThread_Always_WArg(const std::function<bool(void* arg)>& fn,
                                                  void*                                 arg) {
#pragma ExportedFunction
    Hooks::vPermFnQueueWArg.push_back(std::make_pair(fn, arg));
  }
#pragma endregion
#pragma region Internal Functions
  template <typename FuncType>
  static void CallModFunction(const HMODULE& hMod, const char* fnName) {
    if (auto func = GetProcAddress(hMod, fnName))
      std::thread(reinterpret_cast<FuncType>(func)).detach();
  }
  template <typename FuncType, typename... ArgTypes>
  static void CallModFunction(const HMODULE& hMod, const char* fnName, ArgTypes&&... args) {
    if (auto func = GetProcAddress(hMod, fnName))
      std::thread(reinterpret_cast<FuncType>(func), std::forward<ArgTypes>(args)...).detach();
  }

  template <typename FuncType, typename ReturnType>
  static ReturnType CallModFunction(const HMODULE& hMod, const char* fnName) {
    if (auto func = GetProcAddress(hMod, fnName)) {
      std::future<ReturnType> ret = std::async(reinterpret_cast<FuncType>(func));
      return ret.get();
    } else {
      if (std::is_pointer<ReturnType>::value)
        return nullptr;
      else
        return ReturnType{};
    }
  }
  template <typename FuncType, typename ReturnType, typename... ArgTypes>
  static ReturnType CallModFunction(const HMODULE& hMod, const char* fnName, ArgTypes&&... args) {
    if (auto func = GetProcAddress(hMod, fnName)) {
      std::future<ReturnType> ret =
          std::async(reinterpret_cast<FuncType>(func), std::forward<ArgTypes>(args)...);
      return ret.get();
    } else {
      if (std::is_pointer<ReturnType>::value)
        return nullptr;
      else
        return ReturnType{};
    }
  }
#pragma endregion
}  // namespace Internals
MODDINGAPI_NAMESPACE_END()