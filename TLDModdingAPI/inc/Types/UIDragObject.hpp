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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Plane.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Bounds.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed {
struct __UIDragObject_Il2CppStaticFields {
};

struct __UIDragObject_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __UIDragObject_Il2CppClass {
  Il2CppClass_1 _1;
  __UIDragObject_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UIDragObject_Il2CppVtbl vtbl;
};

class UIDragObject {
public:
  // Il2Cpp fields:
  __UIDragObject_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::Transform* target;
  ModdingAPI::Exposed::UIPanel* panelRegion;
  ModdingAPI::Exposed::UnityEngine::Vector3 scrollMomentum;
  bool restrictWithinPanel;
  ModdingAPI::Exposed::UIRect* contentRect;
  int32_t dragEffect;
  float momentumAmount;
  ModdingAPI::Exposed::UnityEngine::Vector3 scale;
  float scrollWheelFactor;
  ModdingAPI::Exposed::UnityEngine::Plane mPlane;
  ModdingAPI::Exposed::UnityEngine::Vector3 mTargetPos;
  ModdingAPI::Exposed::UnityEngine::Vector3 mLastPos;
  ModdingAPI::Exposed::UnityEngine::Vector3 mMomentum;
  ModdingAPI::Exposed::UnityEngine::Vector3 mScroll;
  ModdingAPI::Exposed::UnityEngine::Bounds mBounds;
  int32_t mTouchID;
  bool mStarted;
  bool mPressed;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Vector3 get_dragMovement() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UIDragObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FF8D90))(this);
  }
  void set_dragMovement(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256C900))(this, value);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256C910))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256CC00))(this);
  }
  void FindPanel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256CC10))(this);
  }
  void UpdateBounds() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256CDE0))(this);
  }
  void OnPress(bool pressed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256D310))(this, pressed);
  }
  void OnDrag(ModdingAPI::Exposed::UnityEngine::Vector2 delta) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256D830))(this, delta);
  }
  void Move(ModdingAPI::Exposed::UnityEngine::Vector3 worldDelta) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256DFE0))(this, worldDelta);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256E430))(this);
  }
  void CancelMovement() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256E7C0))(this);
  }
  void CancelSpring() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256EAF0))(this);
  }
  void OnScroll(float delta) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256EC10))(this, delta);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDragObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x256EE10))(this);
  }
};
}