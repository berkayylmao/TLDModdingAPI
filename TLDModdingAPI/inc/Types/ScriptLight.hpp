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
struct __ScriptLight_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* s_ActiveScriptLights;
};

struct __ScriptLight_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_SetTime;
  VirtualInvokeData _5_OnControlTimeStart;
  VirtualInvokeData _6_OnControlTimeStop;
};

struct __ScriptLight_Il2CppClass {
  Il2CppClass_1 _1;
  __ScriptLight_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ScriptLight_Il2CppVtbl vtbl;
};

class ScriptLight {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4F788;
  static inline    __ScriptLight_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ScriptLight_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ScriptLight_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ScriptLight_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_TimelineFadeoutDurationSeconds;
  bool m_TurnOnOnStart;
  bool m_FadeoutWithDistance;
  float m_FadeOutStartDistance;
  float m_FadeOutEndDistance;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Lights;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_FadeOutReference;
  float m_TimerFadeOutDuration;
  bool m_FadeOutStartTimeRequested;
  float m_FadeOutStartTime;
  float m_TimelineFadeValue;
  float m_DistanceFadeValue;
  bool m_IsControlledByTimeline;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_LightInfos;
  bool m_IsTimerControlled;
  float m_TimerControlledValue;
  float m_TimeElapsed;
  int32_t m_State;
  System_String* m_GUID;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C39DE0))(this);
  }
  void TurnOn() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3A170))(this);
  }
  void SetTime(double time) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3A180))(this, time);
  }
  void OnControlTimeStart() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3A2A0))(this);
  }
  void OnControlTimeStop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3A2B0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3A2C0))(this);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3A450))(this);
  }
  void StartTimerFadeOut(float fadeoutDuration) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3A630))(this, fadeoutDuration);
  }
  bool IsTurnedOff() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE1130))(this);
  }
  void Update_FadeOut() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3AE90))(this);
  }
  void Update_TurnedOff() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3AF80))(this);
  }
  void Update_TurnedOn() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3B1A0))(this);
  }
  void UpdateLights(float fadeValue) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3B1D0))(this, fadeValue);
  }
  float GetFadeDistanceValue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3B450))(this);
  }
  void StartTimelineFadeout() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3A2A0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ScriptLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3B900))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> s_ActiveScriptLights = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_ActiveScriptLights; }
  );

  // Static methods:
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3A650))();
  }
  static inline System_String* SerializeAll() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3A730))();
  }
  static inline ModdingAPI::Exposed::ScriptLight* GetScriptLight(ModdingAPI::Exposed::UnityEngine::Light* l) {
    return reinterpret_cast<ModdingAPI::Exposed::ScriptLight*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Light*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3AAE0))(l);
  }
  static inline void DeserializeAll(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3ACC0))(text);
  }
  static inline ModdingAPI::Exposed::ScriptLight* FindActiveScriptLightById(System_String* guid) {
    return reinterpret_cast<ModdingAPI::Exposed::ScriptLight*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3B810))(guid);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C3BB10))();
  }
};
}