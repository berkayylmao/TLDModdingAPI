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
struct __XContainerWrapper_Il2CppStaticFields {
};

struct __XContainerWrapper_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _12_get_WrappedNode;
  VirtualInvokeData _13_get_NodeType;
  VirtualInvokeData _14_get_LocalName;
  VirtualInvokeData _15_get_ChildNodes;
  VirtualInvokeData _16_get_Attributes;
  VirtualInvokeData _17_get_ParentNode;
  VirtualInvokeData _18_get_Value;
  VirtualInvokeData _19_AppendChild;
  VirtualInvokeData _20_get_NamespaceUri;
};

struct __XContainerWrapper_Il2CppClass {
  Il2CppClass_1 _1;
  __XContainerWrapper_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XContainerWrapper_Il2CppVtbl vtbl;
};

class XContainerWrapper {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6F0B0;
  static inline    __XContainerWrapper_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XContainerWrapper_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XContainerWrapper_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XContainerWrapper_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::Linq::XObject* XObjectWrapper__xmlObject;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _childNodes;

  // Member methods:
  ModdingAPI::Exposed::System::Xml::Linq::XContainer* get_Container() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Linq::XContainer*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::XContainerWrapper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D9F40))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Xml::Linq::XContainer* container) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::XContainerWrapper*, ModdingAPI::Exposed::System::Xml::Linq::XContainer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9DA010))(this, container);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* get_ChildNodes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::XContainerWrapper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9DA0C0))(this);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode() {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Converters::IXmlNode*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::XContainerWrapper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9DA3C0))(this);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Converters::IXmlNode* AppendChild(ModdingAPI::Exposed::Newtonsoft::Json::Converters::IXmlNode* newChild) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Converters::IXmlNode*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::XContainerWrapper*, ModdingAPI::Exposed::Newtonsoft::Json::Converters::IXmlNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9DAE90))(this, newChild);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::Newtonsoft::Json::Converters::IXmlNode* WrapNode(ModdingAPI::Exposed::System::Xml::Linq::XObject* node) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Converters::IXmlNode*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Linq::XObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9DA420))(node);
  }
};
}