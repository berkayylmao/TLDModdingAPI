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
#include "ModdingAPI.Exposed.System.Decimal.hpp"


namespace ModdingAPI::Exposed::TinyJSON {
struct __ProxyNumber_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Char_array* floatingPointCharacters;
};

struct __ProxyNumber_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _21_GetTypeCode;
  VirtualInvokeData _22_ToType;
  VirtualInvokeData _23_ToDateTime;
  VirtualInvokeData _24_ToBoolean;
  VirtualInvokeData _25_ToByte;
  VirtualInvokeData _26_ToChar;
  VirtualInvokeData _27_ToDecimal;
  VirtualInvokeData _28_ToDouble;
  VirtualInvokeData _29_ToInt16;
  VirtualInvokeData _30_ToInt32;
  VirtualInvokeData _31_ToInt64;
  VirtualInvokeData _32_ToSByte;
  VirtualInvokeData _33_ToSingle;
  VirtualInvokeData _34_ToString;
  VirtualInvokeData _35_ToUInt16;
  VirtualInvokeData _36_ToUInt32;
  VirtualInvokeData _37_ToUInt64;
  VirtualInvokeData _38_get_Item;
  VirtualInvokeData _39_set_Item;
  VirtualInvokeData _40_get_Item;
  VirtualInvokeData _41_set_Item;
};

struct __ProxyNumber_Il2CppClass {
  Il2CppClass_1 _1;
  __ProxyNumber_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ProxyNumber_Il2CppVtbl vtbl;
};

class ProxyNumber {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C53718;
  static inline    __ProxyNumber_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ProxyNumber_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ProxyNumber_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ProxyNumber_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::IConvertible* value;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::IConvertible* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IConvertible*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBC630))(this, value);
  }
  ModdingAPI::Exposed::System::IConvertible* Parse(System_String* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IConvertible*(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBC710))(this, value);
  }
  bool ToBoolean(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBCA80))(this, provider);
  }
  uint8_t ToByte(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<uint8_t(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBCB30))(this, provider);
  }
  wchar_t ToChar(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<wchar_t(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBCBE0))(this, provider);
  }
  ModdingAPI::Exposed::System::Decimal ToDecimal(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Decimal(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBCC80))(this, provider);
  }
  double ToDouble(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBCD30))(this, provider);
  }
  int16_t ToInt16(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<int16_t(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBCDD0))(this, provider);
  }
  int32_t ToInt32(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBCE80))(this, provider);
  }
  int64_t ToInt64(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBCF30))(this, provider);
  }
  char ToSByte(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<char(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBCFE0))(this, provider);
  }
  float ToSingle(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBD090))(this, provider);
  }
  System_String* ToString(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBD140))(this, provider);
  }
  uint16_t ToUInt16(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<uint16_t(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBD1F0))(this, provider);
  }
  uint32_t ToUInt32(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBD2A0))(this, provider);
  }
  uint64_t ToUInt64(ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<uint64_t(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyNumber*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBD350))(this, provider);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> floatingPointCharacters = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->floatingPointCharacters; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBD400))();
  }
};
}