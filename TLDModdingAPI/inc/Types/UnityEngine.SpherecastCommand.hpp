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
#include "ModdingAPI.Exposed.Unity.Jobs.JobHandle.hpp"
#include "ModdingAPI.Exposed.Unity.Collections.NativeArray_T_.hpp"
#include "ModdingAPI.Exposed.Unity.Jobs.LowLevel.Unsafe.JobsUtility.JobScheduleParameters.hpp"

namespace ModdingAPI::Exposed::UnityEngine {
struct __SpherecastCommand_Il2CppObject {
  ModdingAPI::Exposed::UnityEngine::Vector3 _origin_k__BackingField;
  float _radius_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Vector3 _direction_k__BackingField;
  float _distance_k__BackingField;
  int32_t _layerMask_k__BackingField;
  int32_t _maxHits_k__BackingField;
};
struct __SpherecastCommand_Il2CppStaticFields {
};

struct __SpherecastCommand_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SpherecastCommand_Il2CppClass {
  Il2CppClass_1 _1;
  __SpherecastCommand_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SpherecastCommand_Il2CppVtbl vtbl;
};

class SpherecastCommand {
public:
  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Vector3 _origin_k__BackingField;
  float _radius_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Vector3 _direction_k__BackingField;
  float _distance_k__BackingField;
  int32_t _layerMask_k__BackingField;
  int32_t _maxHits_k__BackingField;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Vector3 origin, float radius, ModdingAPI::Exposed::UnityEngine::Vector3 direction, float distance, int32_t layerMask) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*, ModdingAPI::Exposed::UnityEngine::Vector3, float, ModdingAPI::Exposed::UnityEngine::Vector3, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x53BE0))(this, origin, radius, direction, distance, layerMask);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_origin() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B560))(this);
  }
  void set_origin(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE540))(this, value);
  }
  float get_radius() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x27FB0))(this);
  }
  void set_radius(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6E20))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_direction() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x53C20))(this);
  }
  void set_direction(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6E60))(this, value);
  }
  float get_distance() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x53B60))(this);
  }
  void set_distance(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF2C0))(this, value);
  }
  int32_t get_layerMask() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x46100))(this);
  }
  void set_layerMask(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A6B0))(this, value);
  }
  int32_t get_maxHits() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x509A0))(this);
  }
  void set_maxHits(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::SpherecastCommand*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A6C0))(this, value);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::Unity::Jobs::JobHandle ScheduleBatch(ModdingAPI::Exposed::Unity::Collections::NativeArray_T_ commands, ModdingAPI::Exposed::Unity::Collections::NativeArray_T_ results, int32_t minCommandsPerJob, ModdingAPI::Exposed::Unity::Jobs::JobHandle dependsOn) {
    return reinterpret_cast<ModdingAPI::Exposed::Unity::Jobs::JobHandle(__fastcall*)(ModdingAPI::Exposed::Unity::Collections::NativeArray_T_, ModdingAPI::Exposed::Unity::Collections::NativeArray_T_, int32_t, ModdingAPI::Exposed::Unity::Jobs::JobHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153A360))(commands, results, minCommandsPerJob, dependsOn);
  }
  static inline ModdingAPI::Exposed::Unity::Jobs::JobHandle ScheduleSpherecastBatch(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters parameters, void* commands, int32_t commandLen, void* result, int32_t resultLen, int32_t minCommandsPerJob) {
    return reinterpret_cast<ModdingAPI::Exposed::Unity::Jobs::JobHandle(__fastcall*)(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters, void*, int32_t, void*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153A500))(parameters, commands, commandLen, result, resultLen, minCommandsPerJob);
  }
  static inline void ScheduleSpherecastBatch_Injected(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters parameters, void* commands, int32_t commandLen, void* result, int32_t resultLen, int32_t minCommandsPerJob, ModdingAPI::Exposed::Unity::Jobs::JobHandle ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters, void*, int32_t, void*, int32_t, int32_t, ModdingAPI::Exposed::Unity::Jobs::JobHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153A5C0))(parameters, commands, commandLen, result, resultLen, minCommandsPerJob, ret);
  }

};
}