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
struct __Panel_CanOpening_Il2CppStaticFields {
};

struct __Panel_CanOpening_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_CanOpening_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_CanOpening_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_CanOpening_Il2CppVtbl vtbl;
};

class Panel_CanOpening {
public:
  // Il2Cpp fields:
  __Panel_CanOpening_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  ModdingAPI::Exposed::UILabel* m_TitleLabel;
  ModdingAPI::Exposed::ScrollList* m_ScrollList;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonLeft;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ButtonRight;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_InspectGearOffset;
  ModdingAPI::Exposed::TweenAlpha* m_LabelTween;
  ModdingAPI::Exposed::UILabel* m_UseLabel;
  ModdingAPI::Exposed::UILabel* m_ToolNameLabel;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_UsableTools;
  bool m_CameFromInventory;
  bool m_CameFromFeedFire;
  bool m_RestoreItemInHands;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_FireContainerInUse;
  ModdingAPI::Exposed::CookingPotItem* m_CookingPotInUse;
  ModdingAPI::Exposed::GearItem* m_GearItemToOpen;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_AvailableTools;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_CoverflowItems;
  bool m_IsGoingToOpenItem;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_InspectLightOrigPos;
  float m_InspectCamOrigDepth;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B34CC0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B34E20))(this);
  }
  void Enable(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B351F0))(this, enable);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  void OnCancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B35670))(this);
  }
  void OnOpen() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B35800))(this);
  }
  bool IsGoingToOpenItem() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319870))(this);
  }
  void NextTool() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B35AD0))(this);
  }
  void PrevTool() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B35C50))(this);
  }
  void SelectToolByIndex(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B35DD0))(this, index);
  }
  void OnSmash() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B35F30))(this);
  }
  void SetupScrollList() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B36140))(this);
  }
  void RefreshVisuals() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B366E0))(this);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B36960))(this);
  }
  void AddAlternateTools() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B36A80))(this);
  }
  bool ToolCanOpenSelectedItem(ModdingAPI::Exposed::CanOpeningItem* ci) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*, ModdingAPI::Exposed::CanOpeningItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B36E00))(this, ci);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_CanOpening*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B36EE0))(this);
  }
};
}