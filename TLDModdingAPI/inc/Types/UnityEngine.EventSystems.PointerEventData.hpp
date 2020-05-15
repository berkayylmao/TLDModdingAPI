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
#include "ModdingAPI.Exposed.UnityEngine.EventSystems.RaycastResult.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed::UnityEngine::EventSystems {
struct __PointerEventData_Il2CppStaticFields {
};

struct __PointerEventData_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Reset;
  VirtualInvokeData _5_Use;
  VirtualInvokeData _6_get_used;
};

struct __PointerEventData_Il2CppClass {
  Il2CppClass_1 _1;
  __PointerEventData_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PointerEventData_Il2CppVtbl vtbl;
};

class PointerEventData {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C69150;
  static inline    __PointerEventData_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __PointerEventData_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PointerEventData_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PointerEventData_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool m_Used;
  ModdingAPI::Exposed::UnityEngine::EventSystems::EventSystem* BaseEventData_m_EventSystem;
  ModdingAPI::Exposed::UnityEngine::GameObject* _pointerEnter_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_PointerPress;
  ModdingAPI::Exposed::UnityEngine::GameObject* _lastPress_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::GameObject* _rawPointerPress_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::GameObject* _pointerDrag_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::EventSystems::RaycastResult _pointerCurrentRaycast_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::EventSystems::RaycastResult _pointerPressRaycast_k__BackingField;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* hovered;
  bool _eligibleForClick_k__BackingField;
  int32_t _pointerId_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Vector2 _position_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Vector2 _delta_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Vector2 _pressPosition_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Vector3 _worldPosition_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Vector3 _worldNormal_k__BackingField;
  float _clickTime_k__BackingField;
  int32_t _clickCount_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Vector2 _scrollDelta_k__BackingField;
  bool _useDragThreshold_k__BackingField;
  bool _dragging_k__BackingField;
  int32_t _button_k__BackingField;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityEngine::EventSystems::EventSystem* eventSystem) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::EventSystems::EventSystem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADADA0))(this, eventSystem);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* get_pointerEnter() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD4220))(this);
  }
  void set_pointerEnter(ModdingAPI::Exposed::UnityEngine::GameObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310F00))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* get_lastPress() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADAFF0))(this);
  }
  void set_lastPress(ModdingAPI::Exposed::UnityEngine::GameObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A410))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* get_rawPointerPress() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD25D0))(this);
  }
  void set_rawPointerPress(ModdingAPI::Exposed::UnityEngine::GameObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A420))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* get_pointerDrag() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB000))(this);
  }
  void set_pointerDrag(ModdingAPI::Exposed::UnityEngine::GameObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31F420))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::EventSystems::RaycastResult get_pointerCurrentRaycast() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::EventSystems::RaycastResult(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB010))(this);
  }
  void set_pointerCurrentRaycast(ModdingAPI::Exposed::UnityEngine::EventSystems::RaycastResult value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::EventSystems::RaycastResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB050))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::EventSystems::RaycastResult get_pointerPressRaycast() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::EventSystems::RaycastResult(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB080))(this);
  }
  void set_pointerPressRaycast(ModdingAPI::Exposed::UnityEngine::EventSystems::RaycastResult value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::EventSystems::RaycastResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB0C0))(this, value);
  }
  bool get_eligibleForClick() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB100))(this);
  }
  void set_eligibleForClick(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB110))(this, value);
  }
  int32_t get_pointerId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB120))(this);
  }
  void set_pointerId(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB130))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_position() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB140))(this);
  }
  void set_position(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB160))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_delta() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB190))(this);
  }
  void set_delta(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB1B0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_pressPosition() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB1E0))(this);
  }
  void set_pressPosition(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB200))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_worldPosition() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB230))(this);
  }
  void set_worldPosition(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB250))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_worldNormal() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB270))(this);
  }
  void set_worldNormal(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB290))(this, value);
  }
  float get_clickTime() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB2B0))(this);
  }
  void set_clickTime(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB2C0))(this, value);
  }
  int32_t get_clickCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB2D0))(this);
  }
  void set_clickCount(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB2E0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_scrollDelta() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB2F0))(this);
  }
  void set_scrollDelta(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB310))(this, value);
  }
  bool get_useDragThreshold() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB340))(this);
  }
  void set_useDragThreshold(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB350))(this, value);
  }
  bool get_dragging() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB360))(this);
  }
  void set_dragging(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB370))(this, value);
  }
  int32_t get_button() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB380))(this);
  }
  void set_button(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB390))(this, value);
  }
  bool IsPointerMoving() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB3A0))(this);
  }
  bool IsScrolling() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB3D0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Camera* get_enterEventCamera() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Camera*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB400))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Camera* get_pressEventCamera() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Camera*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB4F0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* get_pointerPress() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD25E0))(this);
  }
  void set_pointerPress(ModdingAPI::Exposed::UnityEngine::GameObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB5E0))(this, value);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB6B0))(this);
  }
};
}