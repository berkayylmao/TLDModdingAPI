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
#include "ModdingAPI.Exposed.System.Runtime.Serialization.SerializationEntry.hpp"


namespace ModdingAPI::Exposed::System::Runtime::Serialization {
struct __SerializationInfoEnumerator_Il2CppStaticFields {
};

struct __SerializationInfoEnumerator_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_MoveNext;
  VirtualInvokeData _5_System_Collections_IEnumerator_get_Current;
  VirtualInvokeData _6_Reset;
};

struct __SerializationInfoEnumerator_Il2CppClass {
  Il2CppClass_1 _1;
  __SerializationInfoEnumerator_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SerializationInfoEnumerator_Il2CppVtbl vtbl;
};

class SerializationInfoEnumerator {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C85820;
  static inline    __SerializationInfoEnumerator_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SerializationInfoEnumerator_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SerializationInfoEnumerator_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SerializationInfoEnumerator_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::String_array* m_members;
  ModdingAPI::Exposed::System::Object_array* m_data;
  ModdingAPI::Exposed::System::Type_array* m_types;
  int32_t m_numItems;
  int32_t m_currItem;
  bool m_current;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::String_array* members, ModdingAPI::Exposed::System::Object_array* info, ModdingAPI::Exposed::System::Type_array* types, int32_t numItems) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfoEnumerator*, ModdingAPI::Exposed::System::String_array*, ModdingAPI::Exposed::System::Object_array*, ModdingAPI::Exposed::System::Type_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA4E390))(this, members, info, types, numItems);
  }
  bool MoveNext() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfoEnumerator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA4E3C0))(this);
  }
  Il2CppObject* System::Collections::IEnumerator::get_Current() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfoEnumerator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA4E3E0))(this);
  }
  ModdingAPI::Exposed::System::Runtime::Serialization::SerializationEntry get_Current() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Serialization::SerializationEntry(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfoEnumerator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA4E580))(this);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfoEnumerator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA4E6F0))(this);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfoEnumerator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA4E700))(this);
  }
  Il2CppObject* get_Value() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfoEnumerator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA4E7F0))(this);
  }
  ModdingAPI::Exposed::System::Type* get_ObjectType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfoEnumerator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA4E8E0))(this);
  }
};
}