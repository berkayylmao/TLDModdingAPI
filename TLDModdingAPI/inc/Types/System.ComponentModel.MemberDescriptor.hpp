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


namespace ModdingAPI::Exposed::System::ComponentModel {
struct __MemberDescriptor_Il2CppStaticFields {
};

struct __MemberDescriptor_Il2CppVtbl {
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
};

struct __MemberDescriptor_Il2CppClass {
  Il2CppClass_1 _1;
  __MemberDescriptor_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MemberDescriptor_Il2CppVtbl vtbl;
};

class MemberDescriptor {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C78800;
  static inline    __MemberDescriptor_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MemberDescriptor_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MemberDescriptor_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MemberDescriptor_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* name;
  System_String* displayName;
  int32_t nameHash;
  ModdingAPI::Exposed::System::ComponentModel::AttributeCollection* attributeCollection;
  ModdingAPI::Exposed::System::Attribute_array* attributes;
  ModdingAPI::Exposed::System::Attribute_array* originalAttributes;
  bool attributesFiltered;
  bool attributesFilled;
  int32_t metadataVersion;
  System_String* category;
  System_String* description;
  Il2CppObject* lockCookie;

  // Member methods:
  void ::ctor(System_String* name, ModdingAPI::Exposed::System::Attribute_array* attributes) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*, System_String*, ModdingAPI::Exposed::System::Attribute_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBDB60))(this, name, attributes);
  }
  void ::ctor(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor* oldMemberDescriptor, ModdingAPI::Exposed::System::Attribute_array* newAttributes) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*, ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*, ModdingAPI::Exposed::System::Attribute_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBDD40))(this, oldMemberDescriptor, newAttributes);
  }
  ModdingAPI::Exposed::System::Attribute_array* get_AttributeArray() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Attribute_array*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBE2A0))(this);
  }
  void set_AttributeArray(ModdingAPI::Exposed::System::Attribute_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*, ModdingAPI::Exposed::System::Attribute_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBE2D0))(this, value);
  }
  ModdingAPI::Exposed::System::ComponentModel::AttributeCollection* get_Attributes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::AttributeCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBE3C0))(this);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBE4E0))(this);
  }
  int32_t get_NameHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x37AAE0))(this);
  }
  System_String* get_DisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBE570))(this);
  }
  void CheckAttributesValid() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBE6E0))(this);
  }
  ModdingAPI::Exposed::System::ComponentModel::AttributeCollection* CreateAttributeCollection() {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::AttributeCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBE7A0))(this);
  }
  bool Equals(Il2CppObject* obj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBE900))(this, obj);
  }
  void FillAttributes(ModdingAPI::Exposed::System::Collections::IList* attributeList) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*, ModdingAPI::Exposed::System::Collections::IList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBEC10))(this, attributeList);
  }
  void FilterAttributesIfNeeded() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBED80))(this);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::MemberDescriptor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x37AAE0))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Reflection::MethodInfo* FindMethod(ModdingAPI::Exposed::System::Type* componentClass, System_String* name, ModdingAPI::Exposed::System::Type_array* args, ModdingAPI::Exposed::System::Type* returnType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MethodInfo*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*, ModdingAPI::Exposed::System::Type_array*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBF470))(componentClass, name, args, returnType);
  }
  static inline ModdingAPI::Exposed::System::Reflection::MethodInfo* FindMethod(ModdingAPI::Exposed::System::Type* componentClass, System_String* name, ModdingAPI::Exposed::System::Type_array* args, ModdingAPI::Exposed::System::Type* returnType, bool publicOnly) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MethodInfo*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*, ModdingAPI::Exposed::System::Type_array*, ModdingAPI::Exposed::System::Type*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBF500))(componentClass, name, args, returnType, publicOnly);
  }
  static inline ModdingAPI::Exposed::System::ComponentModel::ISite* GetSite(Il2CppObject* component) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::ISite*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBF5D0))(component);
  }
};
}