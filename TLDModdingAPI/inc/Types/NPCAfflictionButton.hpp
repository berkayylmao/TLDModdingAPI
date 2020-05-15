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
struct __NPCAfflictionButton_Il2CppStaticFields {
};

struct __NPCAfflictionButton_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __NPCAfflictionButton_Il2CppClass {
  Il2CppClass_1 _1;
  __NPCAfflictionButton_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NPCAfflictionButton_Il2CppVtbl vtbl;
};

class NPCAfflictionButton {
public:
  // Il2Cpp fields:
  __NPCAfflictionButton_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UISprite* m_SpriteEffect;
  ModdingAPI::Exposed::UISprite* m_SpriteRiskFill;
  ModdingAPI::Exposed::UILabel* m_LabelEffect;
  ModdingAPI::Exposed::UILabel* m_LabelCause;
  ModdingAPI::Exposed::UnityEngine::Color m_NegativeColor;
  ModdingAPI::Exposed::UnityEngine::Color m_NegativeColorHover;
  ModdingAPI::Exposed::UnityEngine::Color m_RiskColor;
  ModdingAPI::Exposed::UnityEngine::Color m_RiskColorHover;
  ModdingAPI::Exposed::UnityEngine::Color m_BeneficialColor;
  ModdingAPI::Exposed::UnityEngine::Color m_BeneficialColorHover;
  ModdingAPI::Exposed::UnityEngine::Color m_CauseColor;
  ModdingAPI::Exposed::UnityEngine::Color m_CauseColorHover;
  float m_BGAlphaWhenSelected;
  int32_t m_AfflictionType;
  int32_t m_AfflictionLocation;
  ModdingAPI::Exposed::UnityEngine::Animator* m_AnimatorBuffBar;
  ModdingAPI::Exposed::UISprite* m_FillSpriteBuffBar;
  ModdingAPI::Exposed::UnityEngine::Transform* m_SizeModifierBuffBar;
  ModdingAPI::Exposed::UnityEngine::Animator* m_AnimatorAfflictionBar;
  ModdingAPI::Exposed::UISprite* m_FillSpriteAfflictionBar;
  ModdingAPI::Exposed::UnityEngine::Transform* m_SizeModifierAfflictionBar;
  float m_FillSpriteOffset;
  bool m_Selected;
  int32_t m_Index;
  ModdingAPI::Exposed::System::Action_T_* m_OnClickAction;
  ModdingAPI::Exposed::NPCAffliction* m_Affliction;

  // Member methods:
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCAfflictionButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1709F90))(this);
  }
  void OnClick() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCAfflictionButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E7E0D0))(this);
  }
  void SetSelected(bool selected) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCAfflictionButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E7E1B0))(this, selected);
  }
  void SetupAffliction(ModdingAPI::Exposed::NPCAffliction* affliction, ModdingAPI::Exposed::System::Action_T_* onClickAction) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCAfflictionButton*, ModdingAPI::Exposed::NPCAffliction*, ModdingAPI::Exposed::System::Action_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E7E300))(this, affliction, onClickAction);
  }
  ModdingAPI::Exposed::NPCAffliction* GetAffliction() {
    return reinterpret_cast<ModdingAPI::Exposed::NPCAffliction*(__fastcall*)(ModdingAPI::Exposed::NPCAfflictionButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E0E0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Color GetColorBasedOnAffliction(int32_t afflictionType, bool isHovering) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::NPCAfflictionButton*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E7E740))(this, afflictionType, isHovering);
  }
  void SetColor(bool isSelected) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCAfflictionButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E7E940))(this, isSelected);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCAfflictionButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }
};
}