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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed::Rewired::ComponentControls {
struct __TouchButton_Il2CppStaticFields {
};

struct __TouchButton_Il2CppVtbl {
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

struct __TouchButton_Il2CppClass {
  Il2CppClass_1 _1;
  __TouchButton_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TouchButton_Il2CppVtbl vtbl;
};

class TouchButton {
public:
  // Il2Cpp fields:
  __TouchButton_Il2CppClass* __pClassInstance;
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
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* _targetCustomControllerElement;
  int32_t _buttonType;
  bool _activateOnSwipeIn;
  bool _stayActiveOnSwipeOut;
  bool _useDigitalAxisSimulation;
  float _digitalAxisGravity;
  float _digitalAxisSensitivity;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* _axis;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion* _touchRegion;
  bool _useTouchRegionOnly;
  bool _moveToTouchPosition;
  bool _returnOnRelease;
  bool _followTouchPosition;
  bool _animateOnMoveToTouch;
  float _moveToTouchSpeed;
  bool _animateOnReturn;
  float _returnSpeed;
  bool _manageRaycasting;
  float MtDGCGSXYJNhbARDqIugJfBuHgSI;
  float VVzXRCpaJcGpYVsHtOltzqQwMZN;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion* DPzAEXIfOgSxgnGshkdqugpfIgsY;
  ModdingAPI::Exposed::UnityEngine::Vector2 lLFaiEJxoBbFzUIlWnKxqmawIZle;
  bool xRdapqEeCuicepeqQBNVZvsSOBfk;
  bool aZNjgZZtddevcqwTTHmXgiclEOO;
  int32_t wIXvKsUEsJdWchfUrPOtijBVroYq;
  int32_t sVvYwHxdiwRnADPqXzFbopXzzzn;
  int32_t DwddbdngaqwiToxLhPTtEQBLJiu;
  bool SHkCAUKzwztZfEnfLoseXjTmsyt;
  bool vGoMwKHUUxUXvLiMOmHQIRUxMbN;
  ModdingAPI::Exposed::System::Collections::IEnumerator* PrRrFjMBrMHeyZMWNuXkxqyRVLE;
  ModdingAPI::Exposed::ucrujzfGjXUSozdCouhoZaSoRKK* DgLRBrdNmRBByDTKsNNXVOEfYuU;
  ModdingAPI::Exposed::System::Action_T_* pchNXDoFWgLuIwJYUsgOPjeYrcP;
  ModdingAPI::Exposed::System::Action_T_* SfabbMnnRbyNNSShuKuPlXAjmJw;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton::AxisValueChangedEventHandler* _onAxisValueChanged;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton::ButtonValueChangedEventHandler* _onButtonValueChanged;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton::ButtonDownEventHandler* _onButtonDown;
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton::ButtonUpEventHandler* _onButtonUp;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* EPuYaFLqAPiirEyGdyiieLEAOBCE;

  // Member methods:
  void add_AxisValueChangedEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06AD0))(this, value);
  }
  void remove_AxisValueChangedEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06B90))(this, value);
  }
  void add_ButtonValueChangedEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06C70))(this, value);
  }
  void remove_ButtonValueChangedEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06D30))(this, value);
  }
  void add_ButtonDownEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06E10))(this, value);
  }
  void remove_ButtonDownEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06E40))(this, value);
  }
  void add_ButtonUpEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06EB0))(this, value);
  }
  void remove_ButtonUpEvent(ModdingAPI::Exposed::UnityEngine::Events::UnityAction* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06EE0))(this, value);
  }
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_targetCustomControllerElement() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E0E0))(this);
  }
  int32_t get_buttonType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06F50))(this);
  }
  void set_buttonType(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06F60))(this, value);
  }
  bool get_activateOnSwipeIn() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06F90))(this);
  }
  void set_activateOnSwipeIn(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06FA0))(this, value);
  }
  bool get_stayActiveOnSwipeOut() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06FC0))(this);
  }
  void set_stayActiveOnSwipeOut(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA070C0))(this, value);
  }
  bool get_useDigitalAxisSimulation() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA070F0))(this);
  }
  void set_useDigitalAxisSimulation(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07100))(this, value);
  }
  float get_digitalAxisGravity() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07170))(this);
  }
  void set_digitalAxisGravity(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07180))(this, value);
  }
  float get_digitalAxisSensitivity() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA071F0))(this);
  }
  void set_digitalAxisSensitivity(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07200))(this, value);
  }
  ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion* get_touchRegion() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E160))(this);
  }
  void set_touchRegion(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07230))(this, value);
  }
  bool get_useTouchRegionOnly() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07310))(this);
  }
  void set_useTouchRegionOnly(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07320))(this, value);
  }
  bool get_moveToTouchPosition() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07340))(this);
  }
  void set_moveToTouchPosition(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07350))(this, value);
  }
  bool get_returnOnRelease() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07370))(this);
  }
  void set_returnOnRelease(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07380))(this, value);
  }
  bool get_followTouchPosition() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA073A0))(this);
  }
  void set_followTouchPosition(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA073B0))(this, value);
  }
  bool get_animateOnMoveToTouch() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x79C740))(this);
  }
  void set_animateOnMoveToTouch(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x79C750))(this, value);
  }
  float get_moveToTouchSpeed() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x400700))(this);
  }
  void set_moveToTouchSpeed(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA073D0))(this, value);
  }
  bool get_animateOnReturn() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7AA640))(this);
  }
  void set_animateOnReturn(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07440))(this, value);
  }
  float get_returnSpeed() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7AA760))(this);
  }
  void set_returnSpeed(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA074B0))(this, value);
  }
  bool get_manageRaycasting() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x79C890))(this);
  }
  void set_manageRaycasting(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07530))(this, value);
  }
  int32_t get_pointerId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA075C0))(this);
  }
  void set_pointerId(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA075D0))(this, value);
  }
  bool get_hasPointer() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA075E0))(this);
  }
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* get_axis() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E140))(this);
  }
  ModdingAPI::Exposed::System::Action_T_* ofzppzOJAaCzoXoBVtOHsQFwdLZ() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Action_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA075F0))(this);
  }
  ModdingAPI::Exposed::System::Action_T_* ICBnGpanLlckCKTqdillgTpscUA() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Action_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07760))(this);
  }
  float wQDRCqMwmFaPkzDkjTshGOYWbC() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA078D0))(this);
  }
  float HGsJTfQXgogRrfTGSYTRNcjqCtB() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07920))(this);
  }
  bool zVlDAortxUDnXRryTmTNsOvoOQl() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07970))(this);
  }
  bool kcnPoirrbwCUaSTGWXbIaEtIZHO() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA079E0))(this);
  }
  int32_t OJAHtBKaoeItpguTAlRawKHbafia() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07A50))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07A80))(this);
  }
  void SetRawValue(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA083A0))(this, value);
  }
  void SetDefaultPosition() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA08400))(this);
  }
  void MhPScBqXTECPsgayMyYuZxIqoiY(ModdingAPI::Exposed::UnityEngine::Vector2 ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA084B0))(this, );
  }
  void ReturnToDefaultPosition(bool instant) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA084E0))(this, instant);
  }
  void ReturnToDefaultPosition() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA08550))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA085C0))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA086B0))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA08730))(this);
  }
  void OnValidate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA08790))(this);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA087F0))(this);
  }
  void OnUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA08910))(this);
  }
  bool OnInitialize() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA089F0))(this);
  }
  void OnCustomControllerUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA08A30))(this);
  }
  void OnSubscribeEvents() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA08AF0))(this);
  }
  void OnUnsubscribeEvents() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA09160))(this);
  }
  void OnSetProperty() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA098B0))(this);
  }
  void OnClear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA09940))(this);
  }
  void ClearValue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA09AE0))(this);
  }
  bool IsPressed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA09BD0))(this);
  }
  bool IsThisOrTouchRegionGameObject(ModdingAPI::Exposed::UnityEngine::GameObject* gameObject) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA09C50))(this, gameObject);
  }
  void cYIXchLlItYRyLJLwBlhCGwSRCyc() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA09DC0))(this);
  }
  void UYLhAnzodmbujdvhwytleqTLjciC() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0A010))(this);
  }
  void kDPhJefMNgeJSlBzHqEGIINbGwKP() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0A220))(this);
  }
  void CohsEEJDtHiGaqpnDLNpfxcuZNy(float , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0A3B0))(this, , );
  }
  void hYUMYIgweCplHQcSJOrDtlMZcQY() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0A4D0))(this);
  }
  void jORLiKbzTkHvOeHWaoFOGtLiHlF() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0A6A0))(this);
  }
  void ymLIcXZriVhKICsPiFCdANvvMvx() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0A700))(this);
  }
  void iTVbdjIkguNpbClljPxhlULdbyI() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0A750))(this);
  }
  bool OTFOrXRIjZUiiqResizdlOUPohA() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0A800))(this);
  }
  void hZDhkXIFraXbAgqjhPrSFhjfJzAZ(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0A8D0))(this, );
  }
  void dHMvznDSbqLhsaOWadGkudtLzws(ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::Rewired::ComponentControls::TouchRegion*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0AD70))(this, );
  }
  void AYvfpMCZbfRLEqDDxjREpCGORwv() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0B1F0))(this);
  }
  void xrtapRNCmaEXnzejAMiJzSAvdQf(ModdingAPI::Exposed::UnityEngine::Vector2 , bool , float , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::Vector2, bool, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0B2E0))(this, , , , );
  }
  void jKVLTyTkMfvkSREqHAYZcEvMwiSL(ModdingAPI::Exposed::UnityEngine::Vector2 , int32_t , bool , float , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::Vector2, int32_t, bool, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0B640))(this, , , , , );
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* bKGklfchSOBzQFLUtXxJmKcXcUR(ModdingAPI::Exposed::UnityEngine::Vector2 , int32_t , float , int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::Vector2, int32_t, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0BEF0))(this, , , , );
  }
  void FeVVvTvRTISAEOlEkHKIudfcTRK(int32_t , ModdingAPI::Exposed::UnityEngine::Vector2 , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector2, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0C0A0))(this, , , );
  }
  void XfldYphlwrGnFkOlPCvBvGGqdhk(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0C3A0))(this, );
  }
  void AIApaPVQIqwJnbGDJwPeXBvTKwn(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0C5C0))(this, );
  }
  void MhZdakUNjvalpKWeCojQEERqXCn(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0C840))(this, );
  }
  void xCvCyUQvhmODCDSVjNDGzfyxlkT() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0C9A0))(this);
  }
  void hweiJuyBTJsjQMDgcZnfgPwIeszB() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0CA60))(this);
  }
  bool JpUWhnwqinOqpSnLCExvgmsHHae() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0CC90))(this);
  }
  void dORXkalWkoSEkHJGDibCDLUiGuF() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0CD80))(this);
  }
  bool CrCOUWsuVxNbeJsHFltBMmJHRYu(int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0CDA0))(this, );
  }
  ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* oaSspQSCIhDzAErWJiLigsjFOVNN(int32_t , ModdingAPI::Exposed::UnityEngine::GameObject* ) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, int32_t, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0CE90))(this, , );
  }
  ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* rWEGDrdRbQSrlxJdGcKEyNszyas(int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0D6D0))(this, );
  }
  void VBgJFzwufsNgqxXVpMitxfbnbmX(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0D930))(this, );
  }
  ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* PUttwdzvgiIIjopnGDAkfPmhDUdP(int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0D9C0))(this, );
  }
  void ypQQuohHPmsHxJcumEiFgkQqQXik(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0DEF0))(this, , );
  }
  void XNIAmgcqmiwLUEZfCBfewmvAAsPO(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0E020))(this, , );
  }
  void LWdRdbYDirbQmpiMeFYqKODYcmY(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0E160))(this, , );
  }
  void hKVGGffLFphKVPtbuSfXsQsNWTm(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0E620))(this, , );
  }
  void FSoJMOodAVbNvfUCPZkeQBijFzWU(int32_t , ModdingAPI::Exposed::UnityEngine::Vector2 , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector2, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0E710))(this, , , );
  }
  void WLRKPaeMhXpsrvPBZdmWEiPZXRT() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0E7E0))(this);
  }
  void OnPointerDown(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0E930))(this, eventData);
  }
  void OnPointerUp(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0EB50))(this, eventData);
  }
  void OnPointerEnter(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0ED70))(this, eventData);
  }
  void OnPointerExit(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0EFE0))(this, eventData);
  }
  void vBreFjIFTOghMFMxIKsfKObcqRKG(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0F240))(this, );
  }
  void EZpbouSISFZeZfICMNItDRrRiVQ(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0F470))(this, );
  }
  void QgtspWBhSjdflXFRIMjIejapdxm(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0F6A0))(this, );
  }
  void HFgAGhEwPcGAghDiNsWVSAnejnMF(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0F890))(this, );
  }
  void ylPEvowloYhzWGVgUwDKvxKnsgD(float ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0FAC0))(this, );
  }
  void onrjuyiFIVarAogUNaSvfTDBMluj(bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0FBB0))(this, );
  }
  void tgTagUwuPeJIwZTQXMhVWKRTcIc() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0FC70))(this);
  }
  void UKeCKdJSRHAnvBpmkNJbEuDyeZKY() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TouchButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA0FCE0))(this);
  }
};
}