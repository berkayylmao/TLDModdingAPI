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
struct __HorizontalLayoutGroup_Il2CppStaticFields {
};

struct __HorizontalLayoutGroup_Il2CppVtbl {
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
};

struct __HorizontalLayoutGroup_Il2CppClass {
  Il2CppClass_1 _1;
  __HorizontalLayoutGroup_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __HorizontalLayoutGroup_Il2CppVtbl vtbl;
};

class HorizontalLayoutGroup {
public:
  // Il2Cpp fields:
  __HorizontalLayoutGroup_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::RectOffset* m_Padding;
  int32_t m_ChildAlignment;
  ModdingAPI::Exposed::UnityEngine::RectTransform* LayoutGroup_m_Rect;
  ModdingAPI::Exposed::UnityEngine::DrivenRectTransformTracker m_Tracker;
  ModdingAPI::Exposed::UnityEngine::Vector2 LayoutGroup_m_TotalMinSize;
  ModdingAPI::Exposed::UnityEngine::Vector2 LayoutGroup_m_TotalPreferredSize;
  ModdingAPI::Exposed::UnityEngine::Vector2 LayoutGroup_m_TotalFlexibleSize;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* LayoutGroup_m_RectChildren;
  float m_Spacing;
  bool m_ChildForceExpandWidth;
  bool m_ChildForceExpandHeight;
  bool m_ChildControlWidth;
  bool m_ChildControlHeight;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::HorizontalLayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE34160))(this);
  }
  void CalculateLayoutInputHorizontal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::HorizontalLayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE34180))(this);
  }
  void CalculateLayoutInputVertical() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::HorizontalLayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE341B0))(this);
  }
  void SetLayoutHorizontal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::HorizontalLayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE341C0))(this);
  }
  void SetLayoutVertical() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::HorizontalLayoutGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE341D0))(this);
  }
};
}