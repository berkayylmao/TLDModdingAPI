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


namespace ModdingAPI::Exposed::TinyJSON {
struct __ProxyObject_Il2CppStaticFields {
};

struct __ProxyObject_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _21_GetTypeCode;
  VirtualInvokeData _22_ToType;
  VirtualInvokeData _23_ToDateTime;
  VirtualInvokeData _24_ToBoolean;
  VirtualInvokeData _25_ToByte;
  VirtualInvokeData _26_ToChar;
  VirtualInvokeData _27_ToDecimal;
  VirtualInvokeData _28_ToDouble;
  VirtualInvokeData _29_ToInt16;
  VirtualInvokeData _30_ToInt32;
  VirtualInvokeData _31_ToInt64;
  VirtualInvokeData _32_ToSByte;
  VirtualInvokeData _33_ToSingle;
  VirtualInvokeData _34_ToString;
  VirtualInvokeData _35_ToUInt16;
  VirtualInvokeData _36_ToUInt32;
  VirtualInvokeData _37_ToUInt64;
  VirtualInvokeData _38_get_Item;
  VirtualInvokeData _39_set_Item;
  VirtualInvokeData _40_get_Item;
  VirtualInvokeData _41_set_Item;
  VirtualInvokeData _42_System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_TinyJSON_Variant___GetEnumerator;
  VirtualInvokeData _43_System_Collections_IEnumerable_GetEnumerator;
};

struct __ProxyObject_Il2CppClass {
  Il2CppClass_1 _1;
  __ProxyObject_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ProxyObject_Il2CppVtbl vtbl;
};

class ProxyObject {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6F0F0;
  static inline    __ProxyObject_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ProxyObject_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ProxyObject_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ProxyObject_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* dict;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBD4E0))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerator_T_* System::Collections::Generic::IEnumerable_System::Collections::Generic::KeyValuePair_System::String_TinyJSON::Variant__::GetEnumerator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerator_T_*(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBD670))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* System::Collections::IEnumerable::GetEnumerator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBD760))(this);
  }
  void Add(System_String* key, ModdingAPI::Exposed::TinyJSON::Variant* item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyObject*, System_String*, ModdingAPI::Exposed::TinyJSON::Variant*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBD850))(this, key, item);
  }
  bool TryGetValue(System_String* key, ModdingAPI::Exposed::TinyJSON::Variant* item) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyObject*, System_String*, ModdingAPI::Exposed::TinyJSON::Variant*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBD910))(this, key, item);
  }
  System_String* get_TypeHint() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBD9C0))(this);
  }
  ModdingAPI::Exposed::TinyJSON::Variant* get_Item(System_String* key) {
    return reinterpret_cast<ModdingAPI::Exposed::TinyJSON::Variant*(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBDB00))(this, key);
  }
  void set_Item(System_String* key, ModdingAPI::Exposed::TinyJSON::Variant* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyObject*, System_String*, ModdingAPI::Exposed::TinyJSON::Variant*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBDBA0))(this, key, value);
  }
  int32_t get_Count() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TinyJSON::ProxyObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BBDC60))(this);
  }
};
}