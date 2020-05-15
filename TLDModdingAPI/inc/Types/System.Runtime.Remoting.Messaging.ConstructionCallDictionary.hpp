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


namespace ModdingAPI::Exposed::System::Runtime::Remoting::Messaging {
struct __ConstructionCallDictionary_Il2CppStaticFields {
  ModdingAPI::Exposed::System::String_array* InternalKeys;
};

struct __ConstructionCallDictionary_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_Item;
  VirtualInvokeData _5_set_Item;
  VirtualInvokeData _6_get_Keys;
  VirtualInvokeData _7_get_Values;
  VirtualInvokeData _8_Contains;
  VirtualInvokeData _9_Add;
  VirtualInvokeData _10_Clear;
  VirtualInvokeData _11_get_IsReadOnly;
  VirtualInvokeData _12_get_IsFixedSize;
  VirtualInvokeData _13_GetEnumerator;
  VirtualInvokeData _14_Remove;
  VirtualInvokeData _15_CopyTo;
  VirtualInvokeData _16_get_Count;
  VirtualInvokeData _17_get_SyncRoot;
  VirtualInvokeData _18_get_IsSynchronized;
  VirtualInvokeData _19_System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData _20_AllocInternalProperties;
  VirtualInvokeData _21_GetMethodProperty;
  VirtualInvokeData _22_SetMethodProperty;
};

struct __ConstructionCallDictionary_Il2CppClass {
  Il2CppClass_1 _1;
  __ConstructionCallDictionary_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ConstructionCallDictionary_Il2CppVtbl vtbl;
};

class ConstructionCallDictionary {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C62AC0;
  static inline    __ConstructionCallDictionary_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ConstructionCallDictionary_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ConstructionCallDictionary_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ConstructionCallDictionary_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::IDictionary* MessageDictionary__internalProperties;
  ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMethodMessage* _message;
  ModdingAPI::Exposed::System::String_array* MessageDictionary__methodKeys;
  bool MessageDictionary__ownProperties;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Runtime::Remoting::Activation::IConstructionCallMessage* message) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*, ModdingAPI::Exposed::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF631A0))(this, message);
  }
  Il2CppObject* GetMethodProperty(System_String* key) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF63260))(this, key);
  }
  void SetMethodProperty(System_String* key, Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::ConstructionCallDictionary*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF635F0))(this, key, value);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::String_array*> InternalKeys = __CppStaticProperty<ModdingAPI::Exposed::System::String_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->InternalKeys; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xF63870))();
  }
};
}