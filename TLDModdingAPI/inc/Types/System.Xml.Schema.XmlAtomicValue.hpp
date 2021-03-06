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
#include "ModdingAPI.Exposed.System.Xml.Schema.XmlAtomicValue.Union.hpp"
#include "ModdingAPI.Exposed.System.DateTime.hpp"


namespace ModdingAPI::Exposed::System::Xml::Schema {
struct __XmlAtomicValue_Il2CppStaticFields {
};

struct __XmlAtomicValue_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_XmlType;
  VirtualInvokeData _5_get_Value;
  VirtualInvokeData _6_get_TypedValue;
  VirtualInvokeData _7_get_ValueType;
  VirtualInvokeData _8_get_ValueAsBoolean;
  VirtualInvokeData _9_get_ValueAsDateTime;
  VirtualInvokeData _10_get_ValueAsDouble;
  VirtualInvokeData _11_get_ValueAsInt;
  VirtualInvokeData _12_get_ValueAsLong;
  VirtualInvokeData _13_ValueAs;
  VirtualInvokeData _14_ValueAs;
  VirtualInvokeData _15_System_ICloneable_Clone;
};

struct __XmlAtomicValue_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlAtomicValue_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlAtomicValue_Il2CppVtbl vtbl;
};

class XmlAtomicValue {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C87448;
  static inline    XmlAtomicValue* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3E6C8;
  static inline    __XmlAtomicValue_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline XmlAtomicValue* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (XmlAtomicValue**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __XmlAtomicValue_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlAtomicValue_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlAtomicValue_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* xmlType;
  Il2CppObject* objVal;
  int32_t clrType;
  ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue::Union unionVal;
  ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName* nsPrefix;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* xmlType, bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC57390))(this, xmlType, value);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* xmlType, ModdingAPI::Exposed::System::DateTime value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC57460))(this, xmlType, value);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* xmlType, double value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC57530))(this, xmlType, value);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* xmlType, int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC57610))(this, xmlType, value);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* xmlType, int64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC576E0))(this, xmlType, value);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* xmlType, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC577B0))(this, xmlType, value);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* xmlType, System_String* value, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* nsResolver) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, System_String*, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC578B0))(this, xmlType, value, nsResolver);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* xmlType, Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC57BB0))(this, xmlType, value);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* xmlType, Il2CppObject* value, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* nsResolver) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, Il2CppObject*, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC57CB0))(this, xmlType, value, nsResolver);
  }
  Il2CppObject* System::ICloneable::Clone() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3201B0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* get_XmlType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  ModdingAPI::Exposed::System::Type* get_ValueType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC57F10))(this);
  }
  Il2CppObject* get_TypedValue() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC57F50))(this);
  }
  bool get_ValueAsBoolean() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC581A0))(this);
  }
  ModdingAPI::Exposed::System::DateTime get_ValueAsDateTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC582C0))(this);
  }
  double get_ValueAsDouble() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC583E0))(this);
  }
  int32_t get_ValueAsInt() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC58500))(this);
  }
  int64_t get_ValueAsLong() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC58620))(this);
  }
  Il2CppObject* ValueAs(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* nsResolver) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC58740))(this, type, nsResolver);
  }
  System_String* get_Value() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC589B0))(this);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B92C0))(this);
  }
  System_String* GetPrefixFromQName(System_String* value) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlAtomicValue*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC58AF0))(this, value);
  }
};
}