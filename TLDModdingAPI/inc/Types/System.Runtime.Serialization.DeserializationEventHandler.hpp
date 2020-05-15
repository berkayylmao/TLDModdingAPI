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


namespace ModdingAPI::Exposed::System::Runtime::Serialization {
struct __DeserializationEventHandler_Il2CppStaticFields {
};

struct __DeserializationEventHandler_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _6_DynamicInvokeImpl;
  VirtualInvokeData _7_Clone;
  VirtualInvokeData _8_GetMethodImpl;
  VirtualInvokeData _9_GetObjectData;
  VirtualInvokeData _10_GetInvocationList;
  VirtualInvokeData _11_CombineImpl;
  VirtualInvokeData _12_RemoveImpl;
  VirtualInvokeData _13_Invoke;
  VirtualInvokeData _14_BeginInvoke;
  VirtualInvokeData _15_EndInvoke;
};

struct __DeserializationEventHandler_Il2CppClass {
  Il2CppClass_1 _1;
  __DeserializationEventHandler_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DeserializationEventHandler_Il2CppVtbl vtbl;
};

class DeserializationEventHandler {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C865A0;
  static inline    __DeserializationEventHandler_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __DeserializationEventHandler_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DeserializationEventHandler_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __DeserializationEventHandler_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Delegate_method_ptr;
  intptr_t Delegate_invoke_impl;
  Il2CppObject* Delegate_m_target;
  intptr_t Delegate_method;
  intptr_t Delegate_delegate_trampoline;
  intptr_t Delegate_extra_arg;
  intptr_t Delegate_method_code;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* Delegate_method_info;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* Delegate_original_method_info;
  ModdingAPI::Exposed::System::DelegateData* Delegate_data;
  bool Delegate_method_is_virtual;
  ModdingAPI::Exposed::System::Delegate_array* MulticastDelegate_delegates;

  // Member methods:
  void ::ctor(Il2CppObject* object, intptr_t method) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::DeserializationEventHandler*, Il2CppObject*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311500))(this, object, method);
  }
  void Invoke(Il2CppObject* sender) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::DeserializationEventHandler*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8069A0))(this, sender);
  }
  ModdingAPI::Exposed::System::IAsyncResult* BeginInvoke(Il2CppObject* sender, ModdingAPI::Exposed::System::AsyncCallback* callback, Il2CppObject* object) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IAsyncResult*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::DeserializationEventHandler*, Il2CppObject*, ModdingAPI::Exposed::System::AsyncCallback*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x806E90))(this, sender, callback, object);
  }
  void EndInvoke(ModdingAPI::Exposed::System::IAsyncResult* result) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::DeserializationEventHandler*, ModdingAPI::Exposed::System::IAsyncResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36AF70))(this, result);
  }
};
}