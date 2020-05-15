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
struct __XmlArrayAttribute_Il2CppStaticFields {
};

struct __XmlArrayAttribute_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_TypeId;
  VirtualInvokeData _5_Match;
  VirtualInvokeData _6_IsDefaultAttribute;
};

struct __XmlArrayAttribute_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlArrayAttribute_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlArrayAttribute_Il2CppVtbl vtbl;
};

class XmlArrayAttribute {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2A5B8;
  static inline    __XmlArrayAttribute_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlArrayAttribute_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlArrayAttribute_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlArrayAttribute_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* elementName;
  int32_t form;
  bool isNullable;
  System_String* ns;
  int32_t order;

  // Member methods:
  System_String* get_ElementName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlArrayAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8B10E0))(this);
  }
  int32_t get_Form() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlArrayAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FED20))(this);
  }
  bool get_IsNullable() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlArrayAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310EB0))(this);
  }
  System_String* get_Namespace() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlArrayAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  int32_t get_Order() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlArrayAttribute*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F810))(this);
  }
};
}