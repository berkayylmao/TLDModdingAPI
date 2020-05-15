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


namespace ModdingAPI::Exposed {
struct __Panel_SnowShelterInteract_Il2CppStaticFields {
};

struct __Panel_SnowShelterInteract_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_SnowShelterInteract_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_SnowShelterInteract_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_SnowShelterInteract_Il2CppVtbl vtbl;
};

class Panel_SnowShelterInteract {
public:
  // Il2Cpp fields:
  __Panel_SnowShelterInteract_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  float m_RealtimeSecondsToRepairOrDismantle;
  ModdingAPI::Exposed::UIButton* m_Button_Use;
  ModdingAPI::Exposed::UIButton* m_Button_Repair;
  ModdingAPI::Exposed::UIButton* m_Button_Dismantle;
  float m_ButtonSpacing;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_InteractionPanel;
  ModdingAPI::Exposed::UILabel* m_InteractionDescriptionLabel;
  ModdingAPI::Exposed::UILabel* m_InteractionMaterialsLabel;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BottomRightActionButton;
  ModdingAPI::Exposed::UnityEngine::Color m_RepairLabelColorNormal;
  ModdingAPI::Exposed::UnityEngine::Color m_RepairLabelColorNormalHover;
  ModdingAPI::Exposed::UnityEngine::Color m_RepairLabelColorNormalSelected;
  ModdingAPI::Exposed::UnityEngine::Color m_RepairLabelColorDisabled;
  ModdingAPI::Exposed::UnityEngine::Color m_RepairLabelColorDisabledHover;
  ModdingAPI::Exposed::UnityEngine::Color m_RepairLabelColorDisabledSelected;
  ModdingAPI::Exposed::UILabel* m_ErrorLabel;
  ModdingAPI::Exposed::UILabel* m_TimeForRepairHeaderLabel;
  ModdingAPI::Exposed::UILabel* m_DurationLabel;
  ModdingAPI::Exposed::UILabel* m_EstimatedCaloriesBurnedLabel;
  ModdingAPI::Exposed::UILabel* m_CurrentCaloriesLabel;
  ModdingAPI::Exposed::UILabel* m_CurrentCaloriesValLabel;
  ModdingAPI::Exposed::UILabel* m_ConditionLabel;
  ModdingAPI::Exposed::UISprite* m_ConditionSprite;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_PanelElements;
  ModdingAPI::Exposed::HarvestRepairMaterial_array* m_RequiredMaterialsObjects;
  float m_RequiredMaterialsCenteredX;
  float m_RequiredMaterialsSpacing;
  ModdingAPI::Exposed::GenericButtonMouseSpawner* m_MouseButtonInteract;
  ModdingAPI::Exposed::SnowShelter* m_SnowShelter;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Buttons;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ButtonsMenuItems;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ButtonDelegates;
  int32_t m_SelectedButtonIndex;
  bool m_IsRepairing;
  bool m_IsDismantling;
  float m_RealtimeSecondsElapsed;
  bool m_TimeIsAccelerated;
  float m_StoredDayLengthScale;
  int32_t m_FramesInPanel;
  uint32_t m_InteractionAudioID;
  int32_t m_NumSticksUsedForRepair;
  int32_t m_NumClothUsedForRepair;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AE8F0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AF3B0))(this);
  }
  void Enable(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AFAA0))(this, enable);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  void SetSnowShelterInstance(ModdingAPI::Exposed::SnowShelter* ss) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*, ModdingAPI::Exposed::SnowShelter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E150))(this, ss);
  }
  void OnUse() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AFDF0))(this);
  }
  void OnRepair() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AFEF0))(this);
  }
  void OnDismantle() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B0060))(this);
  }
  bool IsTimeAccelerated() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B0140))(this);
  }
  bool IsRepairing() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x79C890))(this);
  }
  bool IsDismantling() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x79C8D0))(this);
  }
  void ExitInterface() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B0150))(this);
  }
  void OnCancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B0260))(this);
  }
  void OnInteract() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B0390))(this);
  }
  void OnInteractionCommon(System_String* audioEvent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B06F0))(this, audioEvent);
  }
  void InteractionFinished() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B0930))(this);
  }
  void UpdateDurationLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B0C80))(this);
  }
  void UpdateEstimatedCaloriesBurnedLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B0DF0))(this);
  }
  void UpdateCurrentCaloriesLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B10D0))(this);
  }
  void UpdateConditionLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B14F0))(this);
  }
  System_String* GetSignedInt(int32_t value) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B1960))(this, value);
  }
  System_String* GetSignedPercentage(float value) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B1A50))(this, value);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B1B80))(this);
  }
  void RefreshMainWindow() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B1E20))(this);
  }
  void SelectButton(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B2560))(this, index);
  }
  void OnSelectUseButton() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B2740))(this);
  }
  void OnSelectRepairButton() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B27F0))(this);
  }
  void OnSelectDismantleButton() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B28A0))(this);
  }
  void UpdateMainWindowNavigation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B2950))(this);
  }
  void UpdateUseButton() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B2CC0))(this);
  }
  void UpdateDismantleButton() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B2E10))(this);
  }
  void UpdateRepairButton() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B2F60))(this);
  }
  void UpdatePanelDisplays() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B3120))(this);
  }
  void RefreshRepairPanel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B3360))(this);
  }
  void UpdateRequiredMaterialsObject(int32_t index, float spacingVal, ModdingAPI::Exposed::GearItem* gi, int32_t count, bool hasItem) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*, int32_t, float, ModdingAPI::Exposed::GearItem*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B3870))(this, index, spacingVal, gi, count, hasItem);
  }
  void RefreshDismantlePanel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B3B50))(this);
  }
  float GetTaskDurationInHours() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B3ED0))(this);
  }
  float GetCalorieBurnRate() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B4070))(this);
  }
  int32_t GetButtonChoiceFromIndex(int32_t index) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B4180))(this, index);
  }
  void CameraPan(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B4270))(this, index);
  }
  bool NeedsRepair() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B4590))(this);
  }
  bool HasMaterialsForRepair() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B4610))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SnowShelterInteract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18B47D0))(this);
  }
};
}