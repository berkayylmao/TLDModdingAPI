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
#include <cstdint>
#include <mutex>
#include <unordered_map>

namespace Helpers {
  class Memory {
    struct MemoryAccessInfo {
      DWORD  _oldMemoryAccess;
      size_t _size;

      MemoryAccessInfo() = default;
      MemoryAccessInfo(int32_t size) : _oldMemoryAccess(NULL), _size(size) {}
    };

    std::mutex                                      _mutex;
    std::unordered_map<DWORD_PTR, MemoryAccessInfo> _mapAccessInfo;
    DWORD_PTR                                       _baseAddress;

   public:
    inline const DWORD32 CalcDistance(const DWORD_PTR from, const DWORD_PTR to) const {
      return to - from - 0x5;
    }
    inline const DWORD_PTR MakeAbsolute(const DWORD_PTR rva) const { return _baseAddress + rva; }

    void LockMemory(const DWORD_PTR address) {
      std::scoped_lock _lock(_mutex);

      MemoryAccessInfo* pMA = &_mapAccessInfo[address];
      VirtualProtect((LPVOID)address, pMA->_size, pMA->_oldMemoryAccess, &pMA->_oldMemoryAccess);
      _mapAccessInfo.erase(address);
    }
    void UnlockMemory(const DWORD_PTR address, const size_t size) {
      std::scoped_lock _lock(_mutex);

      MemoryAccessInfo mA(size);
      VirtualProtect((LPVOID)address, size, PAGE_EXECUTE_READWRITE, &mA._oldMemoryAccess);
      _mapAccessInfo[address] = mA;
    }

    DWORD_PTR* const ReadPointer(const DWORD_PTR baseOffset, const bool isBaseOffsetAbsolute,
                                 const int32_t offsetCount, ...) const {
      auto p = (DWORD_PTR*)baseOffset;
      if (!isBaseOffsetAbsolute) p = (DWORD_PTR*)MakeAbsolute(baseOffset);
      if (!*p) return nullptr;

      if (offsetCount > 0) {
        va_list offsets;
        va_start(offsets, offsetCount);
        for (int i = 0; i < offsetCount - 1; i++) {
          if (!p) break;

          p = (DWORD_PTR*)(*p + va_arg(offsets, int));
          if (!*p) {
            p = nullptr;
            break;
          }
        }

        if (p) p = (DWORD_PTR*)(*p + va_arg(offsets, int));
        va_end(offsets);
      } else {
        p = *(PDWORD_PTR*)p;
      }

      return p;
    }

    void WriteCall(const DWORD_PTR from, const DWORD_PTR to, const bool isFromAbsolute) {
      DWORD_PTR _from = from + (isFromAbsolute ? 0 : _baseAddress);

      UnlockMemory(_from, 5);
      *(BYTE*)_from            = 0xE8;
      *(DWORD32*)(_from + 0x1) = CalcDistance(_from, to);
      LockMemory(_from);
    }
    void WriteJMP(const DWORD_PTR from, const DWORD_PTR to, const bool isFromAbsolute) {
      DWORD_PTR _from = from + (isFromAbsolute ? 0 : _baseAddress);

      UnlockMemory(_from, 5);
      *(BYTE*)_from            = 0xE9;
      *(DWORD32*)(_from + 0x1) = CalcDistance(_from, to);
      LockMemory(_from);
    }

    Memory() : _baseAddress((DWORD_PTR)GetModuleHandle(TEXT("GameAssembly.dll"))) {}
    Memory(DWORD_PTR baseAddress) : _baseAddress(baseAddress) {}

    static Memory& GetInstance() {
      static Memory memory;
      return memory;
    }
  };
}  // namespace Helpers