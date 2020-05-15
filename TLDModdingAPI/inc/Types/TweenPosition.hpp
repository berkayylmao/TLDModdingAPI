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
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __TweenPosition_Il2CppStaticFields {
};

struct __TweenPosition_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Start;
  VirtualInvokeData _5_OnUpdate;
  VirtualInvokeData _6_SetStartToCurrentValue;
  VirtualInvokeData _7_SetEndToCurrentValue;
};

struct __TweenPosition_Il2CppClass {
  Il2CppClass_1 _1;
  __TweenPosition_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TweenPosition_Il2CppVtbl vtbl;
};

class TweenPosition {
public:
  // Il2Cpp fields:
  __TweenPosition_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t method;
  int32_t style;
  ModdingAPI::Exposed::UnityEngine::AnimationCurve* animationCurve;
  bool ignoreTimeScale;
  float delay;
  float duration;
  bool steeperCurves;
  int32_t tweenGroup;
  bool doNotResetOnDisable;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* onFinished;
  ModdingAPI::Exposed::UnityEngine::GameObject* eventReceiver;
  System_String* callWhenFinished;
  bool UITweener_mStarted;
  float UITweener_mStartTime;
  float UITweener_mDuration;
  float UITweener_mAmountPerDelta;
  float UITweener_mFactor;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* UITweener_mTemp;
  ModdingAPI::Exposed::UnityEngine::Vector3 from;
  ModdingAPI::Exposed::UnityEngine::Vector3 to;
  bool worldSpace;
  ModdingAPI::Exposed::UnityEngine::Transform* mTrans;
  ModdingAPI::Exposed::UIRect* mRect;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Transform* get_cachedTransform() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Transform*(__fastcall*)(ModdingAPI::Exposed::TweenPosition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2BC0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_position() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::TweenPosition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2CC0))(this);
  }
  void set_position(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenPosition*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2CF0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_value() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::TweenPosition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2D20))(this);
  }
  void set_value(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenPosition*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2E30))(this, value);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenPosition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B30E0))(this);
  }
  void OnUpdate(float factor, bool isFinished) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenPosition*, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B3170))(this, factor, isFinished);
  }
  void SetStartToCurrentValue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenPosition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B3570))(this);
  }
  void SetEndToCurrentValue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenPosition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B35B0))(this);
  }
  void SetCurrentValueToStart() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenPosition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B35F0))(this);
  }
  void SetCurrentValueToEnd() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenPosition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B3620))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenPosition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B3650))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::TweenPosition* Begin(ModdingAPI::Exposed::UnityEngine::GameObject* go, float duration, ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    return reinterpret_cast<ModdingAPI::Exposed::TweenPosition*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, float, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B32C0))(go, duration, pos);
  }
  static inline ModdingAPI::Exposed::TweenPosition* Begin(ModdingAPI::Exposed::UnityEngine::GameObject* go, float duration, ModdingAPI::Exposed::UnityEngine::Vector3 pos, bool worldSpace) {
    return reinterpret_cast<ModdingAPI::Exposed::TweenPosition*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, float, ModdingAPI::Exposed::UnityEngine::Vector3, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B3410))(go, duration, pos, worldSpace);
  }
};
}