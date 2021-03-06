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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.Affliction.hpp"


namespace ModdingAPI::Exposed {
struct __Panel_FirstAid_Il2CppStaticFields {
};

struct __Panel_FirstAid_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_FirstAid_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_FirstAid_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_FirstAid_Il2CppVtbl vtbl;
};

class Panel_FirstAid {
public:
  // Il2Cpp fields:
  __Panel_FirstAid_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_TimeWidgetPos;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  bool m_EnableDiaryOnExit;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ClickBlocker;
  System_String* m_OpenFirstAidAudio;
  System_String* m_CloseFirstAidAudio;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SurvivalTabs;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_StoryTabs;
  ModdingAPI::Exposed::System::String_array* m_ColdStatusLocIDs;
  ModdingAPI::Exposed::UILabel* m_ColdStatusLabel;
  ModdingAPI::Exposed::UILabel* m_ColdPercentLabel;
  ModdingAPI::Exposed::System::String_array* m_FatigueStatusLocIDs;
  ModdingAPI::Exposed::UILabel* m_FatigueStatusLabel;
  ModdingAPI::Exposed::UILabel* m_FatiguePercentLabel;
  ModdingAPI::Exposed::System::String_array* m_HungerStatusLocIDs;
  ModdingAPI::Exposed::UILabel* m_HungerStatusLabel;
  ModdingAPI::Exposed::UILabel* m_HungerPercentLabel;
  ModdingAPI::Exposed::System::String_array* m_ThirstStatusLocIDs;
  ModdingAPI::Exposed::UILabel* m_ThirstStatusLabel;
  ModdingAPI::Exposed::UILabel* m_ThirstPercentLabel;
  ModdingAPI::Exposed::UILabel* m_CalorieStoreLabel;
  ModdingAPI::Exposed::UILabel* m_AirTempLabel;
  ModdingAPI::Exposed::UILabel* m_WindchillLabel;
  ModdingAPI::Exposed::UILabel* m_FeelsLikeLabel;
  ModdingAPI::Exposed::UILabel* m_LabelConditionPercent;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_PaperDollMale;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_PaperDollFemale;
  ModdingAPI::Exposed::UISprite* m_SpriteStatusLine;
  ModdingAPI::Exposed::UnityEngine::Color m_GoodHealthStatusColor;
  float m_GoodHealthThreshold;
  ModdingAPI::Exposed::UnityEngine::Color m_FairHealthStatusColor;
  float m_FairHealthThreshold;
  ModdingAPI::Exposed::UnityEngine::Color m_PoorHealthStatusColor;
  float m_PoorHealthThreshold;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_RightPageHealthyObject;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_RightPageObject;
  ModdingAPI::Exposed::UILabel* m_LabelCause;
  ModdingAPI::Exposed::UILabel* m_LabelAfflictionDescription;
  ModdingAPI::Exposed::UILabel* m_LabelAfflictionDescriptionNoRest;
  ModdingAPI::Exposed::UITexture_array* m_SpriteListItemsNeeded;
  ModdingAPI::Exposed::UISprite_array* m_CheckmarksItemsNeeded;
  ModdingAPI::Exposed::UILabel_array* m_NumLabelItemsNeeded;
  ModdingAPI::Exposed::UILabel* m_LabelWaterAmount;
  ModdingAPI::Exposed::UILabel* m_altLabelWaterAmount;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_WaterAmountPixelOffset;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ObjectRestRemaining;
  ModdingAPI::Exposed::UILabel* m_LabelRestRemaining;
  ModdingAPI::Exposed::UILabel* m_LabelRestRequired;
  ModdingAPI::Exposed::UILabel_array* m_LabelOr;
  ModdingAPI::Exposed::UILabel_array* m_LabelPlus;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ItemsNeededOnlyOneObj;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ItemsNeededMultipleObj;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_FAKObject;
  ModdingAPI::Exposed::ScrollList* m_ScrollListEffects;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonScrollUp;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonScrollDown;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ScrollbarObject;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SpecialTreatmentWindow;
  ModdingAPI::Exposed::UILabel* m_LabelAfflictionName;
  ModdingAPI::Exposed::UILabel* m_LabelSpecialTreatment;
  ModdingAPI::Exposed::UILabel* m_LabelSpecialTreatmentDescription;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BuffWindow;
  ModdingAPI::Exposed::UILabel* m_LabelBuffDescription;
  ModdingAPI::Exposed::UISprite_array* m_BodyIconList;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BodyIconActiveAnimationObj;
  System_String* m_BodyIconSpriteNameAffliction;
  System_String* m_BodyIconSpriteNameBuff;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_MultipleDosesObject;
  ModdingAPI::Exposed::UILabel* m_LabelDosesRemaining;
  ModdingAPI::Exposed::UILabel* m_LabelDosesRequired;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonBack;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_SprainedWristMajorOffset;
  ModdingAPI::Exposed::GamepadButtonSprite_array* m_GamepadButtonSprites;
  ModdingAPI::Exposed::UnityEngine::Color m_ColorAffliction;
  ModdingAPI::Exposed::UnityEngine::Color m_ColorRiskAffliction;
  ModdingAPI::Exposed::UnityEngine::Color m_ColorNormal;
  ModdingAPI::Exposed::UISprite_array* m_TintedSprites;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_TreatmentButtonSingle;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_TreatmentButtonMultiLeft;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_TreatmentButtonMultiRight;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_TreatmentSwapIndictorLeft;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_TreatmentSwapIndictorRight;
  ModdingAPI::Exposed::UIWidget* m_TreatmentWidgetSingle;
  ModdingAPI::Exposed::UIWidget* m_TreatmentWidgetMultiLeft;
  ModdingAPI::Exposed::UIWidget* m_TreatmentWidgetMultiRight;
  ModdingAPI::Exposed::UISprite* m_TreatmentBorderSingle;
  ModdingAPI::Exposed::UISprite* m_TreatmentBorderMultiLeft;
  ModdingAPI::Exposed::UISprite* m_TreatmentBorderMultiRight;
  ModdingAPI::Exposed::UILabel* m_TreatmentDontHaveItemsLabel;
  ModdingAPI::Exposed::UILabel* m_UsedAntibioticsAlreadyLabel;
  float m_HasTreatmentAlpha;
  float m_MissingTreatmentAlpha;
  ModdingAPI::Exposed::Panel_HUD::ScentIndicator* m_ScentIndicator;
  ModdingAPI::Exposed::UILabel* m_ScentHeaderLabel;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_DurationWidgetParentObj;
  ModdingAPI::Exposed::UILabel* m_DurationWidgetHoursLabel;
  ModdingAPI::Exposed::UILabel* m_DurationWidgetMinutesLabel;
  ModdingAPI::Exposed::FirstAidKitButton_array* m_FakButtons;
  ModdingAPI::Exposed::FirstAidKitButton* m_SelectedFAKButton;
  ModdingAPI::Exposed::AfflictionButton* m_SelectedAffButton;
  int32_t m_BodyIconWidthOriginal;
  int32_t m_BodyIconHeightOriginal;
  bool m_DoneFirstUpdate;
  uint32_t m_OpenCloseAudioID;
  System_String* m_ItemJustUsed;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_TreatmentItemsToUse;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_MainTreatmentItems;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_AltTreatmentItems;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_AfflictionsLastFrame;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_AfflictionsThisFrame;
  ModdingAPI::Exposed::Panel_FirstAid::AfflictionsAtLocation_array* m_AfflictionsAtLocationArray;
  ModdingAPI::Exposed::UIPanel* m_Panel;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_PaperDollAfflictions;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ScrollListAfflictions;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_HasBadAfflictionList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_HasRiskAfflictionList;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16627D0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1662A10))(this);
  }
  void DoScrollUp() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1663B90))(this);
  }
  void DoScrollDown() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1663BC0))(this);
  }
  void OnScrollbarChange() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1663BF0))(this);
  }
  void UseItem(ModdingAPI::Exposed::GearItem* gi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1663DD0))(this, gi);
  }
  void SelectItem(ModdingAPI::Exposed::FirstAidKitButton* fakButton) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, ModdingAPI::Exposed::FirstAidKitButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1663EF0))(this, fakButton);
  }
  void UseSelectedItem() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1664170))(this);
  }
  void SelectAffliction(ModdingAPI::Exposed::AfflictionButton* affButton) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, ModdingAPI::Exposed::AfflictionButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1664390))(this, affButton);
  }
  void FirstAidItemCallback() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16644E0))(this);
  }
  void ProgressBarCancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1664880))(this);
  }
  void RefreshAll() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1664890))(this);
  }
  void Enable(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1664970))(this, enable);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  void OnBack() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1664FF0))(this);
  }
  void SelectPrevFAKItem(bool playAudio) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1665150))(this, playAudio);
  }
  void SelectNextFAKItem(bool playAudio) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16654A0))(this, playAudio);
  }
  int32_t GetSelectedAfflictionType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1665800))(this);
  }
  int32_t GetSelectedAfflictionIndex() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16658E0))(this);
  }
  bool SelectFirstAfflictionOfType(int32_t affType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16659C0))(this, affType);
  }
  void SelectMainTreatment() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1665C00))(this);
  }
  void SelectAltTreatment() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1665D50))(this);
  }
  void DoMainTreatment() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1665EA0))(this);
  }
  void DoAltTreatmeant() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1666010))(this);
  }
  void OnInventoryNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1666180))(this);
  }
  void OnClothingNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1666280))(this);
  }
  void OnJournalNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1666370))(this);
  }
  void OnCraftingNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1666460))(this);
  }
  void OnMissionsNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1666550))(this);
  }
  void OnMapNav() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1666640))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Color GetColorForStatusLine() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16667D0))(this);
  }
  void UpdateDueToAfflictionHealed() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1666B40))(this);
  }
  void RefreshStatusLabels() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1666C70))(this);
  }
  void UpdateBodyIconActiveAnimation(int32_t affLocation, int32_t afflictionType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16684B0))(this, affLocation, afflictionType);
  }
  void UpdateAllButSelectedBodyIconColors() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1668B90))(this);
  }
  void RefreshPaperDoll() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1668E10))(this);
  }
  void HideRightPage() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1669290))(this);
  }
  void RefreshRightPage() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1669420))(this);
  }
  void RefreshKit() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x166D860))(this);
  }
  bool CanUpdateColor(ModdingAPI::Exposed::AfflictionButton* afflictionButton, ModdingAPI::Exposed::Panel_FirstAid::AfflictionsAtLocation* afflictionsAtLocation) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, ModdingAPI::Exposed::AfflictionButton*, ModdingAPI::Exposed::Panel_FirstAid::AfflictionsAtLocation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x166D8D0))(this, afflictionButton, afflictionsAtLocation);
  }
  void UpdateBodyIconColors(ModdingAPI::Exposed::AfflictionButton* afflictionButton, bool isButtonSelected, int32_t bodyIconIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, ModdingAPI::Exposed::AfflictionButton*, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x166DA60))(this, afflictionButton, isButtonSelected, bodyIconIndex);
  }
  void AddAfflictionAtLocation(int32_t bodyIconIndex, ModdingAPI::Exposed::Affliction affliction) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, int32_t, ModdingAPI::Exposed::Affliction)>(Helpers::Memory::GetInstance().MakeAbsolute(0x166E190))(this, bodyIconIndex, affliction);
  }
  void RefreshScrollList() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x166E490))(this);
  }
  void CheckIfSelectedAfflictionHealed() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x166EE60))(this);
  }
  void CheckIfSelectedItemUsedUp() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x166F030))(this);
  }
  void ExitInterface() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x166F110))(this);
  }
  void SetItemsNeeded(ModdingAPI::Exposed::System::String_array* remedySprites, ModdingAPI::Exposed::System::Boolean_array* remedyComplete, ModdingAPI::Exposed::System::Int32_array* remedyNumRequired, ModdingAPI::Exposed::System::String_array* altRemedySprites, ModdingAPI::Exposed::System::Boolean_array* altRemedyComplete, ModdingAPI::Exposed::System::Int32_array* altRemedyNumRequired, float waterNeeded, float restNeeded, float restRequired) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, ModdingAPI::Exposed::System::String_array*, ModdingAPI::Exposed::System::Boolean_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::String_array*, ModdingAPI::Exposed::System::Boolean_array*, ModdingAPI::Exposed::System::Int32_array*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x166F1D0))(this, remedySprites, remedyComplete, remedyNumRequired, altRemedySprites, altRemedyComplete, altRemedyNumRequired, waterNeeded, restNeeded, restRequired);
  }
  void RefreshCheckmarks() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1671280))(this);
  }
  bool HasAnyFirstAidItem() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1671660))(this);
  }
  void MaybeUseNextTreatmentItem() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16716D0))(this);
  }
  bool AfflictionTypeNeedsRestAfterItems(int32_t affType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16719B0))(this, affType);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16719D0))(this);
  }
  bool HasBadAffliction() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1671BF0))(this);
  }
  bool HasRiskAffliction() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1671E40))(this);
  }
  bool HasAfflictionOfCategory(ModdingAPI::Exposed::Panel_FirstAid::AfflictionsAtLocation* afflictionsAtLocation, int32_t category) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, ModdingAPI::Exposed::Panel_FirstAid::AfflictionsAtLocation*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16720A0))(this, afflictionsAtLocation, category);
  }
  void ClearAfflictionsAtLocationArray() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1672280))(this);
  }
  void UpdateScrollbar() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1672400))(this);
  }
  void RefreshTintedImages() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16725D0))(this);
  }
  void UpdateScentIndicator() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16728C0))(this);
  }
  void CheckForAfflictionListChange() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1672A50))(this);
  }
  bool AfflictionListHasChanged() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1672C70))(this);
  }
  void EnableNavigationTabs(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1672E70))(this, enable);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_FirstAid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1672F80))(this);
  }
};
}