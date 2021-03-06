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
struct __Panel_FireStart_Il2CppStaticFields {
};

struct __Panel_FireStart_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_FireStart_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_FireStart_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_FireStart_Il2CppVtbl vtbl;
};

class Panel_FireStart {
public:
  // Il2Cpp fields:
  __Panel_FireStart_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_FireContainer;
  ModdingAPI::Exposed::UILabel* m_Label_BaseSkill;
  ModdingAPI::Exposed::UILabel* m_Label_ChanceSuccess;
  ModdingAPI::Exposed::UILabel* m_Label_EstimatedDuration;
  ModdingAPI::Exposed::UILabel* m_Label_Tinder;
  ModdingAPI::Exposed::StartFireSelectionRow* m_SelectStarter;
  ModdingAPI::Exposed::StartFireSelectionRow* m_SelectTinder;
  ModdingAPI::Exposed::StartFireSelectionRow* m_SelectFuel;
  ModdingAPI::Exposed::StartFireSelectionRow* m_SelectAccelerant;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_CharcoalItemPrefab;
  float m_SecondsBetweenMove;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonStartFireMouse;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonHarvestCharcoalMouse;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  bool m_DestroyCampFireOnCancel;
  int32_t m_SelectedStarterIndex;
  int32_t m_SelectedTinderIndex;
  int32_t m_SelectedFuelIndex;
  int32_t m_SelectedAccelerantIndex;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_StarterList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_TinderList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_FuelList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_AccelerantList;
  ModdingAPI::Exposed::FireManager* m_FireManager;
  bool m_EnablePending;
  float m_EnableDelaySeconds;
  float m_EnableDelayElapsed;
  ModdingAPI::Exposed::Campfire* m_CampFireInstance;
  bool m_DirtyLabels;
  int32_t m_FramesSinceEnabled;
  ModdingAPI::Exposed::FireStarterItem* m_GunpowderAccelerant;
  ModdingAPI::Exposed::GearItem* m_GunpowderGearItem;
  ModdingAPI::Exposed::FireStarterItem* m_KeroseneAccelerant;
  ModdingAPI::Exposed::GearItem* m_KeroseneGearItem;
  int32_t m_SelectedButtonIndex;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_OnIncreaseDelegates;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_OnDecreaseDelegates;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_StartFireSelectionRows;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ItemLists;
  float m_SecondsToNextMove;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165B5C0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165C300))(this);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165C6E0))(this);
  }
  void UpdateMenuNavigation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165C990))(this);
  }
  void Refresh() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165CFA0))(this);
  }
  void EnableAfterDelay(float delaySeconds) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165D0D0))(this, delaySeconds);
  }
  bool IsEnablePending() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x86FCD0))(this);
  }
  void LookAtFire() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165D460))(this);
  }
  void Enable(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165D770))(this, enable);
  }
  void SetCampFireInstance(ModdingAPI::Exposed::Campfire* cf, bool destroyOnCancel) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, ModdingAPI::Exposed::Campfire*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DED0))(this, cf, destroyOnCancel);
  }
  void SetFireContainer(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DEF0))(this, go);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  void SetDefaultFireStarter(ModdingAPI::Exposed::UnityEngine::GameObject* starter) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, starter);
  }
  ModdingAPI::Exposed::FireStarterItem* GetSelectedFireStarter() {
    return reinterpret_cast<ModdingAPI::Exposed::FireStarterItem*(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DFB0))(this);
  }
  ModdingAPI::Exposed::FuelSourceItem* GetSelectedTinder() {
    return reinterpret_cast<ModdingAPI::Exposed::FuelSourceItem*(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165E110))(this);
  }
  ModdingAPI::Exposed::FuelSourceItem* GetSelectedFuelSource() {
    return reinterpret_cast<ModdingAPI::Exposed::FuelSourceItem*(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165E270))(this);
  }
  ModdingAPI::Exposed::FireStarterItem* GetSelectedAccelerant() {
    return reinterpret_cast<ModdingAPI::Exposed::FireStarterItem*(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165E3D0))(this);
  }
  void RefreshChanceOfSuccessLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165E530))(this);
  }
  void RefreshBaseSkillLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165E750))(this);
  }
  void RefreshEstimatedDurationLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165E880))(this);
  }
  void RefreshTinderLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165EA40))(this);
  }
  void IncreaseStarter() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165EBC0))(this);
  }
  void DecreaseStarter() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165ED00))(this);
  }
  void IncreaseTinder() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165EE40))(this);
  }
  void DecreaseTinder() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165EF80))(this);
  }
  void IncreaseFuel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165F0C0))(this);
  }
  void DecreaseFuel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165F200))(this);
  }
  void IncreaseAccelerant() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165F340))(this);
  }
  void DecreaseAccelerant() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165F480))(this);
  }
  bool CanStartFire() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165F5C0))(this);
  }
  void OnStartFire(bool skipResearchItemCheck) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165F780))(this, skipResearchItemCheck);
  }
  void ForceBurnResearchItem() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165FE50))(this);
  }
  void MaybeCloseFireContainer() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165FE60))(this);
  }
  void OnCancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165FF80))(this);
  }
  bool CanHarvestCharcoal() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1660190))(this);
  }
  void OnCharcoalHarvest() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1660320))(this);
  }
  bool FilterItem(ModdingAPI::Exposed::GearItem* gi, int32_t type) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, ModdingAPI::Exposed::GearItem*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16609B0))(this, gi, type);
  }
  bool FilterItemFireStarter(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1660D50))(this, gi);
  }
  bool FilterItemTinder(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1660E20))(this, gi);
  }
  bool FilterItemFuelSource(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1660EF0))(this, gi);
  }
  bool FilterItemAccelerant(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1660FC0))(this, gi);
  }
  void RefreshList(ModdingAPI::Exposed::StartFireSelectionRow* row, ModdingAPI::Exposed::System::Collections::Generic::List_T_* gearList, int32_t type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, ModdingAPI::Exposed::StartFireSelectionRow*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1661090))(this, row, gearList, type);
  }
  void RefreshLabels() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1661B80))(this);
  }
  bool HasDirectSunlight() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1661CD0))(this);
  }
  bool IsThisKeroseneAccelerant(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1661E00))(this, gi);
  }
  bool IsGunpowderAccelerant(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1661F00))(this, gi);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FireStart*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1662000))(this);
  }
};
}