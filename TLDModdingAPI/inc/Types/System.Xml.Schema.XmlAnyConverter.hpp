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
#include "ModdingAPI.Exposed.System.DateTime.hpp"
#include "ModdingAPI.Exposed.System.DateTimeOffset.hpp"
#include "ModdingAPI.Exposed.System.Decimal.hpp"


namespace ModdingAPI::Exposed::System::Xml::Schema {
struct __XmlAnyConverter_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Xml::Schema::XmlValueConverter* Item;
  ModdingAPI::Exposed::System::Xml::Schema::XmlValueConverter* AnyAtomic;
};

struct __XmlAnyConverter_Il2CppVtbl {
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

struct __XmlAnyConverter_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlAnyConverter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlAnyConverter_Il2CppVtbl vtbl;
};

class XmlAnyConverter {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C87878;
  static inline    __XmlAnyConverter_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlAnyConverter_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlAnyConverter_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlAnyConverter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* XmlBaseConverter_schemaType;
  int32_t XmlBaseConverter_typeCode;
  ModdingAPI::Exposed::System::Type* XmlBaseConverter_clrTypeDefault;

  // Member methods:
  void ::ctor(int32_t typeCode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC52630))(this, typeCode);
  }
  bool ToBoolean(Il2CppObject* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC527E0))(this, value);
  }
  ModdingAPI::Exposed::System::DateTime ToDateTime(Il2CppObject* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC529D0))(this, value);
  }
  ModdingAPI::Exposed::System::DateTimeOffset ToDateTimeOffset(Il2CppObject* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTimeOffset(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC52BC0))(this, value);
  }
  ModdingAPI::Exposed::System::Decimal ToDecimal(Il2CppObject* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Decimal(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC52E20))(this, value);
  }
  double ToDouble(Il2CppObject* value) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC53070))(this, value);
  }
  int32_t ToInt32(Il2CppObject* value) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC53260))(this, value);
  }
  int64_t ToInt64(Il2CppObject* value) {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC53450))(this, value);
  }
  float ToSingle(Il2CppObject* value) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC53640))(this, value);
  }
  Il2CppObject* ChangeType(bool value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, bool, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC53890))(this, value, destinationType);
  }
  Il2CppObject* ChangeType(ModdingAPI::Exposed::System::DateTime value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, ModdingAPI::Exposed::System::DateTime, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC53B50))(this, value, destinationType);
  }
  Il2CppObject* ChangeType(ModdingAPI::Exposed::System::Decimal value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, ModdingAPI::Exposed::System::Decimal, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC53E10))(this, value, destinationType);
  }
  Il2CppObject* ChangeType(double value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, double, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC540F0))(this, value, destinationType);
  }
  Il2CppObject* ChangeType(int32_t value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, int32_t, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC543C0))(this, value, destinationType);
  }
  Il2CppObject* ChangeType(int64_t value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, int64_t, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC54680))(this, value, destinationType);
  }
  Il2CppObject* ChangeType(System_String* value, ModdingAPI::Exposed::System::Type* destinationType, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* nsResolver) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, System_String*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC54940))(this, value, destinationType, nsResolver);
  }
  Il2CppObject* ChangeType(Il2CppObject* value, ModdingAPI::Exposed::System::Type* destinationType, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* nsResolver) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, Il2CppObject*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC54C30))(this, value, destinationType, nsResolver);
  }
  Il2CppObject* ChangeTypeWildcardDestination(Il2CppObject* value, ModdingAPI::Exposed::System::Type* destinationType, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* nsResolver) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, Il2CppObject*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC56750))(this, value, destinationType, nsResolver);
  }
  Il2CppObject* ChangeTypeWildcardSource(Il2CppObject* value, ModdingAPI::Exposed::System::Type* destinationType, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* nsResolver) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, Il2CppObject*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC568C0))(this, value, destinationType, nsResolver);
  }
  ModdingAPI::Exposed::System::Xml::XPath::XPathNavigator* ToNavigator(ModdingAPI::Exposed::System::Xml::XPath::XPathNavigator* nav) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XPath::XPathNavigator*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAnyConverter*, ModdingAPI::Exposed::System::Xml::XPath::XPathNavigator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC56A80))(this, nav);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlValueConverter*> Item = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlValueConverter*>(
   []() { return &GetStaticClassInstance()->pStaticFields->Item; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlValueConverter*> AnyAtomic = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlValueConverter*>(
   []() { return &GetStaticClassInstance()->pStaticFields->AnyAtomic; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xC56B80))();
  }
};
}