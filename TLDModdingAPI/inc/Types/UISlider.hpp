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
struct __UISlider_Il2CppStaticFields {
};

struct __UISlider_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Upgrade;
  VirtualInvokeData _5_OnStart;
  VirtualInvokeData _6_LocalToValue;
  VirtualInvokeData _7_ForceUpdate;
};

struct __UISlider_Il2CppClass {
  Il2CppClass_1 _1;
  __UISlider_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UISlider_Il2CppVtbl vtbl;
};

class UISlider {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C49A68;
  static inline    UISlider* _pStaticObjectInstance = nullptr;

public:
// Singleton object getter:
  static inline UISlider* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (UISlider**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Il2Cpp fields:
  __UISlider_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UIProgressBar::OnDragFinished* onDragFinished;
  ModdingAPI::Exposed::UnityEngine::Transform* thumb;
  float thumbOffset;
  ModdingAPI::Exposed::UnityEngine::Vector2 thumbLimits;
  ModdingAPI::Exposed::UIWidget* mBG;
  ModdingAPI::Exposed::UIWidget* mFG;
  float mValue;
  int32_t mFill;
  ModdingAPI::Exposed::UnityEngine::Transform* mTrans;
  bool mIsDirty;
  ModdingAPI::Exposed::UnityEngine::Camera* mCam;
  float mOffset;
  int32_t numberOfSteps;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* onChange;
  ModdingAPI::Exposed::UnityEngine::Transform* foreground;
  float rawValue;
  int32_t direction;
  bool mInverted;

  // Member methods:
  float get_sliderValue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UISlider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2035380))(this);
  }
  void set_sliderValue(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UISlider*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2035390))(this, value);
  }
  bool get_inverted() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UISlider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x203B0C0))(this);
  }
  void set_inverted(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UISlider*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, value);
  }
  void Upgrade() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UISlider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x203B0D0))(this);
  }
  void OnStart() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UISlider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x203B1F0))(this);
  }
  void OnPressBackground(ModdingAPI::Exposed::UnityEngine::GameObject* go, bool isPressed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UISlider*, ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x203BA30))(this, go, isPressed);
  }
  void OnDragBackground(ModdingAPI::Exposed::UnityEngine::GameObject* go, ModdingAPI::Exposed::UnityEngine::Vector2 delta) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UISlider*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x203BB70))(this, go, delta);
  }
  void OnPressForeground(ModdingAPI::Exposed::UnityEngine::GameObject* go, bool isPressed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UISlider*, ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x203BC90))(this, go, isPressed);
  }
  void OnDragForeground(ModdingAPI::Exposed::UnityEngine::GameObject* go, ModdingAPI::Exposed::UnityEngine::Vector2 delta) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UISlider*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x203BE50))(this, go, delta);
  }
  void OnKey(ModdingAPI::Exposed::UnityEngine::KeyCode key) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UISlider*, ModdingAPI::Exposed::UnityEngine::KeyCode)>(Helpers::Memory::GetInstance().MakeAbsolute(0x203BF80))(this, key);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UISlider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x203C090))(this);
  }
};
}