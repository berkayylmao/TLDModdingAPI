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
#include "ModdingAPI.Exposed.WeatherParticleManagerConfiguration.hpp"
#include "ModdingAPI.Exposed.WeatherParticleManager.CommonVars.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector4.hpp"
#include "ModdingAPI.Exposed.WeatherParticleManager.ParticleSystemVars.hpp"
#include "ModdingAPI.Exposed.Unity.Collections.NativeArray_T_.hpp"
#include "ModdingAPI::Exposed::UnityEngine::ParticleSystem::Particle.hpp"
#include "ModdingAPI::Exposed::WeatherParticleManager::ParticleSystemVars.hpp"
#include "ModdingAPI::Exposed::WeatherParticleManagerConfiguration.hpp"
#include "ModdingAPI::Exposed::WeatherParticleManager::CommonVars.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __WeatherParticleManager_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Vector2 m_NoiseDir1;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_NoiseDir2;
  bool s_UseJobSystem;
  ModdingAPI::Exposed::UnityEngine::Vector3 step;
  float stepDot1;
};

struct __WeatherParticleManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __WeatherParticleManager_Il2CppClass {
  Il2CppClass_1 _1;
  __WeatherParticleManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __WeatherParticleManager_Il2CppVtbl vtbl;
};

class WeatherParticleManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C22180;
  static inline    __WeatherParticleManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __WeatherParticleManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__WeatherParticleManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __WeatherParticleManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::WeatherParticleManagerConfiguration m_Config;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_AllParticleKillers;
  ModdingAPI::Exposed::ParticleKiller_array* m_PKBoxColliders;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_FallingSnowKillers;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_BlowingSnowKillers;
  ModdingAPI::Exposed::WeatherParticleManager::CommonVars m_Common;
  ModdingAPI::Exposed::HeightMap* m_ParticleCollisionHeightMap;
  ModdingAPI::Exposed::UnityEngine::Vector4 m_GrassPhase;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_GrassPhaseNoise1;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_GrassPhaseNoise2;
  ModdingAPI::Exposed::UnityEngine::Vector4 m_BranchPhase;
  int32_t m_NumWorkerThreads;
  ModdingAPI::Exposed::System::Threading::Thread_array* m_WorkerThreads;
  ModdingAPI::Exposed::System::Threading::AutoResetEvent_array* m_WTAutoResetEvents;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_WTTaskList;
  ModdingAPI::Exposed::System::Threading::AutoResetEvent* m_MainThreadAutoResetEvent;
  int32_t m_TaskCount;
  int32_t m_TaskIndex;
  ModdingAPI::Exposed::WeatherParticleManager::ParticleSystemVars m_ParticleSystemVarsBlowing;
  ModdingAPI::Exposed::WeatherParticleManager::ParticleSystemVars m_ParticleSystemVarsFalling;
  ModdingAPI::Exposed::UnityEngine::ParticleSystem::Particle_array* m_WorkParticlesBlowing;
  ModdingAPI::Exposed::UnityEngine::ParticleSystem::Particle_array* m_WorkParticlesFalling;
  ModdingAPI::Exposed::Unity::Collections::NativeArray_T_ m_WorkParticlesBlowingNativeArray;
  ModdingAPI::Exposed::Unity::Collections::NativeArray_T_ m_WorkParticlesFallingNativeArray;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_JobHandlesList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_JobList;
  float constB;
  float constC;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::WeatherParticleManagerConfiguration config) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*, ModdingAPI::Exposed::WeatherParticleManagerConfiguration)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18D5DD0))(this, config);
  }
  void Destroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18D6A20))(this);
  }
  void InitializeForScene() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18D6C70))(this);
  }
  void StartWorkerThreads() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18D75A0))(this);
  }
  void StopWorkerThreads() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18D8010))(this);
  }
  void UpdateShaderGlobalsForFoliage(ModdingAPI::Exposed::UnityEngine::Vector3 camUp) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18D80A0))(this, camUp);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18D8670))(this);
  }
  void WeatherParticles_MultiThreadedUpdate(ModdingAPI::Exposed::Weather* wc) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*, ModdingAPI::Exposed::Weather*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18D9510))(this, wc);
  }
  void ConfigureParticleSystemVars(ModdingAPI::Exposed::UnityEngine::ParticleSystem* ps, ModdingAPI::Exposed::WeatherParticleManager::ParticleSystemVars psv, float turbulenceScalar) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*, ModdingAPI::Exposed::UnityEngine::ParticleSystem*, ModdingAPI::Exposed::WeatherParticleManager::ParticleSystemVars, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18D9CE0))(this, ps, psv, turbulenceScalar);
  }
  void ParticleUpdate_Job(ModdingAPI::Exposed::System::Collections::Generic::List_T_* pkBounds, ModdingAPI::Exposed::UnityEngine::ParticleSystem* ps, float flurryScalar, float turbulenceScalar, int32_t psi, float lifetimeLimit) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::UnityEngine::ParticleSystem*, float, float, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, pkBounds, ps, flurryScalar, turbulenceScalar, psi, lifetimeLimit);
  }
  void ParticleUpdate_MultiThreaded(ModdingAPI::Exposed::System::Collections::Generic::List_T_* pkBounds, ModdingAPI::Exposed::UnityEngine::ParticleSystem* ps, float flurryScalar, float turbulenceScalar, ModdingAPI::Exposed::UnityEngine::ParticleSystem::Particle_array* workParticles, float lifetimeLimit, bool isFallingSnow, ModdingAPI::Exposed::WeatherParticleManager::ParticleSystemVars psv) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::UnityEngine::ParticleSystem*, float, float, ModdingAPI::Exposed::UnityEngine::ParticleSystem::Particle_array*, float, bool, ModdingAPI::Exposed::WeatherParticleManager::ParticleSystemVars)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18DA440))(this, pkBounds, ps, flurryScalar, turbulenceScalar, workParticles, lifetimeLimit, isFallingSnow, psv);
  }
  void AddTaskWithNoBounds(ModdingAPI::Exposed::UnityEngine::ParticleSystem* ps, ModdingAPI::Exposed::UnityEngine::ParticleSystem::Particle_array* workParticles, bool isFallingSnow) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*, ModdingAPI::Exposed::UnityEngine::ParticleSystem*, ModdingAPI::Exposed::UnityEngine::ParticleSystem::Particle_array*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18DAC00))(this, ps, workParticles, isFallingSnow);
  }
  void AddTasksWithBounds(ModdingAPI::Exposed::System::Collections::Generic::List_T_* pkBounds, ModdingAPI::Exposed::UnityEngine::ParticleSystem* ps, bool isFallingSnow) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::UnityEngine::ParticleSystem*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18DB0D0))(this, pkBounds, ps, isFallingSnow);
  }
  void ScheduleJobWithNoBounds(ModdingAPI::Exposed::UnityEngine::ParticleSystem* ps, bool isFallingSnow) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*, ModdingAPI::Exposed::UnityEngine::ParticleSystem*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18DB5C0))(this, ps, isFallingSnow);
  }
  void ScheduleJobWithBounds(ModdingAPI::Exposed::System::Collections::Generic::List_T_* pkBounds, ModdingAPI::Exposed::UnityEngine::ParticleSystem* ps, bool isFallingSnow) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::UnityEngine::ParticleSystem*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18DBB60))(this, pkBounds, ps, isFallingSnow);
  }
  void WeatherParticleTask(Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18DC210))(this, obj);
  }
  float FastSine(float x) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::WeatherParticleManager*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18DDA10))(this, x);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector2> m_NoiseDir1 = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector2>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_NoiseDir1; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector2> m_NoiseDir2 = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector2>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_NoiseDir2; }
  );
  static inline __CppStaticProperty<bool> s_UseJobSystem = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_UseJobSystem; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3> step = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3>(
   []() { return &GetStaticClassInstance()->pStaticFields->step; }
  );
  static inline __CppStaticProperty<float> stepDot1 = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->stepDot1; }
  );

  // Static methods:
  static inline void UpdateParticleInternal(ModdingAPI::Exposed::UnityEngine::ParticleSystem::Particle particle, ModdingAPI::Exposed::WeatherParticleManager::ParticleSystemVars psv, ModdingAPI::Exposed::WeatherParticleManagerConfiguration config, ModdingAPI::Exposed::WeatherParticleManager::CommonVars common, ModdingAPI::Exposed::UnityEngine::Vector3 p) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::ParticleSystem::Particle, ModdingAPI::Exposed::WeatherParticleManager::ParticleSystemVars, ModdingAPI::Exposed::WeatherParticleManagerConfiguration, ModdingAPI::Exposed::WeatherParticleManager::CommonVars, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18DC3C0))(particle, psv, config, common, p);
  }
  static inline void UpdateParticleNoTurbulenceInternal(ModdingAPI::Exposed::UnityEngine::ParticleSystem::Particle particle, ModdingAPI::Exposed::WeatherParticleManager::ParticleSystemVars psv, ModdingAPI::Exposed::WeatherParticleManagerConfiguration config, ModdingAPI::Exposed::WeatherParticleManager::CommonVars common, ModdingAPI::Exposed::UnityEngine::Vector3 p) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::ParticleSystem::Particle, ModdingAPI::Exposed::WeatherParticleManager::ParticleSystemVars, ModdingAPI::Exposed::WeatherParticleManagerConfiguration, ModdingAPI::Exposed::WeatherParticleManager::CommonVars, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18DD490))(particle, psv, config, common, p);
  }
  static inline float Hash(float p) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18DDB90))(p);
  }
  static inline float Noise3(ModdingAPI::Exposed::UnityEngine::Vector3 x) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18DDCB0))(x);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x18DE0C0))();
  }
};
}