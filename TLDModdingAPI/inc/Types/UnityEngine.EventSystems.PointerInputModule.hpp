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
#include "ModdingAPI.Exposed.UnityEngine.Touch.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector2.hpp"


namespace ModdingAPI::Exposed::UnityEngine::EventSystems {
struct __PointerInputModule_Il2CppStaticFields {
};

struct __PointerInputModule_Il2CppVtbl {
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
  VirtualInvokeData _65535__ctor;
};

struct __PointerInputModule_Il2CppClass {
  Il2CppClass_1 _1;
  __PointerInputModule_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PointerInputModule_Il2CppVtbl vtbl;
};

class PointerInputModule {
public:
  // Il2Cpp fields:
  __PointerInputModule_Il2CppClass* __pClassInstance;
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
  ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule::MouseState* m_MouseState;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADBB60))(this);
  }
  bool GetPointerData(int32_t id, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* data, bool create) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*, int32_t, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADBED0))(this, id, data, create);
  }
  void RemovePointerData(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADC0C0))(this, data);
  }
  ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* GetTouchPointerEventData(ModdingAPI::Exposed::UnityEngine::Touch input, bool pressed, bool released) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*, ModdingAPI::Exposed::UnityEngine::Touch, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADC170))(this, input, pressed, released);
  }
  void CopyFromTo(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* from, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* to) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADC480))(this, from, to);
  }
  int32_t StateForMouseButton(int32_t buttonId) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADC550))(this, buttonId);
  }
  ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule::MouseState* GetMousePointerEventData() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule::MouseState*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADC610))(this);
  }
  ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule::MouseState* GetMousePointerEventData(int32_t id) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule::MouseState*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADC630))(this, id);
  }
  ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int32_t id) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADCB80))(this, id);
  }
  void ProcessMove(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADCD20))(this, pointerEvent);
  }
  void ProcessDrag(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADCDB0))(this, pointerEvent);
  }
  bool IsPointerOverGameObject(int32_t pointerId) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD150))(this, pointerId);
  }
  void ClearSelection() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD220))(this);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD400))(this);
  }
  void DeselectIfSelectionChanged(ModdingAPI::Exposed::UnityEngine::GameObject* currentOverGo, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* pointerEvent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerInputModule*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD760))(this, currentOverGo, pointerEvent);
  }

  // Static methods:
  static inline bool ShouldStartDrag(ModdingAPI::Exposed::UnityEngine::Vector2 pressPos, ModdingAPI::Exposed::UnityEngine::Vector2 currentPos, float threshold, bool useDragThreshold) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADCC30))(pressPos, currentPos, threshold, useDragThreshold);
  }
};
}