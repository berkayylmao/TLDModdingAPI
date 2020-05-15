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


namespace ModdingAPI::Exposed::MS::Internal::Xml::Cache {
struct __XPathNodeInfoAtom_Il2CppStaticFields {
};

struct __XPathNodeInfoAtom_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __XPathNodeInfoAtom_Il2CppClass {
  Il2CppClass_1 _1;
  __XPathNodeInfoAtom_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XPathNodeInfoAtom_Il2CppVtbl vtbl;
};

class XPathNodeInfoAtom {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3DDA0;
  static inline    __XPathNodeInfoAtom_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XPathNodeInfoAtom_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XPathNodeInfoAtom_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XPathNodeInfoAtom_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* localName;
  System_String* namespaceUri;
  System_String* prefix;
  System_String* baseUri;
  ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNode_array* pageParent;
  ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNode_array* pageSibling;
  ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNode_array* pageSimilar;
  ModdingAPI::Exposed::System::Xml::XPath::XPathDocument* doc;
  int32_t lineNumBase;
  int32_t linePosBase;
  int32_t hashCode;
  int32_t localNameHash;
  ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodePageInfo* pageInfo;

  // Member methods:
  ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo() {
    return reinterpret_cast<ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodePageInfo*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodeInfoAtom*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3199C0))(this);
  }
  System_String* get_LocalName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodeInfoAtom*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  System_String* get_NamespaceUri() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodeInfoAtom*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  System_String* get_Prefix() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodeInfoAtom*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNode_array* get_SiblingPage() {
    return reinterpret_cast<ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNode_array*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodeInfoAtom*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNode_array* get_ParentPage() {
    return reinterpret_cast<ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNode_array*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodeInfoAtom*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  ModdingAPI::Exposed::System::Xml::XPath::XPathDocument* get_Document() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XPath::XPathDocument*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodeInfoAtom*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319980))(this);
  }
  int32_t get_LineNumberBase() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodeInfoAtom*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319990))(this);
  }
  int32_t get_LinePositionBase() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodeInfoAtom*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3199A0))(this);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodeInfoAtom*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD1FE30))(this);
  }
  bool Equals(Il2CppObject* other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodeInfoAtom*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD1FF50))(this, other);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::Cache::XPathNodeInfoAtom*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD20090))(this);
  }
};
}