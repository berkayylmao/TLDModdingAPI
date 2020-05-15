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
struct __XmlTypeMapMemberList_Il2CppStaticFields {
};

struct __XmlTypeMapMemberList_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __XmlTypeMapMemberList_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlTypeMapMemberList_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlTypeMapMemberList_Il2CppVtbl vtbl;
};

class XmlTypeMapMemberList {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C64C90;
  static inline    XmlTypeMapMemberList* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2A260;
  static inline    __XmlTypeMapMemberList_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline XmlTypeMapMemberList* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (XmlTypeMapMemberList**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __XmlTypeMapMemberList_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlTypeMapMemberList_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlTypeMapMemberList_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* XmlTypeMapMember__name;
  int32_t XmlTypeMapMember__index;
  int32_t XmlTypeMapMember__globalIndex;
  int32_t XmlTypeMapMember__specifiedGlobalIndex;
  ModdingAPI::Exposed::System::Xml::Serialization::TypeData* XmlTypeMapMember__typeData;
  ModdingAPI::Exposed::System::Reflection::MemberInfo* XmlTypeMapMember__member;
  ModdingAPI::Exposed::System::Reflection::MemberInfo* XmlTypeMapMember__specifiedMember;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* XmlTypeMapMember__shouldSerialize;
  Il2CppObject* XmlTypeMapMember__defaultValue;
  int32_t XmlTypeMapMember__flags;
  ModdingAPI::Exposed::System::Xml::Serialization::XmlTypeMapElementInfoList* XmlTypeMapMemberElement__elementInfo;
  System_String* XmlTypeMapMemberElement__choiceMember;
  bool XmlTypeMapMemberElement__isTextCollector;
  ModdingAPI::Exposed::System::Xml::Serialization::TypeData* XmlTypeMapMemberElement__choiceTypeData;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlTypeMapMemberList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B2B90))(this);
  }
};
}