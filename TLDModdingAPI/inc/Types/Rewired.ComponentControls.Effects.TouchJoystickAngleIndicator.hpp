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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed::Rewired::ComponentControls::Effects {
struct __TouchJoystickAngleIndicator_Il2CppStaticFields {
};

struct __TouchJoystickAngleIndicator_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_OnVisibilityChanged;
  VirtualInvokeData _5_Rewired_ComponentControls_TouchJoystick_IStickPositionChangedHandler_OnStickPositionChanged;
};

struct __TouchJoystickAngleIndicator_Il2CppClass {
  Il2CppClass_1 _1;
  __TouchJoystickAngleIndicator_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TouchJoystickAngleIndicator_Il2CppVtbl vtbl;
};

class TouchJoystickAngleIndicator {
public:
  // Il2Cpp fields:
  __TouchJoystickAngleIndicator_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool _visible;
  bool _targetAngleFromRotation;
  float _targetAngle;
  bool _fadeWithValue;
  bool _fadeWithAngle;
  float _fadeRange;
  ModdingAPI::Exposed::UnityEngine::Color _activeColor;
  ModdingAPI::Exposed::UnityEngine::Color _normalColor;
  ModdingAPI::Exposed::UnityEngine::UI::Image* jZdzYzufXXOkTEUdxAPSjBiiAFg;
  ModdingAPI::Exposed::UnityEngine::RectTransform* CPzgcAdQAUyDKSvlanuAORDOrlYH;
  ModdingAPI::Exposed::UnityEngine::Vector2 uxfEzCNmUKsAyZOydiFWfHNJXkp;
  bool WiaJslHjkaoQcPBFWbRvkmipNhMY;
  ModdingAPI::Exposed::Rewired::Utils::Interfaces::IRegistrar_T_* fKBbIuAzilqVAvJTLWUoaNUavIk;

  // Member methods:
  bool get_visible() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x318510))(this);
  }
  void set_visible(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA02BD0))(this, value);
  }
  bool get_targetAngleFromRotation() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x580F70))(this);
  }
  void set_targetAngleFromRotation(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA02BF0))(this, value);
  }
  float get_targetAngle() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA02C00))(this);
  }
  void set_targetAngle(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA02D00))(this, value);
  }
  bool get_fadeWithValue() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x46FCC0))(this);
  }
  void set_fadeWithValue(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA02D20))(this, value);
  }
  bool get_fadeWithAngle() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x46FCD0))(this);
  }
  void set_fadeWithAngle(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA02D60))(this, value);
  }
  float get_fadeRange() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591530))(this);
  }
  void set_fadeRange(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA02D90))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Color get_activeColor() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310F10))(this);
  }
  void set_activeColor(ModdingAPI::Exposed::UnityEngine::Color value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310F20))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Color get_normalColor() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310F30))(this);
  }
  void set_normalColor(ModdingAPI::Exposed::UnityEngine::Color value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310F40))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::UI::Image* get_image() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::Image*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA02DB0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Sprite* get_currentSprite() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Sprite*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA02E40))(this);
  }
  ModdingAPI::Exposed::UnityEngine::RectTransform* get_rectTransform() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RectTransform*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA02F90))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA03020))(this);
  }
  bool cMfGNRepGMshhHWYHUjlOIEmpIcY(ModdingAPI::Exposed::UnityEngine::Vector2 ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA03050))(this, );
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA03210))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA032C0))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA03360))(this);
  }
  void OnValidate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA03370))(this);
  }
  void OnTransformParentChanged() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA033C0))(this);
  }
  void xgeQfERYOiWgvDeLOaPXcpEKPtk(bool , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA033D0))(this, , );
  }
  void vTOahQXacnzisJJKUVNVBAAmZEa(ModdingAPI::Exposed::UnityEngine::Vector2 ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA034D0))(this, );
  }
  void VeuyBjDkeuEjWIUsnzEUXVdFBLRg() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA03EE0))(this);
  }
  void HNbSAyRGEOlywRNqtwtYcaZcGar() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA03EF0))(this);
  }
  void PvdPUQDXNMdWgjgPyaHetBdjfAt() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void RFFzdZkaExZlZfPkMlGdBnPapjL() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA03F10))(this);
  }
  void yLUUiTAQcnzWeturwFUnuZmulkT() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04040))(this);
  }
  void OnVisibilityChanged(bool state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA041A0))(this, state);
  }
  void OnTouchJoystickStickPositionChanged(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA041B0))(this, value);
  }
  void Rewired::ComponentControls::TouchJoystick::IStickPositionChangedHandler::OnStickPositionChanged(ModdingAPI::Exposed::UnityEngine::Vector2 ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04350))(this, );
  }
};
}