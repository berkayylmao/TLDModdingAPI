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
struct __XmlSchemaGroup_Il2CppStaticFields {
};

struct __XmlSchemaGroup_Il2CppVtbl {
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
};

struct __XmlSchemaGroup_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlSchemaGroup_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlSchemaGroup_Il2CppVtbl vtbl;
};

class XmlSchemaGroup {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C80280;
  static inline    XmlSchemaGroup* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3F108;
  static inline    __XmlSchemaGroup_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline XmlSchemaGroup* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (XmlSchemaGroup**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __XmlSchemaGroup_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlSchemaGroup_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlSchemaGroup_Il2CppClass* __pClassInstance;
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
  System_String* name;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase* particle;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* canonicalParticle;
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* qname;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup* redefined;
  int32_t selfReferenceCount;

  // Member methods:
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A440))(this);
  }
  void set_Name(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A450))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase* get_Particle() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383960))(this);
  }
  void set_Particle(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383970))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* get_QualifiedName() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlQualifiedName*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319930))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* get_CanonicalParticle() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3199C0))(this);
  }
  void set_CanonicalParticle(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A4B0))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup* get_Redefined() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319940))(this);
  }
  void set_Redefined(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x477710))(this, value);
  }
  int32_t get_SelfReferenceCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48B440))(this);
  }
  void set_SelfReferenceCount(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48B450))(this, value);
  }
  System_String* get_NameAttribute() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A440))(this);
  }
  void set_NameAttribute(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A450))(this, value);
  }
  void SetQualifiedName(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A4C0))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* Clone() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5F1210))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* Clone(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* parentSchema) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5F1220))(this, parentSchema);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5F1480))(this);
  }
};
}