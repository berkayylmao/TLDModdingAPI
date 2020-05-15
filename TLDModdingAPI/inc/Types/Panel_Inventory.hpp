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
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __Panel_Inventory_Il2CppStaticFields {
  bool ENABLE_QUICK_PLACEMENT;
};

struct __Panel_Inventory_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_Inventory_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_Inventory_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_Inventory_Il2CppVtbl vtbl;
};

class Panel_Inventory {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2FB90;
  static inline    __Panel_Inventory_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Panel_Inventory_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Panel_Inventory_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Panel_Inventory_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SurvivalTabs;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_StoryTabs;
  ModdingAPI::Exposed::UnityEngine::GameObject* TableObject;
  ModdingAPI::Exposed::UnityEngine::GameObject* InventoryItemPrefab;
  int32_t m_MaxItemsDisplayAtOnce;
  ModdingAPI::Exposed::UILabel* m_Label_CarryCapacity;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_MouseButtonBack;
  ModdingAPI::Exposed::UISprite* m_CapacityBarOutline;
  ModdingAPI::Exposed::UISprite* m_CapacityBarSprite;
  ModdingAPI::Exposed::UnityEngine::Color m_CapacityNormalColor;
  ModdingAPI::Exposed::UnityEngine::Color m_CapacityOverloadColor;
  ModdingAPI::Exposed::UnityEngine::Color m_CapacityBuffColor;
  ModdingAPI::Exposed::UIButton* m_DefaultFilterButton;
  ModdingAPI::Exposed::UIButton* m_DefaultSortButton;
  ModdingAPI::Exposed::UIButton_array* m_SortButtons;
  ModdingAPI::Exposed::UIButton_array* m_FilterButtons;
  ModdingAPI::Exposed::UILabel* m_CategoryLabel;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ScrollbarObject;
  ModdingAPI::Exposed::UnityEngine::Color m_LowConditionColor;
  ModdingAPI::Exposed::UnityEngine::Color m_MediumConditionColor;
  ModdingAPI::Exposed::UnityEngine::Color m_HighConditionColor;
  float m_AlphaWhenInBackground;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_InteractionBlocker;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonBack;
  ModdingAPI::Exposed::UILabel* m_LabelNoItems;
  ModdingAPI::Exposed::UnityEngine::Color m_ColorFilterSelected;
  ModdingAPI::Exposed::UnityEngine::Color m_ColorFilterSelectedHover;
  ModdingAPI::Exposed::UnityEngine::Color m_ColorFilterUnselectedEmpty;
  ModdingAPI::Exposed::UnityEngine::Color m_ColorFilterUnselectedEmptyHover;
  ModdingAPI::Exposed::UnityEngine::Color m_ColorFilterUnselectedNonempty;
  ModdingAPI::Exposed::UnityEngine::Color m_ColorFilterUnselectedNonemptyHover;
  ModdingAPI::Exposed::UnityEngine::Color m_ColorFilterSelectedFAKHasAffliction;
  ModdingAPI::Exposed::UnityEngine::Color m_ColorFilterUnselectedFAKHasAffliction;
  ModdingAPI::Exposed::UnityEngine::Color m_ColorFilterUnselectedFAKHasAfflictionEmpty;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Stats;
  ModdingAPI::Exposed::UILabel* m_AirTempLabel;
  ModdingAPI::Exposed::UILabel* m_AirTempHeaderLabel;
  ModdingAPI::Exposed::UILabel* m_WindChillLabel;
  ModdingAPI::Exposed::UILabel* m_WindChillHeaderLabel;
  ModdingAPI::Exposed::UILabel* m_ClothingWarmthLabel;
  ModdingAPI::Exposed::UILabel* m_ClothingWarmthHeaderLabel;
  ModdingAPI::Exposed::UILabel* m_ClothingWindproofLabel;
  ModdingAPI::Exposed::UILabel* m_ClothingWindproofHeaderLabel;
  ModdingAPI::Exposed::UILabel* m_TemperatureLabel;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SelectedSpriteObj;
  ModdingAPI::Exposed::TweenScale* m_SelectedSpriteTweenScale;
  ModdingAPI::Exposed::UILabel* m_CategoryWeightLabel;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_CategoryWeightBG;
  ModdingAPI::Exposed::UILabel* m_ClothingWeightLabel;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ClothingWeightBG;
  float m_SecondsBetweenMove;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_FilteredInventoryList;
  int32_t m_TableNumColumns;
  float m_TableSpacingHorizontal;
  float m_TableSpacingVertical;
  ModdingAPI::Exposed::UILabel* m_RuinedLabel;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ItemDescriptionPageDummy;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ItemDescriptionPagePrefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_GearItemCoverflowLocation;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_GearItemCoverflowPrefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SortLabel;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SortButtonsObject;
  float m_PlaceObjectHoldDuration;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  ModdingAPI::Exposed::ButtonLegendContainer* m_SortButtonLegendContainer;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SelectedEffect;
  bool m_EnableDiaryOnExit;
  ModdingAPI::Exposed::UISlider* m_ScrollbarSlider;
  ModdingAPI::Exposed::UIButton* m_SelectedFilterButton;
  ModdingAPI::Exposed::UIButton* m_SelectedSortButton;
  System_String* m_SelectedSortOldSprite;
  System_String* m_FilterName;
  System_String* m_SortName;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_SortFlipDictionary;
  int32_t m_SelectedSortIndex;
  int32_t m_SelectedFilterIndex;
  int32_t m_SelectedItemIndexVal;
  int32_t m_NumItemsDisplayed;
  int32_t m_FirstItemDisplayedIndexVal;
  int32_t m_NumFramesInPanel;
  uint32_t m_OpenCloseAudioID;
  ModdingAPI::Exposed::GearItem* m_LastSelectedGearItem;
  float m_SecondsToNextMove;
  int32_t m_NumColumns;
  ModdingAPI::Exposed::InventoryGridItem_array* m_TableItems;
  ModdingAPI::Exposed::UIPanel* m_Panel;
  ModdingAPI::Exposed::GearItem* m_LastDroppedSingleGearItem;
  bool m_IsDirty;
  bool m_ForceSelectionUpdate;
  ModdingAPI::Exposed::ItemDescriptionPage* m_ItemDescriptionPage;
  ModdingAPI::Exposed::GearItemCoverflow* m_GearItemCoverflow;
  bool m_PausedAndHidden;
  ModdingAPI::Exposed::UnityEngine::Transform* m_SectionNavSelectedSprite;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SectionNavArrowPrompts;
  int32_t m_SectionNavIndex;
  bool m_IsInSectionNav;
  float m_DropButtonHeldTime;
  ModdingAPI::Exposed::GamepadButtonSprite_array* m_GamepadButtonSprites;
  bool m_MovementPressedOnEnable;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_SlotLabels;

  // Member methods:
  int32_t get_m_SelectedItemIndex() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F5630))(this);
  }
  void set_m_SelectedItemIndex(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19964A0))(this, value);
  }
  int32_t get_m_FirstItemDisplayedIndex() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1996570))(this);
  }
  void set_m_FirstItemDisplayedIndex(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1996580))(this, value);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1996780))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1996E10))(this);
  }
  void UpdateSortNavigation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1997810))(this);
  }
  void UpdateFilterNavigation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1997A10))(this);
  }
  void UpdateButtonTriggers() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1997C40))(this);
  }
  void MaybeFlagMovmentPressedOnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1998240))(this);
  }
  bool ShouldIgnoreNavigationInput() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19982F0))(this);
  }
  int32_t ClampIndexToFilteredItemsCount(int32_t index) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1998AB0))(this, index);
  }
  void ScrollDown() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1998B80))(this);
  }
  void ScrollUp() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1998C80))(this);
  }
  System_String* GetRefuelButtonText(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1998CC0))(this, gi);
  }
  void UpdateButtonStates() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1998EA0))(this);
  }
  void RefreshTable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19994B0))(this);
  }
  void Enable(bool enable, bool resetFilter) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1999A00))(this, enable, resetFilter);
  }
  void MarkDirty() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199A2F0))(this);
  }
  void SelectGridItem(ModdingAPI::Exposed::InventoryGridItem* gridItem) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, ModdingAPI::Exposed::InventoryGridItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199A300))(this, gridItem);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199A330))(this);
  }
  void OnPopupClicked() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199A400))(this);
  }
  void OnStatus() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199A490))(this);
  }
  void OnLog() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199A580))(this);
  }
  void OnClothingNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199A670))(this);
  }
  void OnFirstAidNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199A760))(this);
  }
  void OnJournalNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199A850))(this);
  }
  void OnCraftingNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199A950))(this);
  }
  void OnMissionsNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199AA40))(this);
  }
  void OnMapNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199AB40))(this);
  }
  void OnScrollbarChange() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199ACE0))(this);
  }
  void ResetFilter() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199AE40))(this);
  }
  void OnFilterChange(ModdingAPI::Exposed::UIButton* filterButtonClicked) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, ModdingAPI::Exposed::UIButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199AE70))(this, filterButtonClicked);
  }
  void OnSortChange(ModdingAPI::Exposed::UIButton* sortButtonClicked) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, ModdingAPI::Exposed::UIButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199B140))(this, sortButtonClicked);
  }
  bool AllowUseAtZeroHP(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199B550))(this, gi);
  }
  void OnEquip() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199B650))(this);
  }
  void OnExamine() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199BA50))(this);
  }
  void PauseAndHide() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199BE20))(this);
  }
  void OnDrop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199BF20))(this);
  }
  void OnPlace() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199C930))(this);
  }
  bool IsSelected(ModdingAPI::Exposed::GearItem* item) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199CC30))(this, item);
  }
  void OnRefuel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199CCF0))(this);
  }
  void OnOtherAction() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnHarvest() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199D1D0))(this);
  }
  void OnRepair() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199D310))(this);
  }
  void ExitInterface(bool restoreItemInHands) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199D450))(this, restoreItemInHands);
  }
  bool IgnoreWaterSupplyItem(ModdingAPI::Exposed::WaterSupply* ws) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, ModdingAPI::Exposed::WaterSupply*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199D580))(this, ws);
  }
  bool IsPausedFlare(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199D670))(this, gi);
  }
  bool ItemPassesFilter(ModdingAPI::Exposed::GearItem* pi, System_String* filterName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, ModdingAPI::Exposed::GearItem*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199D750))(this, pi, filterName);
  }
  void OnBack() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199DB30))(this);
  }
  void OnAddToSatchel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199DCE0))(this);
  }
  void OnControllerScheme(bool isController) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199DDB0))(this, isController);
  }
  void ReturnFromAddToSatchel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199DF60))(this);
  }
  bool CanBeAddedToSatchel(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199DFF0))(this, gi);
  }
  int32_t GetNumFramesInPanel() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199E140))(this);
  }
  void MoveSelectedSpriteAndTween(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199E150))(this, pos);
  }
  ModdingAPI::Exposed::GearItem* GetCurrentlySelectedGearItem() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199E380))(this);
  }
  void InstantiateInventoryTableItems() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199E4A0))(this);
  }
  void InstantiateItemDescriptionPage() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199E720))(this);
  }
  void UpdateFilteredInventoryList() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199F550))(this);
  }
  bool SelectLastSelectedGearItem() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A0280))(this);
  }
  void ScrollToBottom() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A0440))(this);
  }
  void RefreshFilterIconColors() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A05A0))(this);
  }
  bool FilterHasNoItems(System_String* filterName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A0B50))(this, filterName);
  }
  void RefreshNoItemsLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A0CD0))(this);
  }
  void UpdateSortLabels() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A0E80))(this);
  }
  void UpdateScrollbarThumbSize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A10B0))(this);
  }
  void EnableGearStatsBlock(bool enabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A11D0))(this, enabled);
  }
  void UpdateGearStatsBlock() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A1420))(this);
  }
  void DoSectionNavUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A1A60))(this);
  }
  void DoSectionNavControls() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A1B90))(this);
  }
  bool ShouldEnterSectionNav() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A21D0))(this);
  }
  void MoveSectionNavToButton(ModdingAPI::Exposed::UIButton* button) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, ModdingAPI::Exposed::UIButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A2280))(this, button);
  }
  void EnterSectionNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A23D0))(this);
  }
  void DeselectAllItems() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A2610))(this);
  }
  void EnableNavigationTabs(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A2840))(this, enable);
  }
  void OnAssignSlot0() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A2950))(this);
  }
  void OnAssignSlot1() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A2960))(this);
  }
  void OnAssignSlot2() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A2970))(this);
  }
  void OnAssignSlot3() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A2980))(this);
  }
  void InitQuickSelect() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A2990))(this);
  }
  void UpdateQuickSelect() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A2B10))(this);
  }
  void UpdateSlotLabel(int32_t slotIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A2E70))(this, slotIndex);
  }
  void AssignSlot(int32_t slotIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A31A0))(this, slotIndex);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Inventory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19A3600))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> ENABLE_QUICK_PLACEMENT = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->ENABLE_QUICK_PLACEMENT; }
  );

  // Static methods:
  static inline bool Navigate(ModdingAPI::Exposed::UnityEngine::MonoBehaviour* context, int32_t refSelectedIndex, int32_t refFirstItemIndex, int32_t itemCount, int32_t tableLength, int32_t numColumns) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::MonoBehaviour*, int32_t, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19983B0))(context, refSelectedIndex, refFirstItemIndex, itemCount, tableLength, numColumns);
  }
  static inline int32_t CompareGearByName(ModdingAPI::Exposed::GearItem* g1, ModdingAPI::Exposed::GearItem* g2) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::GearItem*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199ED90))(g1, g2);
  }
  static inline int32_t CompareGearByNameTorchesLast(ModdingAPI::Exposed::GearItem* g1, ModdingAPI::Exposed::GearItem* g2) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::GearItem*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199EE60))(g1, g2);
  }
  static inline int32_t CompareGearByNameHarvestableLast(ModdingAPI::Exposed::GearItem* g1, ModdingAPI::Exposed::GearItem* g2) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::GearItem*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199F040))(g1, g2);
  }
  static inline int32_t CompareGearByCondition(ModdingAPI::Exposed::GearItem* g1, ModdingAPI::Exposed::GearItem* g2) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::GearItem*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199F390))(g1, g2);
  }
  static inline int32_t CompareGearByWeight(ModdingAPI::Exposed::GearItem* g1, ModdingAPI::Exposed::GearItem* g2) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::GearItem*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x199F470))(g1, g2);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))();
  }
};
}