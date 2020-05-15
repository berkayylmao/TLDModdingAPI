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
struct __XmlSchemaNumericFacet_Il2CppStaticFields {
};

struct __XmlSchemaNumericFacet_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_OnAdd;
  VirtualInvokeData _5_OnRemove;
  VirtualInvokeData _6_OnClear;
  VirtualInvokeData _7_get_IdAttribute;
  VirtualInvokeData _8_set_IdAttribute;
  VirtualInvokeData _9_SetUnhandledAttributes;
  VirtualInvokeData _10_AddAnnotation;
  VirtualInvokeData _11_get_NameAttribute;
  VirtualInvokeData _12_set_NameAttribute;
  VirtualInvokeData _13_Clone;
  VirtualInvokeData _14_get_IsFixed;
  VirtualInvokeData _15_set_IsFixed;
};

struct __XmlSchemaNumericFacet_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlSchemaNumericFacet_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlSchemaNumericFacet_Il2CppVtbl vtbl;
};

class XmlSchemaNumericFacet {
public:
  // Il2Cpp fields:
  __XmlSchemaNumericFacet_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t XmlSchemaObject_lineNum;
  int32_t XmlSchemaObject_linePos;
  System_String* XmlSchemaObject_sourceUri;
  ModdingAPI::Exposed::System::Xml::Serialization::XmlSerializerNamespaces* XmlSchemaObject_namespaces;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaObject* XmlSchemaObject_parent;
  bool XmlSchemaObject_isProcessing;
  System_String* XmlSchemaAnnotated_id;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaAnnotation* XmlSchemaAnnotated_annotation;
  ModdingAPI::Exposed::System::Xml::XmlAttribute_array* XmlSchemaAnnotated_moreAttributes;
  System_String* XmlSchemaFacet_value;
  bool XmlSchemaFacet_isFixed;
  int32_t XmlSchemaFacet_facetType;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaNumericFacet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
};
}