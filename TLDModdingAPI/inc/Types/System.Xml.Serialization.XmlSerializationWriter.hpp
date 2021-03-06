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


namespace ModdingAPI::Exposed::System::Xml::Serialization {
struct __XmlSerializationWriter_Il2CppStaticFields {
};

struct __XmlSerializationWriter_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _65535__ctor;
};

struct __XmlSerializationWriter_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlSerializationWriter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlSerializationWriter_Il2CppVtbl vtbl;
};

class XmlSerializationWriter {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C65A08;
  static inline    __XmlSerializationWriter_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlSerializationWriter_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlSerializationWriter_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlSerializationWriter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Runtime::Serialization::ObjectIDGenerator* idGenerator;
  int32_t qnameCount;
  bool topLevelElement;
  ModdingAPI::Exposed::System::Collections::ArrayList* namespaces;
  ModdingAPI::Exposed::System::Xml::XmlWriter* writer;
  ModdingAPI::Exposed::System::Collections::Queue* referencedElements;
  ModdingAPI::Exposed::System::Collections::Hashtable* callbacks;
  ModdingAPI::Exposed::System::Collections::Hashtable* serializedObjects;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BEB00))(this);
  }
  void Initialize(ModdingAPI::Exposed::System::Xml::XmlWriter* writer, ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializerNamespaces* nss) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, ModdingAPI::Exposed::System::Xml::XmlWriter*, ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializerNamespaces*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BEC60))(this, writer, nss);
  }
  ModdingAPI::Exposed::System::Xml::XmlWriter* get_Writer() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlWriter*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  void AddWriteCallback(ModdingAPI::Exposed::System::Type* type, System_String* typeName, System_String* typeNs, ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriteCallback* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, ModdingAPI::Exposed::System::Type*, System_String*, System_String*, ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriteCallback*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BEFF0))(this, type, typeName, typeNs, callback);
  }
  ModdingAPI::Exposed::System::Exception* CreateUnknownAnyElementException(System_String* name, System_String* ns) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BF280))(this, name, ns);
  }
  ModdingAPI::Exposed::System::Exception* CreateUnknownTypeException(Il2CppObject* o) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BF440))(this, o);
  }
  ModdingAPI::Exposed::System::Exception* CreateUnknownTypeException(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BF480))(this, type);
  }
  System_String* FromXmlQualifiedName(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* xmlQualifiedName) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BF630))(this, xmlQualifiedName);
  }
  System_String* GetId(Il2CppObject* o, bool addToReferencesList) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BF740))(this, o, addToReferencesList);
  }
  bool AlreadyQueued(Il2CppObject* ob) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BF970))(this, ob);
  }
  System_String* GetNamespacePrefix(System_String* ns) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BF9B0))(this, ns);
  }
  System_String* GetQualifiedName(System_String* name, System_String* ns) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BFB40))(this, name, ns);
  }
  void TopLevelElement() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BFDE0))(this);
  }
  void WriteAttribute(System_String* localName, System_String* ns, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BFDF0))(this, localName, ns, value);
  }
  void WriteAttribute(System_String* prefix, System_String* localName, System_String* ns, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BFE70))(this, prefix, localName, ns, value);
  }
  void WriteXmlNode(ModdingAPI::Exposed::System::Xml::XmlNode* node) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, ModdingAPI::Exposed::System::Xml::XmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8BFEF0))(this, node);
  }
  void WriteElementEncoded(ModdingAPI::Exposed::System::Xml::XmlNode* node, System_String* name, System_String* ns, bool isNullable, bool any) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, ModdingAPI::Exposed::System::Xml::XmlNode*, System_String*, System_String*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0060))(this, node, name, ns, isNullable, any);
  }
  void WriteElementLiteral(ModdingAPI::Exposed::System::Xml::XmlNode* node, System_String* name, System_String* ns, bool isNullable, bool any) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, ModdingAPI::Exposed::System::Xml::XmlNode*, System_String*, System_String*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C01D0))(this, node, name, ns, isNullable, any);
  }
  void WriteElementQualifiedName(System_String* localName, System_String* ns, ModdingAPI::Exposed::System::Xml::XmlQualifiedName* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0340))(this, localName, ns, value);
  }
  void WriteElementQualifiedName(System_String* localName, System_String* ns, ModdingAPI::Exposed::System::Xml::XmlQualifiedName* value, ModdingAPI::Exposed::System::Xml::XmlQualifiedName* xsiType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0360))(this, localName, ns, value, xsiType);
  }
  void WriteElementString(System_String* localName, System_String* ns, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0500))(this, localName, ns, value);
  }
  void WriteElementString(System_String* localName, System_String* ns, System_String* value, ModdingAPI::Exposed::System::Xml::XmlQualifiedName* xsiType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, System_String*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0520))(this, localName, ns, value, xsiType);
  }
  void WriteEndElement() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0710))(this);
  }
  void WriteEndElement(Il2CppObject* o) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0740))(this, o);
  }
  void WriteNamespaceDeclarations(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializerNamespaces* xmlns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializerNamespaces*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C07A0))(this, xmlns);
  }
  void WriteNullableQualifiedNameEncoded(System_String* name, System_String* ns, ModdingAPI::Exposed::System::Xml::XmlQualifiedName* value, ModdingAPI::Exposed::System::Xml::XmlQualifiedName* xsiType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0B30))(this, name, ns, value, xsiType);
  }
  void WriteNullableQualifiedNameLiteral(System_String* name, System_String* ns, ModdingAPI::Exposed::System::Xml::XmlQualifiedName* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0C30))(this, name, ns, value);
  }
  void WriteNullableStringEncoded(System_String* name, System_String* ns, System_String* value, ModdingAPI::Exposed::System::Xml::XmlQualifiedName* xsiType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, System_String*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0D30))(this, name, ns, value, xsiType);
  }
  void WriteNullableStringLiteral(System_String* name, System_String* ns, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0D50))(this, name, ns, value);
  }
  void WriteNullTagEncoded(System_String* name, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0D80))(this, name, ns);
  }
  void WriteNullTagLiteral(System_String* name, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0ED0))(this, name, ns);
  }
  void WritePotentiallyReferencingElement(System_String* n, System_String* ns, Il2CppObject* o, ModdingAPI::Exposed::System::Type* ambientType, bool suppressReference, bool isNullable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, Il2CppObject*, ModdingAPI::Exposed::System::Type*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C1020))(this, n, ns, o, ambientType, suppressReference, isNullable);
  }
  void WriteReferencedElements() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C1540))(this);
  }
  bool IsPrimitiveArray(ModdingAPI::Exposed::System::Xml::Serialization::TypeData* td) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C17C0))(this, td);
  }
  void WriteArray(Il2CppObject* o, ModdingAPI::Exposed::System::Xml::Serialization::TypeData* td) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, Il2CppObject*, ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C18F0))(this, o, td);
  }
  void WriteReferencingElement(System_String* n, System_String* ns, Il2CppObject* o, bool isNullable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C1C50))(this, n, ns, o, isNullable);
  }
  void CheckReferenceQueue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C1E50))(this);
  }
  void WriteSerializable(ModdingAPI::Exposed::System::Xml::Serialization::IXmlSerializable* serializable, System_String* name, System_String* ns, bool isNullable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, ModdingAPI::Exposed::System::Xml::Serialization::IXmlSerializable*, System_String*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C1FD0))(this, serializable, name, ns, isNullable);
  }
  void WriteSerializable(ModdingAPI::Exposed::System::Xml::Serialization::IXmlSerializable* serializable, System_String* name, System_String* ns, bool isNullable, bool wrapped) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, ModdingAPI::Exposed::System::Xml::Serialization::IXmlSerializable*, System_String*, System_String*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C2000))(this, serializable, name, ns, isNullable, wrapped);
  }
  void WriteStartDocument() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C2140))(this);
  }
  void WriteStartElement(System_String* name, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C21A0))(this, name, ns);
  }
  void WriteStartElement(System_String* name, System_String* ns, bool writePrefixed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C21D0))(this, name, ns, writePrefixed);
  }
  void WriteStartElement(System_String* name, System_String* ns, Il2CppObject* o) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C2200))(this, name, ns, o);
  }
  void WriteStartElement(System_String* name, System_String* ns, Il2CppObject* o, bool writePrefixed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C2230))(this, name, ns, o, writePrefixed);
  }
  void WriteStartElement(System_String* name, System_String* ns, Il2CppObject* o, bool writePrefixed, ModdingAPI::Exposed::System::Collections::ICollection* namespaces) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, Il2CppObject*, bool, ModdingAPI::Exposed::System::Collections::ICollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C2260))(this, name, ns, o, writePrefixed, namespaces);
  }
  void WriteTypedPrimitive(System_String* name, System_String* ns, Il2CppObject* o, bool xsiType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*, Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C2890))(this, name, ns, o, xsiType);
  }
  void WriteValue(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C2C10))(this, value);
  }
  void WriteXmlAttribute(ModdingAPI::Exposed::System::Xml::XmlNode* node, Il2CppObject* container) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, ModdingAPI::Exposed::System::Xml::XmlNode*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C2C50))(this, node, container);
  }
  void WriteXsiType(System_String* name, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializationWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C2F50))(this, name, ns);
  }
};
}