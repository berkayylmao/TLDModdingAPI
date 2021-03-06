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
struct __Panel_GearSelect_Il2CppStaticFields {
};

struct __Panel_GearSelect_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_GearSelect_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_GearSelect_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_GearSelect_Il2CppVtbl vtbl;
};

class Panel_GearSelect {
public:
  // Il2Cpp fields:
  __Panel_GearSelect_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ScrollList* m_ScrollList;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonLeft;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonRight;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonLeftGamepad;
  ModdingAPI::Exposed::UISprite* m_ButtonLeftGamepadSprite;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonRightGamepad;
  ModdingAPI::Exposed::UISprite* m_ButtonRightGamepadSprite;
  ModdingAPI::Exposed::GenericButtonMouseSpawner* m_MouseButtonSelectGear;
  ModdingAPI::Exposed::UILabel* m_Label;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ItemStatsObject;
  ModdingAPI::Exposed::UILabel* m_ConditionLabel;
  ModdingAPI::Exposed::UILabel* m_WeightLabel;
  ModdingAPI::Exposed::UIWidget_array* m_WidgetsToDisableForNoBG;
  ModdingAPI::Exposed::UnityEngine::Transform* m_PanelContentTransform;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_PanelContentPosNormal;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_PanelContentPosNoBG;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_CoverflowGearItems;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_GearItems;
  ModdingAPI::Exposed::GearItem* m_SelectedItem;
  bool m_IsStruggleWeaponSelection;
  ModdingAPI::Exposed::System::Action* m_OnSelectAction;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_FeedFireGameObject;
  ModdingAPI::Exposed::GearPlacePoint* m_GearPlacePointSelected;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1673B20))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1673C70))(this);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  void Enable(bool enabled, int32_t filter, bool isStruggleWeaponSelection) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*, bool, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1673DF0))(this, enabled, filter, isStruggleWeaponSelection);
  }
  void Enable(bool enabled, ModdingAPI::Exposed::System::Collections::Generic::List_T_* listItems, bool isStruggleWeaponSelection, ModdingAPI::Exposed::System::Action* onGearSelected) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*, bool, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, bool, ModdingAPI::Exposed::System::Action*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1673E60))(this, enabled, listItems, isStruggleWeaponSelection, onGearSelected);
  }
  void OnCancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16740B0))(this);
  }
  void SelectItemByIndex(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1674200))(this, index);
  }
  void PreviousGear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1674300))(this);
  }
  void NextGear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1674410))(this);
  }
  void SelectGear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1674520))(this);
  }
  ModdingAPI::Exposed::GearItem* GetSelectedItem() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F1090))(this);
  }
  void ShowCookFoodPicker(ModdingAPI::Exposed::UnityEngine::GameObject* fireObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16747A0))(this, fireObject);
  }
  void ShowCookWaterPicker(ModdingAPI::Exposed::UnityEngine::GameObject* fireObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1674E20))(this, fireObject);
  }
  void SetSelectedGearPlacePoint(ModdingAPI::Exposed::GearPlacePoint* selectedGearPlacePoint) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*, ModdingAPI::Exposed::GearPlacePoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6012B0))(this, selectedGearPlacePoint);
  }
  ModdingAPI::Exposed::GearItem* GetScrolllistCurrentItem() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16756D0))(this);
  }
  void UpdateSelectedGear(int32_t selectedGearIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1675790))(this, selectedGearIndex);
  }
  void UpdateSelectedGear(ModdingAPI::Exposed::GearItem* selectedGear) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1675860))(this, selectedGear);
  }
  void RefreshVisuals() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1675B60))(this);
  }
  void UpdateGamepadSelection() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1675DC0))(this);
  }
  void SetupScrollList() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1676110))(this);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1676460))(this);
  }
  void SetPreviousPanelActive(bool toggle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1676640))(this, toggle);
  }
  void DoFirePickerAction() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1676770))(this);
  }
  ModdingAPI::Exposed::GearPlacePoint* FindFireEmptyPlacePoint() {
    return reinterpret_cast<ModdingAPI::Exposed::GearPlacePoint*(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1676A50))(this);
  }
  void SetBGWidgetsEnabled(bool shouldEnable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1676C00))(this, shouldEnable);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GearSelect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1676E40))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetItems(int32_t filter) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1675310))(filter);
  }
};
}