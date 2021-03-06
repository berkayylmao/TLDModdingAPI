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
struct __NPC_NeedTracker_Il2CppStaticFields {
  ModdingAPI::Exposed::NeedTrackerSaveData* m_NeedTrackerSaveData;
};

struct __NPC_NeedTracker_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __NPC_NeedTracker_Il2CppClass {
  Il2CppClass_1 _1;
  __NPC_NeedTracker_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NPC_NeedTracker_Il2CppVtbl vtbl;
};

class NPC_NeedTracker {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4D350;
  static inline    __NPC_NeedTracker_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __NPC_NeedTracker_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__NPC_NeedTracker_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __NPC_NeedTracker_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  System_String* m_NPCTrustID;
  bool m_NoTrustDecayUntilPlayerInteraction;
  ModdingAPI::Exposed::NPC_NeedPrefab_array* m_DefaultNeeds;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_NeedPrefabsActive;
  bool m_HasBeenInteractedWith;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8BA70))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8BB80))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8BC40))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8BDD0))(this, text);
  }
  bool IsTrustDecayAllowed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8BF30))(this);
  }
  void SetHasBeenInteractedWith() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x968AD0))(this);
  }
  void AddNeed(ModdingAPI::Exposed::NPC_NeedPrefab* needToAdd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*, ModdingAPI::Exposed::NPC_NeedPrefab*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8BF50))(this, needToAdd);
  }
  void RemoveNeed(ModdingAPI::Exposed::NPC_NeedPrefab* needToAdd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*, ModdingAPI::Exposed::NPC_NeedPrefab*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8C320))(this, needToAdd);
  }
  bool IsNeedMet(ModdingAPI::Exposed::NPC_NeedPrefab* needToCheck) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*, ModdingAPI::Exposed::NPC_NeedPrefab*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8C490))(this, needToCheck);
  }
  bool IsTrustWithinNeedRange(ModdingAPI::Exposed::NeedPrefabSaveData* needData) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*, ModdingAPI::Exposed::NeedPrefabSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8C620))(this, needData);
  }
  bool IsReadyToBeCompleted(ModdingAPI::Exposed::NeedPrefabSaveData* needData) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*, ModdingAPI::Exposed::NeedPrefabSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8C720))(this, needData);
  }
  System_String* GetStringForNeed(ModdingAPI::Exposed::NeedPrefabSaveData* needData) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*, ModdingAPI::Exposed::NeedPrefabSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8C840))(this, needData);
  }
  bool GearItemMeetsCurrentNeed(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8CD60))(this, gi);
  }
  int32_t GetTrustIncreaseFromItemList(ModdingAPI::Exposed::System::Collections::Generic::List_T_* gearList, float numCalories, float numLitersWater, float numHoursFuel) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8D1B0))(this, gearList, numCalories, numLitersWater, numHoursFuel);
  }
  void GiveItemsToCompleteNeeds(ModdingAPI::Exposed::System::Collections::Generic::List_T_* gearList, float numCalories, float numLitersWater, float numHoursFuel) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8D6E0))(this, gearList, numCalories, numLitersWater, numHoursFuel);
  }
  void AddDefaultNeeds() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8BA70))(this);
  }
  void CompleteNeedAtIndex(int32_t index, int32_t trustIncrease) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8DC20))(this, index, trustIncrease);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_NeedTracker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8DDA0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::NeedTrackerSaveData*> m_NeedTrackerSaveData = __CppStaticProperty<ModdingAPI::Exposed::NeedTrackerSaveData*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_NeedTrackerSaveData; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8DF10))();
  }
};
}