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


namespace ModdingAPI::Exposed {
struct __TweenOrthoSize_Il2CppStaticFields {
};

struct __TweenOrthoSize_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Start;
  VirtualInvokeData _5_OnUpdate;
  VirtualInvokeData _6_SetStartToCurrentValue;
  VirtualInvokeData _7_SetEndToCurrentValue;
};

struct __TweenOrthoSize_Il2CppClass {
  Il2CppClass_1 _1;
  __TweenOrthoSize_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TweenOrthoSize_Il2CppVtbl vtbl;
};

class TweenOrthoSize {
public:
  // Il2Cpp fields:
  __TweenOrthoSize_Il2CppClass* __pClassInstance;
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
  float from;
  float to;
  ModdingAPI::Exposed::UnityEngine::Camera* mCam;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Camera* get_cachedCamera() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Camera*(__fastcall*)(ModdingAPI::Exposed::TweenOrthoSize*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2730))(this);
  }
  float get_orthoSize() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TweenOrthoSize*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2800))(this);
  }
  void set_orthoSize(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenOrthoSize*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2870))(this, value);
  }
  float get_value() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TweenOrthoSize*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2800))(this);
  }
  void set_value(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenOrthoSize*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2880))(this, value);
  }
  void OnUpdate(float factor, bool isFinished) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenOrthoSize*, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2900))(this, factor, isFinished);
  }
  void SetStartToCurrentValue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenOrthoSize*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2AC0))(this);
  }
  void SetEndToCurrentValue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenOrthoSize*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2B40))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TweenOrthoSize*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B1180))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::TweenOrthoSize* Begin(ModdingAPI::Exposed::UnityEngine::GameObject* go, float duration, float to) {
    return reinterpret_cast<ModdingAPI::Exposed::TweenOrthoSize*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20B2930))(go, duration, to);
  }
};
}