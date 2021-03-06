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
#include "ModdingAPI.Exposed.System.Runtime.Serialization.StreamingContext.hpp"
#include "ModdingAPI.Exposed.System.Guid.hpp"


namespace ModdingAPI::Exposed::System::Reflection {
struct __Module_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Reflection::TypeFilter* FilterTypeName;
  ModdingAPI::Exposed::System::Reflection::TypeFilter* FilterTypeNameIgnoreCase;
};

struct __Module_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _8_GetObjectData;
  VirtualInvokeData _9_GetModuleVersionId;
  VirtualInvokeData _10_get_Assembly;
  VirtualInvokeData _11_get_ScopeName;
  VirtualInvokeData _12_get_ModuleVersionId;
  VirtualInvokeData _13_IsResource;
  VirtualInvokeData _14_GetCustomAttributes;
  VirtualInvokeData _15_GetCustomAttributes;
  VirtualInvokeData _16_IsDefined;
};

struct __Module_Il2CppClass {
  Il2CppClass_1 _1;
  __Module_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Module_Il2CppVtbl vtbl;
};

class Module {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C72858;
  static inline    __Module_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Module_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Module_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Module_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t _impl;
  ModdingAPI::Exposed::System::Reflection::Assembly* assembly;
  System_String* fqname;
  System_String* name;
  System_String* scopename;
  bool is_resource;
  int32_t token;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void GetObjectData(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF20840))(this, info, context);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  ModdingAPI::Exposed::System::Guid GetModuleVersionId() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF20890))(this);
  }
  System_String* GetGuidInternal() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF20DA0))(this);
  }
  bool Equals(Il2CppObject* o) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA57180))(this, o);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x736090))(this);
  }
  ModdingAPI::Exposed::System::Reflection::Assembly* get_Assembly() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::Assembly*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF20DC0))(this);
  }
  System_String* get_ScopeName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF20E60))(this);
  }
  ModdingAPI::Exposed::System::Guid get_ModuleVersionId() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF20F00))(this);
  }
  bool IsResource() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF210F0))(this);
  }
  ModdingAPI::Exposed::System::Object_array* GetCustomAttributes(bool inherit) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Object_array*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF21190))(this, inherit);
  }
  ModdingAPI::Exposed::System::Object_array* GetCustomAttributes(ModdingAPI::Exposed::System::Type* attributeType, bool inherit) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Object_array*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*, ModdingAPI::Exposed::System::Type*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF21230))(this, attributeType, inherit);
  }
  bool IsDefined(ModdingAPI::Exposed::System::Type* attributeType, bool inherit) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*, ModdingAPI::Exposed::System::Type*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF212D0))(this, attributeType, inherit);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::TypeFilter*> FilterTypeName = __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::TypeFilter*>(
   []() { return &GetStaticClassInstance()->pStaticFields->FilterTypeName; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::TypeFilter*> FilterTypeNameIgnoreCase = __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::TypeFilter*>(
   []() { return &GetStaticClassInstance()->pStaticFields->FilterTypeNameIgnoreCase; }
  );

  // Static methods:
  static inline bool filter_by_type_name(ModdingAPI::Exposed::System::Type* m, Il2CppObject* filterCriteria) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Type*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF208D0))(m, filterCriteria);
  }
  static inline bool filter_by_type_name_ignore_case(ModdingAPI::Exposed::System::Type* m, Il2CppObject* filterCriteria) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Type*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF20A80))(m, filterCriteria);
  }
  static inline ModdingAPI::Exposed::System::Exception* CreateNIE() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xF20FA0))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xF21370))();
  }
};
}