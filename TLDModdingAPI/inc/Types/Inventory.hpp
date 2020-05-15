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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __Inventory_Il2CppStaticFields {
  ModdingAPI::Exposed::InventorySaveDataProxy* m_InventorySaveDataProxy;
  ModdingAPI::Exposed::InventoryItemSaveData_array* m_InventoryItemSaveDataPool;
};

struct __Inventory_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Inventory_Il2CppClass {
  Il2CppClass_1 _1;
  __Inventory_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Inventory_Il2CppVtbl vtbl;
};

class Inventory {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3BB40;
  static inline    __Inventory_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Inventory_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Inventory_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Inventory_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Items;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ItemsToDestroy;
  ModdingAPI::Exposed::GearItem* m_WaterSupplyPotable;
  ModdingAPI::Exposed::GearItem* m_WaterSupplyNotPotable;
  float m_WeightGeneral;
  float m_WeightMetal;
  float m_WeightWater;
  float m_WeightWood;
  float m_TotalWeight;
  float m_WeightGeneral_LastSent;
  float m_WeightMetal_LastSent;
  float m_WeightWater_LastSent;
  float m_WeightWood_LastSent;
  bool m_StartHasBeenCalled;
  bool m_ForceOverrideWeight;
  float m_OverridedWeight;
  float m_TotalScentIntensity;
  bool m_ConsumedCoffee;
  bool m_ConsumedRosehipTea;
  bool m_ConsumedReishiTea;
  bool m_ConsumedOldMansBeardDressing;
  bool m_SuppressScentIndicator;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_QuickSelectSlots;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1861F70))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18621B0))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1862520))(this);
  }
  bool TryStackingItem(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1862BE0))(this, gi);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1862E30))(this, text);
  }
  ModdingAPI::Exposed::GearItem* FindByInstanceID(int32_t id) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1863610))(this, id);
  }
  bool GameObjectInInventory(ModdingAPI::Exposed::UnityEngine::GameObject* searchItem) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1863760))(this, searchItem);
  }
  void AddGear(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18638B0))(this, go);
  }
  void RemoveGear(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1864230))(this, go);
  }
  void RemoveGameObjectInInventory(ModdingAPI::Exposed::UnityEngine::GameObject* objectToRemove) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1864500))(this, objectToRemove);
  }
  void DestroyGear(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18646D0))(this, go);
  }
  void DestroyAllGear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1864860))(this);
  }
  float GetCurrentTotalScentIntensity() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18649B0))(this);
  }
  float GetExtraWeightKG() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18649F0))(this);
  }
  float GetExtraScentIntensity() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1864BD0))(this);
  }
  float GetTotalWeightKG() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1864F30))(this);
  }
  ModdingAPI::Exposed::GearItem* GetHighestConditionGearThatMatchesName(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1864F70))(this, name);
  }
  ModdingAPI::Exposed::GearItem* GetLowestConditionGearThatMatchesName(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865020))(this, name);
  }
  ModdingAPI::Exposed::GearItem* GetHighestConditionGearThatMatchesCanOpeningType(int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18650D0))(this, type);
  }
  ModdingAPI::Exposed::GearItem* GearInInventory(System_String* gearName, int32_t numUnits) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865180))(this, gearName, numUnits);
  }
  ModdingAPI::Exposed::GearItem* GearInInventoryAtCondition(System_String* gearName, int32_t numUnits, int32_t conditionInPercent) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865240))(this, gearName, numUnits, conditionInPercent);
  }
  bool HasNonRuinedItem(System_String* gearName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865320))(this, gearName);
  }
  ModdingAPI::Exposed::GearItem* GetNonRuinedItem(System_String* gearName) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865400))(this, gearName);
  }
  ModdingAPI::Exposed::GearItem_array* GearInInventory(System_String* gearName) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem_array*(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18654B0))(this, gearName);
  }
  int32_t GetNumMatches() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865560))(this);
  }
  int32_t GetNumFlares(int32_t type) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Inventory*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865600))(this, type);
  }
  int32_t GetNumTorches() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18656B0))(this);
  }
  int32_t GetNumStones() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18658B0))(this);
  }
  int32_t NumGearInInventory(System_String* gearName) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865950))(this, gearName);
  }
  int32_t NumGearInInventoryForScripting(System_String* gearName) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865A00))(this, gearName);
  }
  int32_t GetMeasurableTotalByTypeInList(System_String* type) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865AB0))(this, type);
  }
  void RemoveUnits(ModdingAPI::Exposed::GearItem* gi, int32_t numUnits) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::GearItem*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865B60))(this, gi, numUnits);
  }
  void GetItems(System_String* gearName, ModdingAPI::Exposed::System::Collections::Generic::List_T_* list) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865D00))(this, gearName, list);
  }
  void RemoveGearFromInventory(System_String* gearName, int32_t numUnits) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1865ED0))(this, gearName, numUnits);
  }
  int32_t GetAmmoAvailableForGunType(int32_t gunType) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Inventory*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1866220))(this, gunType);
  }
  int32_t GetAmmoAvailableForWeapon(ModdingAPI::Exposed::GearItem* weapon) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18662D0))(this, weapon);
  }
  int32_t RemoveAmmoForWeaponSingle(ModdingAPI::Exposed::GearItem* weapon) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1866420))(this, weapon);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* RemoveAmmoForWeapon(ModdingAPI::Exposed::GearItem* weapon, int32_t ammoNeeded) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::GearItem*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1866570))(this, weapon, ammoNeeded);
  }
  bool AddToPotableWaterSupply(float volumeLiters) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18666C0))(this, volumeLiters);
  }
  ModdingAPI::Exposed::GearItem* GetBestMatches() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18667C0))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestFlare(int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1866860))(this, type);
  }
  ModdingAPI::Exposed::GearItem* GetBestFlashlight() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1866910))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestTorch() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18669B0))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestBed() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1866A50))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestLamp() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1866C70))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestRevolver() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1866D10))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestRifle() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1866DB0))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestBearSpear() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1866E50))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestFlareGun() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1866EF0))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestStone() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1866F90))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestBow() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1867030))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestDecoy() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18670D0))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestFishingTackle() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1867170))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestFishingHook() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1867210))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestFishingLine() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18672B0))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestRopeItem() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1867350))(this);
  }
  ModdingAPI::Exposed::GearItem* GetBestStuggleBonusItem() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18673F0))(this);
  }
  ModdingAPI::Exposed::GearItem* GetLowestConditionArrow() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1867490))(this);
  }
  bool HasRawMeat() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1867530))(this);
  }
  ModdingAPI::Exposed::GearItem* GetClosestMatchStackable(System_String* name, float normalizedHP) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18675D0))(this, name, normalizedHP);
  }
  ModdingAPI::Exposed::GearItem* GetPotableWaterSupply() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1867A30))(this);
  }
  ModdingAPI::Exposed::GearItem* GetNonPotableWaterSupply() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1867BB0))(this);
  }
  ModdingAPI::Exposed::GearItem* GetWaterSupply(int32_t quality) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1867D30))(this, quality);
  }
  bool AddToWaterSupply(float numLiters, int32_t quality) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1867D50))(this, numLiters, quality);
  }
  void SetActive(ModdingAPI::Exposed::GearItem* gi, bool active) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::GearItem*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1867DB0))(this, gi, active);
  }
  void HideInventoryItem(ModdingAPI::Exposed::GearItem* gi, bool hide) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::GearItem*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1867EB0))(this, gi, hide);
  }
  void AdjustForSlope(ModdingAPI::Exposed::UnityEngine::Vector3 origin, ModdingAPI::Exposed::UnityEngine::Vector3 target) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1868850))(this, origin, target);
  }
  int32_t DropAndScatterItems(int32_t count, float minRadius, float maxRadius, ModdingAPI::Exposed::GearItem* forceDropItem, int32_t minAngleDegrees, int32_t maxAngleDegrees) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Inventory*, int32_t, float, float, ModdingAPI::Exposed::GearItem*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1868A70))(this, count, minRadius, maxRadius, forceDropItem, minAngleDegrees, maxAngleDegrees);
  }
  ModdingAPI::Exposed::GearItem* GetBestGearItemWithName(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Inventory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1869300))(this, name);
  }
  void SetOverrideGearWeight(float weight) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18693B0))(this, weight);
  }
  void ResetOverrideGearWeight() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18693C0))(this);
  }
  void OnConsumed(ModdingAPI::Exposed::GearItem* gearItem) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18693D0))(this, gearItem);
  }
  void OnFirstAidCompleted(ModdingAPI::Exposed::GearItem* gearItem) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18694D0))(this, gearItem);
  }
  bool HasConsumedCoffee() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA960))(this);
  }
  bool HasConsumedRosehipTea() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC22D10))(this);
  }
  bool HasConsumedReishiTea() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF3E90))(this);
  }
  bool HasConsumedOldMansBeardDressing() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC22D20))(this);
  }
  void SetSuppressScentIndicator(bool shouldSuppress) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1869660))(this, shouldSuppress);
  }
  void ProcessItems() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1869670))(this);
  }
  void MaybeUpdateWeightRTPCs() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1869F80))(this);
  }
  bool CanDropAndScatterItem(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x186A300))(this, gi);
  }
  void PositionAndRotateScatteredItem(ModdingAPI::Exposed::GearItem* item, ModdingAPI::Exposed::UnityEngine::Vector3 dropPosition, ModdingAPI::Exposed::UnityEngine::Vector3 dropNormal) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::GearItem*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x186A4B0))(this, item, dropPosition, dropNormal);
  }
  bool ShouldMakeItemInHandsActive(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x186AEF0))(this, gi);
  }
  void HanksHack() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x186B190))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x186B3A0))(this);
  }
  void InitQuickSelectSlots() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x186B3B0))(this);
  }
  void UpdateQuickSelectionSlots() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x186B400))(this);
  }
  bool AssignedToQuickSlot(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x186B580))(this, go);
  }
  void QuickSelectionHandleInventoryItemRemoval(ModdingAPI::Exposed::UnityEngine::GameObject* deader) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x186B680))(this, deader);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x186BA70))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::InventorySaveDataProxy*> m_InventorySaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::InventorySaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_InventorySaveDataProxy; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::InventoryItemSaveData_array*> m_InventoryItemSaveDataPool = __CppStaticProperty<ModdingAPI::Exposed::InventoryItemSaveData_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_InventoryItemSaveDataPool; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x186BD60))();
  }
};
}