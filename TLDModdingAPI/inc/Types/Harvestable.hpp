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
struct __Harvestable_Il2CppStaticFields {
  ModdingAPI::Exposed::HarvestableSaveDataProxy* m_HarvestableSaveDataProxy;
};

struct __Harvestable_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Harvestable_Il2CppClass {
  Il2CppClass_1 _1;
  __Harvestable_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Harvestable_Il2CppVtbl vtbl;
};

class Harvestable {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C90090;
  static inline    __Harvestable_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Harvestable_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Harvestable_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Harvestable_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDisplayName;
  float m_SpawnChance;
  ModdingAPI::Exposed::GearItem* m_InspectItem;
  ModdingAPI::Exposed::GearItem* m_GearPrefab;
  int32_t m_GearItemCountMin;
  int32_t m_GearItemCountMax;
  ModdingAPI::Exposed::GearItem* m_SecondGearPrefab;
  int32_t m_SecondGearItemCountMin;
  int32_t m_SecondGearItemCountMax;
  System_String* m_HarvestAudio;
  float m_SecondsToHarvest;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_RequiredToolList;
  System_String* m_RequiredToolText;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ActivateObjectPostHarvest;
  bool m_DestroyObjectOnHarvest;
  bool m_IgnoreCustomModeSpawnChance;
  int32_t m_NumPrimary;
  int32_t m_NumSecondary;
  uint32_t m_ProgressBarAudio;
  bool m_Harvested;
  bool m_StartHasBeenCalled;
  float m_HarvestTimeRemaining;
  bool m_HasInspectedSecondary;
  int32_t m_RestoreControlMode;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A995B0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A99750))(this);
  }
  void UpdateHarvesting() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A99840))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A999E0))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A99B80))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A99DD0))(this, text);
  }
  bool IsToolRequired() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9A030))(this);
  }
  ModdingAPI::Exposed::GearItem* GetRequiredTool() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9A110))(this);
  }
  bool ProcessInteraction() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9A2B0))(this);
  }
  void EnterInspectMode(ModdingAPI::Exposed::GearItem* gearPrefab) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9A430))(this, gearPrefab);
  }
  void DoHarvest() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9A740))(this);
  }
  void ProgressBarStarted() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void CancelHarvest() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9AA50))(this);
  }
  void CompletedHarvest(bool success, bool playerCancel, float progress) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*, bool, bool, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9AC00))(this, success, playerCancel, progress);
  }
  void MaybeShowSecondaryItem() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9B050))(this);
  }
  void ShowItemMessage(ModdingAPI::Exposed::GearItem* gi, System_String* itemLocID, int32_t num) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*, ModdingAPI::Exposed::GearItem*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9B120))(this, gi, itemLocID, num);
  }
  System_String* GetHoverText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9B5C0))(this);
  }
  void RollSpawnChance() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9B680))(this);
  }
  void AddAlternateTools() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9B8E0))(this);
  }
  void StopProgressBarAudio() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9BC60))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Harvestable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9BD60))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::HarvestableSaveDataProxy*> m_HarvestableSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::HarvestableSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_HarvestableSaveDataProxy; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A9BD70))();
  }
};
}