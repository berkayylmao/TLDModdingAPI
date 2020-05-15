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
#include "ModdingAPI.Exposed.System.Xml.XmlCharType.hpp"


namespace ModdingAPI::Exposed::System::Xml::Schema {
struct __XmlSchemaValidator_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* dtQName;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* dtCDATA;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* dtStringArray;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle_array* EmptyParticleArray;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute_array* EmptyAttributeArray;
  ModdingAPI::Exposed::System::Boolean_array* ValidStates;
  ModdingAPI::Exposed::System::String_array* MethodNames;
};

struct __XmlSchemaValidator_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __XmlSchemaValidator_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlSchemaValidator_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlSchemaValidator_Il2CppVtbl vtbl;
};

class XmlSchemaValidator {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7F378;
  static inline    __XmlSchemaValidator_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlSchemaValidator_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlSchemaValidator_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlSchemaValidator_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSet* schemaSet;
  int32_t validationFlags;
  int32_t startIDConstraint;
  bool isRoot;
  bool rootHasSchema;
  bool attrValid;
  bool checkEntity;
  ModdingAPI::Exposed::System::Xml::Schema::SchemaInfo* compiledSchemaInfo;
  ModdingAPI::Exposed::System::Xml::IDtdInfo* dtdSchemaInfo;
  ModdingAPI::Exposed::System::Collections::Hashtable* validatedNamespaces;
  ModdingAPI::Exposed::System::Xml::HWStack* validationStack;
  ModdingAPI::Exposed::System::Xml::Schema::ValidationState* context;
  int32_t currentState;
  ModdingAPI::Exposed::System::Collections::Hashtable* attPresence;
  ModdingAPI::Exposed::System::Xml::Schema::SchemaAttDef* wildID;
  ModdingAPI::Exposed::System::Collections::Hashtable* IDs;
  ModdingAPI::Exposed::System::Xml::Schema::IdRefNode* idRefListHead;
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* contextQName;
  System_String* NsXs;
  System_String* NsXsi;
  System_String* NsXmlNs;
  System_String* NsXml;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* partialValidationType;
  ModdingAPI::Exposed::System::Text::StringBuilder* textValue;
  ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler* eventHandler;
  Il2CppObject* validationEventSender;
  ModdingAPI::Exposed::System::Xml::XmlNameTable* nameTable;
  ModdingAPI::Exposed::System::Xml::IXmlLineInfo* positionInfo;
  ModdingAPI::Exposed::System::Xml::IXmlLineInfo* dummyPositionInfo;
  ModdingAPI::Exposed::System::Xml::XmlResolver* xmlResolver;
  ModdingAPI::Exposed::System::Uri* sourceUri;
  System_String* sourceUriString;
  ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* nsResolver;
  int32_t processContents;
  System_String* xsiTypeString;
  System_String* xsiNilString;
  System_String* xsiSchemaLocationString;
  System_String* xsiNoNamespaceSchemaLocationString;
  ModdingAPI::Exposed::System::Xml::XmlCharType xmlCharType;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Xml::XmlNameTable* nameTable, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSet* schemas, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* namespaceResolver, int32_t validationFlags) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::XmlNameTable*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSet*, ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6006A0))(this, nameTable, schemas, namespaceResolver, validationFlags);
  }
  void Init() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x600B40))(this);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6011D0))(this);
  }
  void set_XmlResolver(ModdingAPI::Exposed::System::Xml::XmlResolver* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::XmlResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6012B0))(this, value);
  }
  void set_LineInfoProvider(ModdingAPI::Exposed::System::Xml::IXmlLineInfo* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::IXmlLineInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6012C0))(this, value);
  }
  void set_SourceUri(ModdingAPI::Exposed::System::Uri* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Uri*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6012E0))(this, value);
  }
  void set_ValidationEventSender(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F10A0))(this, value);
  }
  void add_ValidationEventHandler(ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x601320))(this, value);
  }
  void remove_ValidationEventHandler(ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6013E0))(this, value);
  }
  void AddSchema(ModdingAPI::Exposed::System::Xml::Schema::XmlSchema* schema) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchema*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6014A0))(this, schema);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x601900))(this);
  }
  void Initialize(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* partialValidationType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x601AC0))(this, partialValidationType);
  }
  void ValidateElement(System_String* localName, System_String* namespaceUri, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo* schemaInfo, System_String* xsiType, System_String* xsiNil, System_String* xsiSchemaLocation, System_String* xsiNoNamespaceSchemaLocation) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, System_String*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo*, System_String*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x601DC0))(this, localName, namespaceUri, schemaInfo, xsiType, xsiNil, xsiSchemaLocation, xsiNoNamespaceSchemaLocation);
  }
  Il2CppObject* ValidateAttribute(System_String* localName, System_String* namespaceUri, ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter* attributeValue, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo* schemaInfo) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, System_String*, ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x602370))(this, localName, namespaceUri, attributeValue, schemaInfo);
  }
  Il2CppObject* ValidateAttribute(System_String* lName, System_String* ns, ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter* attributeValueGetter, System_String* attributeStringValue, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo* schemaInfo) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, System_String*, ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter*, System_String*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x602470))(this, lName, ns, attributeValueGetter, attributeStringValue, schemaInfo);
  }
  void ValidateEndOfAttributes(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo* schemaInfo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x602F20))(this, schemaInfo);
  }
  void ValidateText(ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter* elementValue) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x603060))(this, elementValue);
  }
  void ValidateText(System_String* elementStringValue, ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter* elementValueGetter) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x603130))(this, elementStringValue, elementValueGetter);
  }
  void ValidateWhitespace(ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter* elementValue) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6035D0))(this, elementValue);
  }
  void ValidateWhitespace(System_String* elementStringValue, ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter* elementValueGetter) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6036A0))(this, elementStringValue, elementValueGetter);
  }
  Il2CppObject* ValidateEndElement(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo* schemaInfo) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x603920))(this, schemaInfo);
  }
  void EndValidation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x603930))(this);
  }
  void GetUnspecifiedDefaultAttributes(ModdingAPI::Exposed::System::Collections::ArrayList* defaultAttributes, bool createNodeData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Collections::ArrayList*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x603A80))(this, defaultAttributes, createNodeData);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSet* get_SchemaSet() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSet*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  int32_t get_ValidationFlags() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FED20))(this);
  }
  int32_t get_CurrentContentType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x604200))(this);
  }
  void SetDtdSchemaInfo(ModdingAPI::Exposed::System::Xml::IDtdInfo* dtdSchemaInfo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::IDtdInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x604250))(this, dtdSchemaInfo);
  }
  bool get_StrictlyAssessed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x604260))(this);
  }
  bool get_HasSchema() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6042B0))(this);
  }
  System_String* GetConcatenatedValue() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x604300))(this);
  }
  Il2CppObject* InternalValidateEndElement(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo* schemaInfo, Il2CppObject* typedValue) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x604330))(this, schemaInfo, typedValue);
  }
  void ProcessSchemaLocations(System_String* xsiSchemaLocation, System_String* xsiNoNamespaceSchemaLocation) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x604A90))(this, xsiSchemaLocation, xsiNoNamespaceSchemaLocation);
  }
  Il2CppObject* ValidateElementContext(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* elementName, bool invalidElementInContext) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x604EB0))(this, elementName, invalidElementInContext);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* GetSubstitutionGroupHead(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* member) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6053D0))(this, member);
  }
  Il2CppObject* ValidateAtomicValue(System_String* stringValue, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* memberType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6056E0))(this, stringValue, memberType);
  }
  Il2CppObject* ValidateAtomicValue(Il2CppObject* parsedValue, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* memberType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, Il2CppObject*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x605A40))(this, parsedValue, memberType);
  }
  System_String* GetTypeName(ModdingAPI::Exposed::System::Xml::Schema::SchemaDeclBase* decl) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::SchemaDeclBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x605EC0))(this, decl);
  }
  void SaveTextValue(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x605F40))(this, value);
  }
  void Push(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* elementName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x605F90))(this, elementName);
  }
  void Pop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x606280))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* FastGetElementDecl(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* elementName, Il2CppObject* particle) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x606490))(this, elementName, particle);
  }
  ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* CheckXsiTypeAndNil(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* elementDecl, System_String* xsiType, System_String* xsiNil, bool declFound) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*, System_String*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x606720))(this, elementDecl, xsiType, xsiNil, declFound);
  }
  void ThrowDeclNotFoundWarningOrError(bool declFound) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x606FF0))(this, declFound);
  }
  void CheckElementProperties() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x607220))(this);
  }
  void ValidateStartElementIdentityConstraints() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x607320))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::SchemaAttDef* CheckIsXmlAttribute(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* attQName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::SchemaAttDef*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x607390))(this, attQName);
  }
  void AddXmlNamespaceSchema() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6074F0))(this);
  }
  Il2CppObject* CheckMixedValueConstraint(System_String* elementValue) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x607680))(this, elementValue);
  }
  void LoadSchema(System_String* uri, System_String* url) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6077F0))(this, uri, url);
  }
  void RecompileSchemaSet() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x607CA0))(this);
  }
  void ProcessTokenizedType(int32_t ttype, System_String* name, bool attrValue) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, int32_t, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x607D80))(this, ttype, name, attrValue);
  }
  Il2CppObject* CheckAttributeValue(Il2CppObject* value, ModdingAPI::Exposed::System::Xml::Schema::SchemaAttDef* attdef) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, Il2CppObject*, ModdingAPI::Exposed::System::Xml::Schema::SchemaAttDef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6081C0))(this, value, attdef);
  }
  Il2CppObject* CheckElementValue(System_String* stringValue) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6085A0))(this, stringValue);
  }
  void CheckTokenizedTypes(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* dtype, Il2CppObject* typedValue, bool attrValue) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*, Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x608960))(this, dtype, typedValue, attrValue);
  }
  Il2CppObject* FindId(System_String* name) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x608B20))(this, name);
  }
  void CheckForwardRefs() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x608B40))(this);
  }
  bool get_HasIdentityConstraints() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x608D30))(this);
  }
  bool get_ProcessIdentityConstraints() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x608D50))(this);
  }
  bool get_ReportValidationWarnings() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x608D60))(this);
  }
  bool get_ProcessSchemaHints() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x608D70))(this);
  }
  void CheckStateTransition(int32_t toState, System_String* methodName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x608D80))(this, toState, methodName);
  }
  void ClearPSVI() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6090C0))(this);
  }
  void CheckRequiredAttributes(ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl* currentElementDecl) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::SchemaElementDecl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x609110))(this, currentElementDecl);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* GetSchemaElement() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x609310))(this);
  }
  System_String* GetDefaultAttributePrefix(System_String* attributeNS) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x609470))(this, attributeNS);
  }
  void AddIdentityConstraints() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x609720))(this);
  }
  void ElementIdentityConstraints() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x609F70))(this);
  }
  void AttributeIdentityConstraints(System_String* name, System_String* ns, Il2CppObject* obj, System_String* sobj, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* datatype) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, System_String*, Il2CppObject*, System_String*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60A390))(this, name, ns, obj, sobj, datatype);
  }
  void EndElementIdentityConstraints(Il2CppObject* typedValue, System_String* stringValue, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* datatype) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, Il2CppObject*, System_String*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60A7B0))(this, typedValue, stringValue, datatype);
  }
  void ProcessEntity(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60E7A0))(this, name);
  }
  void SendValidationEvent(System_String* code) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60E880))(this, code);
  }
  void SendValidationEvent(System_String* code, ModdingAPI::Exposed::System::String_array* args) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60E920))(this, code, args);
  }
  void SendValidationEvent(System_String* code, System_String* arg) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60EB00))(this, code, arg);
  }
  void SendValidationEvent(System_String* code, System_String* arg1, System_String* arg2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60ECE0))(this, code, arg1, arg2);
  }
  void SendValidationEvent(System_String* code, ModdingAPI::Exposed::System::String_array* args, ModdingAPI::Exposed::System::Exception* innerException, int32_t severity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, ModdingAPI::Exposed::System::String_array*, ModdingAPI::Exposed::System::Exception*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60EF80))(this, code, args, innerException, severity);
  }
  void SendValidationEvent(System_String* code, ModdingAPI::Exposed::System::String_array* args, ModdingAPI::Exposed::System::Exception* innerException) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, ModdingAPI::Exposed::System::String_array*, ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60F190))(this, code, args, innerException);
  }
  void SendValidationEvent(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidationException* e) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidationException*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60F380))(this, e);
  }
  void SendValidationEvent(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaException* e) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaException*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60F390))(this, e);
  }
  void SendValidationEvent(System_String* code, System_String* msg, int32_t severity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, System_String*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60F550))(this, code, msg, severity);
  }
  void SendValidationEvent(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidationException* e, int32_t severity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidationException*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60F750))(this, e, severity);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*> dtQName = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*>(
   []() { return &GetStaticClassInstance()->pStaticFields->dtQName; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*> dtCDATA = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*>(
   []() { return &GetStaticClassInstance()->pStaticFields->dtCDATA; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*> dtStringArray = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*>(
   []() { return &GetStaticClassInstance()->pStaticFields->dtStringArray; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle_array*> EmptyParticleArray = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaParticle_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->EmptyParticleArray; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute_array*> EmptyAttributeArray = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->EmptyAttributeArray; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Boolean_array*> ValidStates = __CppStaticProperty<ModdingAPI::Exposed::System::Boolean_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->ValidStates; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::String_array*> MethodNames = __CppStaticProperty<ModdingAPI::Exposed::System::String_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->MethodNames; }
  );

  // Static methods:
  static inline void ElementValidationError(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* name, ModdingAPI::Exposed::System::Xml::Schema::ValidationState* context, ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler* eventHandler, Il2CppObject* sender, System_String* sourceUri, int32_t lineNo, int32_t linePos, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSet* schemaSet) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlQualifiedName*, ModdingAPI::Exposed::System::Xml::Schema::ValidationState*, ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler*, Il2CppObject*, System_String*, int32_t, int32_t, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60BAE0))(name, context, eventHandler, sender, sourceUri, lineNo, linePos, schemaSet);
  }
  static inline void CompleteValidationError(ModdingAPI::Exposed::System::Xml::Schema::ValidationState* context, ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler* eventHandler, Il2CppObject* sender, System_String* sourceUri, int32_t lineNo, int32_t linePos, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSet* schemaSet) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::ValidationState*, ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler*, Il2CppObject*, System_String*, int32_t, int32_t, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60C870))(context, eventHandler, sender, sourceUri, lineNo, linePos, schemaSet);
  }
  static inline System_String* PrintExpectedElements(ModdingAPI::Exposed::System::Collections::ArrayList* expected, bool getParticles) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60D140))(expected, getParticles);
  }
  static inline System_String* PrintNames(ModdingAPI::Exposed::System::Collections::ArrayList* expected) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60D710))(expected);
  }
  static inline void PrintNamesWithNS(ModdingAPI::Exposed::System::Collections::ArrayList* expected, ModdingAPI::Exposed::System::Text::StringBuilder* builder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList*, ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60D970))(expected, builder);
  }
  static inline void EnumerateAny(ModdingAPI::Exposed::System::Text::StringBuilder* builder, System_String* namespaces) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60E110))(builder, namespaces);
  }
  static inline System_String* QNameString(System_String* localName, System_String* ns) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60E450))(localName, ns);
  }
  static inline System_String* BuildElementName(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* qname) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60E510))(qname);
  }
  static inline System_String* BuildElementName(System_String* localName, System_String* ns) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60E5D0))(localName, ns);
  }
  static inline void SendValidationEvent(ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler* eventHandler, Il2CppObject* sender, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidationException* e, int32_t severity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler*, Il2CppObject*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidationException*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x60FA20))(eventHandler, sender, e, severity);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x60FBC0))();
  }
};
}