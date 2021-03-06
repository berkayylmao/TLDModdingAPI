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
struct __StringFacetsChecker_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Text::RegularExpressions::Regex* languagePattern;
};

struct __StringFacetsChecker_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CheckLexicalFacets;
  VirtualInvokeData _5_CheckValueFacets;
  VirtualInvokeData _6_CheckValueFacets;
  VirtualInvokeData _7_CheckValueFacets;
  VirtualInvokeData _8_CheckValueFacets;
  VirtualInvokeData _9_CheckValueFacets;
  VirtualInvokeData _10_CheckValueFacets;
  VirtualInvokeData _11_CheckValueFacets;
  VirtualInvokeData _12_CheckValueFacets;
  VirtualInvokeData _13_CheckValueFacets;
  VirtualInvokeData _14_CheckValueFacets;
  VirtualInvokeData _15_CheckValueFacets;
  VirtualInvokeData _16_CheckValueFacets;
  VirtualInvokeData _17_MatchEnumeration;
  VirtualInvokeData _18_ConstructRestriction;
};

struct __StringFacetsChecker_Il2CppClass {
  Il2CppClass_1 _1;
  __StringFacetsChecker_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StringFacetsChecker_Il2CppVtbl vtbl;
};

class StringFacetsChecker {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C38AC0;
  static inline    __StringFacetsChecker_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __StringFacetsChecker_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__StringFacetsChecker_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __StringFacetsChecker_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  ModdingAPI::Exposed::System::Exception* CheckValueFacets(Il2CppObject* value, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* datatype) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::StringFacetsChecker*, Il2CppObject*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CD2E0))(this, value, datatype);
  }
  ModdingAPI::Exposed::System::Exception* CheckValueFacets(System_String* value, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* datatype) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::StringFacetsChecker*, System_String*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CD370))(this, value, datatype);
  }
  ModdingAPI::Exposed::System::Exception* CheckValueFacets(System_String* value, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* datatype, bool verifyUri) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::StringFacetsChecker*, System_String*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CD390))(this, value, datatype, verifyUri);
  }
  bool MatchEnumeration(Il2CppObject* value, ModdingAPI::Exposed::System::Collections::ArrayList* enumeration, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* datatype) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::StringFacetsChecker*, Il2CppObject*, ModdingAPI::Exposed::System::Collections::ArrayList*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CD8E0))(this, value, enumeration, datatype);
  }
  bool MatchEnumeration(System_String* value, ModdingAPI::Exposed::System::Collections::ArrayList* enumeration, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype* datatype) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::StringFacetsChecker*, System_String*, ModdingAPI::Exposed::System::Collections::ArrayList*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaDatatype*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CD970))(this, value, enumeration, datatype);
  }
  ModdingAPI::Exposed::System::Exception* CheckBuiltInFacets(System_String* s, int32_t typeCode, bool verifyUri) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::StringFacetsChecker*, System_String*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CDB80))(this, s, typeCode, verifyUri);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::StringFacetsChecker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Text::RegularExpressions::Regex*> languagePattern = __CppStaticProperty<ModdingAPI::Exposed::System::Text::RegularExpressions::Regex*>(
   []() { return &GetStaticClassInstance()->pStaticFields->languagePattern; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Text::RegularExpressions::Regex* get_LanguagePattern() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::RegularExpressions::Regex*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CD150))();
  }
};
}