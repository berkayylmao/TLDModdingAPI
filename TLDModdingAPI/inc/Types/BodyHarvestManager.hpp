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
struct __BodyHarvestManager_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_BodyHarvestList;
};

struct __BodyHarvestManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __BodyHarvestManager_Il2CppClass {
  Il2CppClass_1 _1;
  __BodyHarvestManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __BodyHarvestManager_Il2CppVtbl vtbl;
};

class BodyHarvestManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5FA90;
  static inline    __BodyHarvestManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __BodyHarvestManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__BodyHarvestManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __BodyHarvestManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_FrozenDecayConditionPerHour;
  float m_NumHoursToFreezeCarcass;
  float m_RadiusToThawFromFire;
  float m_NumHoursToThawFrozenCarcass;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvestManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvestManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_BodyHarvestList = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_BodyHarvestList; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::BodyHarvest* GetBodyHarvestFromSerializedMissionId(System_String* missionId) {
    return reinterpret_cast<ModdingAPI::Exposed::BodyHarvest*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18081D0))(missionId);
  }
  static inline void DeleteAllActive() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x18083F0))();
  }
  static inline void Destroy(ModdingAPI::Exposed::BodyHarvest* bodyHarvest) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1808920))(bodyHarvest);
  }
  static inline System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1808D60))();
  }
  static inline void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18095E0))(text);
  }
  static inline void AddBodyHarvest(ModdingAPI::Exposed::BodyHarvest* bh) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1809C30))(bh);
  }
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1809CF0))();
  }
  static inline void MaybeRestoreCorpseState(ModdingAPI::Exposed::BodyHarvest* bh) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1809DD0))(bh);
  }
  static inline void MaybeRestoreCarcassSite(ModdingAPI::Exposed::BodyHarvest* bh) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1809F20))(bh);
  }
  static inline ModdingAPI::Exposed::BodyHarvest* InstantiateBodyHarvestGameObject(ModdingAPI::Exposed::BodyHarvestSaveData* proxy) {
    return reinterpret_cast<ModdingAPI::Exposed::BodyHarvest*(__fastcall*)(ModdingAPI::Exposed::BodyHarvestSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x180A020))(proxy);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x180A2B0))();
  }
};
}