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
struct __Dysentery_Il2CppStaticFields {
  ModdingAPI::Exposed::DysenterySaveDataProxy* m_DysenterySaveDataProxy;
};

struct __Dysentery_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Dysentery_Il2CppClass {
  Il2CppClass_1 _1;
  __Dysentery_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Dysentery_Il2CppVtbl vtbl;
};

class Dysentery {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7E0B0;
  static inline    __Dysentery_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Dysentery_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Dysentery_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Dysentery_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDisplayName;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDescription;
  float m_ChanceDysenteryAfterDrinkingUnsafeWater;
  float m_DurationHoursMin;
  float m_DurationHoursMax;
  float m_HPDrainPerHour;
  float m_FatigueIncreasePerHour;
  float m_ThirstIncreasePerHour;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_AntibioticsPrefab;
  float m_NumLitersCleanWaterForCure;
  float m_NumHoursRestForCure;
  System_String* m_DysenteryVO;
  bool m_Active;
  float m_ElapsedHours;
  float m_DurationHours;
  bool m_AntibioticsTaken;
  float m_ElapsedRest;
  float m_CleanWaterConsumedLiters;
  bool m_StartHasBeenCalled;

  // Member methods:
  System_String* get_m_DisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35A0))(this);
  }
  System_String* get_m_Description() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35C0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193E240))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193E250))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193E370))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Dysentery*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193E4C0))(this, text);
  }
  void DysenteryStart(bool displayIcon, bool nofx) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Dysentery*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193E5B0))(this, displayIcon, nofx);
  }
  void DysenteryEnd() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193E910))(this);
  }
  bool HasDysentery() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3199B0))(this);
  }
  bool HasTakenAntibiotics() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E3E10))(this);
  }
  float GetRestAmountRemaining() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193EA40))(this);
  }
  float GetWaterAmountRemaining() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193EA50))(this);
  }
  void UpdateRemedyItems(ModdingAPI::Exposed::UnityEngine::GameObject_array* items) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Dysentery*, ModdingAPI::Exposed::UnityEngine::GameObject_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193EA60))(this, items);
  }
  void TakeAntibiotics() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E3ED0))(this);
  }
  void DrinkCleanWater(float numLiters) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Dysentery*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193F4E0))(this, numLiters);
  }
  void AddRest(float hours) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Dysentery*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193F5E0))(this, hours);
  }
  bool RollForDysentery() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193F6F0))(this);
  }
  float GetWaterRemainingForCureLiters() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193EA50))(this);
  }
  void UpdateDysentery() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x193F7A0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Dysentery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::DysenterySaveDataProxy*> m_DysenterySaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::DysenterySaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_DysenterySaveDataProxy; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x193FAD0))();
  }
};
}