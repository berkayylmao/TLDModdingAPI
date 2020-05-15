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


namespace ModdingAPI::Exposed::System::Xml::Schema {
struct __XmlNumeric2Converter_Il2CppStaticFields {
};

struct __XmlNumeric2Converter_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_ToBoolean;
  VirtualInvokeData _5_ToBoolean;
  VirtualInvokeData _6_ToBoolean;
  VirtualInvokeData _7_ToBoolean;
  VirtualInvokeData _8_ToBoolean;
  VirtualInvokeData _9_ToBoolean;
  VirtualInvokeData _10_ToInt32;
  VirtualInvokeData _11_ToInt32;
  VirtualInvokeData _12_ToInt32;
  VirtualInvokeData _13_ToInt32;
  VirtualInvokeData _14_ToInt32;
  VirtualInvokeData _15_ToInt32;
  VirtualInvokeData _16_ToInt64;
  VirtualInvokeData _17_ToInt64;
  VirtualInvokeData _18_ToInt64;
  VirtualInvokeData _19_ToInt64;
  VirtualInvokeData _20_ToInt64;
  VirtualInvokeData _21_ToInt64;
  VirtualInvokeData _22_ToDecimal;
  VirtualInvokeData _23_ToDecimal;
  VirtualInvokeData _24_ToDouble;
  VirtualInvokeData _25_ToDouble;
  VirtualInvokeData _26_ToDouble;
  VirtualInvokeData _27_ToDouble;
  VirtualInvokeData _28_ToDouble;
  VirtualInvokeData _29_ToDouble;
  VirtualInvokeData _30_ToSingle;
  VirtualInvokeData _31_ToSingle;
  VirtualInvokeData _32_ToSingle;
  VirtualInvokeData _33_ToDateTime;
  VirtualInvokeData _34_ToDateTime;
  VirtualInvokeData _35_ToDateTime;
  VirtualInvokeData _36_ToDateTime;
  VirtualInvokeData _37_ToDateTime;
  VirtualInvokeData _38_ToDateTime;
  VirtualInvokeData _39_ToDateTime;
  VirtualInvokeData _40_ToDateTimeOffset;
  VirtualInvokeData _41_ToDateTimeOffset;
  VirtualInvokeData _42_ToDateTimeOffset;
  VirtualInvokeData _43_ToString;
  VirtualInvokeData _44_ToString;
  VirtualInvokeData _45_ToString;
  VirtualInvokeData _46_ToString;
  VirtualInvokeData _47_ToString;
  VirtualInvokeData _48_ToString;
  VirtualInvokeData _49_ToString;
  VirtualInvokeData _50_ToString;
  VirtualInvokeData _51_ToString;
  VirtualInvokeData _52_ToString;
  VirtualInvokeData _53_ChangeType;
  VirtualInvokeData _54_ChangeType;
  VirtualInvokeData _55_ChangeType;
  VirtualInvokeData _56_ChangeType;
  VirtualInvokeData _57_ChangeType;
  VirtualInvokeData _58_ChangeType;
  VirtualInvokeData _59_ChangeType;
  VirtualInvokeData _60_ChangeType;
  VirtualInvokeData _61_ChangeType;
  VirtualInvokeData _62_ChangeListType;
};

struct __XmlNumeric2Converter_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlNumeric2Converter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlNumeric2Converter_Il2CppVtbl vtbl;
};

class XmlNumeric2Converter {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C87AC0;
  static inline    __XmlNumeric2Converter_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlNumeric2Converter_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlNumeric2Converter_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlNumeric2Converter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* XmlBaseConverter_schemaType;
  int32_t XmlBaseConverter_typeCode;
  ModdingAPI::Exposed::System::Type* XmlBaseConverter_clrTypeDefault;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* schemaType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlNumeric2Converter*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC6FA80))(this, schemaType);
  }
  double ToDouble(System_String* value) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlNumeric2Converter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC6FCF0))(this, value);
  }
  double ToDouble(Il2CppObject* value) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlNumeric2Converter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC6FE10))(this, value);
  }
  float ToSingle(double value) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlNumeric2Converter*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC701C0))(this, value);
  }
  float ToSingle(System_String* value) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlNumeric2Converter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC701D0))(this, value);
  }
  float ToSingle(Il2CppObject* value) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlNumeric2Converter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC702F0))(this, value);
  }
  System_String* ToString(double value) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlNumeric2Converter*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC70700))(this, value);
  }
  System_String* ToString(float value) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlNumeric2Converter*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC70800))(this, value);
  }
  System_String* ToString(Il2CppObject* value, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* nsResolver) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlNumeric2Converter*, Il2CppObject*, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC708E0))(this, value, nsResolver);
  }
  Il2CppObject* ChangeType(double value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlNumeric2Converter*, double, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC70C80))(this, value, destinationType);
  }
  Il2CppObject* ChangeType(System_String* value, ModdingAPI::Exposed::System::Type* destinationType, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* nsResolver) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlNumeric2Converter*, System_String*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC71180))(this, value, destinationType, nsResolver);
  }
  Il2CppObject* ChangeType(Il2CppObject* value, ModdingAPI::Exposed::System::Type* destinationType, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* nsResolver) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlNumeric2Converter*, Il2CppObject*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC716B0))(this, value, destinationType, nsResolver);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Xml::Schema::XmlValueConverter* Create(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* schemaType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlValueConverter*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC6FB30))(schemaType);
  }
};
}