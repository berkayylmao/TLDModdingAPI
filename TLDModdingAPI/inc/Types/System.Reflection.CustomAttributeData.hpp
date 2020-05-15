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


namespace ModdingAPI::Exposed::System::Reflection {
struct __CustomAttributeData_Il2CppStaticFields {
};

struct __CustomAttributeData_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_Constructor;
  VirtualInvokeData _5_get_ConstructorArguments;
  VirtualInvokeData _6_get_NamedArguments;
};

struct __CustomAttributeData_Il2CppClass {
  Il2CppClass_1 _1;
  __CustomAttributeData_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CustomAttributeData_Il2CppVtbl vtbl;
};

class CustomAttributeData {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2DE78;
  static inline    __CustomAttributeData_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CustomAttributeData_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CustomAttributeData_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CustomAttributeData_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Reflection::ConstructorInfo* ctorInfo;
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* ctorArgs;
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* namedArgs;
  ModdingAPI::Exposed::System::Reflection::CustomAttributeData::LazyCAttrData* lazyData;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::CustomAttributeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Reflection::ConstructorInfo* ctorInfo, ModdingAPI::Exposed::System::Reflection::Assembly* assembly, intptr_t data, uint32_t data_length) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::CustomAttributeData*, ModdingAPI::Exposed::System::Reflection::ConstructorInfo*, ModdingAPI::Exposed::System::Reflection::Assembly*, intptr_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF6330))(this, ctorInfo, assembly, data, data_length);
  }
  void ResolveArguments() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::CustomAttributeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF64E0))(this);
  }
  ModdingAPI::Exposed::System::Reflection::ConstructorInfo* get_Constructor() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::ConstructorInfo*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::CustomAttributeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* get_ConstructorArguments() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::CustomAttributeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF6610))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* get_NamedArguments() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::CustomAttributeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF6630))(this);
  }
  ModdingAPI::Exposed::System::Type* get_AttributeType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::CustomAttributeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D1140))(this);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::CustomAttributeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF68D0))(this);
  }
  bool Equals(Il2CppObject* obj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::CustomAttributeData*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF6FA0))(this, obj);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Reflection::CustomAttributeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF7390))(this);
  }

  // Static methods:
  static inline void ResolveArgumentsInternal(ModdingAPI::Exposed::System::Reflection::ConstructorInfo* ctor, ModdingAPI::Exposed::System::Reflection::Assembly* assembly, intptr_t data, uint32_t data_length, ModdingAPI::Exposed::System::Object_array* ctorArgs, ModdingAPI::Exposed::System::Object_array* namedArgs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::ConstructorInfo*, ModdingAPI::Exposed::System::Reflection::Assembly*, intptr_t, uint32_t, ModdingAPI::Exposed::System::Object_array*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF64C0))(ctor, assembly, data, data_length, ctorArgs, namedArgs);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::IList_T_* GetCustomAttributes(ModdingAPI::Exposed::System::Reflection::Assembly* target) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Assembly*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF6650))(target);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::IList_T_* GetCustomAttributes(ModdingAPI::Exposed::System::Reflection::MemberInfo* target) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MemberInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF66F0))(target);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::IList_T_* GetCustomAttributesInternal(ModdingAPI::Exposed::System::RuntimeType* target) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::System::RuntimeType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA576C0))(target);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::IList_T_* GetCustomAttributes(ModdingAPI::Exposed::System::Reflection::Module* target) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::Module*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF6790))(target);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::IList_T_* GetCustomAttributes(ModdingAPI::Exposed::System::Reflection::ParameterInfo* target) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::ParameterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF6830))(target);
  }
};
}