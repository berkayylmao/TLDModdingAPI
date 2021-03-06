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
#include "ModdingAPI.Exposed.UnityEngine.UI.ColorBlock.hpp"
#include "ModdingAPI.Exposed.UnityEngine.UI.SpriteState.hpp"


namespace ModdingAPI::Exposed::Rewired::ComponentControls {
struct __TouchRegion_Il2CppStaticFields {
};

struct __TouchRegion_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Rewired_ComponentControls_IComponentControl_Update;
  VirtualInvokeData _6_get_hasController;
  VirtualInvokeData _7_ClearValue;
  VirtualInvokeData _8_Awake;
  VirtualInvokeData _9_Start;
  VirtualInvokeData _10_OnEnable;
  VirtualInvokeData _11_OnDisable;
  VirtualInvokeData _12_OnDestroy;
  VirtualInvokeData _13_OnValidate;
  VirtualInvokeData _14_OnCanvasGroupChanged;
  VirtualInvokeData _15_OnTransformParentChanged;
  VirtualInvokeData _16_OnDidApplyAnimationProperties;
  VirtualInvokeData _17_Reset;
  VirtualInvokeData _18_OnUpdate;
  VirtualInvokeData _19_OnInitialize;
  VirtualInvokeData _20_jpIxhKAdaZXGIIkpVlxYmllPXyp;
  VirtualInvokeData _21_OnSubscribeEvents;
  VirtualInvokeData _22_OnUnsubscribeEvents;
  VirtualInvokeData _23_OnSetProperty;
  VirtualInvokeData _24_OnClear;
  VirtualInvokeData _25_FindEventHandlers;
  VirtualInvokeData _26_FindController;
  VirtualInvokeData _27_GetRequiredControllerType;
  VirtualInvokeData _28_OnCustomControllerUpdate;
  VirtualInvokeData _29_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown;
  VirtualInvokeData _30_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp;
  VirtualInvokeData _31_UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter;
  VirtualInvokeData _32_UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit;
  VirtualInvokeData _33_UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag;
  VirtualInvokeData _34_UnityEngine_EventSystems_IDragHandler_OnDrag;
  VirtualInvokeData _35_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag;
  VirtualInvokeData _36_IsPressed;
  VirtualInvokeData _37_IsThisOrTouchRegionGameObject;
  VirtualInvokeData _38_OnPointerDown;
  VirtualInvokeData _39_OnPointerUp;
  VirtualInvokeData _40_OnPointerEnter;
  VirtualInvokeData _41_OnPointerExit;
  VirtualInvokeData _42_OnBeginDrag;
  VirtualInvokeData _43_OnDrag;
  VirtualInvokeData _44_OnEndDrag;
};

struct __TouchRegion_Il2CppClass {
  Il2CppClass_1 _1;
  __TouchRegion_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TouchRegion_Il2CppVtbl vtbl;
};

class TouchRegion {
public:
  // Il2Cpp fields:
  __TouchRegion_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::Rewired::ComponentControls::IComponentController* ComponentControl__controller;
  bool ComponentControl_esYehwKhrldtApGnRVqbmuVUkFZ;
  bool ComponentControl_PoetrkNntCfZfEAGrHRwgvcHgnLh;
  int32_t ComponentControl__lastUpdateFrame;
  ModdingAPI::Exposed::UnityEngine::Canvas* TouchControl__canvas;
  ModdingAPI::Exposed::UnityEngine::RectTransform* TouchControl___rectTransform;
  bool TouchInteractable__interactable;
  bool TouchInteractable__visible;
  bool TouchInteractable__hideWhenIdle;
  int32_t TouchInteractable__allowedMouseButtons;
  int32_t TouchInteractable__transitionType;
  ModdingAPI::Exposed::UnityEngine::UI::ColorBlock TouchInteractable__transitionColorTint;
  ModdingAPI::Exposed::UnityEngine::UI::SpriteState TouchInteractable__transitionSpriteState;
  ModdingAPI::Exposed::UnityEngine::UI::AnimationTriggers* TouchInteractable__transitionAnimationTriggers;
  ModdingAPI::Exposed::UnityEngine::UI::Graphic* TouchInteractable__targetGraphic;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchInteractable::InteractionStateTransitionEventHandler* TouchInteractable__onInteractionStateTransition;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchInteractable::VisibilityChangedEventHandler* TouchInteractable__onVisibilityChanged;
  ModdingAPI::Exposed::UnityEngine::Events::UnityEvent* TouchInteractable__onInteractionStateChangedToNormal;
  ModdingAPI::Exposed::UnityEngine::Events::UnityEvent* TouchInteractable__onInteractionStateChangedToHighlighted;
  ModdingAPI::Exposed::UnityEngine::Events::UnityEvent* TouchInteractable__onInteractionStateChangedToPressed;
  ModdingAPI::Exposed::UnityEngine::Events::UnityEvent* TouchInteractable__onInteractionStateChangedToDisabled;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* TouchInteractable__canvasGroupCache;
  bool TouchInteractable__groupsAllowInteraction;
  int32_t TouchInteractable__interactionState;
  bool TouchInteractable_vGoMwKHUUxUXvLiMOmHQIRUxMbN;
  bool TouchInteractable_SHkCAUKzwztZfEnfLoseXjTmsyt;
  bool TouchInteractable__varWatch_visible;
  bool TouchInteractable__varWatch_interactable;
  bool TouchInteractable__allowSendingEvents;
  ModdingAPI::Exposed::bStnBLMiBGiIpWIwpUHmSFnAjsi::HierarchyEventHelper_THandler__TValue_* TouchInteractable___hierarchyVisibilityChangedHandlers;
  ModdingAPI::Exposed::bStnBLMiBGiIpWIwpUHmSFnAjsi::HierarchyEventHelper_THandler__TValue_* TouchInteractable___hierarchyInteractionStateTransitionHandlers;
  bool _hideAtRuntime;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion::ylysmqfbnuGNNDmkkSZFMANrERpC* _onPointerDown;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion::lpUXWWGmMfNixMooJepwNGEWWHC* _onPointerUp;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion::WwHHHNGMrjebQqATbsSeKkywUnf* _onPointerEnter;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion::sHAbNyeZHQrrtZCBSMvTxkYqFYI* _onPointerExit;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion::jhAcwkJOvZCCxvUtqQsqntnxggq* _onBeginDrag;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion::XnOJOexIulHnxOouXffFFqNtlDL* _onDrag;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion::AAujfAVGVbGCNAoNDLlWDpMLrIRS* _onEndDrag;

  // Member methods:
  bool get_hideAtRuntime() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B0FA0))(this);
  }
  void set_hideAtRuntime(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B0FB0))(this, value);
  }
  void add_PointerDownEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B0FE0))(this, value);
  }
  void remove_PointerDownEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B10A0))(this, value);
  }
  void add_PointerUpEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B1140))(this, value);
  }
  void remove_PointerUpEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B1200))(this, value);
  }
  void add_PointerEnterEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B12A0))(this, value);
  }
  void remove_PointerEnterEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B1360))(this, value);
  }
  void add_PointerExitEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B1400))(this, value);
  }
  void remove_PointerExitEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B14C0))(this, value);
  }
  void add_BeginDragEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B1560))(this, value);
  }
  void remove_BeginDragEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B1620))(this, value);
  }
  void add_DragEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B16C0))(this, value);
  }
  void remove_DragEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B1780))(this, value);
  }
  void add_EndDragEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B1820))(this, value);
  }
  void remove_EndDragEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B18E0))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B1980))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B2210))(this);
  }
  void ClearValue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnCustomControllerUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnPointerDown(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B22C0))(this, eventData);
  }
  void OnPointerUp(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B2560))(this, eventData);
  }
  void OnPointerEnter(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B2810))(this, eventData);
  }
  void OnPointerExit(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B29F0))(this, eventData);
  }
  void OnBeginDrag(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B2CA0))(this, eventData);
  }
  void OnDrag(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B2F50))(this, eventData);
  }
  void OnEndDrag(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B3200))(this, eventData);
  }
};
}