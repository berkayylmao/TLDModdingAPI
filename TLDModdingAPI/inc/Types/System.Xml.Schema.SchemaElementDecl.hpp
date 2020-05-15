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
struct __SchemaElementDecl_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* Empty;
};

struct __SchemaElementDecl_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes;
  VirtualInvokeData _5_System_Xml_IDtdAttributeListInfo_LookupAttribute;
  VirtualInvokeData _6_System_Xml_IDtdAttributeListInfo_LookupDefaultAttributes;
};

struct __SchemaElementDecl_Il2CppClass {
  Il2CppClass_1 _1;
  __SchemaElementDecl_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SchemaElementDecl_Il2CppVtbl vtbl;
};

class SchemaElementDecl {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C410C0;
  static inline    __SchemaElementDecl_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SchemaElementDecl_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SchemaElementDecl_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SchemaElementDecl_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* name;
  System_String* prefix;
  bool isDeclaredInExternal;
  int32_t presence;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* schemaType;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* datatype;
  System_String* defaultValueRaw;
  Il2CppObject* defaultValueTyped;
  int64_t maxLength;
  int64_t minLength;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* values;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* attdefs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* defaultAttdefs;
  bool isIdDeclared;
  bool hasNonCDataAttribute;
  bool isAbstract;
  bool isNillable;
  bool hasRequiredAttribute;
  bool isNotationDeclared;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* prohibitedAttributes;
  ModdingAPI::Exposed::System::Xml::Schema::ContentValidator* contentValidator;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;
  int32_t block;
  ModdingAPI::Exposed::System::Xml::Schema::CompiledIdentityConstraint_array* constraints;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* schemaElement;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C11B0))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* dtype) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1420))(this, dtype);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* name, System_String* prefix) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C16E0))(this, name, prefix);
  }
  bool System::Xml::IDtdAttributeListInfo::get_HasNonCDataAttributes() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1AF0))(this);
  }
  ModdingAPI::Exposed::System::Xml::IDtdAttributeInfo* System::Xml::IDtdAttributeListInfo::LookupAttribute(System_String* prefix, System_String* localName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::IDtdAttributeInfo*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1B00))(this, prefix, localName);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* System::Xml::IDtdAttributeListInfo::LookupDefaultAttributes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319930))(this);
  }
  bool get_IsIdDeclared() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1CD0))(this);
  }
  void set_IsIdDeclared(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1CE0))(this, value);
  }
  bool get_HasNonCDataAttribute() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1AF0))(this);
  }
  void set_HasNonCDataAttribute(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1CF0))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* Clone() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1D00))(this);
  }
  bool get_IsAbstract() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1E30))(this);
  }
  void set_IsAbstract(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1E40))(this, value);
  }
  bool get_IsNillable() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1E50))(this);
  }
  void set_IsNillable(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1E60))(this, value);
  }
  int32_t get_Block() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383AA0))(this);
  }
  void set_Block(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383AB0))(this, value);
  }
  bool get_IsNotationDeclared() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1E70))(this);
  }
  void set_IsNotationDeclared(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1E80))(this, value);
  }
  bool get_HasDefaultAttribute() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1E90))(this);
  }
  bool get_HasRequiredAttribute() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1EA0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::ContentValidator* get_ContentValidator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::ContentValidator*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x321390))(this);
  }
  void set_ContentValidator(ModdingAPI::Exposed::System::Xml::Schema::ContentValidator* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, ModdingAPI::Exposed::System::Xml::Schema::ContentValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x47E020))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307640))(this);
  }
  void set_AnyAttribute(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E95A0))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::CompiledIdentityConstraint_array* get_Constraints() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::CompiledIdentityConstraint_array*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319850))(this);
  }
  void set_Constraints(ModdingAPI::Exposed::System::Xml::Schema::CompiledIdentityConstraint_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, ModdingAPI::Exposed::System::Xml::Schema::CompiledIdentityConstraint_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319860))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* get_SchemaElement() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BC850))(this);
  }
  void set_SchemaElement(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x47E010))(this, value);
  }
  void AddAttDef(ModdingAPI::Exposed::System::Xml::Schema::SchemaAttDef* attdef) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, ModdingAPI::Exposed::System::Xml::Schema::SchemaAttDef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1EB0))(this, attdef);
  }
  ModdingAPI::Exposed::System::Xml::Schema::SchemaAttDef* GetAttDef(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* qname) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::SchemaAttDef*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C20A0))(this, qname);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* get_DefaultAttDefs() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319930))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* get_AttDefs() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3199C0))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* get_ProhibitedAttributes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319950))(this);
  }
  void CheckAttributes(ModdingAPI::Exposed::System::Collections::Hashtable* presence, bool standalone) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, ModdingAPI::Exposed::System::Collections::Hashtable*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C21A0))(this, presence, standalone);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*> Empty = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*>(
   []() { return &GetStaticClassInstance()->pStaticFields->Empty; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* CreateAnyTypeElementDecl() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1970))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C2430))();
  }
};
}