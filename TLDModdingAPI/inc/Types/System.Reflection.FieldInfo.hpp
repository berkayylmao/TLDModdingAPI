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
#include "ModdingAPI::Exposed::System::RuntimeFieldHandle.hpp"
#include "ModdingAPI::Exposed::System::RuntimeTypeHandle.hpp"


namespace ModdingAPI::Exposed::System::Reflection {
struct __FieldInfo_Il2CppStaticFields {
};

struct __FieldInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _7_get_MemberType;
  VirtualInvokeData _11_GetCustomAttributes;
  VirtualInvokeData _12_GetCustomAttributes;
  VirtualInvokeData _13_IsDefined;
  VirtualInvokeData _14_GetCustomAttributesData;
  VirtualInvokeData _15_get_MetadataToken;
  VirtualInvokeData _16_get_Module;
  VirtualInvokeData _21_get_IsLiteral;
  VirtualInvokeData _22_get_IsStatic;
  VirtualInvokeData _23_get_IsInitOnly;
  VirtualInvokeData _24_get_IsPublic;
  VirtualInvokeData _25_get_IsPrivate;
  VirtualInvokeData _26_get_IsNotSerialized;
  VirtualInvokeData _28_SetValue;
  VirtualInvokeData _29_GetFieldOffset;
  VirtualInvokeData _30_SetValueDirect;
  VirtualInvokeData _31_GetRawConstantValue;
  VirtualInvokeData _65535__ctor;
};

struct __FieldInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __FieldInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __FieldInfo_Il2CppVtbl vtbl;
};

class FieldInfo {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C92BD8;
  static inline    __FieldInfo_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __FieldInfo_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__FieldInfo_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __FieldInfo_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  int32_t get_MemberType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7BE120))(this);
  }
  bool get_IsLiteral() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1C7E0))(this);
  }
  bool get_IsStatic() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1C800))(this);
  }
  bool get_IsInitOnly() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1C820))(this);
  }
  bool get_IsPublic() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1C840))(this);
  }
  bool get_IsPrivate() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1C870))(this);
  }
  bool get_IsNotSerialized() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1C890))(this);
  }
  void SetValue(Il2CppObject* obj, Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1C8B0))(this, obj, value);
  }
  int32_t GetFieldOffset() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1CB30))(this);
  }
  void SetValueDirect(Il2CppObject* obj, Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1CB90))(this, obj, value);
  }
  ModdingAPI::Exposed::System::Runtime::InteropServices::MarshalAsAttribute* get_marshal_info() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::InteropServices::MarshalAsAttribute*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::System::Object_array* GetPseudoCustomAttributes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Object_array*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1CC00))(this);
  }
  Il2CppObject* GetRawConstantValue() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1CFB0))(this);
  }
  bool Equals(Il2CppObject* obj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA57180))(this, obj);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x736090))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Reflection::FieldInfo* internal_from_handle_type(intptr_t field_handle, intptr_t type_handle) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::FieldInfo*(__fastcall*)(intptr_t, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1C8E0))(field_handle, type_handle);
  }
  static inline ModdingAPI::Exposed::System::Reflection::FieldInfo* GetFieldFromHandle(ModdingAPI::Exposed::System::RuntimeFieldHandle handle) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::FieldInfo*(__fastcall*)(ModdingAPI::Exposed::System::RuntimeFieldHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1C940))(handle);
  }
  static inline ModdingAPI::Exposed::System::Reflection::FieldInfo* GetFieldFromHandle(ModdingAPI::Exposed::System::RuntimeFieldHandle handle, ModdingAPI::Exposed::System::RuntimeTypeHandle declaringType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::FieldInfo*(__fastcall*)(ModdingAPI::Exposed::System::RuntimeFieldHandle, ModdingAPI::Exposed::System::RuntimeTypeHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1CA00))(handle, declaringType);
  }
};
}