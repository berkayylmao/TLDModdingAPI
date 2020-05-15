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
struct __XmlDeclaration_Il2CppStaticFields {
};

struct __XmlDeclaration_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_ICloneable_Clone;
  VirtualInvokeData _5_System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData _6_get_Name;
  VirtualInvokeData _7_get_Value;
  VirtualInvokeData _8_set_Value;
  VirtualInvokeData _9_get_NodeType;
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
  VirtualInvokeData _27_CloneNode;
  VirtualInvokeData _28_CopyChildren;
  VirtualInvokeData _29_get_NamespaceURI;
  VirtualInvokeData _30_get_Prefix;
  VirtualInvokeData _31_get_LocalName;
  VirtualInvokeData _32_get_IsReadOnly;
  VirtualInvokeData _33_get_InnerText;
  VirtualInvokeData _34_set_InnerText;
  VirtualInvokeData _35_set_InnerXml;
  VirtualInvokeData _36_get_BaseURI;
  VirtualInvokeData _37_WriteTo;
  VirtualInvokeData _38_WriteContentTo;
  VirtualInvokeData _39_RemoveAll;
  VirtualInvokeData _40_GetPrefixOfNamespace;
  VirtualInvokeData _41_SetParent;
  VirtualInvokeData _42_SetParentForLoad;
  VirtualInvokeData _43_FindChild;
  VirtualInvokeData _44_GetEventArgs;
  VirtualInvokeData _45_BeforeEvent;
  VirtualInvokeData _46_AfterEvent;
  VirtualInvokeData _47_get_IsText;
};

struct __XmlDeclaration_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlDeclaration_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlDeclaration_Il2CppVtbl vtbl;
};

class XmlDeclaration {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C32828;
  static inline    __XmlDeclaration_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlDeclaration_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlDeclaration_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlDeclaration_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::XmlNode* parentNode;
  ModdingAPI::Exposed::System::Xml::XmlLinkedNode* next;
  System_String* version;
  System_String* encoding;
  System_String* standalone;

  // Member methods:
  void ::ctor(System_String* version, System_String* encoding, System_String* standalone, ModdingAPI::Exposed::System::Xml::XmlDocument* doc) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*, System_String*, System_String*, System_String*, ModdingAPI::Exposed::System::Xml::XmlDocument*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CC1A0))(this, version, encoding, standalone, doc);
  }
  System_String* get_Version() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  void set_Version(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310F00))(this, value);
  }
  System_String* get_Encoding() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  void set_Encoding(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CC390))(this, value);
  }
  System_String* get_Standalone() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  void set_Standalone(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CC440))(this, value);
  }
  System_String* get_Value() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9BE1C0))(this);
  }
  void set_Value(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9BE1E0))(this, value);
  }
  System_String* get_InnerText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CC5C0))(this);
  }
  void set_InnerText(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CC800))(this, value);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CC9B0))(this);
  }
  System_String* get_LocalName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CCA30))(this);
  }
  int32_t get_NodeType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CCA50))(this);
  }
  ModdingAPI::Exposed::System::Xml::XmlNode* CloneNode(bool deep) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNode*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CCA60))(this, deep);
  }
  void WriteTo(ModdingAPI::Exposed::System::Xml::XmlWriter* w) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*, ModdingAPI::Exposed::System::Xml::XmlWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CCAB0))(this, w);
  }
  void WriteContentTo(ModdingAPI::Exposed::System::Xml::XmlWriter* w) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*, ModdingAPI::Exposed::System::Xml::XmlWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, w);
  }
  bool IsValidXmlVersion(System_String* ver) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDeclaration*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CCB20))(this, ver);
  }
};
}