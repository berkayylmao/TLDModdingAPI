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

namespace ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween {
struct __FloatTween_Il2CppObject {
  ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback* m_Target;
  float m_StartValue;
  float m_TargetValue;
  float m_Duration;
  bool m_IgnoreTimeScale;
};
struct __FloatTween_Il2CppStaticFields {
};

struct __FloatTween_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_TweenValue;
  VirtualInvokeData _5_get_ignoreTimeScale;
  VirtualInvokeData _6_get_duration;
  VirtualInvokeData _7_ValidTarget;
};

struct __FloatTween_Il2CppClass {
  Il2CppClass_1 _1;
  __FloatTween_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __FloatTween_Il2CppVtbl vtbl;
};

class FloatTween {
public:
  // Member fields:
  ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback* m_Target;
  float m_StartValue;
  float m_TargetValue;
  float m_Duration;
  bool m_IgnoreTimeScale;

  // Member methods:
  float get_startValue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x27FA0))(this);
  }
  void set_startValue(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6E00))(this, value);
  }
  float get_targetValue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x27FB0))(this);
  }
  void set_targetValue(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6E20))(this, value);
  }
  float get_duration() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x27FC0))(this);
  }
  void set_duration(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA7C0))(this, value);
  }
  bool get_ignoreTimeScale() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x27FD0))(this);
  }
  void set_ignoreTimeScale(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA7E0))(this, value);
  }
  void TweenValue(float floatPercentage) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x27FE0))(this, floatPercentage);
  }
  void AddOnChangedCallback(ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*, ModdingAPI::Exposed::UnityEngine::Events::UnityAction_T0_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x27FF0))(this, callback);
  }
  bool GetIgnoreTimescale() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x27FD0))(this);
  }
  float GetDuration() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x27FC0))(this);
  }
  bool ValidTarget() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::FloatTween*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x27F90))(this);
  }

};
}