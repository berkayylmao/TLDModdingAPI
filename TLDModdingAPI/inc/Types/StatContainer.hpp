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


namespace ModdingAPI::Exposed {
struct __StatContainer_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Int32_array* m_CachedHashIds;
};

struct __StatContainer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __StatContainer_Il2CppClass {
  Il2CppClass_1 _1;
  __StatContainer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StatContainer_Il2CppVtbl vtbl;
};

class StatContainer {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4F990;
  static inline    __StatContainer_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __StatContainer_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__StatContainer_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __StatContainer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_StatsDictionary;
  int32_t m_NumBurntHousesInCoastal;
  bool m_HasDoneCoastalBurntHouseCheck;
  bool m_HasDoneCorrectBurntHouseCheck;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatContainer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C67470))(this);
  }
  void ::ctor(ModdingAPI::Exposed::StatContainer* rhs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatContainer*, ModdingAPI::Exposed::StatContainer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C67490))(this, rhs);
  }
  float GetValue(int32_t id) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatContainer*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C67720))(this, id);
  }
  System_String* GetFormattedValue(int32_t id) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::StatContainer*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C67840))(this, id);
  }
  void SetValue(int32_t id, float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatContainer*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C67920))(this, id, value);
  }
  float IncrementValue(int32_t id, float increment) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatContainer*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C67A10))(this, id, increment);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatContainer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C67A70))(this);
  }
  void CacheHashIds() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatContainer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C67BE0))(this);
  }
  int32_t ComputeHashId(int32_t id) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::StatContainer*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C67D20))(this, id);
  }
  int32_t GetHashId(int32_t id) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::StatContainer*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C67E10))(this, id);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> m_CachedHashIds = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_CachedHashIds; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))();
  }
};
}