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


namespace ModdingAPI::Exposed::System::Xml {
struct __XmlNode_Il2CppStaticFields {
};

struct __XmlNode_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_ICloneable_Clone;
  VirtualInvokeData _5_System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData _7_get_Value;
  VirtualInvokeData _8_set_Value;
  VirtualInvokeData _10_get_ParentNode;
  VirtualInvokeData _11_get_ChildNodes;
  VirtualInvokeData _12_get_PreviousSibling;
  VirtualInvokeData _13_get_NextSibling;
  VirtualInvokeData _14_get_Attributes;
  VirtualInvokeData _15_get_OwnerDocument;
  VirtualInvokeData _16_get_FirstChild;
  VirtualInvokeData _17_get_LastChild;
  VirtualInvokeData _18_get_IsContainer;
  VirtualInvokeData _19_get_LastNode;
  VirtualInvokeData _20_set_LastNode;
  VirtualInvokeData _21_RemoveChild;
  VirtualInvokeData _22_AppendChild;
  VirtualInvokeData _23_AppendChildForLoad;
  VirtualInvokeData _24_IsValidChildType;
  VirtualInvokeData _25_CanInsertAfter;
  VirtualInvokeData _26_get_HasChildNodes;
  VirtualInvokeData _28_CopyChildren;
  VirtualInvokeData _29_get_NamespaceURI;
  VirtualInvokeData _30_get_Prefix;
  VirtualInvokeData _32_get_IsReadOnly;
  VirtualInvokeData _33_get_InnerText;
  VirtualInvokeData _34_set_InnerText;
  VirtualInvokeData _35_set_InnerXml;
  VirtualInvokeData _36_get_BaseURI;
  VirtualInvokeData _39_RemoveAll;
  VirtualInvokeData _40_GetPrefixOfNamespace;
  VirtualInvokeData _41_SetParent;
  VirtualInvokeData _42_SetParentForLoad;
  VirtualInvokeData _43_FindChild;
  VirtualInvokeData _44_GetEventArgs;
  VirtualInvokeData _45_BeforeEvent;
  VirtualInvokeData _46_AfterEvent;
  VirtualInvokeData _47_get_IsText;
  VirtualInvokeData _65535__ctor;
};

struct __XmlNode_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlNode_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlNode_Il2CppVtbl vtbl;
};

class XmlNode {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C29F98;
  static inline    XmlNode* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C31960;
  static inline    __XmlNode_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline XmlNode* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (XmlNode**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __XmlNode_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlNode_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlNode_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::XmlNode* parentNode;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::XmlDocument* doc) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlDocument*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E2690))(this, doc);
  }
  System_String* get_Value() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  void set_Value(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E2760))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::XmlNode* get_ParentNode() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNode*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E28A0))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlNodeList* get_ChildNodes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNodeList*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E29E0))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlNode* get_PreviousSibling() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNode*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlNode* get_NextSibling() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNode*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlAttributeCollection* get_Attributes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlAttributeCollection*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlDocument* get_OwnerDocument() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlDocument*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E2B20))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlNode* get_FirstChild() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNode*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E2C40))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlNode* get_LastChild() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNode*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E2C70))(this);
  }
  bool get_IsContainer() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlLinkedNode* get_LastNode() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlLinkedNode*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  void set_LastNode(ModdingAPI::Exposed::System::Xml::XmlLinkedNode* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlLinkedNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, value);
  }
  bool AncestorNode(ModdingAPI::Exposed::System::Xml::XmlNode* node) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E2C90))(this, node);
  }
  ModdingAPI::Exposed::System::Xml::XmlNode* RemoveChild(ModdingAPI::Exposed::System::Xml::XmlNode* oldChild) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNode*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E2D00))(this, oldChild);
  }
  ModdingAPI::Exposed::System::Xml::XmlNode* AppendChild(ModdingAPI::Exposed::System::Xml::XmlNode* newChild) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNode*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E30D0))(this, newChild);
  }
  ModdingAPI::Exposed::System::Xml::XmlNode* AppendChildForLoad(ModdingAPI::Exposed::System::Xml::XmlNode* newChild, ModdingAPI::Exposed::System::Xml::XmlDocument* doc) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNode*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlDocument*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E3690))(this, newChild, doc);
  }
  bool IsValidChildType(int32_t type) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this, type);
  }
  bool CanInsertAfter(ModdingAPI::Exposed::System::Xml::XmlNode* newChild, ModdingAPI::Exposed::System::Xml::XmlNode* refChild) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this, newChild, refChild);
  }
  bool get_HasChildNodes() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E3890))(this);
  }
  void CopyChildren(ModdingAPI::Exposed::System::Xml::XmlDocument* doc, ModdingAPI::Exposed::System::Xml::XmlNode* container, bool deep) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlDocument*, ModdingAPI::Exposed::System::Xml::XmlNode*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E38B0))(this, doc, container, deep);
  }
  System_String* get_NamespaceURI() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E3970))(this);
  }
  System_String* get_Prefix() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E39F0))(this);
  }
  bool get_IsReadOnly() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E3A70))(this);
  }
  Il2CppObject* System::ICloneable::Clone() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E3C90))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* System::Collections::IEnumerable::GetEnumerator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E3CB0))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* GetEnumerator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E3E20))(this);
  }
  void AppendChildText(ModdingAPI::Exposed::System::Text::StringBuilder* builder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E3F90))(this, builder);
  }
  System_String* get_InnerText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E40B0))(this);
  }
  void set_InnerText(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E42D0))(this, value);
  }
  void set_InnerXml(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E43D0))(this, value);
  }
  System_String* get_BaseURI() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E4440))(this);
  }
  void RemoveAll() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E4580))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlDocument* get_Document() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlDocument*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E4600))(this);
  }
  System_String* GetPrefixOfNamespace(System_String* namespaceURI) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E4700))(this, namespaceURI);
  }
  System_String* GetPrefixOfNamespaceStrict(System_String* namespaceURI) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E47B0))(this, namespaceURI);
  }
  void SetParent(ModdingAPI::Exposed::System::Xml::XmlNode* node) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E4C60))(this, node);
  }
  void SetParentForLoad(ModdingAPI::Exposed::System::Xml::XmlNode* node) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, node);
  }
  ModdingAPI::Exposed::System::Xml::XmlNode* FindChild(int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNode*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E4DC0))(this, type);
  }
  ModdingAPI::Exposed::System::Xml::XmlNodeChangedEventArgs* GetEventArgs(ModdingAPI::Exposed::System::Xml::XmlNode* node, ModdingAPI::Exposed::System::Xml::XmlNode* oldParent, ModdingAPI::Exposed::System::Xml::XmlNode* newParent, System_String* oldValue, System_String* newValue, int32_t action) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNodeChangedEventArgs*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*, System_String*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E4E40))(this, node, oldParent, newParent, oldValue, newValue, action);
  }
  void BeforeEvent(ModdingAPI::Exposed::System::Xml::XmlNodeChangedEventArgs* args) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNodeChangedEventArgs*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E4FC0))(this, args);
  }
  void AfterEvent(ModdingAPI::Exposed::System::Xml::XmlNodeChangedEventArgs* args) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNodeChangedEventArgs*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E5010))(this, args);
  }
  bool get_IsText() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }

  // Static methods:
  static inline bool HasReadOnlyParent(ModdingAPI::Exposed::System::Xml::XmlNode* n) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E3B90))(n);
  }
  static inline void SplitName(System_String* name, System_String* prefix, System_String* localName) {
    reinterpret_cast<void(__fastcall*)(System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E4CA0))(name, prefix, localName);
  }
  static inline void NestTextNodes(ModdingAPI::Exposed::System::Xml::XmlNode* prevNode, ModdingAPI::Exposed::System::Xml::XmlNode* nextNode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E5060))(prevNode, nextNode);
  }
  static inline void UnnestTextNodes(ModdingAPI::Exposed::System::Xml::XmlNode* prevNode, ModdingAPI::Exposed::System::Xml::XmlNode* nextNode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlNode*, ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8E5080))(prevNode, nextNode);
  }
};
}