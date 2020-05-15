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


namespace ModdingAPI::Exposed::System::Xml {
struct __XsdValidatingReader_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Type* TypeOfString;
};

struct __XsdValidatingReader_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_get_Settings;
  VirtualInvokeData _6_get_NodeType;
  VirtualInvokeData _7_get_Name;
  VirtualInvokeData _8_get_LocalName;
  VirtualInvokeData _9_get_NamespaceURI;
  VirtualInvokeData _10_get_Prefix;
  VirtualInvokeData _11_get_HasValue;
  VirtualInvokeData _12_get_Value;
  VirtualInvokeData _13_get_Depth;
  VirtualInvokeData _14_get_BaseURI;
  VirtualInvokeData _15_get_IsEmptyElement;
  VirtualInvokeData _16_get_IsDefault;
  VirtualInvokeData _17_get_SchemaInfo;
  VirtualInvokeData _18_ReadContentAsString;
  VirtualInvokeData _19_get_AttributeCount;
  VirtualInvokeData _20_MoveToAttribute;
  VirtualInvokeData _21_MoveToAttribute;
  VirtualInvokeData _22_MoveToFirstAttribute;
  VirtualInvokeData _23_MoveToNextAttribute;
  VirtualInvokeData _24_MoveToElement;
  VirtualInvokeData _25_ReadAttributeValue;
  VirtualInvokeData _26_Read;
  VirtualInvokeData _27_get_EOF;
  VirtualInvokeData _28_Close;
  VirtualInvokeData _29_get_ReadState;
  VirtualInvokeData _30_get_NameTable;
  VirtualInvokeData _31_LookupNamespace;
  VirtualInvokeData _32_get_CanResolveEntity;
  VirtualInvokeData _33_ResolveEntity;
  VirtualInvokeData _34_MoveToContent;
  VirtualInvokeData _35_ReadStartElement;
  VirtualInvokeData _36_ReadEndElement;
  VirtualInvokeData _37_IsStartElement;
  VirtualInvokeData _38_Dispose;
  VirtualInvokeData _39_get_NamespaceManager;
  VirtualInvokeData _40_get_DtdInfo;
  VirtualInvokeData _41_System_Xml_Schema_IXmlSchemaInfo_get_Validity;
  VirtualInvokeData _42_System_Xml_Schema_IXmlSchemaInfo_get_IsDefault;
  VirtualInvokeData _43_System_Xml_Schema_IXmlSchemaInfo_get_IsNil;
  VirtualInvokeData _44_System_Xml_Schema_IXmlSchemaInfo_get_MemberType;
  VirtualInvokeData _45_System_Xml_Schema_IXmlSchemaInfo_get_SchemaType;
  VirtualInvokeData _46_System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement;
  VirtualInvokeData _47_System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute;
  VirtualInvokeData _48_get_LineNumber;
  VirtualInvokeData _49_get_LinePosition;
  VirtualInvokeData _50_System_Xml_IXmlNamespaceResolver_GetNamespacesInScope;
  VirtualInvokeData _51_System_Xml_IXmlNamespaceResolver_LookupNamespace;
  VirtualInvokeData _52_System_Xml_IXmlNamespaceResolver_LookupPrefix;
};

struct __XsdValidatingReader_Il2CppClass {
  Il2CppClass_1 _1;
  __XsdValidatingReader_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XsdValidatingReader_Il2CppVtbl vtbl;
};

class XsdValidatingReader {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C81BA8;
  static inline    __XsdValidatingReader_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XsdValidatingReader_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XsdValidatingReader_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XsdValidatingReader_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::XmlReader* coreReader;
  ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* coreReaderNSResolver;
  ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* thisNSResolver;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaValidator* validator;
  ModdingAPI::Exposed::System::Xml::XmlResolver* xmlResolver;
  ModdingAPI::Exposed::System::Xml::Schema::ValidationEventHandler* validationEvent;
  int32_t validationState;
  ModdingAPI::Exposed::System::Xml::Schema::XmlValueGetter* valueGetter;
  ModdingAPI::Exposed::System::Xml::XmlNamespaceManager* nsManager;
  bool manageNamespaces;
  bool processInlineSchema;
  bool replayCache;
  ModdingAPI::Exposed::System::Xml::ValidatingReaderNodeData* cachedNode;
  ModdingAPI::Exposed::System::Xml::AttributePSVIInfo* attributePSVI;
  int32_t attributeCount;
  int32_t coreReaderAttributeCount;
  int32_t currentAttrIndex;
  ModdingAPI::Exposed::System::Xml::AttributePSVIInfo_array* attributePSVINodes;
  ModdingAPI::Exposed::System::Collections::ArrayList* defaultAttributes;
  ModdingAPI::Exposed::System::Xml::Schema::Parser* inlineSchemaParser;
  Il2CppObject* atomicValue;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo* xmlSchemaInfo;
  System_String* originalAtomicValueString;
  ModdingAPI::Exposed::System::Xml::XmlNameTable* coreReaderNameTable;
  ModdingAPI::Exposed::System::Xml::XsdCachingReader* cachingReader;
  ModdingAPI::Exposed::System::Xml::ValidatingReaderNodeData* textNode;
  System_String* NsXmlNs;
  System_String* NsXs;
  System_String* NsXsi;
  System_String* XsiType;
  System_String* XsiNil;
  System_String* XsdSchema;
  System_String* XsiSchemaLocation;
  System_String* XsiNoNamespaceSchemaLocation;
  ModdingAPI::Exposed::System::Xml::XmlCharType xmlCharType;
  ModdingAPI::Exposed::System::Xml::IXmlLineInfo* lineInfo;
  ModdingAPI::Exposed::System::Xml::ReadContentAsBinaryHelper* readBinaryHelper;
  int32_t savedState;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Xml::XmlReader* reader, ModdingAPI::Exposed::System::Xml::XmlResolver* xmlResolver, ModdingAPI::Exposed::System::Xml::XmlReaderSettings* readerSettings, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* partialValidationType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, ModdingAPI::Exposed::System::Xml::XmlReader*, ModdingAPI::Exposed::System::Xml::XmlResolver*, ModdingAPI::Exposed::System::Xml::XmlReaderSettings*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E1CD0))(this, reader, xmlResolver, readerSettings, partialValidationType);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::XmlReader* reader, ModdingAPI::Exposed::System::Xml::XmlResolver* xmlResolver, ModdingAPI::Exposed::System::Xml::XmlReaderSettings* readerSettings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, ModdingAPI::Exposed::System::Xml::XmlReader*, ModdingAPI::Exposed::System::Xml::XmlResolver*, ModdingAPI::Exposed::System::Xml::XmlReaderSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E1F20))(this, reader, xmlResolver, readerSettings);
  }
  void Init() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E1F40))(this);
  }
  void SetupValidator(ModdingAPI::Exposed::System::Xml::XmlReaderSettings* readerSettings, ModdingAPI::Exposed::System::Xml::XmlReader* reader, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* partialValidationType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, ModdingAPI::Exposed::System::Xml::XmlReaderSettings*, ModdingAPI::Exposed::System::Xml::XmlReader*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E2450))(this, readerSettings, reader, partialValidationType);
  }
  ModdingAPI::Exposed::System::Xml::XmlReaderSettings* get_Settings() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlReaderSettings*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E2870))(this);
  }
  int32_t get_NodeType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E2B20))(this);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E2C00))(this);
  }
  System_String* get_LocalName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E2DC0))(this);
  }
  System_String* get_NamespaceURI() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E2E10))(this);
  }
  System_String* get_Prefix() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E2E60))(this);
  }
  bool get_HasValue() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E2EB0))(this);
  }
  System_String* get_Value() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E2EF0))(this);
  }
  int32_t get_Depth() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E2F40))(this);
  }
  System_String* get_BaseURI() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D1200))(this);
  }
  bool get_IsEmptyElement() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D1230))(this);
  }
  bool get_IsDefault() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E2F90))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::IXmlSchemaInfo*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3201B0))(this);
  }
  System_String* ReadContentAsString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E2FD0))(this);
  }
  int32_t get_AttributeCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A00))(this);
  }
  bool MoveToAttribute(System_String* name) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E3260))(this, name);
  }
  void MoveToAttribute(int32_t i) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E3490))(this, i);
  }
  bool MoveToFirstAttribute() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E3650))(this);
  }
  bool MoveToNextAttribute() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E37F0))(this);
  }
  bool MoveToElement() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E3980))(this);
  }
  bool Read() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E39D0))(this);
  }
  bool get_EOF() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D12D0))(this);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E3E00))(this);
  }
  int32_t get_ReadState() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E3E40))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlNameTable* get_NameTable() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNameTable*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307710))(this);
  }
  System_String* LookupNamespace(System_String* prefix) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E3E80))(this, prefix);
  }
  void ResolveEntity() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E3F30))(this);
  }
  bool ReadAttributeValue() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E3F80))(this);
  }
  bool System::Xml::Schema::IXmlSchemaInfo::get_IsDefault() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E4040))(this);
  }
  bool System::Xml::Schema::IXmlSchemaInfo::get_IsNil() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E40F0))(this);
  }
  int32_t System::Xml::Schema::IXmlSchemaInfo::get_Validity() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E4140))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::IXmlSchemaInfo::get_MemberType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E4210))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::IXmlSchemaInfo::get_SchemaType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E42C0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::IXmlSchemaInfo::get_SchemaElement() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E4330))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute* System::Xml::Schema::IXmlSchemaInfo::get_SchemaAttribute() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E4390))(this);
  }
  int32_t get_LineNumber() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E43E0))(this);
  }
  int32_t get_LinePosition() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E4480))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IDictionary_TKey__TValue_* System::Xml::IXmlNamespaceResolver::GetNamespacesInScope(int32_t scope) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IDictionary_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E4520))(this, scope);
  }
  System_String* System::Xml::IXmlNamespaceResolver::LookupNamespace(System_String* prefix) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E45F0))(this, prefix);
  }
  System_String* System::Xml::IXmlNamespaceResolver::LookupPrefix(System_String* namespaceName) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E46C0))(this, namespaceName);
  }
  Il2CppObject* GetStringValue() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D11A0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* get_ElementXmlType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E4790))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* get_AttributeXmlType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E47C0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo* get_AttributeSchemaInfo() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaInfo*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E4800))(this);
  }
  void ProcessReaderEvent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E4820))(this);
  }
  void ProcessElementEvent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E4BB0))(this);
  }
  void ProcessEndElementEvent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E53F0))(this);
  }
  void ValidateAttributes() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E55F0))(this);
  }
  void ClearAttributesInfo() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E58F0))(this);
  }
  ModdingAPI::Exposed::System::Xml::AttributePSVIInfo* GetAttributePSVI(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::AttributePSVIInfo*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E5940))(this, name);
  }
  ModdingAPI::Exposed::System::Xml::AttributePSVIInfo* GetAttributePSVI(System_String* localName, System_String* ns) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::AttributePSVIInfo*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E5B40))(this, localName, ns);
  }
  ModdingAPI::Exposed::System::Xml::ValidatingReaderNodeData* GetDefaultAttribute(System_String* name, bool updatePosition) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::ValidatingReaderNodeData*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E5BB0))(this, name, updatePosition);
  }
  ModdingAPI::Exposed::System::Xml::ValidatingReaderNodeData* GetDefaultAttribute(System_String* attrLocalName, System_String* ns, bool updatePosition) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::ValidatingReaderNodeData*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, System_String*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E5D40))(this, attrLocalName, ns, updatePosition);
  }
  ModdingAPI::Exposed::System::Xml::AttributePSVIInfo* AddAttributePSVI(int32_t attIndex) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::AttributePSVIInfo*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E5EF0))(this, attIndex);
  }
  bool IsXSDRoot(System_String* localName, System_String* ns) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E6190))(this, localName, ns);
  }
  void ProcessInlineSchema() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E61B0))(this);
  }
  Il2CppObject* InternalReadContentAsObject() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E62E0))(this);
  }
  Il2CppObject* InternalReadContentAsObject(bool unwrapTypedValue) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E6310))(this, unwrapTypedValue);
  }
  Il2CppObject* InternalReadContentAsObject(bool unwrapTypedValue, System_String* originalStringValue) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, bool, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E6330))(this, unwrapTypedValue, originalStringValue);
  }
  Il2CppObject* ReadTillEndElement() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E65E0))(this);
  }
  void SwitchReader() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E6A50))(this);
  }
  void ReadAheadForMemberType() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E6B20))(this);
  }
  void GetIsDefault() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E6F50))(this);
  }
  void GetMemberType() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E74A0))(this);
  }
  Il2CppObject* ReturnBoxedValue(Il2CppObject* typedValue, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* xmlType, bool unWrap) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, Il2CppObject*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E7640))(this, typedValue, xmlType, unWrap);
  }
  ModdingAPI::Exposed::System::Xml::XsdCachingReader* GetCachingReader() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XsdCachingReader*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E7810))(this);
  }
  ModdingAPI::Exposed::System::Xml::ValidatingReaderNodeData* CreateDummyTextNode(System_String* attributeValue, int32_t depth) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::ValidatingReaderNodeData*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E7B30))(this, attributeValue, depth);
  }
  void CachingCallBack(ModdingAPI::Exposed::System::Xml::XsdCachingReader* cachingReader) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*, ModdingAPI::Exposed::System::Xml::XsdCachingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E7CD0))(this, cachingReader);
  }
  System_String* GetOriginalAtomicValueStringOfElement() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XsdValidatingReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E7D00))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Type*> TypeOfString = __CppStaticProperty<ModdingAPI::Exposed::System::Type*>(
   []() { return &GetStaticClassInstance()->pStaticFields->TypeOfString; }
  );
};
}