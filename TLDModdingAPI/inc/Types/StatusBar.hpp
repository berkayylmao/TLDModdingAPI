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
struct __StatusBar_Il2CppStaticFields {
};

struct __StatusBar_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_ShouldBeHidden;
  VirtualInvokeData _5_GetFillValueThirst;
  VirtualInvokeData _6_GetFillValueHunger;
  VirtualInvokeData _7_GetFillValueCold;
  VirtualInvokeData _8_GetFillValueFatigue;
  VirtualInvokeData _9_GetFillValueCondition;
  VirtualInvokeData _10_GetReverseFillValueFatigue;
  VirtualInvokeData _11_GetReverseFillValueCondition;
  VirtualInvokeData _12_GetBuffFillValue;
  VirtualInvokeData _13_GetBuffFillValueCondition;
  VirtualInvokeData _14_GetRateOfChangeThirst;
  VirtualInvokeData _15_GetRateOfChangeHunger;
  VirtualInvokeData _16_GetRateOfChangeCold;
  VirtualInvokeData _17_GetRateOfChangeFatigue;
  VirtualInvokeData _18_IsBuffActive;
  VirtualInvokeData _19_ShouldShowBuffedFillSprite;
  VirtualInvokeData _20_IsDebuffActive;
};

struct __StatusBar_Il2CppClass {
  Il2CppClass_1 _1;
  __StatusBar_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StatusBar_Il2CppVtbl vtbl;
};

class StatusBar {
public:
  // Il2Cpp fields:
  __StatusBar_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t m_StatusBarType;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_HierarchyRoot;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_UpArrows;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_DownArrows;
  float m_MediumThreshold;
  float m_HighThreshold;
  ModdingAPI::Exposed::UISprite* m_OuterBoxSprite;
  float m_AlphaWhenHUDFadedOut;
  float m_ThresholdHUDFadeOut;
  float m_ThresholdCritical;
  ModdingAPI::Exposed::UISprite* m_FillSprite;
  ModdingAPI::Exposed::UISprite* m_ReverseFillSprite;
  ModdingAPI::Exposed::UISprite* m_BuffFillSprite;
  ModdingAPI::Exposed::UISprite* m_SpriteWhenEmpty;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BuffObject;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_DebuffObject;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_FillValueRangeActive;
  float m_FillSpriteOffset;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BacksplashDepleted;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BacksplashCritical;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BacksplashDebuff;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BacksplashBuff;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BacksplashNormal;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_NoBuffFillObject;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BuffFillObject;
  bool m_IsOnHUD;
  ModdingAPI::Exposed::System::Boolean_array* m_UpArrowsEnabled;
  ModdingAPI::Exposed::System::Boolean_array* m_DownArrowsEnabled;
  bool m_ForceShow;
  float m_ForceShowStartTime;
  float m_ForceShowSecondsToFadeIn;
  float m_ForceShowSecondsToShow;
  float m_ForceShowSecondsToFadeOut;
  ModdingAPI::Exposed::TweenAlpha* m_TweenAlpha;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6C460))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6C7D0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6C8C0))(this);
  }
  int32_t GetNumFreezingEffectArrows() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6D1A0))(this);
  }
  void ForceShowForSeconds(float secondsToFadeIn, float secondsToShow, float secondsToFadeOut) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6D290))(this, secondsToFadeIn, secondsToShow, secondsToFadeOut);
  }
  void MarkAsChildOfHUD() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6D330))(this);
  }
  void SetSpriteColors(float fillValue) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6D340))(this, fillValue);
  }
  bool ShouldBeHidden() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6DCE0))(this);
  }
  void SetArrowBools(float rateOfChange) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6E160))(this, rateOfChange);
  }
  void SetArrowActiveStates() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6E510))(this);
  }
  void ToggleAll(ModdingAPI::Exposed::UnityEngine::GameObject_array* objects, bool toggleVal) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*, ModdingAPI::Exposed::UnityEngine::GameObject_array*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6E800))(this, objects, toggleVal);
  }
  float GetFillValue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6E910))(this);
  }
  float GetFillValueThirst() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6E990))(this);
  }
  float GetFillValueHunger() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6EA50))(this);
  }
  float GetFillValueCold() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6EB50))(this);
  }
  float GetFillValueFatigue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6EC10))(this);
  }
  float GetFillValueCondition() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6ECD0))(this);
  }
  float GetReverseFillValue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6ED80))(this);
  }
  float GetReverseFillValueFatigue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6EEF0))(this);
  }
  float GetReverseFillValueCondition() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6EFE0))(this);
  }
  float GetBuffFillValue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6F0C0))(this);
  }
  float GetBuffFillValueCondition() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6F1B0))(this);
  }
  float GetRateOfChange() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6F3D0))(this);
  }
  float GetRateOfChangeThirst() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6F430))(this);
  }
  float GetRateOfChangeHunger() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6F720))(this);
  }
  float GetRateOfChangeCold() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6F920))(this);
  }
  float GetRateOfChangeFatigue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6FBE0))(this);
  }
  bool IsBuffActive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6FD40))(this);
  }
  bool ShouldShowBuffedFillSprite() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6FF90))(this);
  }
  bool IsDebuffActive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C70080))(this);
  }
  void UpdateForceShow() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C701F0))(this);
  }
  void SetAlpha(float alphaVal, float duration) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C70460))(this, alphaVal, duration);
  }
  void UpdateBacksplash(float fillValue) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C70550))(this, fillValue);
  }
  void SetActiveBacksplash(ModdingAPI::Exposed::UnityEngine::GameObject* activeBacksplash) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C70610))(this, activeBacksplash);
  }
  bool ShouldFadeOut(float fillValue) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::StatusBar*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C70990))(this, fillValue);
  }
  int32_t GetNumActiveArrows() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C70BF0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatusBar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C70CA0))(this);
  }
};
}