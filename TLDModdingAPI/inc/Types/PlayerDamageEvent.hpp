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
#include "ModdingAPI::Exposed::UnityEngine::Color.hpp"


namespace ModdingAPI::Exposed {
struct __PlayerDamageEvent_Il2CppStaticFields {
};

struct __PlayerDamageEvent_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __PlayerDamageEvent_Il2CppClass {
  Il2CppClass_1 _1;
  __PlayerDamageEvent_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PlayerDamageEvent_Il2CppVtbl vtbl;
};

class PlayerDamageEvent {
public:
  // Il2Cpp fields:
  __PlayerDamageEvent_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UISprite* m_Icon;
  ModdingAPI::Exposed::UISprite* m_Background;
  ModdingAPI::Exposed::UISprite* m_Backpiece;
  ModdingAPI::Exposed::UILabel* m_DamageType;
  ModdingAPI::Exposed::UILabel* m_DamageName;
  float m_DisplayTime;
  float m_FadeOutTime;
  float m_TimeActive;
  bool m_FadeOut;
  bool m_TintIcon;
  bool m_TintDamageType;
  bool m_TintDamageName;
  bool m_TintBG;
  ModdingAPI::Exposed::UnityEngine::Color m_BGColorRed;
  ModdingAPI::Exposed::UnityEngine::Color m_BGColorOrange;
  ModdingAPI::Exposed::UnityEngine::Color m_BGColorGreen;
  ModdingAPI::Exposed::UnityEngine::Color m_BGColorWhite;

  // Member methods:
  void SetAlpha(float amount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayerDamageEvent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEEA80))(this, amount);
  }
  ModdingAPI::Exposed::PlayerDamageEventProxy* ToProxy() {
    return reinterpret_cast<ModdingAPI::Exposed::PlayerDamageEventProxy*(__fastcall*)(ModdingAPI::Exposed::PlayerDamageEvent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEEB50))(this);
  }
  void FromProxy(ModdingAPI::Exposed::PlayerDamageEventProxy* proxy) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayerDamageEvent*, ModdingAPI::Exposed::PlayerDamageEventProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEED80))(this, proxy);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayerDamageEvent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static methods:
  static inline void SpawnDamageEvent(System_String* damageEventName, System_String* damageEventType, System_String* iconName, ModdingAPI::Exposed::UnityEngine::Color tint, bool fadeout, float displayTime, float fadeoutTime) {
    reinterpret_cast<void(__fastcall*)(System_String*, System_String*, System_String*, ModdingAPI::Exposed::UnityEngine::Color, bool, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEEE30))(damageEventName, damageEventType, iconName, tint, fadeout, displayTime, fadeoutTime);
  }
  static inline void SpawnAfflictionEvent(System_String* damageEventName, System_String* damageEventType, System_String* iconName, ModdingAPI::Exposed::UnityEngine::Color tint) {
    reinterpret_cast<void(__fastcall*)(System_String*, System_String*, System_String*, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEF420))(damageEventName, damageEventType, iconName, tint);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Color TintToBGColor(ModdingAPI::Exposed::PlayerDamageEvent* damageEvent, ModdingAPI::Exposed::UnityEngine::Color tint) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::PlayerDamageEvent*, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEF5E0))(damageEvent, tint);
  }
};
}