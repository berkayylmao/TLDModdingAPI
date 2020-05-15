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

namespace Helpers {
  class DetourInfo {
    DWORD_PTR    address;
    mutable BYTE originalBytes[5];
    mutable BYTE hookBytes[5];

   public:
    void Hook() const {
      Memory::GetInstance().UnlockMemory(address, 5);
      memcpy_s((LPVOID)address, 5, hookBytes, 5);
      Memory::GetInstance().LockMemory(address);
    }
    void Unhook() const {
      Memory::GetInstance().UnlockMemory(address, 5);
      memcpy_s((LPVOID)address, 5, originalBytes, 5);
      Memory::GetInstance().LockMemory(address);
    }

    BYTE* const GetOriginalBytes() const { return originalBytes; }
    BYTE* const GetHookBytes() const { return hookBytes; }

    DetourInfo() = default;
    DetourInfo(DWORD_PTR _address) : originalBytes{0x00}, hookBytes{0x00} { address = _address; }
  };

  class DetourHook {
    std::unordered_map<DWORD_PTR, DetourInfo> _detourMap;
    std::mutex                                _mutex;

   public:
    DetourInfo const* GetInfoOf(const DWORD_PTR address) {
      std::scoped_lock _lock(_mutex);
      if (_detourMap.count(address)) return &_detourMap[address];

      return nullptr;
    }
    template <class Type>
    DetourInfo const* GetInfoOf(const Type fn) {
      return GetInfoOf((DWORD_PTR)fn);
    }

    void Hook(const DWORD_PTR targetAddress, const DWORD_PTR hookAddress) {
      std::scoped_lock _lock(_mutex);

      DetourInfo dI(targetAddress);
      Memory::GetInstance().UnlockMemory(targetAddress, 5);
      memcpy_s(dI.GetOriginalBytes(), 5, (LPVOID)targetAddress, 5);
      Memory::GetInstance().WriteJMP(targetAddress, hookAddress, true);
      memcpy_s(dI.GetHookBytes(), 5, (LPVOID)targetAddress, 5);
      Memory::GetInstance().LockMemory(targetAddress);

      _detourMap.insert(std::make_pair(targetAddress, dI));
    }
    template <class Type>
    const Type Hook(const DWORD_PTR targetAddress, const Type fnNew) {
      std::scoped_lock _lock(_mutex);

      DetourInfo dI(targetAddress);
      Memory::GetInstance().UnlockMemory(targetAddress, 5);
      memcpy_s(dI.GetOriginalBytes(), 5, (LPVOID)targetAddress, 5);
      Memory::GetInstance().WriteJMP(targetAddress, (DWORD_PTR)fnNew, true);
      memcpy_s(dI.GetHookBytes(), 5, (LPVOID)targetAddress, 5);
      Memory::GetInstance().LockMemory(targetAddress);

      _detourMap.insert(std::make_pair(targetAddress, dI));
      return (Type)targetAddress;
    }
    void Unhook(const DWORD_PTR address) {
      std::scoped_lock _lock(_mutex);
      if (_detourMap.count(address)) {
        _detourMap[address].Unhook();
        _detourMap.erase(address);
      }
    }
    void UnhookAll() {
      std::scoped_lock _lock(_mutex);
      for (auto& dI : _detourMap) dI.second.Unhook();

      _detourMap.clear();
    }

    DetourHook(const DetourHook&) = delete;
    DetourHook()                  = default;
  };
}  // namespace Helpers