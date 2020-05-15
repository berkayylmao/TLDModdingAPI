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
struct __MemberInfoSerializationHolder_Il2CppStaticFields {
};

struct __MemberInfoSerializationHolder_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _6_GetObjectData;
  VirtualInvokeData _7_GetRealObject;
};

struct __MemberInfoSerializationHolder_Il2CppClass {
  Il2CppClass_1 _1;
  __MemberInfoSerializationHolder_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MemberInfoSerializationHolder_Il2CppVtbl vtbl;
};

class MemberInfoSerializationHolder {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C51B90;
  static inline    MemberInfoSerializationHolder* _pStaticObjectInstance = nullptr;

public:
// Singleton object getter:
  static inline MemberInfoSerializationHolder* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (MemberInfoSerializationHolder**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Il2Cpp fields:
  __MemberInfoSerializationHolder_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* m_memberName;
  ModdingAPI::Exposed::System::RuntimeType* m_reflectedType;
  System_String* m_signature;
  System_String* m_signature2;
  int32_t m_memberType;
  ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* m_info;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MemberInfoSerializationHolder*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1E230))(this, info, context);
  }
  void GetObjectData(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MemberInfoSerializationHolder*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1E4A0))(this, info, context);
  }
  Il2CppObject* GetRealObject(ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MemberInfoSerializationHolder*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1E510))(this, context);
  }

  // Static methods:
  static inline void GetSerializationInfo(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, System_String* name, ModdingAPI::Exposed::System::RuntimeType* reflectedClass, System_String* signature, int32_t type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, System_String*, ModdingAPI::Exposed::System::RuntimeType*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1DF40))(info, name, reflectedClass, signature, type);
  }
  static inline void GetSerializationInfo(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, System_String* name, ModdingAPI::Exposed::System::RuntimeType* reflectedClass, System_String* signature, System_String* signature2, int32_t type, ModdingAPI::Exposed::System::Type_array* genericArguments) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, System_String*, ModdingAPI::Exposed::System::RuntimeType*, System_String*, System_String*, int32_t, ModdingAPI::Exposed::System::Type_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF1DF70))(info, name, reflectedClass, signature, signature2, type, genericArguments);
  }
};
}