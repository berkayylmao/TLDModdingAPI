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


namespace ModdingAPI::Exposed::Newtonsoft::Json::Converters {
struct __XmlDocumentTypeWrapper_Il2CppStaticFields {
};

struct __XmlDocumentTypeWrapper_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_NodeType;
  VirtualInvokeData _6_get_ChildNodes;
  VirtualInvokeData _7_get_Attributes;
  VirtualInvokeData _8_get_ParentNode;
  VirtualInvokeData _9_get_Value;
  VirtualInvokeData _10_AppendChild;
  VirtualInvokeData _11_get_NamespaceUri;
  VirtualInvokeData _12_get_WrappedNode;
  VirtualInvokeData _13_get_LocalName;
  VirtualInvokeData _14_set_Value;
  VirtualInvokeData _15_get_Name;
  VirtualInvokeData _16_get_System;
  VirtualInvokeData _17_get_Public;
  VirtualInvokeData _18_get_InternalSubset;
};

struct __XmlDocumentTypeWrapper_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlDocumentTypeWrapper_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlDocumentTypeWrapper_Il2CppVtbl vtbl;
};

class XmlDocumentTypeWrapper {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6EC88;
  static inline    __XmlDocumentTypeWrapper_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlDocumentTypeWrapper_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlDocumentTypeWrapper_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlDocumentTypeWrapper_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::XmlNode* XmlNodeWrapper__node;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* XmlNodeWrapper__childNodes;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* XmlNodeWrapper__attributes;
  ModdingAPI::Exposed::System::Xml::XmlDocumentType* _documentType;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Xml::XmlDocumentType* documentType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*, ModdingAPI::Exposed::System::Xml::XmlDocumentType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9DE430))(this, documentType);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9DE4A0))(this);
  }
  System_String* get_System() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9DE480))(this);
  }
  System_String* get_Public() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9DE460))(this);
  }
  System_String* get_InternalSubset() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9DE4D0))(this);
  }
  System_String* get_LocalName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9DE4F0))(this);
  }
};
}