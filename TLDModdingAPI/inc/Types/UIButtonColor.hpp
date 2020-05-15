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
struct __UIButtonColor_Il2CppStaticFields {
};

struct __UIButtonColor_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_isEnabled;
  VirtualInvokeData _5_set_isEnabled;
  VirtualInvokeData _6_OnInit;
  VirtualInvokeData _7_OnEnable;
  VirtualInvokeData _8_OnDisable;
  VirtualInvokeData _9_OnHover;
  VirtualInvokeData _10_OnPress;
  VirtualInvokeData _11_OnDragOver;
  VirtualInvokeData _12_OnDragOut;
  VirtualInvokeData _13_OnSelect;
  VirtualInvokeData _14_SetState;
};

struct __UIButtonColor_Il2CppClass {
  Il2CppClass_1 _1;
  __UIButtonColor_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UIButtonColor_Il2CppVtbl vtbl;
};

class UIButtonColor {
public:
  // Il2Cpp fields:
  __UIButtonColor_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::GameObject* tweenTarget;
  ModdingAPI::Exposed::UnityEngine::Color hover;
  ModdingAPI::Exposed::UnityEngine::Color pressed;
  ModdingAPI::Exposed::UnityEngine::Color disabledColor;
  float duration;
  ModdingAPI::Exposed::UnityEngine::Color mStartingColor;
  ModdingAPI::Exposed::UnityEngine::Color mDefaultColor;
  bool mInitDone;
  ModdingAPI::Exposed::UIWidget* mWidget;
  int32_t mState;

  // Member methods:
  int32_t get_state() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307620))(this);
  }
  void set_state(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B92A0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Color get_defaultColor() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C8160))(this);
  }
  void set_defaultColor(ModdingAPI::Exposed::UnityEngine::Color value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C81A0))(this, value);
  }
  bool get_isEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B82E0))(this);
  }
  void set_isEnabled(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B8330))(this, value);
  }
  void ResetDefaultColor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C8200))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C8260))(this);
  }
  void OnInit() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C82C0))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C8610))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C8910))(this);
  }
  void OnHover(bool isOver) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C8A70))(this, isOver);
  }
  void OnPress(bool isPressed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C8B80))(this, isPressed);
  }
  void OnDragOver() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C8E30))(this);
  }
  void OnDragOut() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C8F30))(this);
  }
  void OnSelect(bool isSelected) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C9030))(this, isSelected);
  }
  void SetState(int32_t state, bool instant) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C9180))(this, state, instant);
  }
  void UpdateColor(bool instant) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C91E0))(this, instant);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIButtonColor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20C9360))(this);
  }
};
}