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
struct __SchemaCollectionCompiler_Il2CppStaticFields {
};

struct __SchemaCollectionCompiler_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SchemaCollectionCompiler_Il2CppClass {
  Il2CppClass_1 _1;
  __SchemaCollectionCompiler_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SchemaCollectionCompiler_Il2CppVtbl vtbl;
};

class SchemaCollectionCompiler {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C87D90;
  static inline    __SchemaCollectionCompiler_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SchemaCollectionCompiler_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SchemaCollectionCompiler_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SchemaCollectionCompiler_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::XmlNameTable* BaseProcessor_nameTable;
  ModdingAPI::Exposed::System::Xml::Schema::SchemaNames* BaseProcessor_schemaNames;
  ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler* BaseProcessor_eventHandler;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaCompilationSettings* BaseProcessor_compilationSettings;
  int32_t BaseProcessor_errorCount;
  System_String* BaseProcessor_NsXml;
  bool compileContentModel;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectTable* examplars;
  ModdingAPI::Exposed::System::Collections::Stack* complexTypeStack;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* schema;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Xml::XmlNameTable* nameTable, ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler* eventHandler) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::XmlNameTable*, ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48BA90))(this, nameTable, eventHandler);
  }
  bool Execute(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* schema, ModdingAPI::Exposed::System::Xml::Schema::SchemaInfo* schemaInfo, bool compileContentModel) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*, ModdingAPI::Exposed::System::Xml::Schema::SchemaInfo*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48BCD0))(this, schema, schemaInfo, compileContentModel);
  }
  void Prepare() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48BD30))(this);
  }
  void Cleanup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48C160))(this);
  }
  void Compile() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48D580))(this);
  }
  void Output(ModdingAPI::Exposed::System::Xml::Schema::SchemaInfo* schemaInfo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::SchemaInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48F260))(this, schemaInfo);
  }
  void CompileSubstitutionGroup(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat* substitutionGroup) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x490B50))(this, substitutionGroup);
  }
  void CheckSubstitutionGroup(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSubstitutionGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x491060))(this, substitutionGroup);
  }
  void CompileGroup(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup* group) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x491310))(this, group);
  }
  void CompileSimpleType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* simpleType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x491430))(this, simpleType);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType_array* CompileBaseMemberTypes(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* simpleType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType_array*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x491C50))(this, simpleType);
  }
  void CheckUnionType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* unionMember, ModdingAPI::Exposed::System::Collections::ArrayList* memberTypeDefinitions, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* parentType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*, ModdingAPI::Exposed::System::Collections::ArrayList*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x492110))(this, unionMember, memberTypeDefinitions, parentType);
  }
  void CompileComplexType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x492290))(this, complexType);
  }
  void CompileSimpleContentExtension(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleExtension) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleContentExtension*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x492CA0))(this, complexType, simpleExtension);
  }
  void CompileSimpleContentRestriction(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleContentRestriction* simpleRestriction) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleContentRestriction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x492F10))(this, complexType, simpleRestriction);
  }
  void CompileComplexContentExtension(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexContent* complexContent, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexContentExtension* complexExtension) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexContent*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexContentExtension*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x493330))(this, complexType, complexContent, complexExtension);
  }
  void CompileComplexContentRestriction(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexContent* complexContent, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexContentRestriction* complexRestriction) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexContent*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexContentRestriction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4937D0))(this, complexType, complexContent, complexRestriction);
  }
  void CheckParticleDerivation(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x493AB0))(this, complexType);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* CompileContentTypeParticle(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle, bool substitution) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x493BF0))(this, particle, substitution);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* CannonicalizeParticle(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle, bool root, bool substitution) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x493DF0))(this, particle, root, substitution);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* CannonicalizeElement(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* element, bool substitution) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4941E0))(this, element, substitution);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* CannonicalizeGroupRef(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupRef* groupRef, bool root, bool substitution) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupRef*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4943A0))(this, groupRef, root, substitution);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* CannonicalizeAll(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAll* all, bool root, bool substitution) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAll*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x494C10))(this, all, root, substitution);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* CannonicalizeChoice(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaChoice* choice, bool root, bool substitution) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaChoice*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x495300))(this, choice, root, substitution);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* CannonicalizeSequence(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSequence* sequence, bool root, bool substitution) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSequence*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x495A60))(this, sequence, root, substitution);
  }
  bool IsValidRestriction(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* baseParticle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x496140))(this, derivedParticle, baseParticle);
  }
  bool IsElementFromElement(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* derivedElement, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* baseElement) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4967C0))(this, derivedElement, baseElement);
  }
  bool IsElementFromAny(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* derivedElement, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAny* baseAny) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAny*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x496950))(this, derivedElement, baseAny);
  }
  bool IsAnyFromAny(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAny* derivedAny, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAny* baseAny) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAny*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAny*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4969F0))(this, derivedAny, baseAny);
  }
  bool IsGroupBaseFromAny(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAny* baseAny) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAny*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x496A50))(this, derivedGroupBase, baseAny);
  }
  bool IsElementFromGroupBase(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* derivedElement, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, bool skipEmptableOnly) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x496D70))(this, derivedElement, baseGroupBase, skipEmptableOnly);
  }
  bool IsGroupBaseFromGroupBase(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, bool skipEmptableOnly) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroupBase*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x497390))(this, derivedGroupBase, baseGroupBase, skipEmptableOnly);
  }
  bool IsSequenceFromAll(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAll* baseAll) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSequence*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAll*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4976B0))(this, derivedSequence, baseAll);
  }
  bool IsSequenceFromChoice(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaChoice* baseChoice) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSequence*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaChoice*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x497AF0))(this, derivedSequence, baseChoice);
  }
  void CalculateSequenceRange(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSequence* sequence, ModdingAPI::Exposed::System::Decimal minOccurs, ModdingAPI::Exposed::System::Decimal maxOccurs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSequence*, ModdingAPI::Exposed::System::Decimal, ModdingAPI::Exposed::System::Decimal)>(Helpers::Memory::GetInstance().MakeAbsolute(0x497E40))(this, sequence, minOccurs, maxOccurs);
  }
  bool IsValidOccurrenceRangeRestriction(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* baseParticle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4986C0))(this, derivedParticle, baseParticle);
  }
  bool IsValidOccurrenceRangeRestriction(ModdingAPI::Exposed::System::Decimal minOccurs, ModdingAPI::Exposed::System::Decimal maxOccurs, ModdingAPI::Exposed::System::Decimal baseMinOccurs, ModdingAPI::Exposed::System::Decimal baseMaxOccurs) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Decimal, ModdingAPI::Exposed::System::Decimal, ModdingAPI::Exposed::System::Decimal, ModdingAPI::Exposed::System::Decimal)>(Helpers::Memory::GetInstance().MakeAbsolute(0x498810))(this, minOccurs, maxOccurs, baseMinOccurs, baseMaxOccurs);
  }
  int32_t GetMappingParticle(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* collection) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x498940))(this, particle, collection);
  }
  bool IsParticleEmptiable(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x498AB0))(this, particle);
  }
  void CalculateEffectiveTotalRange(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle, ModdingAPI::Exposed::System::Decimal minOccurs, ModdingAPI::Exposed::System::Decimal maxOccurs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*, ModdingAPI::Exposed::System::Decimal, ModdingAPI::Exposed::System::Decimal)>(Helpers::Memory::GetInstance().MakeAbsolute(0x498BC0))(this, particle, minOccurs, maxOccurs);
  }
  void PushComplexType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x499C10))(this, complexType);
  }
  int32_t GetSchemaContentType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexContent* complexContent, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexContent*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x499C40))(this, complexType, complexContent, particle);
  }
  void CompileAttributeGroup(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttributeGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x499CC0))(this, attributeGroup);
  }
  void CompileLocalAttributes(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* baseType, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* derivedType, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, int32_t derivedBy) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49A2E0))(this, baseType, derivedType, attributes, anyAttribute, derivedBy);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeUnion(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* a, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* b) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49B3D0))(this, a, b);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeIntersection(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* a, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute* b) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnyAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49B4C0))(this, a, b);
  }
  void CompileAttribute(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute* xa) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49B5B0))(this, xa);
  }
  void CompileIdentityConstraint(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaIdentityConstraint* xi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49C0A0))(this, xi);
  }
  void CompileElement(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* xe) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49C790))(this, xe);
  }
  ModdingAPI::Exposed::System::Xml::Schema::ContentValidator* CompileComplexContent(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::ContentValidator*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49D330))(this, complexType);
  }
  void BuildParticleContentModel(ModdingAPI::Exposed::System::Xml::Schema::ParticleContentValidator* contentValidator, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::ParticleContentValidator*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49DD20))(this, contentValidator, particle);
  }
  void CompileParticleElements(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49E4F0))(this, complexType, particle);
  }
  void CompileCompexTypeElements(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49E870))(this, complexType);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleType(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* name) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49E990))(this, name);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* GetComplexType(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* name) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49EB50))(this, name);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* GetAnySchemaType(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* name) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaCollectionCompiler*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x49EC60))(this, name);
  }

  // Static methods:
  static inline void Cleanup(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* schema) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48CEB0))(schema);
  }
  static inline void CleanupAttribute(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute* attribute) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4900E0))(attribute);
  }
  static inline void CleanupAttributeGroup(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttributeGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x490120))(attributeGroup);
  }
  static inline void CleanupComplexType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType* complexType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaComplexType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x490170))(complexType);
  }
  static inline void CleanupSimpleType(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* simpleType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x490510))(simpleType);
  }
  static inline void CleanupElement(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* element) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x490540))(element);
  }
  static inline void CleanupAttributes(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection* attributes) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObjectCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x490770))(attributes);
  }
  static inline void CleanupGroup(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup* group) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4908B0))(group);
  }
  static inline void CleanupParticle(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle* particle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4908E0))(particle);
  }
};
}