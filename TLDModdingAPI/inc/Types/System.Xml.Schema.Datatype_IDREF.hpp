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
struct __Datatype_IDREF_Il2CppStaticFields {
};

struct __Datatype_IDREF_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_ValueType;
  VirtualInvokeData _5_get_TokenizedType;
  VirtualInvokeData _6_ParseValue;
  VirtualInvokeData _7_get_Variety;
  VirtualInvokeData _8_get_TypeCode;
  VirtualInvokeData _9_IsDerivedFrom;
  VirtualInvokeData _10_get_HasLexicalFacets;
  VirtualInvokeData _11_get_HasValueFacets;
  VirtualInvokeData _12_get_ValueConverter;
  VirtualInvokeData _13_get_Restriction;
  VirtualInvokeData _14_Compare;
  VirtualInvokeData _15_ParseValue;
  VirtualInvokeData _16_TryParseValue;
  VirtualInvokeData _17_TryParseValue;
  VirtualInvokeData _18_get_FacetsChecker;
  VirtualInvokeData _19_get_BuiltInWhitespaceFacet;
  VirtualInvokeData _20_DeriveByRestriction;
  VirtualInvokeData _21_DeriveByList;
  VirtualInvokeData _22_VerifySchemaValid;
  VirtualInvokeData _23_IsEqual;
  VirtualInvokeData _24_IsComparable;
  VirtualInvokeData _25_CreateValueConverter;
  VirtualInvokeData _26_get_ListValueType;
  VirtualInvokeData _27_get_ValidRestrictionFlags;
};

struct __Datatype_IDREF_Il2CppClass {
  Il2CppClass_1 _1;
  __Datatype_IDREF_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Datatype_IDREF_Il2CppVtbl vtbl;
};

class Datatype_IDREF {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C53068;
  static inline    __Datatype_IDREF_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Datatype_IDREF_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Datatype_IDREF_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Datatype_IDREF_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t DatatypeImplementation_variety;
  ModdingAPI::Exposed::System::Xml::Schema::RestrictionFacets* DatatypeImplementation_restriction;
  ModdingAPI::Exposed::System::Xml::Schema::DatatypeImplementation* DatatypeImplementation_baseType;
  ModdingAPI::Exposed::System::Xml::Schema::XmlValueConverter* DatatypeImplementation_valueConverter;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaType* DatatypeImplementation_parentSchemaType;

  // Member methods:
  int32_t get_TypeCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::Datatype_IDREF*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD69A70))(this);
  }
  int32_t get_TokenizedType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::Datatype_IDREF*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3201C0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::Datatype_IDREF*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD69A50))(this);
  }
};
}