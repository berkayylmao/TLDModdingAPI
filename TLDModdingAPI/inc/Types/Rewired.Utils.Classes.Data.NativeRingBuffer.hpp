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

/*
 * Generated by Il2CppTypeDumper (by berkayylmao) on 10:43 02/05/2020 UTC.
 * MIT License
 * Copyright(c) 2020 Berkay Yigit <berkaytgy@gmail.com>
 *
 * A fork of Il2CppDumper (by Perfare)
 * Il2CppDumper license:
 *   MIT License
 *   Copyright(c) 2016 Perfare
 */

#pragma once
#include "Il2CppBase.h"


namespace ModdingAPI::Exposed::Rewired::Utils::Classes::Data {
struct __NativeRingBuffer_Il2CppStaticFields {
};

struct __NativeRingBuffer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
};

struct __NativeRingBuffer_Il2CppClass {
  Il2CppClass_1 _1;
  __NativeRingBuffer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NativeRingBuffer_Il2CppVtbl vtbl;
};

class NativeRingBuffer {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C27F30;
  static inline    __NativeRingBuffer_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __NativeRingBuffer_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__NativeRingBuffer_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __NativeRingBuffer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer* uizLUszPdsfcuvOjvApDHENHiVdg;
  int32_t etmqMLVNARobGGbOxVugVIxTHkd;
  int64_t NiQKfKODcdFbpcYtqaVVJFIroRgw;
  int64_t ArScVhhUEiuxvSguOLOYcMdOgTJ;
  int32_t YexbLRoHkMWhXKXtaIEkVitrepzI;
  bool yhyHlkqPHFcTWDVZQlEhwvcBZeYr;
  uint32_t hMeTMcgQqTYPECvwJVipDWAFJBx;
  bool IPjKDfWEXfJCxnkfIfovlZZlcJe;

  // Member methods:
  int32_t get_Capacity() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FED20))(this);
  }
  int32_t get_BytesInBuffer() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D870))(this);
  }
  bool get_BufferOverrun() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x306B90))(this);
  }
  void ::ctor(int32_t capacity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB51430))(this, capacity);
  }
  intptr_t Allocate(int32_t bufferLength, bool zeroFill, uint32_t passId) {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, int32_t, bool, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB51660))(this, bufferLength, zeroFill, passId);
  }
  int32_t Write(intptr_t buffer, int32_t bufferLength, int32_t numBytesToWrite, int32_t startOffset, uint32_t passId) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, intptr_t, int32_t, int32_t, int32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB51830))(this, buffer, bufferLength, numBytesToWrite, startOffset, passId);
  }
  int32_t Write(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t numBytesToWrite, int32_t startOffset, uint32_t passId) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB51B40))(this, buffer, numBytesToWrite, startOffset, passId);
  }
  int32_t Write(intptr_t buffer, int32_t bufferLength, int32_t numBytesToWrite) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, intptr_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB51DA0))(this, buffer, bufferLength, numBytesToWrite);
  }
  int32_t Write(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t numBytesToWrite) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB51DE0))(this, buffer, numBytesToWrite);
  }
  int32_t Read(intptr_t buffer, int32_t bufferLength, int32_t numBytesToRead) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, intptr_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB51E10))(this, buffer, bufferLength, numBytesToRead);
  }
  int32_t Read(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t numBytesToRead) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB52080))(this, buffer, numBytesToRead);
  }
  int32_t RandomRead(intptr_t buffer, int32_t bufferLength, int32_t numBytesToRead, int32_t readStartIndex) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, intptr_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB522C0))(this, buffer, bufferLength, numBytesToRead, readStartIndex);
  }
  int32_t RandomRead(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t numBytesToRead, int32_t readStartIndex) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB524F0))(this, buffer, numBytesToRead, readStartIndex);
  }
  bool IsValid(int32_t startIndex, uint32_t passId) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, int32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB52680))(this, startIndex, passId);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB526D0))(this);
  }
  void oZsEwMCJyxkxpVLdUJmEREdkppko(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB52720))(this, );
  }
  void WHmzAdiNjXbnPWUgGTaiLBKdnuv(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB52930))(this, );
  }
  void QDoJxfuqiYgPXCDEDdStBsdyKLgM() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB529D0))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB52A10))(this);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB52AC0))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB52B20))(this, disposing);
  }
};
}