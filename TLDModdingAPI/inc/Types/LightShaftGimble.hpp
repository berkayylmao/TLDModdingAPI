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
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI.Exposed.UnityEngine.ParticleSystem.MainModule.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __LightShaftGimble_Il2CppStaticFields {
};

struct __LightShaftGimble_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __LightShaftGimble_Il2CppClass {
  Il2CppClass_1 _1;
  __LightShaftGimble_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __LightShaftGimble_Il2CppVtbl vtbl;
};

class LightShaftGimble {
public:
  // Il2Cpp fields:
  __LightShaftGimble_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool m_FollowTod;
  ModdingAPI::Exposed::ScaledCurve* m_Horizontal;
  ModdingAPI::Exposed::ScaledCurve* m_Vertical;
  ModdingAPI::Exposed::ScaledCurve* m_MaximumRayIntensity;
  ModdingAPI::Exposed::ScaledCurve* m_MaximumLightIntensity;
  ModdingAPI::Exposed::UnityEngine::AnimationCurve* temp;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_LightShaft;
  ModdingAPI::Exposed::UnityEngine::Light* m_Light;
  ModdingAPI::Exposed::UnityEngine::ParticleSystem* m_Particles;
  bool m_UseLightColour;
  bool m_UseRayIntensityOnly;
  bool m_FadeWithViewAngle;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_HorizontalGimble;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_VerticalGimble;
  float m_ExternalIntensity;
  float m_TodIntensity;
  float m_GlobalTod;
  float m_Dot;
  float m_LightStartIntensity;
  ModdingAPI::Exposed::UnityEngine::Renderer_array* m_LightShaftRenderer;
  ModdingAPI::Exposed::UnityEngine::Color m_ParticleStartColour;
  ModdingAPI::Exposed::UnityEngine::ParticleSystem::MainModule m_ParticleMainModule;
  bool m_UseManagerTOD;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EA610))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EA880))(this);
  }
  void ManualUpdate(float externalTod) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EA9E0))(this, externalTod);
  }
  void UpdateRotation(float tod) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EAA30))(this, tod);
  }
  void UpdateMaterial(float tod) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EAC80))(this, tod);
  }
  void UpdateLight(float tod) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EB070))(this, tod);
  }
  void UpdateFX(float tod) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EB1B0))(this, tod);
  }
  void SetTimeOfDayIntensity(float todIntensity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EB4E0))(this, todIntensity);
  }
  void SetExternalIntensity(float newIntensity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EB4F0))(this, newIntensity);
  }
  void UseExternalTod(bool externalTod) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEF70))(this, externalTod);
  }
  void SetFollowTimeOfDay(bool followTod) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5161B0))(this, followTod);
  }
  float CalculateDot() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EB500))(this);
  }
  float AngleDir(ModdingAPI::Exposed::UnityEngine::Vector3 fwd, ModdingAPI::Exposed::UnityEngine::Vector3 targetDir, ModdingAPI::Exposed::UnityEngine::Vector3 up) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EB7D0))(this, fwd, targetDir, up);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightShaftGimble*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EB960))(this);
  }
};
}