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
struct __BitConverter_Il2CppStaticFields {
  bool IsLittleEndian;
};

struct __BitConverter_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __BitConverter_Il2CppClass {
  Il2CppClass_1 _1;
  __BitConverter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __BitConverter_Il2CppVtbl vtbl;
};

class BitConverter {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C81078;
  static inline    __BitConverter_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __BitConverter_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__BitConverter_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __BitConverter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<bool> IsLittleEndian = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->IsLittleEndian; }
  );

  // Static methods:
  static inline bool AmILittleEndian() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF6460))();
  }
  static inline ModdingAPI::Exposed::System::Byte_array* GetBytes(int16_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(int16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF6480))(value);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* GetBytes(int32_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF6520))(value);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* GetBytes(int64_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF65C0))(value);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* GetBytes(uint32_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF6660))(value);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* GetBytes(uint64_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF6700))(value);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* GetBytes(float value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF67A0))(value);
  }
  static inline int16_t ToInt16(ModdingAPI::Exposed::System::Byte_array* value, int32_t startIndex) {
    return reinterpret_cast<int16_t(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF6840))(value, startIndex);
  }
  static inline int32_t ToInt32(ModdingAPI::Exposed::System::Byte_array* value, int32_t startIndex) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF69A0))(value, startIndex);
  }
  static inline int64_t ToInt64(ModdingAPI::Exposed::System::Byte_array* value, int32_t startIndex) {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF6B30))(value, startIndex);
  }
  static inline uint16_t ToUInt16(ModdingAPI::Exposed::System::Byte_array* value, int32_t startIndex) {
    return reinterpret_cast<uint16_t(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF6D20))(value, startIndex);
  }
  static inline uint32_t ToUInt32(ModdingAPI::Exposed::System::Byte_array* value, int32_t startIndex) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF6E10))(value, startIndex);
  }
  static inline uint64_t ToUInt64(ModdingAPI::Exposed::System::Byte_array* value, int32_t startIndex) {
    return reinterpret_cast<uint64_t(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF6F00))(value, startIndex);
  }
  static inline float ToSingle(ModdingAPI::Exposed::System::Byte_array* value, int32_t startIndex) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF6FF0))(value, startIndex);
  }
  static inline wchar_t GetHexValue(int32_t i) {
    return reinterpret_cast<wchar_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF70E0))(i);
  }
  static inline System_String* ToString(ModdingAPI::Exposed::System::Byte_array* value, int32_t startIndex, int32_t length) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF70F0))(value, startIndex, length);
  }
  static inline System_String* ToString(ModdingAPI::Exposed::System::Byte_array* value) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF74D0))(value);
  }
  static inline int64_t DoubleToInt64Bits(double value) {
    return reinterpret_cast<int64_t(__fastcall*)(double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7F8460))(value);
  }
  static inline double Int64BitsToDouble(int64_t value) {
    return reinterpret_cast<double(__fastcall*)(int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7F83D0))(value);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xDF75B0))();
  }
};
}