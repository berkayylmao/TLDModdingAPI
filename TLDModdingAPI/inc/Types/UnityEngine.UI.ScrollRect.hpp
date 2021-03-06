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
#include "ModdingAPI.Exposed.UnityEngine.Bounds.hpp"
#include "ModdingAPI.Exposed.UnityEngine.DrivenRectTransformTracker.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Bounds.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector2.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Matrix4x4.hpp"


namespace ModdingAPI::Exposed::UnityEngine::UI {
struct __ScrollRect_Il2CppStaticFields {
};

struct __ScrollRect_Il2CppVtbl {
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
  VirtualInvokeData _23_UnityEngine_UI_ICanvasElement_get_transform;
  VirtualInvokeData _38_Rebuild;
  VirtualInvokeData _39_LayoutComplete;
  VirtualInvokeData _40_GraphicUpdateComplete;
  VirtualInvokeData _41_StopMovement;
  VirtualInvokeData _42_OnScroll;
  VirtualInvokeData _43_OnInitializePotentialDrag;
  VirtualInvokeData _44_OnBeginDrag;
  VirtualInvokeData _45_OnEndDrag;
  VirtualInvokeData _46_OnDrag;
  VirtualInvokeData _47_SetContentAnchoredPosition;
  VirtualInvokeData _48_LateUpdate;
  VirtualInvokeData _49_SetNormalizedPosition;
  VirtualInvokeData _50_CalculateLayoutInputHorizontal;
  VirtualInvokeData _51_CalculateLayoutInputVertical;
  VirtualInvokeData _52_get_minWidth;
  VirtualInvokeData _53_get_preferredWidth;
  VirtualInvokeData _54_get_flexibleWidth;
  VirtualInvokeData _55_get_minHeight;
  VirtualInvokeData _56_get_preferredHeight;
  VirtualInvokeData _57_get_flexibleHeight;
  VirtualInvokeData _58_get_layoutPriority;
  VirtualInvokeData _59_SetLayoutHorizontal;
  VirtualInvokeData _60_SetLayoutVertical;
};

struct __ScrollRect_Il2CppClass {
  Il2CppClass_1 _1;
  __ScrollRect_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ScrollRect_Il2CppVtbl vtbl;
};

class ScrollRect {
public:
  // Il2Cpp fields:
  __ScrollRect_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::RectTransform* m_Content;
  bool m_Horizontal;
  bool m_Vertical;
  int32_t m_MovementType;
  float m_Elasticity;
  bool m_Inertia;
  float m_DecelerationRate;
  float m_ScrollSensitivity;
  ModdingAPI::Exposed::UnityEngine::RectTransform* m_Viewport;
  ModdingAPI::Exposed::UnityEngine::UI::Scrollbar* m_HorizontalScrollbar;
  ModdingAPI::Exposed::UnityEngine::UI::Scrollbar* m_VerticalScrollbar;
  int32_t m_HorizontalScrollbarVisibility;
  int32_t m_VerticalScrollbarVisibility;
  float m_HorizontalScrollbarSpacing;
  float m_VerticalScrollbarSpacing;
  ModdingAPI::Exposed::UnityEngine::UI::ScrollRect::ScrollRectEvent* m_OnValueChanged;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_PointerStartLocalCursor;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_ContentStartPosition;
  ModdingAPI::Exposed::UnityEngine::RectTransform* m_ViewRect;
  ModdingAPI::Exposed::UnityEngine::Bounds m_ContentBounds;
  ModdingAPI::Exposed::UnityEngine::Bounds m_ViewBounds;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_Velocity;
  bool m_Dragging;
  bool m_Scrolling;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_PrevPosition;
  ModdingAPI::Exposed::UnityEngine::Bounds m_PrevContentBounds;
  ModdingAPI::Exposed::UnityEngine::Bounds m_PrevViewBounds;
  bool m_HasRebuiltLayout;
  bool m_HSliderExpand;
  bool m_VSliderExpand;
  float m_HSliderHeight;
  float m_VSliderWidth;
  ModdingAPI::Exposed::UnityEngine::RectTransform* m_Rect;
  ModdingAPI::Exposed::UnityEngine::RectTransform* m_HorizontalScrollbarRect;
  ModdingAPI::Exposed::UnityEngine::RectTransform* m_VerticalScrollbarRect;
  ModdingAPI::Exposed::UnityEngine::DrivenRectTransformTracker m_Tracker;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* m_Corners;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEE900))(this);
  }
  ModdingAPI::Exposed::UnityEngine::RectTransform* get_content() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RectTransform*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD890))(this);
  }
  void set_content(ModdingAPI::Exposed::UnityEngine::RectTransform* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::RectTransform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, value);
  }
  bool get_horizontal() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE2AD80))(this);
  }
  void set_horizontal(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D810))(this, value);
  }
  bool get_vertical() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEEB80))(this);
  }
  void set_vertical(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D820))(this, value);
  }
  int32_t get_movementType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADA090))(this);
  }
  void set_movementType(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3838F0))(this, value);
  }
  float get_elasticity() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4C440))(this);
  }
  void set_elasticity(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B8D40))(this, value);
  }
  bool get_inertia() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEEB90))(this);
  }
  void set_inertia(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5718C0))(this, value);
  }
  float get_decelerationRate() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAB3BB0))(this);
  }
  void set_decelerationRate(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x807930))(this, value);
  }
  float get_scrollSensitivity() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAB3C10))(this);
  }
  void set_scrollSensitivity(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEEBA0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::RectTransform* get_viewport() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RectTransform*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD25D0))(this);
  }
  void set_viewport(ModdingAPI::Exposed::UnityEngine::RectTransform* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::RectTransform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEEBB0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::UI::Scrollbar* get_horizontalScrollbar() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::Scrollbar*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB000))(this);
  }
  void set_horizontalScrollbar(ModdingAPI::Exposed::UnityEngine::UI::Scrollbar* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::UI::Scrollbar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEEBC0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::UI::Scrollbar* get_verticalScrollbar() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::Scrollbar*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4BE40))(this);
  }
  void set_verticalScrollbar(ModdingAPI::Exposed::UnityEngine::UI::Scrollbar* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::UI::Scrollbar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEEF10))(this, value);
  }
  int32_t get_horizontalScrollbarVisibility() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB57E0))(this);
  }
  void set_horizontalScrollbarVisibility(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF260))(this, value);
  }
  int32_t get_verticalScrollbarVisibility() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF270))(this);
  }
  void set_verticalScrollbarVisibility(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF280))(this, value);
  }
  float get_horizontalScrollbarSpacing() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE341E0))(this);
  }
  void set_horizontalScrollbarSpacing(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF290))(this, value);
  }
  float get_verticalScrollbarSpacing() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF2A0))(this);
  }
  void set_verticalScrollbarSpacing(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF2B0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::UI::ScrollRect::ScrollRectEvent* get_onValueChanged() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::ScrollRect::ScrollRectEvent*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF2C0))(this);
  }
  void set_onValueChanged(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect::ScrollRectEvent* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::UI::ScrollRect::ScrollRectEvent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A4B0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::RectTransform* get_viewRect() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RectTransform*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF2D0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_velocity() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF430))(this);
  }
  void set_velocity(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF450))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::RectTransform* get_rectTransform() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RectTransform*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF480))(this);
  }
  void Rebuild(int32_t executing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF560))(this, executing);
  }
  void LayoutComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void GraphicUpdateComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void UpdateCachedData() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF650))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEFCA0))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF0000))(this);
  }
  bool IsActive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF0400))(this);
  }
  void EnsureLayoutHasRebuilt() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF04F0))(this);
  }
  void StopMovement() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF0620))(this);
  }
  void OnScroll(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF06E0))(this, data);
  }
  void OnInitializePotentialDrag(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF0A40))(this, eventData);
  }
  void OnBeginDrag(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF0B20))(this, eventData);
  }
  void OnEndDrag(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF0CE0))(this, eventData);
  }
  void OnDrag(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF0D10))(this, eventData);
  }
  void SetContentAnchoredPosition(ModdingAPI::Exposed::UnityEngine::Vector2 position) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF1000))(this, position);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF1210))(this);
  }
  void UpdatePrevData() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF1B50))(this);
  }
  void UpdateScrollbars(ModdingAPI::Exposed::UnityEngine::Vector2 offset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF1CA0))(this, offset);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_normalizedPosition() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF1FE0))(this);
  }
  void set_normalizedPosition(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2020))(this, value);
  }
  float get_horizontalNormalizedPosition() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2070))(this);
  }
  void set_horizontalNormalizedPosition(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2250))(this, value);
  }
  float get_verticalNormalizedPosition() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2270))(this);
  }
  void set_verticalNormalizedPosition(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2470))(this, value);
  }
  void SetHorizontalNormalizedPosition(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2250))(this, value);
  }
  void SetVerticalNormalizedPosition(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2470))(this, value);
  }
  void SetNormalizedPosition(float value, int32_t axis) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2490))(this, value, axis);
  }
  void OnRectTransformDimensionsChange() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2910))(this);
  }
  bool get_hScrollingNeeded() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2920))(this);
  }
  bool get_vScrollingNeeded() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF29D0))(this);
  }
  void CalculateLayoutInputHorizontal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void CalculateLayoutInputVertical() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  float get_minWidth() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D380))(this);
  }
  float get_preferredWidth() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D380))(this);
  }
  float get_flexibleWidth() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D380))(this);
  }
  float get_minHeight() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D380))(this);
  }
  float get_preferredHeight() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D380))(this);
  }
  float get_flexibleHeight() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D380))(this);
  }
  int32_t get_layoutPriority() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2A80))(this);
  }
  void SetLayoutHorizontal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2A90))(this);
  }
  void SetLayoutVertical() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF3600))(this);
  }
  void UpdateScrollbarVisibility() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF38E0))(this);
  }
  void UpdateScrollbarLayout() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF3BC0))(this);
  }
  void UpdateBounds() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF3F90))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Bounds GetBounds() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Bounds(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF4980))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 CalculateOffset(ModdingAPI::Exposed::UnityEngine::Vector2 delta) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF5000))(this, delta);
  }
  void SetDirty() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF52F0))(this);
  }
  void SetDirtyCaching() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF53C0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Transform* UnityEngine::UI::ICanvasElement::get_transform() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Transform*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ScrollRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4117E0))(this);
  }

  // Static methods:
  static inline float RubberDelta(float overStretching, float viewSize) {
    return reinterpret_cast<float(__fastcall*)(float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF2810))(overStretching, viewSize);
  }
  static inline void UpdateOneScrollbarVisibility(bool xScrollingNeeded, bool xAxisEnabled, int32_t scrollbarVisibility, ModdingAPI::Exposed::UnityEngine::UI::Scrollbar* scrollbar) {
    reinterpret_cast<void(__fastcall*)(bool, bool, int32_t, ModdingAPI::Exposed::UnityEngine::UI::Scrollbar*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF3940))(xScrollingNeeded, xAxisEnabled, scrollbarVisibility, scrollbar);
  }
  static inline void AdjustBounds(ModdingAPI::Exposed::UnityEngine::Bounds viewBounds, ModdingAPI::Exposed::UnityEngine::Vector2 contentPivot, ModdingAPI::Exposed::UnityEngine::Vector3 contentSize, ModdingAPI::Exposed::UnityEngine::Vector3 contentPos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF47F0))(viewBounds, contentPivot, contentSize, contentPos);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Bounds InternalGetBounds(ModdingAPI::Exposed::UnityEngine::Vector3_array* corners, ModdingAPI::Exposed::UnityEngine::Matrix4x4 viewWorldToLocalMatrix) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Bounds(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::UnityEngine::Matrix4x4)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF4B10))(corners, viewWorldToLocalMatrix);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector2 InternalCalculateOffset(ModdingAPI::Exposed::UnityEngine::Bounds viewBounds, ModdingAPI::Exposed::UnityEngine::Bounds contentBounds, bool horizontal, bool vertical, int32_t movementType, ModdingAPI::Exposed::UnityEngine::Vector2 delta) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds, ModdingAPI::Exposed::UnityEngine::Bounds, bool, bool, int32_t, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF5050))(viewBounds, contentBounds, horizontal, vertical, movementType, delta);
  }
};
}