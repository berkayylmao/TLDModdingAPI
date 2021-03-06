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
struct __Panel_TutorialPopup_Il2CppStaticFields {
};

struct __Panel_TutorialPopup_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_TutorialPopup_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_TutorialPopup_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_TutorialPopup_Il2CppVtbl vtbl;
};

class Panel_TutorialPopup {
public:
  // Il2Cpp fields:
  __Panel_TutorialPopup_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  ModdingAPI::Exposed::UILabel* m_TitleLabel;
  ModdingAPI::Exposed::UILabel* m_MessageLabel;
  ModdingAPI::Exposed::UILabel* m_SummaryLabel;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_MouseButtons;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_PanelElements;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BackgroundContainer;
  bool m_UseHUDPopup;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_TutorialPopups;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_TutorialPopupRequests;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BackgroundPane;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E4A80))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E4C40))(this);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E5110))(this);
  }
  void Enable(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E5120))(this, enable);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E5450))(this);
  }
  void ShowPanelAndPause() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E5560))(this);
  }
  void ClearRequests() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E5800))(this);
  }
  bool CanShowTutorialPopup() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E58B0))(this);
  }
  void RemoveCurrentTutorialPopup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E5A30))(this);
  }
  bool ShowNextTutorialPopup() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E5AE0))(this);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E5C10))(this);
  }
  void ShowCurrentTutorialPopup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E5D00))(this);
  }
  void QueueTutorialPopupRequest(ModdingAPI::Exposed::Panel_TutorialPopup::TutorialPopupRequest* request) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*, ModdingAPI::Exposed::Panel_TutorialPopup::TutorialPopupRequest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E60D0))(this, request);
  }
  ModdingAPI::Exposed::Panel_TutorialPopup::TutorialPopupRequest* GetCurrentConfirmationRequest() {
    return reinterpret_cast<ModdingAPI::Exposed::Panel_TutorialPopup::TutorialPopupRequest*(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E6180))(this);
  }
  void ShowTutorialPopupRequest(ModdingAPI::Exposed::Panel_TutorialPopup::TutorialPopupRequest* tutorialPopupRequest) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*, ModdingAPI::Exposed::Panel_TutorialPopup::TutorialPopupRequest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E6230))(this, tutorialPopupRequest);
  }
  void ShowTutorialPopupRequest(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E64F0))(this, name);
  }
  void OnCancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E66A0))(this);
  }
  void UpdateButtons() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E6870))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_TutorialPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19E69E0))(this);
  }
};
}