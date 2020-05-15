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


namespace ModdingAPI::Exposed::UnityEngine::EventSystems {
struct __StandaloneInputModule_Il2CppStaticFields {
};

struct __StandaloneInputModule_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Awake;
  VirtualInvokeData _5_OnEnable;
  VirtualInvokeData _6_Start;
  VirtualInvokeData _7_OnDisable;
  VirtualInvokeData _8_OnDestroy;
  VirtualInvokeData _9_IsActive;
  VirtualInvokeData _10_OnRectTransformDimensionsChange;
  VirtualInvokeData _11_OnBeforeTransformParentChanged;
  VirtualInvokeData _12_OnTransformParentChanged;
  VirtualInvokeData _13_OnDidApplyAnimationProperties;
  VirtualInvokeData _14_OnCanvasGroupChanged;
  VirtualInvokeData _15_OnCanvasHierarchyChanged;
  VirtualInvokeData _16_IsDestroyed;
  VirtualInvokeData _17_Process;
  VirtualInvokeData _18_GetAxisEventData;
  VirtualInvokeData _19_GetBaseEventData;
  VirtualInvokeData _20_IsPointerOverGameObject;
  VirtualInvokeData _21_ShouldActivateModule;
  VirtualInvokeData _22_DeactivateModule;
  VirtualInvokeData _23_ActivateModule;
  VirtualInvokeData _24_UpdateModule;
  VirtualInvokeData _25_IsModuleSupported;
  VirtualInvokeData _26_GetMousePointerEventData;
  VirtualInvokeData _27_GetMousePointerEventData;
  VirtualInvokeData _28_ProcessMove;
  VirtualInvokeData _29_ProcessDrag;
  VirtualInvokeData _30_ForceAutoSelect;
};

struct __StandaloneInputModule_Il2CppClass {
  Il2CppClass_1 _1;
  __StandaloneInputModule_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StandaloneInputModule_Il2CppVtbl vtbl;
};

class StandaloneInputModule {
public:
  // Il2Cpp fields:
  __StandaloneInputModule_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_RaycastResultCache;
  ModdingAPI::Exposed::UnityEngine::EventSystems::AxisEventData* BaseInputModule_m_AxisEventData;
  ModdingAPI::Exposed::UnityEngine::EventSystems::EventSystem* BaseInputModule_m_EventSystem;
  ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* BaseInputModule_m_BaseEventData;
  ModdingAPI::Exposed::UnityEngine::EventSystems::BaseInput* m_InputOverride;
  ModdingAPI::Exposed::UnityEngine::EventSystems::BaseInput* BaseInputModule_m_DefaultInput;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_PointerData;
  ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule::MouseState* PointerInputModule_m_MouseState;
  float m_PrevActionTime;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_LastMoveVector;
  int32_t m_ConsecutiveMoveCount;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_LastMousePosition;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_MousePosition;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_CurrentFocusedGameObject;
  ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent;
  System_String* m_HorizontalAxis;
  System_String* m_VerticalAxis;
  System_String* m_SubmitButton;
  System_String* m_CancelButton;
  float m_InputActionsPerSecond;
  float m_RepeatDelay;
  bool m_ForceModuleActive;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEE80))(this);
  }
  int32_t get_inputMode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  bool get_allowActivationOnMobileDevice() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEF60))(this);
  }
  void set_allowActivationOnMobileDevice(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEF70))(this, value);
  }
  bool get_forceModuleActive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEF60))(this);
  }
  void set_forceModuleActive(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEF70))(this, value);
  }
  float get_inputActionsPerSecond() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEF80))(this);
  }
  void set_inputActionsPerSecond(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEF90))(this, value);
  }
  float get_repeatDelay() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEFA0))(this);
  }
  void set_repeatDelay(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEFB0))(this, value);
  }
  System_String* get_horizontalAxis() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEFC0))(this);
  }
  void set_horizontalAxis(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E95A0))(this, value);
  }
  System_String* get_verticalAxis() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEFD0))(this);
  }
  void set_verticalAxis(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E95D0))(this, value);
  }
  System_String* get_submitButton() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEFE0))(this);
  }
  void set_submitButton(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319860))(this, value);
  }
  System_String* get_cancelButton() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEFF0))(this);
  }
  void set_cancelButton(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x47E010))(this, value);
  }
  bool ShouldIgnoreEventsOnNoFocus() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADF000))(this);
  }
  void UpdateModule() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADF060))(this);
  }
  bool IsModuleSupported() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADF230))(this);
  }
  bool ShouldActivateModule() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADF2C0))(this);
  }
  void ActivateModule() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADF5A0))(this);
  }
  void DeactivateModule() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADF770))(this);
  }
  void Process() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADF780))(this);
  }
  bool ProcessTouchEvents() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADF990))(this);
  }
  void ProcessTouchPress(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADFB50))(this, pointerEvent, pressed, released);
  }
  bool SendSubmitEventToSelectedObject() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE0190))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetRawMoveVector() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE03C0))(this);
  }
  bool SendMoveEventToSelectedObject() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE05A0))(this);
  }
  void ProcessMouseEvent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE0920))(this);
  }
  bool ForceAutoSelect() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x67FC90))(this);
  }
  void ProcessMouseEvent(int32_t id) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE0930))(this, id);
  }
  bool SendUpdateEventToSelectedObject() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE0C30))(this);
  }
  void ProcessMousePress(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE0D90))(this, data);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* GetCurrentFocusedGameObject() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::StandaloneInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE13B0))(this);
  }
};
}