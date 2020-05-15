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
struct __Panel_GenericProgressBar_Il2CppStaticFields {
};

struct __Panel_GenericProgressBar_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_GenericProgressBar_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_GenericProgressBar_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_GenericProgressBar_Il2CppVtbl vtbl;
};

class Panel_GenericProgressBar {
public:
  // Il2Cpp fields:
  __Panel_GenericProgressBar_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  ModdingAPI::Exposed::OnExitDelegate* m_handler;
  ModdingAPI::Exposed::UnityEngine::Color m_FailedColor;
  ModdingAPI::Exposed::UISprite* m_SpriteForground;
  ModdingAPI::Exposed::UnityEngine::Transform* m_CenterLocation;
  ModdingAPI::Exposed::UnityEngine::Transform* m_GearItemLocation;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_EatingObjects;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_DrinkingObjects;
  ModdingAPI::Exposed::UIWidget* m_StatusBarWidget;
  float m_StatusBarFadeTime;
  ModdingAPI::Exposed::UISlider* m_Slider;
  ModdingAPI::Exposed::UIWidget* m_SubtitleAltStatusBarWidget;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SubtitleAltEatingObjects;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SubtitleAltDrinkingObjects;
  ModdingAPI::Exposed::UnityEngine::Color m_OriginalColor;
  float m_RandomFailureThreshold;
  float m_ProgressBarDurationSeconds;
  float m_ProgressBarElapsedSeconds;
  bool m_DisplayFailMessage;
  float m_DisplayFailMessageTime;
  float m_DisplayFailMessageLifetime;
  uint32_t m_AudioID;
  uint32_t m_VoiceID;
  bool m_SkipRestoreInHands;
  bool m_TimeAccelerated;
  float m_DayLengthScaleOriginal;
  float m_DayLengthScaleAccelerated;
  ModdingAPI::Exposed::UILabel* m_ProgressBarNameLabel;
  float m_StatusBarFadeTimeRemaining;
  bool m_ShowedHungerThisCycle;
  bool m_ShowedThirstThisCycle;
  bool m_MarkForCancel;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1677130))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1677320))(this);
  }
  void Enable(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16775E0))(this, enable);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  bool IsFadingOutStatusBars() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1677C80))(this);
  }
  void ForceFadeOutComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1677CA0))(this);
  }
  void Launch(System_String* name, float seconds, float minutes, float randomFailureThreshold, System_String* audioName, System_String* voiceName, bool supressHeavyBreathing, bool skipRestoreInHands, ModdingAPI::Exposed::OnExitDelegate* del) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*, System_String*, float, float, float, System_String*, System_String*, bool, bool, ModdingAPI::Exposed::OnExitDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1677CC0))(this, name, seconds, minutes, randomFailureThreshold, audioName, voiceName, supressHeavyBreathing, skipRestoreInHands, del);
  }
  void MarkForCancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1678330))(this);
  }
  void Cancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1678340))(this);
  }
  void SetNameLabel(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1678370))(this, name);
  }
  float GetSliderValue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16783A0))(this);
  }
  bool IsPaused() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16783C0))(this);
  }
  void Pause() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1678470))(this);
  }
  void Resume() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16785E0))(this);
  }
  bool CanUserCancelAction() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1678750))(this);
  }
  void InitializeProgressBar() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1678950))(this);
  }
  void StopProgressBarAudio() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1678B90))(this);
  }
  void ProgressBarEnded(bool success, bool playerCancel) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1678D00))(this, success, playerCancel);
  }
  void UpdateProgressBarInterface() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16790A0))(this);
  }
  void UpdateActiveBars() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1679550))(this);
  }
  void RestoreTimeOfDay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1679C80))(this);
  }
  void AccelerateTimeOfDay(float seconds, float minutes) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1679D50))(this, seconds, minutes);
  }
  void ResumeAcceleratedTimeOfDay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1679EA0))(this);
  }
  void PauseAcceleratedTimeOfDay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1679F70))(this);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x167A040))(this);
  }
  void SetStatusBarWidgetAlpha(float alpha) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x167A130))(this, alpha);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_GenericProgressBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x167A190))(this);
  }
};
}