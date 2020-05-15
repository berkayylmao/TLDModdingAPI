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
struct __BodyHarvest_Il2CppStaticFields {
  ModdingAPI::Exposed::BodyHarvestSaveDataProxy* m_BodyHarvestSaveDataProxy;
};

struct __BodyHarvest_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __BodyHarvest_Il2CppClass {
  Il2CppClass_1 _1;
  __BodyHarvest_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __BodyHarvest_Il2CppVtbl vtbl;
};

class BodyHarvest {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C720D8;
  static inline    __BodyHarvest_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __BodyHarvest_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__BodyHarvest_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __BodyHarvest_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDisplayName;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_MeatPrefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_HidePrefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_GutPrefab;
  System_String* m_HarvestAudio;
  float m_MeatAvailableMinKG;
  float m_MeatAvailableMaxKG;
  int32_t m_HideAvailableUnits;
  int32_t m_GutAvailableUnits;
  float m_SpawnChance;
  float m_StartConditionMin;
  float m_StartConditionMax;
  float m_DecayConditionPerHour;
  bool m_StartFrozen;
  bool m_StartRavaged;
  bool m_HideIsAvailable;
  bool m_GutIsAvailable;
  bool m_CanCarry;
  bool m_IsBigCarry;
  bool m_CanQuarter;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_QuarterObjectPrefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_CarcassSitePrefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_CarcassSiteLocation;
  System_String* m_QuarterAudio;
  float m_QuarterDurationMinutes;
  float m_QuarterBagMeatCapacityKG;
  float m_QuarterBagWasteMultiplier;
  float m_QuarterPrefabSpawnRadius;
  float m_QuarterPrefabSpawnAngle;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_LargeObjectCollidersRoot;
  bool m_Frozen;
  bool m_Ravaged;
  float m_MeatAvailableKG;
  bool m_DestroyPending;
  System_String* m_MissionIdSerialized;
  ModdingAPI::Exposed::BearHuntAiRedux* m_BearHuntAiRedux;
  float m_Condition;
  bool m_RolledSpawnChance;
  bool m_AllowDecay;
  float m_PercentFrozen;
  ModdingAPI::Exposed::GearItem* m_GearItem;
  int32_t m_DamageSide;
  System_String* m_FrozenDisplayNameId;
  ModdingAPI::Exposed::CarcassSite* m_CarcassSite;
  bool m_HasHarvested;
  float m_LastHarvestTimeHours;
  float m_GutWeightKgPerUnit;
  float m_HideWeightKgPerUnit;
  bool m_HasUpdatedColliders;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_NonInteractiveCollidersRoot;
  bool m_HasInitialized;

  // Member methods:
  System_String* get_m_DisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35A0))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1803B90))(this);
  }
  void UpdateBodyHarvest(float todHours) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1803DC0))(this, todHours);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1803F80))(this);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18041B0))(this);
  }
  void OnHarvestActionSuccess() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18041C0))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18041D0))(this);
  }
  void Deserialize(System_String* text, bool isSceneLoad) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1804A90))(this, text, isSceneLoad);
  }
  bool IsGearItem() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1804F20))(this);
  }
  int32_t GetDamageSide() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1804FD0))(this);
  }
  float GetCondition() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1804FE0))(this);
  }
  float GetGearItemCondition() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1804FF0))(this);
  }
  void SetAllowDecay(bool allow) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18050D0))(this, allow);
  }
  int32_t GetPercentFrozen() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18050E0))(this);
  }
  System_String* GetHoverText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1805190))(this);
  }
  System_String* GetFrozenDisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18053D0))(this);
  }
  System_String* GetDisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35A0))(this);
  }
  void BodyHarvestDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1805470))(this);
  }
  void MaybeRoundMeatAvailableToZero() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1805640))(this);
  }
  bool NoMoreResources() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1805660))(this);
  }
  float GetGutsAvailableWeightKg() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18057F0))(this);
  }
  float GetHideAvailableWeightKg() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1805810))(this);
  }
  bool ConditionReachedZero() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1805830))(this);
  }
  bool CanSpawnCarcassSite() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18058E0))(this);
  }
  bool AreResourcesAvailable() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1805990))(this);
  }
  void MaybeSpawnOrRefreshCarcassSite() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18059D0))(this);
  }
  void MaybeRestoreCarcassSite() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1805B10))(this);
  }
  void MaybeSpawnCarcassSite(float timeHours) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1805B20))(this, timeHours);
  }
  bool HasSpawnedCarcassSite() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1805EB0))(this);
  }
  void MaybeSpawnQuarteringMess() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1805F60))(this);
  }
  void RefreshInternalReferences() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1806190))(this);
  }
  bool IsNearFire() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18063F0))(this);
  }
  void DestroyIfFarAway() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18065A0))(this);
  }
  void MaybeDestroyAfterDeserialize(bool useTeleportTransformAfterSceneLoad) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1806720))(this, useTeleportTransformAfterSceneLoad);
  }
  void MaybeDecay(float hours) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1807000))(this, hours);
  }
  void MaybeFreeze(float hours) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1807180))(this, hours);
  }
  void InitializeResourcesAndConditions() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18073E0))(this);
  }
  void RefreshCarcassSite(float hoursAtRefresh) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1807480))(this, hoursAtRefresh);
  }
  ModdingAPI::Exposed::UnityEngine::Transform_array* UnparentArrows(ModdingAPI::Exposed::ArrowItem_array* arrows) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Transform_array*(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*, ModdingAPI::Exposed::ArrowItem_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18076E0))(this, arrows);
  }
  void ReparentArrows(ModdingAPI::Exposed::ArrowItem_array* arrows, ModdingAPI::Exposed::UnityEngine::Transform_array* parentArrows) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*, ModdingAPI::Exposed::ArrowItem_array*, ModdingAPI::Exposed::UnityEngine::Transform_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1807970))(this, arrows, parentArrows);
  }
  void UpdateColliders() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1807A90))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1808070))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::BodyHarvestSaveDataProxy*> m_BodyHarvestSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::BodyHarvestSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_BodyHarvestSaveDataProxy; }
  );

  // Static methods:
  static inline void Copy(ModdingAPI::Exposed::BodyHarvest* from, ModdingAPI::Exposed::BodyHarvest* to) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BodyHarvest*, ModdingAPI::Exposed::BodyHarvest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1806030))(from, to);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1808090))();
  }
};
}