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
#include "ModdingAPI.Exposed.UnityEngine.DrivenRectTransformTracker.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed::UnityEngine::UI {
struct __LayoutGroup_Il2CppStaticFields {
};

struct __LayoutGroup_Il2CppVtbl {
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
  VirtualInvokeData _28_CalculateLayoutInputHorizontal;
  VirtualInvokeData _29_CalculateLayoutInputVertical;
  VirtualInvokeData _30_get_minWidth;
  VirtualInvokeData _31_get_preferredWidth;
  VirtualInvokeData _32_get_flexibleWidth;
  VirtualInvokeData _33_get_minHeight;
  VirtualInvokeData _34_get_preferredHeight;
  VirtualInvokeData _35_get_flexibleHeight;
  VirtualInvokeData _36_get_layoutPriority;
  VirtualInvokeData _37_SetLayoutHorizontal;
  VirtualInvokeData _38_SetLayoutVertical;
  VirtualInvokeData _39_OnTransformChildrenChanged;
  VirtualInvokeData _65535__ctor;
};

struct __LayoutGroup_Il2CppClass {
  Il2CppClass_1 _1;
  __LayoutGroup_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __LayoutGroup_Il2CppVtbl vtbl;
};

class LayoutGroup {
public:
  // Il2Cpp fields:
  __LayoutGroup_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::RectOffset* m_Padding;
  int32_t m_ChildAlignment;
  ModdingAPI::Exposed::UnityEngine::RectTransform* m_Rect;
  ModdingAPI::Exposed::UnityEngine::DrivenRectTransformTracker m_Tracker;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_TotalMinSize;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_TotalPreferredSize;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_TotalFlexibleSize;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_RectChildren;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4C8C0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::RectOffset* get_padding() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RectOffset*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD890))(this);
  }
  void set_padding(ModdingAPI::Exposed::UnityEngine::RectOffset* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*, ModdingAPI::Exposed::UnityEngine::RectOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4CCE0))(this, value);
  }
  int32_t get_childAlignment() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADA080))(this);
  }
  void set_childAlignment(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4CDB0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::RectTransform* get_rectTransform() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RectTransform*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4CE50))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* get_rectChildren() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4CF20))(this);
  }
  void CalculateLayoutInputHorizontal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4CF30))(this);
  }
  float get_minWidth() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D2A0))(this);
  }
  float get_preferredWidth() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D2B0))(this);
  }
  float get_flexibleWidth() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D2C0))(this);
  }
  float get_minHeight() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D2D0))(this);
  }
  float get_preferredHeight() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D2E0))(this);
  }
  float get_flexibleHeight() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D2F0))(this);
  }
  int32_t get_layoutPriority() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D300))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D310))(this);
  }
  void OnDidApplyAnimationProperties() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D300))(this);
  }
  float GetTotalMinSize(int32_t axis) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D3C0))(this, axis);
  }
  float GetTotalPreferredSize(int32_t axis) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D3D0))(this, axis);
  }
  float GetTotalFlexibleSize(int32_t axis) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D3E0))(this, axis);
  }
  float GetStartOffset(int32_t axis, float requiredSpaceWithoutPadding) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D3F0))(this, axis, requiredSpaceWithoutPadding);
  }
  float GetAlignmentOnAxis(int32_t axis) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D670))(this, axis);
  }
  void SetLayoutInputForAxis(float totalMin, float totalPreferred, float totalFlexible, int32_t axis) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*, float, float, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D6C0))(this, totalMin, totalPreferred, totalFlexible, axis);
  }
  void SetChildAlongAxis(ModdingAPI::Exposed::UnityEngine::RectTransform* rect, int32_t axis, float pos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*, ModdingAPI::Exposed::UnityEngine::RectTransform*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D720))(this, rect, axis, pos);
  }
  void SetChildAlongAxis(ModdingAPI::Exposed::UnityEngine::RectTransform* rect, int32_t axis, float pos, float size) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*, ModdingAPI::Exposed::UnityEngine::RectTransform*, int32_t, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D830))(this, rect, axis, pos, size);
  }
  bool get_isRootLayoutGroup() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D920))(this);
  }
  void OnRectTransformDimensionsChange() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4DBA0))(this);
  }
  void OnTransformChildrenChanged() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4D300))(this);
  }
  void SetDirty() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4DBD0))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* DelayedSetDirty(ModdingAPI::Exposed::UnityEngine::RectTransform* rectTransform) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::LayoutGroup*, ModdingAPI::Exposed::UnityEngine::RectTransform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4DE10))(this, rectTransform);
  }
};
}