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
struct __SchemaEntity_Il2CppStaticFields {
};

struct __SchemaEntity_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_Xml_IDtdEntityInfo_get_Name;
  VirtualInvokeData _5_System_Xml_IDtdEntityInfo_get_IsExternal;
  VirtualInvokeData _6_System_Xml_IDtdEntityInfo_get_IsDeclaredInExternal;
  VirtualInvokeData _7_System_Xml_IDtdEntityInfo_get_IsUnparsedEntity;
  VirtualInvokeData _8_System_Xml_IDtdEntityInfo_get_IsParameterEntity;
  VirtualInvokeData _9_System_Xml_IDtdEntityInfo_get_BaseUriString;
  VirtualInvokeData _10_System_Xml_IDtdEntityInfo_get_DeclaredUriString;
  VirtualInvokeData _11_System_Xml_IDtdEntityInfo_get_SystemId;
  VirtualInvokeData _12_System_Xml_IDtdEntityInfo_get_PublicId;
  VirtualInvokeData _13_System_Xml_IDtdEntityInfo_get_Text;
  VirtualInvokeData _14_System_Xml_IDtdEntityInfo_get_LineNumber;
  VirtualInvokeData _15_System_Xml_IDtdEntityInfo_get_LinePosition;
};

struct __SchemaEntity_Il2CppClass {
  Il2CppClass_1 _1;
  __SchemaEntity_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SchemaEntity_Il2CppVtbl vtbl;
};

class SchemaEntity {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C70A58;
  static inline    __SchemaEntity_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SchemaEntity_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SchemaEntity_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SchemaEntity_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* qname;
  System_String* url;
  System_String* pubid;
  System_String* text;
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* ndata;
  int32_t lineNumber;
  int32_t linePosition;
  bool isParameter;
  bool isExternal;
  bool parsingInProgress;
  bool isDeclaredInExternal;
  System_String* baseURI;
  System_String* declaredURI;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* qname, bool isParameter) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C2580))(this, qname, isParameter);
  }
  System_String* System::Xml::IDtdEntityInfo::get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48B2F0))(this);
  }
  bool System::Xml::IDtdEntityInfo::get_IsExternal() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DE430))(this);
  }
  bool System::Xml::IDtdEntityInfo::get_IsDeclaredInExternal() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C2650))(this);
  }
  bool System::Xml::IDtdEntityInfo::get_IsUnparsedEntity() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C2660))(this);
  }
  bool System::Xml::IDtdEntityInfo::get_IsParameterEntity() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DE420))(this);
  }
  System_String* System::Xml::IDtdEntityInfo::get_BaseUriString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C26B0))(this);
  }
  System_String* System::Xml::IDtdEntityInfo::get_DeclaredUriString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C2740))(this);
  }
  System_String* System::Xml::IDtdEntityInfo::get_SystemId() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  System_String* System::Xml::IDtdEntityInfo::get_PublicId() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  System_String* System::Xml::IDtdEntityInfo::get_Text() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  int32_t System::Xml::IDtdEntityInfo::get_LineNumber() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8A0))(this);
  }
  int32_t System::Xml::IDtdEntityInfo::get_LinePosition() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8C0))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* get_Name() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlQualifiedName*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  System_String* get_Url() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void set_Url(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C28D0))(this, value);
  }
  System_String* get_Pubid() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  void set_Pubid(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310F00))(this, value);
  }
  bool get_IsExternal() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DE430))(this);
  }
  void set_IsExternal(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C28E0))(this, value);
  }
  bool get_DeclaredInExternal() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C2650))(this);
  }
  void set_DeclaredInExternal(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C28F0))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::XmlQualifiedName* get_NData() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlQualifiedName*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  void set_NData(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A410))(this, value);
  }
  System_String* get_Text() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  void set_Text(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C2900))(this, value);
  }
  int32_t get_Line() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8A0))(this);
  }
  void set_Line(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8B0))(this, value);
  }
  int32_t get_Pos() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8C0))(this);
  }
  void set_Pos(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8D0))(this, value);
  }
  System_String* get_BaseURI() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C2910))(this);
  }
  void set_BaseURI(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A430))(this, value);
  }
  bool get_ParsingInProgress() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C29A0))(this);
  }
  void set_ParsingInProgress(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C29B0))(this, value);
  }
  System_String* get_DeclaredURI() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C29C0))(this);
  }
  void set_DeclaredURI(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SchemaEntity*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A450))(this, value);
  }

  // Static methods:
  static inline bool IsPredefinedEntity(System_String* n) {
    return reinterpret_cast<bool(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C2750))(n);
  }
};
}