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


namespace ModdingAPI::Exposed::System::Reflection {
struct __RuntimeConstructorInfo_Il2CppStaticFields {
};

struct __RuntimeConstructorInfo_Il2CppVtbl {
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
  VirtualInvokeData _17_GetParametersNoCopy;
  VirtualInvokeData _23_get_CallingConvention;
  VirtualInvokeData _24_GetGenericArguments;
  VirtualInvokeData _25_get_IsGenericMethodDefinition;
  VirtualInvokeData _26_get_ContainsGenericParameters;
  VirtualInvokeData _27_get_IsGenericMethod;
  VirtualInvokeData _28_get_IsSecurityCritical;
  VirtualInvokeData _29_Invoke;
  VirtualInvokeData _30_get_IsPublic;
  VirtualInvokeData _31_get_IsStatic;
  VirtualInvokeData _32_get_IsFinal;
  VirtualInvokeData _33_get_IsVirtual;
  VirtualInvokeData _34_get_IsAbstract;
  VirtualInvokeData _35_get_IsSpecialName;
  VirtualInvokeData _36_get_IsConstructor;
  VirtualInvokeData _37_GetMethodBody;
  VirtualInvokeData _38_FormatNameAndSig;
  VirtualInvokeData _39_GetParameterTypes;
  VirtualInvokeData _40_GetParametersInternal;
  VirtualInvokeData _41_GetParametersCount;
  VirtualInvokeData _43_GetObjectData;
  VirtualInvokeData _65535__ctor;
};

struct __RuntimeConstructorInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __RuntimeConstructorInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RuntimeConstructorInfo_Il2CppVtbl vtbl;
};

class RuntimeConstructorInfo {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C856B8;
  static inline    __RuntimeConstructorInfo_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RuntimeConstructorInfo_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RuntimeConstructorInfo_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RuntimeConstructorInfo_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  ModdingAPI::Exposed::System::Reflection::Module* get_Module() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::Module*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::RuntimeConstructorInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF292D0))(this);
  }
  ModdingAPI::Exposed::System::Reflection::RuntimeModule* GetRuntimeModule() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::RuntimeModule*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::RuntimeConstructorInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF292D0))(this);
  }
  int32_t get_BindingFlags() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Reflection::RuntimeConstructorInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::System::RuntimeType* get_ReflectedTypeInternal() {
    return reinterpret_cast<ModdingAPI::Exposed::System::RuntimeType*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::RuntimeConstructorInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF293C0))(this);
  }
  void GetObjectData(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::RuntimeConstructorInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF294A0))(this, info, context);
  }
  System_String* SerializationToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::RuntimeConstructorInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2C90))(this);
  }
  void SerializationInvoke(Il2CppObject* target, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::RuntimeConstructorInfo*, Il2CppObject*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF296A0))(this, target, info, context);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::RuntimeConstructorInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF226B0))(this);
  }
};
}