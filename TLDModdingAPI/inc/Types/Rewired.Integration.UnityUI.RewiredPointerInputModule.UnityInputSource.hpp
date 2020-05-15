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
#include "ModdingAPI.Exposed.UnityEngine.Touch.hpp"


namespace ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule {
struct __UnityInputSource_Il2CppStaticFields {
};

struct __UnityInputSource_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Rewired_UI_IMouseInputSource_get_playerId;
  VirtualInvokeData _5_Rewired_UI_IMouseInputSource_get_enabled;
  VirtualInvokeData _6_Rewired_UI_IMouseInputSource_get_locked;
  VirtualInvokeData _7_Rewired_UI_IMouseInputSource_get_buttonCount;
  VirtualInvokeData _8_Rewired_UI_IMouseInputSource_GetButtonDown;
  VirtualInvokeData _9_Rewired_UI_IMouseInputSource_GetButtonUp;
  VirtualInvokeData _10_Rewired_UI_IMouseInputSource_GetButton;
  VirtualInvokeData _11_Rewired_UI_IMouseInputSource_get_screenPosition;
  VirtualInvokeData _12_Rewired_UI_IMouseInputSource_get_screenPositionDelta;
  VirtualInvokeData _13_Rewired_UI_IMouseInputSource_get_wheelDelta;
  VirtualInvokeData _14_Rewired_UI_ITouchInputSource_get_playerId;
  VirtualInvokeData _15_Rewired_UI_ITouchInputSource_get_touchSupported;
  VirtualInvokeData _16_Rewired_UI_ITouchInputSource_get_touchCount;
  VirtualInvokeData _17_Rewired_UI_ITouchInputSource_GetTouch;
};

struct __UnityInputSource_Il2CppClass {
  Il2CppClass_1 _1;
  __UnityInputSource_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UnityInputSource_Il2CppVtbl vtbl;
};

class UnityInputSource {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3B018;
  static inline    __UnityInputSource_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __UnityInputSource_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__UnityInputSource_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __UnityInputSource_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Vector2 m_MousePosition;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_MousePositionPrev;
  int32_t m_LastUpdatedFrame;

  // Member methods:
  int32_t Rewired::UI::IMouseInputSource::get_playerId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2177B70))(this);
  }
  int32_t Rewired::UI::ITouchInputSource::get_playerId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2177B70))(this);
  }
  bool Rewired::UI::IMouseInputSource::get_enabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2177B90))(this);
  }
  bool Rewired::UI::IMouseInputSource::get_locked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2177BB0))(this);
  }
  int32_t Rewired::UI::IMouseInputSource::get_buttonCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2177C10))(this);
  }
  bool Rewired::UI::IMouseInputSource::GetButtonDown(int32_t button) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2177C30))(this, button);
  }
  bool Rewired::UI::IMouseInputSource::GetButtonUp(int32_t button) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2177C90))(this, button);
  }
  bool Rewired::UI::IMouseInputSource::GetButton(int32_t button) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2177CF0))(this, button);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 Rewired::UI::IMouseInputSource::get_screenPosition() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2177D50))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 Rewired::UI::IMouseInputSource::get_screenPositionDelta() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2177E50))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 Rewired::UI::IMouseInputSource::get_wheelDelta() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2177F50))(this);
  }
  bool Rewired::UI::ITouchInputSource::get_touchSupported() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2177FC0))(this);
  }
  int32_t Rewired::UI::ITouchInputSource::get_touchCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2178010))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Touch Rewired::UI::ITouchInputSource::GetTouch(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Touch(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2178060))(this, index);
  }
  void TryUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21780D0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Integration::UnityUI::RewiredPointerInputModule::UnityInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8B0D70))(this);
  }
};
}