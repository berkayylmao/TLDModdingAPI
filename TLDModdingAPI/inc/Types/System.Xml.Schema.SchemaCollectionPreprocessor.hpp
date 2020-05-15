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
struct __SchemaCollectionPreprocessor_Il2CppStaticFields {
};

struct __SchemaCollectionPreprocessor_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SchemaCollectionPreprocessor_Il2CppClass {
  Il2CppClass_1 _1;
  __SchemaCollectionPreprocessor_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SchemaCollectionPreprocessor_Il2CppVtbl vtbl;
};

class SchemaCollectionPreprocessor {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C875F0;
  static inline    __SchemaCollectionPreprocessor_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SchemaCollectionPreprocessor_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SchemaCollectionPreprocessor_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SchemaCollectionPreprocessor_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::XmlNameTable* BaseProcessor_nameTable;
  ModdingAPI::Exposed::System::Xml::Schema::SchemaNames* BaseProcessor_schemaNames;
  ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler* BaseProcessor_eventHandler;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaCompilationSettings* BaseProcessor_compilationSettings;
  int32_t BaseProcessor_errorCount;
  System_String* BaseProcessor_NsXml;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* schema;
  System_String* targetNamespace;
  bool buildinIncluded;
  int32_t elementFormDefault;
  int32_t attributeFormDefault;
  int32_t blockDefault;
  int32_t finalDefault;
  ModdingAPI::Exposed::System::Collections::Hashtable* schemaLocations;
  ModdingAPI::Exposed::System::Collections::Hashtable* referenceNamespaces;
  System_String* Xmlns;
  ModdingAPI::Exposed::System::Xml::XmlResolver* xmlResolver;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Xml::XmlNameTable* nameTable, ModdingAPI::Exposed::System::Xml::Schema::SchemaNames* schemaNames, ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler* eventHandler) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::XmlNameTable*, ModdingAPI::Exposed::System::Xml::Schema::SchemaNames*, ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6B79E0))(this, nameTable, schemaNames, eventHandler);
  }
  bool Execute(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* schema, System_String* targetNamespace, bool loadExternals, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaCollection* xsc) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*, System_String*, bool, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6B79F0))(this, schema, targetNamespace, loadExternals, xsc);
  }
  void Cleanup(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* schema) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6B7D60))(this, schema);
  }
  void set_XmlResolver(ModdingAPI::Exposed::System::Xml::XmlResolver* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::XmlResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x47E020))(this, value);
  }
  void LoadExternals(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* schema, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaCollection* xsc) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6B8080))(this, schema, xsc);
  }
  void BuildRefNamespaces(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* schema) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6B8D20))(this, schema);
  }
  void Preprocess(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* schema, System_String* targetNamespace, int32_t compositor) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6B9060))(this, schema, targetNamespace, compositor);
  }
  void PreprocessRedefine(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaRedefine* redefine) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaRedefine*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BAB20))(this, redefine);
  }
  int32_t CountGroupSelfReference(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* items, ModdingAPI::Exposed::System::Xml::XmlQualifiedName* name) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BBAE0))(this, items, name);
  }
  void CheckRefinedGroup(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup* group) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BBDE0))(this, group);
  }
  void CheckRefinedAttributeGroup(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttributeGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BBEB0))(this, attributeGroup);
  }
  void CheckRefinedSimpleType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* stype) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BC080))(this, stype);
  }
  void CheckRefinedComplexType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* ctype) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BC1E0))(this, ctype);
  }
  void PreprocessAttribute(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute* attribute) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BC530))(this, attribute);
  }
  void PreprocessLocalAttribute(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute* attribute) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BC750))(this, attribute);
  }
  void PreprocessAttributeContent(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute* attribute) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BCA10))(this, attribute);
  }
  void PreprocessAttributeGroup(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttributeGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BCCD0))(this, attributeGroup);
  }
  void PreprocessElement(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* element) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BCEC0))(this, element);
  }
  void PreprocessLocalElement(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* element) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BD1D0))(this, element);
  }
  void PreprocessElementContent(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* element) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BD680))(this, element);
  }
  void PreprocessIdentityConstraint(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BDAC0))(this, constraint);
  }
  void PreprocessSimpleType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* simpleType, bool local) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BDF90))(this, simpleType, local);
  }
  void PreprocessComplexType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType, bool local) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BE710))(this, complexType, local);
  }
  void PreprocessGroup(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup* group) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BF040))(this, group);
  }
  void PreprocessNotation(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaNotation* notation) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaNotation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BF2B0))(this, notation);
  }
  void PreprocessParticle(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BF570))(this, particle);
  }
  void PreprocessAttributes(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* parent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6BFEB0))(this, attributes, anyAttribute, parent);
  }
  void ValidateIdAttribute(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* xso) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C0160))(this, xso);
  }
  void ValidateNameAttribute(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* xso) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C03A0))(this, xso);
  }
  void ValidateQNameAttribute(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* xso, System_String* attributeName, ModdingAPI::Exposed::System::Xml::XmlQualifiedName* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*, System_String*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C0710))(this, xso, attributeName, value);
  }
  void SetParent(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* child, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* parent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x488E20))(this, child, parent);
  }
  void PreprocessAnnotation(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* schemaObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C08C0))(this, schemaObject);
  }
  ModdingAPI::Exposed::System::Uri* ResolveSchemaLocationUri(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* enclosingSchema, System_String* location) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Uri*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C0A30))(this, enclosingSchema, location);
  }
  ModdingAPI::Exposed::System::IO::Stream* GetSchemaEntity(ModdingAPI::Exposed::System::Uri* ruri) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IO::Stream*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionPreprocessor*, ModdingAPI::Exposed::System::Uri*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C0B10))(this, ruri);
  }
};
}