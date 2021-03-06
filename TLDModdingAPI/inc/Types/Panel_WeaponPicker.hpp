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
struct __Panel_WeaponPicker_Il2CppStaticFields {
};

struct __Panel_WeaponPicker_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_WeaponPicker_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_WeaponPicker_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_WeaponPicker_Il2CppVtbl vtbl;
};

class Panel_WeaponPicker {
public:
  // Il2Cpp fields:
  __Panel_WeaponPicker_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ListRoot;
  ModdingAPI::Exposed::WeaponPickerGridItem* m_Item1;
  ModdingAPI::Exposed::WeaponPickerGridItem* m_Item2;
  ModdingAPI::Exposed::WeaponPickerGridItem* m_Item3;
  ModdingAPI::Exposed::WeaponPickerGridItem* m_Item4;
  ModdingAPI::Exposed::UILabel* m_Label1;
  ModdingAPI::Exposed::UILabel* m_Label2;
  ModdingAPI::Exposed::UILabel* m_Label3;
  ModdingAPI::Exposed::UILabel* m_Label4;
  ModdingAPI::Exposed::UISprite* m_StruggleBar;
  float m_StruggleBarFillOffset;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SelectedEffect;
  ModdingAPI::Exposed::TweenScale* m_SelectedSpriteTweenScale;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_GearItems;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_GridItemsList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_LabelsList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_HoverEffectSpriteList;
  int32_t m_SelectedItemIndex;
  ModdingAPI::Exposed::GearItem* m_SelectedItem;
  float m_DurationSeconds;
  float m_TimerSeconds;
  float m_ListOffsetWhen2;
  float m_ListOffsetWhen3;
  float m_ListOriginalOffset;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E6C10))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E71B0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E7300))(this);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  void InitializeLayout() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E7690))(this);
  }
  void MaybeSelectGear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E7A60))(this);
  }
  void Enable(bool enabled, ModdingAPI::Exposed::System::Collections::Generic::List_T_* listItems, float durationSeconds) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*, bool, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E7D90))(this, enabled, listItems, durationSeconds);
  }
  void OnCancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E7FC0))(this);
  }
  void SelectGridItem(ModdingAPI::Exposed::WeaponPickerGridItem* gridItem, bool isInContainer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*, ModdingAPI::Exposed::WeaponPickerGridItem*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E8080))(this, gridItem, isInContainer);
  }
  void MoveSelectedSpriteAndTween(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E8C10))(this, pos);
  }
  int32_t GetHoveredItemIndex() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E8E00))(this);
  }
  void UpdateMouseIndex() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E9010))(this);
  }
  void InitializeListItem(int32_t i) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E93A0))(this, i);
  }
  void InitializeListItems() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E9740))(this);
  }
  System_String* GetCategoryForItem(ModdingAPI::Exposed::GearItem* item) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E98E0))(this, item);
  }
  void UpdateGamepadSelection() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E9AF0))(this);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E9C90))(this);
  }
  void OnSelectedIndexChanged(int32_t newIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E9D70))(this, newIndex);
  }
  void UpdateIndexSelected(int32_t newIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E9FB0))(this, newIndex);
  }
  void UpdateBar() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EA060))(this);
  }
  void InitializeTimerBar(float durationSeconds) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EA190))(this, durationSeconds);
  }
  void SetStruggleBarFillAmount(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EA1D0))(this, value);
  }
  void InitializeSelection() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EA2C0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WeaponPicker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EA6A0))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetPrioritizedWeaponList() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E8320))();
  }
  static inline ModdingAPI::Exposed::GearItem* GetBestItemScare() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E8780))();
  }
  static inline ModdingAPI::Exposed::GearItem* GetBestItemPuncture() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E8840))();
  }
  static inline ModdingAPI::Exposed::GearItem* GetBestItemSlash() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E8900))();
  }
  static inline ModdingAPI::Exposed::GearItem* GetBestItemShoot() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E89C0))();
  }
  static inline ModdingAPI::Exposed::GearItem* GetBestItemPerCategory(int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E89D0))(type);
  }
};
}