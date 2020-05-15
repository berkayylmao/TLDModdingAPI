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
//   4. Neither the name of "TLD Modding API" nor the
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
// Win32
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
// Standard headers
#include <functional>  // std::function
// Macros
#include "TLDModdingAPI_Macros.h"
// Maybe Dear ImGui
#ifdef TLDMODDINGAPI_HOST_IMGUI
#define INIT_IMGUI(pContext) \
  if (!ImGui::GetCurrentContext()) ImGui::SetCurrentContext(pContext);
#include "GenericHelpers/Dear ImGui/imgui.h"
#include "GenericHelpers/Dear ImGui/Implementations/imgui_impl_dx9.h"
#include "GenericHelpers/Dear ImGui/Implementations/imgui_impl_dx11.h"
#include "GenericHelpers/Dear ImGui/Implementations/imgui_impl_win32.h"
extern LRESULT ImGui_Impl_Win32_WndProcHandler(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
#endif

// Helper macros for newbies
#define MAKE_FUNCTION_ACCESSIBLE comment(linker, "/EXPORT:" __FUNCTION__ "=" __FUNCDNAME__)
#define DISABLE_THREAD_CALLS(hModule, reason) \
  if (reason == DLL_PROCESS_ATTACH) DisableThreadLibraryCalls(hModule)

// clang-format off

MOD_NAMESPACE_BEGIN()
/// <summary>
/// You probably don't want something from here.
/// </summary>
namespace details {
  typedef DWORD64(MODDINGAPI* fnGetBaseAddress)(const bool);
  typedef void(MODDINGAPI* fnExecuteInGameThread_Once_NoArg)(const std::function<void()>&);
  typedef void(MODDINGAPI* fnExecuteInGameThread_Once_WArg)(const std::function<void(void*)>&,
                                                            void* arg);
  typedef void(MODDINGAPI* fnExecuteInGameThread_Always_NoArg)(const std::function<bool()>&);
  typedef void(MODDINGAPI* fnExecuteInGameThread_Always_WArg)(const std::function<bool(void*)>&,
                                                              void* arg);
}  // namespace details

/// <summary>Gets the base address of GameAssembly.dll</summary>
/// <param name="blockUntilReturn">Whether to loop the function until the base address is returned.
/// <para>THIS USES <see cref="::Sleep()"/>!</para></param>
/// <returns>The base address of GameAssembly.dll if successful, NULL if not.</returns>
inline DWORD64 MODDINGAPI GetBaseAddress(const bool blockUntilReturn = true) {
   auto a = MODDINGAPI_MAKE_STR(MODDINGAPI_NAMESPACE);
  return reinterpret_cast<details::fnGetBaseAddress>(_Notnull_ GetProcAddress(
      GetModuleHandle(TEXT(MODDINGAPI_FILENAME_STR)), MODDINGAPI_MAKE_STR(MODDINGAPI_NAMESPACE)"::Internals::GetBaseAddress"))(
      blockUntilReturn);
}

/// <summary>
/// Adds the given function to a queue that will execute it with the game's thread context at the next game tick.
/// </summary>
/// <param name="functionToBeCalled">The function that will be executed.
/// <para>If you need to pass a parameter, use the overload.</para></param>
/// <remarks>This only adds the functions into a queue, it doesn't execute the function.</remarks>
inline void MODDINGAPI ExecuteInGameThread(const std::function<void()>& functionToBeCalled) {
  reinterpret_cast<details::fnExecuteInGameThread_Once_NoArg>(_Notnull_ GetProcAddress(
      GetModuleHandle(TEXT(MODDINGAPI_FILENAME_STR)),
      MODDINGAPI_MAKE_STR(MODDINGAPI_NAMESPACE)"::Internals::ExecuteInGameThread_Once_NoArg"))(functionToBeCalled);
}

/// <summary>
/// Adds the given function to a queue that will execute it with the game's thread context at the next game tick.
/// </summary>
/// <param name="functionToBeCalled">The function that will be executed. Its parameter has to be 'void*'.</param>
/// <param name="arg">The pointer that will be passed to the function.</param>
/// <remarks>This only adds the functions into a queue, it doesn't execute the function.</remarks>
inline void MODDINGAPI ExecuteInGameThread(const std::function<void(void*)>& functionToBeCalled,
                                           void*                             arg) {
  reinterpret_cast<details::fnExecuteInGameThread_Once_WArg>(_Notnull_ GetProcAddress(
      GetModuleHandle(TEXT(MODDINGAPI_FILENAME_STR)),
      MODDINGAPI_MAKE_STR(MODDINGAPI_NAMESPACE)"::Internals::ExecuteInGameThread_Once_WArg"))(functionToBeCalled, arg);
}

/// <summary>
/// Adds the given function to a queue that will execute it with the game's thread context at every game tick.
/// </summary>
/// <param name="functionToBeCalled">The function that will be executed. Return 'true' from the function to remove it from the queue.
/// <para>If you need to pass a parameter, use the overload.</para></param>
/// <remarks>This only adds the functions into a queue, it doesn't execute the function.</remarks>
inline void MODDINGAPI ExecuteInGameThread(const std::function<bool()>& functionToBeCalled) {
  reinterpret_cast<details::fnExecuteInGameThread_Always_NoArg>(_Notnull_ GetProcAddress(
      GetModuleHandle(TEXT(MODDINGAPI_FILENAME_STR)),
      MODDINGAPI_MAKE_STR(MODDINGAPI_NAMESPACE)"::Internals::ExecuteInGameThread_Always_WArg"))(functionToBeCalled);
}

/// <summary>
/// Adds the given function to a queue that will execute it with the game's thread context at every game tick.
/// </summary>
/// <param name="functionToBeCalled">The function that will be executed. Return 'true' from the function to remove it from the queue.
/// <para><paramref name="arg"/> has to be a pointer.</para></param>
/// <param name="arg">The pointer that will be passed to the function.</param>
/// <remarks>This only adds the functions into a queue, it doesn't execute the function.</remarks>
inline void MODDINGAPI ExecuteInGameThread(const std::function<bool(void*)>& functionToBeCalled,
                                           void*                             arg) {
  reinterpret_cast<details::fnExecuteInGameThread_Always_WArg>(_Notnull_ GetProcAddress(
      GetModuleHandle(TEXT(MODDINGAPI_FILENAME_STR)),
      MODDINGAPI_MAKE_STR(MODDINGAPI_NAMESPACE)"::Internals::ExecuteInGameThread_Always_WArg"))(functionToBeCalled, arg);
}

MOD_NAMESPACE_END()

// do not touch this or you will void the BSD-4 license
static constexpr char* __COPYRIGHT_STRING__ = R"(
//   This product includes software developed by Berkay Yigit.
//   To support the developer, please donate to:
//   "https://www.paypal.me/berkayylmao".
)";

// clang-format on
