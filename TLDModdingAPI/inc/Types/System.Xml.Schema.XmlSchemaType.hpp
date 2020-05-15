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
struct __XmlSchemaType_Il2CppStaticFields {
};

struct __XmlSchemaType_Il2CppVtbl {
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

struct __XmlSchemaType_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlSchemaType_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlSchemaType_Il2CppVtbl vtbl;
};

class XmlSchemaType {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C40AF0;
  static inline    __XmlSchemaType_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlSchemaType_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlSchemaType_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlSchemaType_Il2CppClass* __pClassInstance;
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
  int32_t final;
  int32_t derivedBy;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* baseSchemaType;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* datatype;
  int32_t finalResolved;
  ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* elementDecl;
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* qname;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* redefined;
  int32_t contentType;

  // Member methods:
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A440))(this);
  }
  void set_Name(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A450))(this, value);
  }
  int32_t get_Final() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E8B70))(this);
  }
  void set_Final(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E8B80))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* get_QualifiedName() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlQualifiedName*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5FFEE0))(this);
  }
  int32_t get_FinalResolved() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A00))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* get_BaseXmlSchemaType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3199C0))(this);
  }
  int32_t get_DerivedBy() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5F11E0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* get_Datatype() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319930))(this);
  }
  bool get_IsMixed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  void set_IsMixed(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, value);
  }
  int32_t get_TypeCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5FFEF0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlValueConverter* get_ValueConverter() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlValueConverter*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5FFFC0))(this);
  }
  int32_t get_SchemaContentType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383AA0))(this);
  }
  void SetQualifiedName(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x600090))(this, value);
  }
  void SetFinalResolved(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A10))(this, value);
  }
  void SetBaseSchemaType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A4B0))(this, value);
  }
  void SetDerivedBy(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5F11F0))(this, value);
  }
  void SetDatatype(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A4C0))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* get_ElementDecl() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6000A0))(this);
  }
  void set_ElementDecl(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6000B0))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* get_Redefined() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307640))(this);
  }
  void set_Redefined(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E95A0))(this, value);
  }
  void SetContentType(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383AB0))(this, value);
  }
  System_String* get_NameAttribute() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A440))(this);
  }
  void set_NameAttribute(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A450))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6003B0))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType(int32_t typeCode) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5FFC70))(typeCode);
  }
  static inline ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* GetBuiltInComplexType(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* qualifiedName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5FFD10))(qualifiedName);
  }
  static inline bool IsDerivedFrom(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* derivedType, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* baseType, int32_t except) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6000C0))(derivedType, baseType, except);
  }
  static inline bool IsDerivedFromDatatype(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* derivedDataType, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* baseDataType, int32_t except) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6002C0))(derivedDataType, baseDataType, except);
  }
};
}