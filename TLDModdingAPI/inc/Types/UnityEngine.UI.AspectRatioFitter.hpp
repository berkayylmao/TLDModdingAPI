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
struct __AspectRatioFitter_Il2CppStaticFields {
};

struct __AspectRatioFitter_Il2CppVtbl {
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
  VirtualInvokeData _19_Update;
  VirtualInvokeData _20_SetLayoutHorizontal;
  VirtualInvokeData _21_SetLayoutVertical;
};

struct __AspectRatioFitter_Il2CppClass {
  Il2CppClass_1 _1;
  __AspectRatioFitter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AspectRatioFitter_Il2CppVtbl vtbl;
};

class AspectRatioFitter {
public:
  // Il2Cpp fields:
  __AspectRatioFitter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t m_AspectMode;
  float m_AspectRatio;
  ModdingAPI::Exposed::UnityEngine::RectTransform* m_Rect;
  bool m_DelayedSetDirty;
  ModdingAPI::Exposed::UnityEngine::DrivenRectTransformTracker m_Tracker;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE29E0))(this);
  }
  int32_t get_aspectMode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE2A00))(this);
  }
  void set_aspectMode(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE2A10))(this, value);
  }
  float get_aspectRatio() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE2AB0))(this);
  }
  void set_aspectRatio(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE2AC0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::RectTransform* get_rectTransform() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RectTransform*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE2B90))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE2C60))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE2C70))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE2D20))(this);
  }
  void OnRectTransformDimensionsChange() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE2C60))(this);
  }
  void UpdateRect() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE2D40))(this);
  }
  float GetSizeDeltaToProduceSize(float size, int32_t axis) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE30E0))(this, size, axis);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetParentSize() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE3270))(this);
  }
  void SetLayoutHorizontal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void SetLayoutVertical() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void SetDirty() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::AspectRatioFitter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE2C60))(this);
  }
};
}