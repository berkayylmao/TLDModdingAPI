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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed {
struct __Panel_CustomXPSetup_Il2CppStaticFields {
};

struct __Panel_CustomXPSetup_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_CustomXPSetup_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_CustomXPSetup_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_CustomXPSetup_Il2CppVtbl vtbl;
};

class Panel_CustomXPSetup {
public:
  // Il2Cpp fields:
  __Panel_CustomXPSetup_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_ComboBoxHeight;
  float m_SectionHeaderHeight;
  ModdingAPI::Exposed::System::String_array* m_BaseXPModeCustomStrings;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_CustomXPMenuItemOrder;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_SectionList;
  ModdingAPI::Exposed::ConsoleComboBox* m_XPModePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_BaseDifficultyPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_StartingTODPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_StartingWeatherPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_AllowInteriorSpawnPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_AllowVoiceoverPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_DayNightMultiplierPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_WeatherChangeFreqPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_BlizzardFreqPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_GradualTempReductionPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_WindVariabilityPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_AuroraFreqPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_UseMinAirTempPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_CalorieBurnRatePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_ThirstIncreasePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_FatigueIncreasePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_FreezingIncreasePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_ConditionRecoveryRestPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_ConditionRecoveryAwakePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_HoursToCureHypothermiaPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_FrostbiteRiskPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_CabinFeverEnabledPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_ParasitesEnabledPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_DysenteryEnabledPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_SprainsEnabledPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_FoodPoisoningEnabledPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_BrokenRibsEnabledPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_LimitedRestPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_AdjustFreezingNearbyFirePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_InterruptIfFreezingWhileSleepingPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_BirchBarkEnabledPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_ItemDecayRatePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_ItemSpawnChancePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_EmptyContainerChancePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_StickBranchStoneFreqPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_StartingGearPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_RiflesInWorldPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_RevolversInWorldPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_PlantSpawnFreqPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_ReduceMaxItemsInContainersPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_StrugglePlayerStrengthBonusPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_StruggleDamageReceivedModifierPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_StruggleClothingDamagePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_FishSpawnChancePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_WolfSpawnDistancePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_WolfFleeChancePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_TimberWolfPackFearPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_WildlifeDetectionRangePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_WildlifeInterruptRestPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_StruggleDamageEventSeverityPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_WildlifeSmellRangePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_SmellIncreaseBloodPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_WolfSpawnChancePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_TimberWolfSpawnChancePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_DeerSpawnChancePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_RabbitSpawnChancePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_BearSpawnChancePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_MooseSpawnChancePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_WildlifeRespawnFreqPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_ReduceWildlifePopOverTimePopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_WildlifeNotAttackUnprovokedPopupList;
  ModdingAPI::Exposed::ConsoleComboBox* m_NoPredatorsFirstDayPopupList;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Scrollbar;
  ModdingAPI::Exposed::UIPanel* m_ScrollPanel;
  ModdingAPI::Exposed::UnityEngine::Transform* m_ScrollPanelOffsetTransform;
  ModdingAPI::Exposed::UILabel* m_TooltipLabel;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ShareExperiencePopupObj;
  ModdingAPI::Exposed::UILabel* m_ShareExperiencePopupLabel;
  int32_t m_CustomXPSelectedButtonIndex;
  System_String* m_CachedCustomModeString;
  uint32_t m_CachedMaxLength;
  System_String* m_CachedKeyboardDesc;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_MousePositionLastFrame;
  float m_ScrollPanelHeight;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_XPModeStringList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_StartTODStringList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_StartWeatherStringList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_YesNoStringList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_DayNightMultiplierStringList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_DistanceStringList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_TunableLMHStringList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_TunableNLHStringList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_TunableLMHVStringList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_TunableNLMHStringList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_TunableNLMHVStringList;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF78F0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF79B0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF7B10))(this);
  }
  void Enable(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF7D80))(this, enable);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  void OnCancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF7E90))(this);
  }
  void OnContinue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF8050))(this);
  }
  void OnShareExperiencePopup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF81C0))(this);
  }
  void OnEnterCode() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF8420))(this);
  }
  void OnEnterCodePopupConfirmed() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF8840))(this);
  }
  void OnEnterCodePopupCancelled(bool wasCancelled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF89E0))(this, wasCancelled);
  }
  void OnScrollbarChange() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF8B20))(this);
  }
  System_String* AddDashesToCustomModeString(System_String* customString) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF8BC0))(this, customString);
  }
  void SetUIFromCurrentCustomXP() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF8CE0))(this);
  }
  void DoScroll(float scrollAmount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF9BD0))(this, scrollAmount);
  }
  void UpdateSlider() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF9CF0))(this);
  }
  void UpdateButtonLegendMainScreen() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BF9F50))(this);
  }
  void UpdateButtonLegendSharePopup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BFA0F0))(this);
  }
  void SetCustomXPSettingsFromUI() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BFA1E0))(this);
  }
  void InitializeCustomXPMenuItems() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BFB2A0))(this);
  }
  void SetValuesToMatchXPMode() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BFC8E0))(this);
  }
  void SetXPModePopupListString() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BFCA20))(this);
  }
  void UpdateAfterTunableChange() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BFCBB0))(this);
  }
  void ResetToDefault() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BFCBD0))(this);
  }
  void UpdateMenuNavigation(int32_t index, ModdingAPI::Exposed::System::Collections::Generic::List_T_* menuItems) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BFCDD0))(this, index, menuItems);
  }
  void SetConsoleComboBoxIndex(ModdingAPI::Exposed::ConsoleComboBox* comboBox, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*, ModdingAPI::Exposed::ConsoleComboBox*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BFDE90))(this, comboBox, index);
  }
  void DoMainScreenControls() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BFDF90))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CustomXPSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BFE2E0))(this);
  }
};
}