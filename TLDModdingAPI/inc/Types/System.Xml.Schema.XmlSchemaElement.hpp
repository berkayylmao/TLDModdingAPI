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


namespace ModdingAPI::Exposed::System::Xml::Schema {
struct __XmlSchemaElement_Il2CppStaticFields {
};

struct __XmlSchemaElement_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_OnAdd;
  VirtualInvokeData _5_OnRemove;
  VirtualInvokeData _6_OnClear;
  VirtualInvokeData _7_get_IdAttribute;
  VirtualInvokeData _8_set_IdAttribute;
  VirtualInvokeData _9_SetUnhandledAttributes;
  VirtualInvokeData _10_AddAnnotation;
  VirtualInvokeData _11_get_NameAttribute;
  VirtualInvokeData _12_set_NameAttribute;
  VirtualInvokeData _13_Clone;
  VirtualInvokeData _14_get_IsEmpty;
  VirtualInvokeData _15_get_NameString;
};

struct __XmlSchemaElement_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlSchemaElement_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlSchemaElement_Il2CppVtbl vtbl;
};

class XmlSchemaElement {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C3E008;
  static inline    XmlSchemaElement* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3FA30;
  static inline    __XmlSchemaElement_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline XmlSchemaElement* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (XmlSchemaElement**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __XmlSchemaElement_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlSchemaElement_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlSchemaElement_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t XmlSchemaObject_lineNum;
  int32_t XmlSchemaObject_linePos;
  System_String* XmlSchemaObject_sourceUri;
  ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializerNamespaces* XmlSchemaObject_namespaces;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* XmlSchemaObject_parent;
  bool XmlSchemaObject_isProcessing;
  System_String* XmlSchemaAnnotated_id;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnnotation* XmlSchemaAnnotated_annotation;
  ModdingAPI::Exposed::System::Xml::XmlAttribute_array* XmlSchemaAnnotated_moreAttributes;
  ModdingAPI::Exposed::System::Decimal XmlSchemaParticle_minOccurs;
  ModdingAPI::Exposed::System::Decimal XmlSchemaParticle_maxOccurs;
  int32_t XmlSchemaParticle_flags;
  bool isAbstract;
  bool hasAbstractAttribute;
  bool isNillable;
  bool hasNillableAttribute;
  bool isLocalTypeDerivationChecked;
  int32_t block;
  int32_t final;
  int32_t form;
  System_String* defaultValue;
  System_String* fixedValue;
  System_String* name;
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* refName;
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* substitutionGroup;
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* typeName;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* type;
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* qualifiedName;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* elementType;
  int32_t blockResolved;
  int32_t finalResolved;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* constraints;
  ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* elementDecl;

  // Member methods:
  bool get_IsAbstract() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EF7A0))(this);
  }
  void set_IsAbstract(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EF7B0))(this, value);
  }
  int32_t get_Block() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307620))(this);
  }
  void set_Block(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x308500))(this, value);
  }
  System_String* get_DefaultValue() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BC530))(this);
  }
  void set_DefaultValue(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E95D0))(this, value);
  }
  int32_t get_Final() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307630))(this);
  }
  void set_Final(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A50))(this, value);
  }
  System_String* get_FixedValue() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319850))(this);
  }
  void set_FixedValue(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319860))(this, value);
  }
  int32_t get_Form() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A60))(this);
  }
  void set_Form(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A70))(this, value);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BC850))(this);
  }
  void set_Name(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x47E010))(this, value);
  }
  bool get_IsNillable() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EF7C0))(this);
  }
  void set_IsNillable(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EF7D0))(this, value);
  }
  bool get_HasNillableAttribute() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EF7E0))(this);
  }
  bool get_HasAbstractAttribute() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EF7F0))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* get_RefName() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlQualifiedName*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F140))(this);
  }
  void set_RefName(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EF800))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* get_SubstitutionGroup() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlQualifiedName*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307710))(this);
  }
  void set_SubstitutionGroup(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EF8F0))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* get_SchemaTypeName() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlQualifiedName*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F1090))(this);
  }
  void set_SchemaTypeName(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EF9E0))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* get_SchemaType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1BE0))(this);
  }
  void set_SchemaType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1BF0))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* get_Constraints() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EFAD0))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* get_QualifiedName() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlQualifiedName*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F4090))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* get_ElementSchemaType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F11D0))(this);
  }
  int32_t get_BlockResolved() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EFC30))(this);
  }
  int32_t get_FinalResolved() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EFC40))(this);
  }
  void SetQualifiedName(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5253C0))(this, value);
  }
  void SetElementType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F11E0))(this, value);
  }
  void SetBlockResolved(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EFC50))(this, value);
  }
  void SetFinalResolved(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EFC60))(this, value);
  }
  bool get_HasConstraints() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EFC70))(this);
  }
  bool get_IsLocalTypeDerivationChecked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48B460))(this);
  }
  void set_IsLocalTypeDerivationChecked(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EFCC0))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* get_ElementDecl() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F200))(this);
  }
  void set_ElementDecl(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E060))(this, value);
  }
  System_String* get_NameAttribute() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BC850))(this);
  }
  void set_NameAttribute(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x47E010))(this, value);
  }
  System_String* get_NameString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EFCD0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* Clone() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EFD00))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* Clone(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* parentSchema) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EFD10))(this, parentSchema);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EFFD0))(this);
  }
};
}