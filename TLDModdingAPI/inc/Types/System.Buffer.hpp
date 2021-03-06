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


namespace ModdingAPI::Exposed::System {
struct __Buffer_Il2CppStaticFields {
};

struct __Buffer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Buffer_Il2CppClass {
  Il2CppClass_1 _1;
  __Buffer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Buffer_Il2CppVtbl vtbl;
};

class Buffer {
public:
  // Il2Cpp fields:
  __Buffer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline bool InternalBlockCopy(ModdingAPI::Exposed::System::Array* src, int32_t srcOffsetBytes, ModdingAPI::Exposed::System::Array* dst, int32_t dstOffsetBytes, int32_t byteCount) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Array*, int32_t, ModdingAPI::Exposed::System::Array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF82A0))(src, srcOffsetBytes, dst, dstOffsetBytes, byteCount);
  }
  static inline int32_t IndexOfByte(uint8_t* src, uint8_t value, int32_t index, int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(uint8_t*, uint8_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF8360))(src, value, index, count);
  }
  static inline int32_t _ByteLength(ModdingAPI::Exposed::System::Array* array) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF8420))(array);
  }
  static inline void ZeroMemory(uint8_t* src, int64_t len) {
    reinterpret_cast<void(__fastcall*)(uint8_t*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF8470))(src, len);
  }
  static inline void Memcpy(ModdingAPI::Exposed::System::Byte_array* dest, int32_t destIndex, uint8_t* src, int32_t srcIndex, int32_t len) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t, uint8_t*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF8490))(dest, destIndex, src, srcIndex, len);
  }
  static inline void Memcpy(uint8_t* pDest, int32_t destIndex, ModdingAPI::Exposed::System::Byte_array* src, int32_t srcIndex, int32_t len) {
    reinterpret_cast<void(__fastcall*)(uint8_t*, int32_t, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF84D0))(pDest, destIndex, src, srcIndex, len);
  }
  static inline int32_t ByteLength(ModdingAPI::Exposed::System::Array* array) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF8510))(array);
  }
  static inline void BlockCopy(ModdingAPI::Exposed::System::Array* src, int32_t srcOffset, ModdingAPI::Exposed::System::Array* dst, int32_t dstOffset, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Array*, int32_t, ModdingAPI::Exposed::System::Array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF8650))(src, srcOffset, dst, dstOffset, count);
  }
  static inline void memcpy4(uint8_t* dest, uint8_t* src, int32_t size) {
    reinterpret_cast<void(__fastcall*)(uint8_t*, uint8_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF88D0))(dest, src, size);
  }
  static inline void memcpy2(uint8_t* dest, uint8_t* src, int32_t size) {
    reinterpret_cast<void(__fastcall*)(uint8_t*, uint8_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF8970))(dest, src, size);
  }
  static inline void memcpy1(uint8_t* dest, uint8_t* src, int32_t size) {
    reinterpret_cast<void(__fastcall*)(uint8_t*, uint8_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF89F0))(dest, src, size);
  }
  static inline void Memcpy(uint8_t* dest, uint8_t* src, int32_t size) {
    reinterpret_cast<void(__fastcall*)(uint8_t*, uint8_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF8AA0))(dest, src, size);
  }
};
}