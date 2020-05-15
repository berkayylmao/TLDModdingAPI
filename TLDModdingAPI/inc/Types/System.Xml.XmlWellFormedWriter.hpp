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
#include "ModdingAPI.Exposed.System.DateTime.hpp"
#include "ModdingAPI.Exposed.System.Decimal.hpp"


namespace ModdingAPI::Exposed::System::Xml {
struct __XmlWellFormedWriter_Il2CppStaticFields {
  ModdingAPI::Exposed::System::String_array* stateName;
  ModdingAPI::Exposed::System::String_array* tokenName;
  ModdingAPI::Exposed::System::Xml::WriteState_array* state2WriteState;
  ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::State_array* StateTableDocument;
  ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::State_array* StateTableAuto;
};

struct __XmlWellFormedWriter_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_WriteStartDocument;
  VirtualInvokeData _6_WriteStartDocument;
  VirtualInvokeData _7_WriteEndDocument;
  VirtualInvokeData _8_WriteDocType;
  VirtualInvokeData _9_WriteStartElement;
  VirtualInvokeData _10_WriteEndElement;
  VirtualInvokeData _11_WriteFullEndElement;
  VirtualInvokeData _12_WriteStartAttribute;
  VirtualInvokeData _13_WriteEndAttribute;
  VirtualInvokeData _14_WriteCData;
  VirtualInvokeData _15_WriteComment;
  VirtualInvokeData _16_WriteProcessingInstruction;
  VirtualInvokeData _17_WriteEntityRef;
  VirtualInvokeData _18_WriteCharEntity;
  VirtualInvokeData _19_WriteWhitespace;
  VirtualInvokeData _20_WriteString;
  VirtualInvokeData _21_WriteSurrogateCharEntity;
  VirtualInvokeData _22_WriteChars;
  VirtualInvokeData _23_WriteRaw;
  VirtualInvokeData _24_WriteRaw;
  VirtualInvokeData _25_WriteBase64;
  VirtualInvokeData _26_WriteBinHex;
  VirtualInvokeData _27_get_WriteState;
  VirtualInvokeData _28_Close;
  VirtualInvokeData _29_Flush;
  VirtualInvokeData _30_LookupPrefix;
  VirtualInvokeData _31_WriteValue;
  VirtualInvokeData _32_WriteValue;
  VirtualInvokeData _33_WriteValue;
  VirtualInvokeData _34_WriteValue;
  VirtualInvokeData _35_WriteValue;
  VirtualInvokeData _36_WriteValue;
  VirtualInvokeData _37_WriteValue;
  VirtualInvokeData _38_WriteValue;
  VirtualInvokeData _39_WriteValue;
  VirtualInvokeData _40_Dispose;
};

struct __XmlWellFormedWriter_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlWellFormedWriter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlWellFormedWriter_Il2CppVtbl vtbl;
};

class XmlWellFormedWriter {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7FF38;
  static inline    __XmlWellFormedWriter_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlWellFormedWriter_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlWellFormedWriter_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlWellFormedWriter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::XmlWriter* writer;
  ModdingAPI::Exposed::System::Xml::XmlRawWriter* rawWriter;
  ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* predefinedNamespaces;
  ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::Namespace_array* nsStack;
  int32_t nsTop;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* nsHashtable;
  bool useNsHashtable;
  ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::ElementScope_array* elemScopeStack;
  int32_t elemTop;
  ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttrName_array* attrStack;
  int32_t attrCount;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* attrHashTable;
  int32_t specAttr;
  ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache* attrValueCache;
  System_String* curDeclPrefix;
  ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::State_array* stateTable;
  int32_t currentState;
  bool checkCharacters;
  bool omitDuplNamespaces;
  bool writeEndDocumentOnClose;
  int32_t conformanceLevel;
  bool dtdWritten;
  bool xmlDeclFollows;
  ModdingAPI::Exposed::System::Xml::XmlCharType xmlCharType;
  ModdingAPI::Exposed::System::Xml::SecureStringHasher* hasher;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Xml::XmlWriter* writer, ModdingAPI::Exposed::System::Xml::XmlWriterSettings* settings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, ModdingAPI::Exposed::System::Xml::XmlWriter*, ModdingAPI::Exposed::System::Xml::XmlWriterSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D2AD0))(this, writer, settings);
  }
  int32_t get_WriteState() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D3100))(this);
  }
  void WriteStartDocument() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D31F0))(this);
  }
  void WriteStartDocument(bool standalone) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D3200))(this, standalone);
  }
  void WriteEndDocument() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D3230))(this);
  }
  void WriteDocType(System_String* name, System_String* pubid, System_String* sysid, System_String* subset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D3380))(this, name, pubid, sysid, subset);
  }
  void WriteStartElement(System_String* prefix, System_String* localName, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D3760))(this, prefix, localName, ns);
  }
  void WriteEndElement() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D3AB0))(this);
  }
  void WriteFullEndElement() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D3CD0))(this);
  }
  void WriteStartAttribute(System_String* prefix, System_String* localName, System_String* namespaceName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D3EF0))(this, prefix, localName, namespaceName);
  }
  void WriteEndAttribute() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D4640))(this);
  }
  void WriteCData(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D4EE0))(this, text);
  }
  void WriteComment(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D4FE0))(this, text);
  }
  void WriteProcessingInstruction(System_String* name, System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D50E0))(this, name, text);
  }
  void WriteEntityRef(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D53E0))(this, name);
  }
  void WriteCharEntity(wchar_t ch) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D5540))(this, ch);
  }
  void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, wchar_t, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D5790))(this, lowChar, highChar);
  }
  void WriteWhitespace(System_String* ws) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D5930))(this, ws);
  }
  void WriteString(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D5B70))(this, text);
  }
  void WriteChars(ModdingAPI::Exposed::System::Char_array* buffer, int32_t index, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D5D00))(this, buffer, index, count);
  }
  void WriteRaw(ModdingAPI::Exposed::System::Char_array* buffer, int32_t index, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D5F10))(this, buffer, index, count);
  }
  void WriteRaw(System_String* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D6120))(this, data);
  }
  void WriteBase64(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t index, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D62A0))(this, buffer, index, count);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D6470))(this);
  }
  void Flush() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D6720))(this);
  }
  System_String* LookupPrefix(System_String* ns) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D67F0))(this, ns);
  }
  void WriteValue(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D6A20))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::DateTime value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D6B10))(this, value);
  }
  void WriteValue(double value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D6C00))(this, value);
  }
  void WriteValue(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D6CF0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Decimal value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, ModdingAPI::Exposed::System::Decimal)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D6DE0))(this, value);
  }
  void WriteValue(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D6ED0))(this, value);
  }
  void WriteValue(int64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D6FC0))(this, value);
  }
  void WriteValue(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D70B0))(this, value);
  }
  void WriteValue(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D71D0))(this, value);
  }
  void WriteBinHex(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t index, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D7320))(this, buffer, index, count);
  }
  ModdingAPI::Exposed::System::Xml::XmlRawWriter* get_RawWriter() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlRawWriter*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  bool get_SaveAttrValue() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D7460))(this);
  }
  bool get_InBase64() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D7470))(this);
  }
  void SetSpecialAttribute(int32_t special) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D7490))(this, special);
  }
  void WriteStartDocumentImpl(int32_t standalone) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D7730))(this, standalone);
  }
  void StartFragment() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D78D0))(this);
  }
  void PushNamespaceImplicit(System_String* prefix, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D78E0))(this, prefix, ns);
  }
  bool PushNamespaceExplicit(System_String* prefix, System_String* ns) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D7E70))(this, prefix, ns);
  }
  void AddNamespace(System_String* prefix, System_String* ns, int32_t kind) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D8500))(this, prefix, ns, kind);
  }
  void AddToNamespaceHashtable(int32_t namespaceIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D8780))(this, namespaceIndex);
  }
  int32_t LookupNamespaceIndex(System_String* prefix) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D8940))(this, prefix);
  }
  void PopNamespaces(int32_t indexFrom, int32_t indexTo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D8AC0))(this, indexFrom, indexTo);
  }
  void AdvanceState(int32_t token) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D8E90))(this, token);
  }
  void StartElementContent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D92D0))(this);
  }
  System_String* LookupNamespace(System_String* prefix) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D94A0))(this, prefix);
  }
  System_String* LookupLocalNamespace(System_String* prefix) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D9610))(this, prefix);
  }
  System_String* GeneratePrefix() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D9730))(this);
  }
  void CheckNCName(System_String* ncname) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D98B0))(this, ncname);
  }
  void ThrowInvalidStateTransition(int32_t token, int32_t currentState) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D9D80))(this, token, currentState);
  }
  bool get_IsClosedOrErrorState() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D9FC0))(this);
  }
  void AddAttribute(System_String* prefix, System_String* localName, System_String* namespaceName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D9FD0))(this, prefix, localName, namespaceName);
  }
  void AddToAttrHashTable(int32_t attributeIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DA3F0))(this, attributeIndex);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::String_array*> stateName = __CppStaticProperty<ModdingAPI::Exposed::System::String_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->stateName; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::String_array*> tokenName = __CppStaticProperty<ModdingAPI::Exposed::System::String_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->tokenName; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::WriteState_array*> state2WriteState = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::WriteState_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->state2WriteState; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::State_array*> StateTableDocument = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::State_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->StateTableDocument; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::State_array*> StateTableAuto = __CppStaticProperty<ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::State_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->StateTableAuto; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Xml::XmlException* DupAttrException(System_String* prefix, System_String* localName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlException*(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D8BF0))(prefix, localName);
  }
  static inline System_String* GetStateName(int32_t state) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D93C0))(state);
  }
  static inline ModdingAPI::Exposed::System::Exception* InvalidCharsException(System_String* name, int32_t badCharIndex) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D9A70))(name, badCharIndex);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DA5C0))();
  }
};
}