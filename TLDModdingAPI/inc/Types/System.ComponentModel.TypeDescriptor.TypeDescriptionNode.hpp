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


namespace ModdingAPI::Exposed::System::ComponentModel::TypeDescriptor {
struct __TypeDescriptionNode_Il2CppStaticFields {
};

struct __TypeDescriptionNode_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CreateInstance;
  VirtualInvokeData _5_GetCache;
  VirtualInvokeData _6_GetExtendedTypeDescriptor;
  VirtualInvokeData _7_GetExtenderProviders;
  VirtualInvokeData _8_GetFullComponentName;
  VirtualInvokeData _9_GetReflectionType;
  VirtualInvokeData _10_GetTypeDescriptor;
};

struct __TypeDescriptionNode_Il2CppClass {
  Il2CppClass_1 _1;
  __TypeDescriptionNode_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TypeDescriptionNode_Il2CppVtbl vtbl;
};

class TypeDescriptionNode {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3D1E0;
  static inline    __TypeDescriptionNode_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TypeDescriptionNode_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TypeDescriptionNode_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TypeDescriptionNode_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::ComponentModel::TypeDescriptionProvider* TypeDescriptionProvider__parent;
  ModdingAPI::Exposed::System::ComponentModel::TypeDescriptionProvider::EmptyCustomTypeDescriptor* TypeDescriptionProvider__emptyDescriptor;
  ModdingAPI::Exposed::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* Next;
  ModdingAPI::Exposed::System::ComponentModel::TypeDescriptionProvider* Provider;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::ComponentModel::TypeDescriptionProvider* provider) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*, ModdingAPI::Exposed::System::ComponentModel::TypeDescriptionProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110C0))(this, provider);
  }
  Il2CppObject* CreateInstance(ModdingAPI::Exposed::System::IServiceProvider* provider, ModdingAPI::Exposed::System::Type* objectType, ModdingAPI::Exposed::System::Type_array* argTypes, ModdingAPI::Exposed::System::Object_array* args) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*, ModdingAPI::Exposed::System::IServiceProvider*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type_array*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC147B0))(this, provider, objectType, argTypes, args);
  }
  ModdingAPI::Exposed::System::Collections::IDictionary* GetCache(Il2CppObject* instance) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IDictionary*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC14970))(this, instance);
  }
  ModdingAPI::Exposed::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(Il2CppObject* instance) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::ICustomTypeDescriptor*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC14A50))(this, instance);
  }
  ModdingAPI::Exposed::System::ComponentModel::IExtenderProvider_array* GetExtenderProviders(Il2CppObject* instance) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::IExtenderProvider_array*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC14B30))(this, instance);
  }
  System_String* GetFullComponentName(Il2CppObject* component) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC14C10))(this, component);
  }
  ModdingAPI::Exposed::System::Type* GetReflectionType(ModdingAPI::Exposed::System::Type* objectType, Il2CppObject* instance) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*, ModdingAPI::Exposed::System::Type*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC14CF0))(this, objectType, instance);
  }
  ModdingAPI::Exposed::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(ModdingAPI::Exposed::System::Type* objectType, Il2CppObject* instance) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::ICustomTypeDescriptor*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*, ModdingAPI::Exposed::System::Type*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC14DF0))(this, objectType, instance);
  }
};
}