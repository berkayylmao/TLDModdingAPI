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
struct __XmlSchemaComplexType_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* anyTypeLax;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* anyTypeSkip;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* untypedAnyType;
};

struct __XmlSchemaComplexType_Il2CppVtbl {
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
  VirtualInvokeData _14_get_IsMixed;
  VirtualInvokeData _15_set_IsMixed;
};

struct __XmlSchemaComplexType_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlSchemaComplexType_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlSchemaComplexType_Il2CppVtbl vtbl;
};

class XmlSchemaComplexType {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C29E78;
  static inline    XmlSchemaComplexType* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3F748;
  static inline    __XmlSchemaComplexType_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline XmlSchemaComplexType* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (XmlSchemaComplexType**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __XmlSchemaComplexType_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlSchemaComplexType_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlSchemaComplexType_Il2CppClass* __pClassInstance;
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
  System_String* XmlSchemaType_name;
  int32_t XmlSchemaType_final;
  int32_t XmlSchemaType_derivedBy;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* XmlSchemaType_baseSchemaType;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* XmlSchemaType_datatype;
  int32_t XmlSchemaType_finalResolved;
  ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* XmlSchemaType_elementDecl;
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* XmlSchemaType_qname;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* XmlSchemaType_redefined;
  int32_t XmlSchemaType_contentType;
  int32_t block;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaContentModel* contentModel;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* attributes;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* contentTypeParticle;
  int32_t blockResolved;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectTable* localElements;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectTable* attributeUses;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard;
  uint8_t pvFlags;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC2C0))(this);
  }
  bool get_IsAbstract() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC590))(this);
  }
  void set_IsAbstract(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC5A0))(this, value);
  }
  int32_t get_Block() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC5D0))(this);
  }
  void set_Block(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC5E0))(this, value);
  }
  bool get_IsMixed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC5F0))(this);
  }
  void set_IsMixed(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC600))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaContentModel* get_ContentModel() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaContentModel*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BC850))(this);
  }
  void set_ContentModel(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaContentModel* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaContentModel*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x47E010))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* get_Particle() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F140))(this);
  }
  void set_Particle(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F1050))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC630))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F1090))(this);
  }
  void set_AnyAttribute(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F10A0))(this, value);
  }
  int32_t get_ContentType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383AA0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* get_ContentTypeParticle() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1BE0))(this);
  }
  int32_t get_BlockResolved() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F150))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeUses() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectTable*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC790))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* get_AttributeWildcard() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3EBFF0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectTable* get_LocalElements() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectTable*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC8F0))(this);
  }
  void SetContentTypeParticle(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1BF0))(this, value);
  }
  void SetBlockResolved(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5ECA50))(this, value);
  }
  void SetAttributeWildcard(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F11F0))(this, value);
  }
  void set_HasWildCard(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5ECA60))(this, value);
  }
  void SetAttributes(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* newAttributes) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5ECA90))(this, newAttributes);
  }
  bool ContainsIdAttribute(bool findAll) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5ECAA0))(this, findAll);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* Clone() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5ECD40))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* Clone(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* parentSchema) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5ECD50))(this, parentSchema);
  }
  void ClearCompiledState() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5ED560))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*> anyTypeLax = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*>(
   []() { return &GetStaticClassInstance()->pStaticFields->anyTypeLax; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*> anyTypeSkip = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*>(
   []() { return &GetStaticClassInstance()->pStaticFields->anyTypeSkip; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*> untypedAnyType = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*>(
   []() { return &GetStaticClassInstance()->pStaticFields->untypedAnyType; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EB7D0))();
  }
  static inline ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* CreateAnyType(int32_t processContents) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EBBD0))(processContents);
  }
  static inline ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* get_AnyType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC380))();
  }
  static inline ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* get_UntypedAnyType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC420))();
  }
  static inline ModdingAPI::Exposed::System::Xml::Schema::ContentValidator* get_AnyTypeContentValidator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::ContentValidator*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC4C0))();
  }
  static inline ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* CloneAttributes(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* attributes) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5ED640))(attributes);
  }
  static inline ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* CloneGroupBaseParticles(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* groupBaseParticles, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* parentSchema) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5ED8E0))(groupBaseParticles, parentSchema);
  }
  static inline ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* CloneParticle(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* parentSchema) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EDA90))(particle, parentSchema);
  }
  static inline int32_t GetResolvedElementForm(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* parentSchema, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* element) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EDDD0))(parentSchema, element);
  }
  static inline bool HasParticleRef(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* parentSchema) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EDE00))(particle, parentSchema);
  }
  static inline bool HasAttributeQNameRef(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* attributes) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EE0C0))(attributes);
  }
};
}