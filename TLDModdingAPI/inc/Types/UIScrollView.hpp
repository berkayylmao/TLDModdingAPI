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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Plane.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Bounds.hpp"


namespace ModdingAPI::Exposed {
struct __UIScrollView_Il2CppStaticFields {
  ModdingAPI::Exposed::BetterList_T_* list;
};

struct __UIScrollView_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_bounds;
  VirtualInvokeData _5_get_shouldMoveHorizontally;
  VirtualInvokeData _6_get_shouldMoveVertically;
  VirtualInvokeData _7_get_shouldMove;
  VirtualInvokeData _8_UpdateScrollbars;
  VirtualInvokeData _9_SetDragAmount;
  VirtualInvokeData _10_MoveRelative;
};

struct __UIScrollView_Il2CppClass {
  Il2CppClass_1 _1;
  __UIScrollView_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UIScrollView_Il2CppVtbl vtbl;
};

class UIScrollView {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C75480;
  static inline    UIScrollView* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C44808;
  static inline    __UIScrollView_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline UIScrollView* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (UIScrollView**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __UIScrollView_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__UIScrollView_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __UIScrollView_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t movement;
  int32_t dragEffect;
  bool restrictWithinPanel;
  bool disableDragIfFits;
  bool smoothDragStart;
  bool iOSDragEmulation;
  float scrollWheelFactor;
  float momentumAmount;
  float dampenStrength;
  bool doNotChangeScrollbarAlpha;
  ModdingAPI::Exposed::UIProgressBar* horizontalScrollBar;
  ModdingAPI::Exposed::UIProgressBar* verticalScrollBar;
  int32_t showScrollBars;
  ModdingAPI::Exposed::UnityEngine::Vector2 customMovement;
  int32_t contentPivot;
  ModdingAPI::Exposed::UIScrollView::OnDragNotification* onDragStarted;
  ModdingAPI::Exposed::UIScrollView::OnDragNotification* onDragFinished;
  ModdingAPI::Exposed::UIScrollView::OnDragNotification* onMomentumMove;
  ModdingAPI::Exposed::UIScrollView::OnDragNotification* onStoppedMoving;
  ModdingAPI::Exposed::UnityEngine::Vector3 scale;
  ModdingAPI::Exposed::UnityEngine::Vector2 relativePositionOnReset;
  ModdingAPI::Exposed::UnityEngine::Transform* mTrans;
  ModdingAPI::Exposed::UIPanel* mPanel;
  ModdingAPI::Exposed::UnityEngine::Plane mPlane;
  ModdingAPI::Exposed::UnityEngine::Vector3 mLastPos;
  bool mPressed;
  ModdingAPI::Exposed::UnityEngine::Vector3 mMomentum;
  float mScroll;
  ModdingAPI::Exposed::UnityEngine::Bounds mBounds;
  bool mCalculatedBounds;
  bool mShouldMove;
  bool mIgnoreCallbacks;
  int32_t mDragID;
  ModdingAPI::Exposed::UnityEngine::Vector2 mDragStartOffset;
  bool mDragStarted;
  bool mStarted;
  ModdingAPI::Exposed::UICenterOnChild* centerOnChild;

  // Member methods:
  ModdingAPI::Exposed::UIPanel* get_panel() {
    return reinterpret_cast<ModdingAPI::Exposed::UIPanel*(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319850))(this);
  }
  bool get_isDragging() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2036310))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Bounds get_bounds() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Bounds(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2036330))(this);
  }
  bool get_canMoveHorizontally() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2036400))(this);
  }
  bool get_canMoveVertically() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2036430))(this);
  }
  bool get_shouldMoveHorizontally() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2036460))(this);
  }
  bool get_shouldMoveVertically() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20365B0))(this);
  }
  bool get_shouldMove() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2036700))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_currentMomentum() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2036A30))(this);
  }
  void set_currentMomentum(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2036A50))(this, value);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2036A70))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2036D50))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2036E70))(this);
  }
  void CheckScrollbars() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2036EE0))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20372A0))(this);
  }
  bool RestrictWithinBounds(bool instant) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIScrollView*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2037360))(this, instant);
  }
  bool RestrictWithinBounds(bool instant, bool horizontal, bool vertical) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIScrollView*, bool, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2037380))(this, instant, horizontal, vertical);
  }
  void DisableSpring() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20377F0))(this);
  }
  void UpdateScrollbars() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCA63E0))(this);
  }
  void UpdateScrollbars(bool recalculateBounds) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2037900))(this, recalculateBounds);
  }
  void UpdateScrollbars(ModdingAPI::Exposed::UIProgressBar* slider, float contentMin, float contentMax, float contentSize, float viewSize, bool inverted) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*, ModdingAPI::Exposed::UIProgressBar*, float, float, float, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2037E30))(this, slider, contentMin, contentMax, contentSize, viewSize, inverted);
  }
  void SetDragAmount(float x, float y, bool updateScrollbars) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*, float, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20381D0))(this, x, y, updateScrollbars);
  }
  void InvalidateBounds() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2038780))(this);
  }
  void ResetPosition() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2038790))(this);
  }
  void UpdatePosition() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20388B0))(this);
  }
  void OnScrollBar() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2038AC0))(this);
  }
  void MoveRelative(ModdingAPI::Exposed::UnityEngine::Vector3 relative) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2038C30))(this, relative);
  }
  void MoveAbsolute(ModdingAPI::Exposed::UnityEngine::Vector3 absolute) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2038E30))(this, absolute);
  }
  void Press(bool pressed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2039040))(this, pressed);
  }
  void Drag() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20396E0))(this);
  }
  void Scroll(float delta) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x203A1B0))(this, delta);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x203A3D0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIScrollView*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x203ADD0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::BetterList_T_*> list = __CppStaticProperty<ModdingAPI::Exposed::BetterList_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->list; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x203AF70))();
  }
};
}