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
struct __XmlName_Il2CppStaticFields {
};

struct __XmlName_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _11_get_Validity;
  VirtualInvokeData _12_get_IsDefault;
  VirtualInvokeData _13_get_IsNil;
  VirtualInvokeData _14_get_MemberType;
  VirtualInvokeData _15_get_SchemaType;
  VirtualInvokeData _16_get_SchemaElement;
  VirtualInvokeData _17_get_SchemaAttribute;
  VirtualInvokeData _18_Equals;
};

struct __XmlName_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlName_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlName_Il2CppVtbl vtbl;
};

class XmlName {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C31D68;
  static inline    __XmlName_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlName_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlName_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlName_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* prefix;
  System_String* localName;
  System_String* ns;
  System_String* name;
  int32_t hashCode;
  ModdingAPI::Exposed::System::Xml::XmlDocument* ownerDoc;
  ModdingAPI::Exposed::System::Xml::XmlName* next;

  // Member methods:
  void ::ctor(System_String* prefix, System_String* localName, System_String* ns, int32_t hashCode, ModdingAPI::Exposed::System::Xml::XmlDocument* ownerDoc, ModdingAPI::Exposed::System::Xml::XmlName* next) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*, System_String*, System_String*, System_String*, int32_t, ModdingAPI::Exposed::System::Xml::XmlDocument*, ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8DEE70))(this, prefix, localName, ns, hashCode, ownerDoc, next);
  }
  System_String* get_LocalName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  System_String* get_NamespaceURI() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  System_String* get_Prefix() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  int32_t get_HashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D870))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlDocument* get_OwnerDocument() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlDocument*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8DEEA0))(this);
  }
  int32_t get_Validity() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  bool get_IsDefault() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  bool get_IsNil() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaSimpleType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* get_SchemaType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement* get_SchemaElement() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaElement*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAttribute*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  bool Equals(ModdingAPI::Exposed::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlName*, ModdingAPI::Exposed::System::Xml::Schema::IXmlSchemaInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8DF0D0))(this, schemaInfo);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Xml::XmlName* Create(System_String* prefix, System_String* localName, System_String* ns, int32_t hashCode, ModdingAPI::Exposed::System::Xml::XmlDocument* ownerDoc, ModdingAPI::Exposed::System::Xml::XmlName* next, ModdingAPI::Exposed::System::Xml::Schema::IXmlSchemaInfo* schemaInfo) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlName*(__fastcall*)(System_String*, System_String*, System_String*, int32_t, ModdingAPI::Exposed::System::Xml::XmlDocument*, ModdingAPI::Exposed::System::Xml::XmlName*, ModdingAPI::Exposed::System::Xml::Schema::IXmlSchemaInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8DEAE0))(prefix, localName, ns, hashCode, ownerDoc, next, schemaInfo);
  }
  static inline int32_t GetHashCode(System_String* name) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8DF0E0))(name);
  }
};
}