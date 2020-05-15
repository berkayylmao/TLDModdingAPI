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


namespace ModdingAPI::Exposed::System::ComponentModel::TypeConverter {
struct __SimplePropertyDescriptor_Il2CppStaticFields {
};

struct __SimplePropertyDescriptor_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_AttributeArray;
  VirtualInvokeData _5_set_AttributeArray;
  VirtualInvokeData _6_get_Attributes;
  VirtualInvokeData _7_get_Name;
  VirtualInvokeData _8_get_NameHashCode;
  VirtualInvokeData _9_get_DisplayName;
  VirtualInvokeData _10_CreateAttributeCollection;
  VirtualInvokeData _11_FillAttributes;
  VirtualInvokeData _12_get_ComponentType;
  VirtualInvokeData _13_get_IsReadOnly;
  VirtualInvokeData _14_get_PropertyType;
};

struct __SimplePropertyDescriptor_Il2CppClass {
  Il2CppClass_1 _1;
  __SimplePropertyDescriptor_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SimplePropertyDescriptor_Il2CppVtbl vtbl;
};

class SimplePropertyDescriptor {
public:
  // Il2Cpp fields:
  __SimplePropertyDescriptor_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* MemberDescriptor_name;
  System_String* MemberDescriptor_displayName;
  int32_t MemberDescriptor_nameHash;
  ModdingAPI::Exposed::System::ComponentModel::AttributeCollection* MemberDescriptor_attributeCollection;
  ModdingAPI::Exposed::System::Attribute_array* MemberDescriptor_attributes;
  ModdingAPI::Exposed::System::Attribute_array* MemberDescriptor_originalAttributes;
  bool MemberDescriptor_attributesFiltered;
  bool MemberDescriptor_attributesFilled;
  int32_t MemberDescriptor_metadataVersion;
  System_String* MemberDescriptor_category;
  System_String* MemberDescriptor_description;
  Il2CppObject* MemberDescriptor_lockCookie;
  ModdingAPI::Exposed::System::ComponentModel::TypeConverter* PropertyDescriptor_converter;
  ModdingAPI::Exposed::System::Object_array* PropertyDescriptor_editors;
  ModdingAPI::Exposed::System::Type_array* PropertyDescriptor_editorTypes;
  int32_t PropertyDescriptor_editorCount;
  ModdingAPI::Exposed::System::Type* componentType;
  ModdingAPI::Exposed::System::Type* propertyType;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Type* componentType, System_String* name, ModdingAPI::Exposed::System::Type* propertyType, ModdingAPI::Exposed::System::Attribute_array* attributes) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter::SimplePropertyDescriptor*, ModdingAPI::Exposed::System::Type*, System_String*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Attribute_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED5330))(this, componentType, name, propertyType, attributes);
  }
  ModdingAPI::Exposed::System::Type* get_ComponentType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter::SimplePropertyDescriptor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x321390))(this);
  }
  bool get_IsReadOnly() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter::SimplePropertyDescriptor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED5380))(this);
  }
  ModdingAPI::Exposed::System::Type* get_PropertyType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter::SimplePropertyDescriptor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307640))(this);
  }
};
}