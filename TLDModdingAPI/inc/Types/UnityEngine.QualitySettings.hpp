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


namespace ModdingAPI::Exposed::UnityEngine {
struct __QualitySettings_Il2CppStaticFields {
};

struct __QualitySettings_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __QualitySettings_Il2CppClass {
  Il2CppClass_1 _1;
  __QualitySettings_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __QualitySettings_Il2CppVtbl vtbl;
};

class QualitySettings {
public:
  // Il2Cpp fields:
  __QualitySettings_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Static methods:
  static inline int32_t get_pixelLightCount() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1063630))();
  }
  static inline void set_pixelLightCount(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1063680))(value);
  }
  static inline void set_shadows(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099860))(value);
  }
  static inline void set_shadowProjection(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10998B0))(value);
  }
  static inline void set_shadowCascades(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099900))(value);
  }
  static inline void set_shadowDistance(float value) {
    reinterpret_cast<void(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099950))(value);
  }
  static inline void set_shadowResolution(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10999B0))(value);
  }
  static inline void set_shadowNearPlaneOffset(float value) {
    reinterpret_cast<void(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099A00))(value);
  }
  static inline void set_lodBias(float value) {
    reinterpret_cast<void(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099A60))(value);
  }
  static inline void set_anisotropicFiltering(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099AC0))(value);
  }
  static inline void set_masterTextureLimit(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099B10))(value);
  }
  static inline void set_maximumLODLevel(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099B60))(value);
  }
  static inline void set_particleRaycastBudget(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099BB0))(value);
  }
  static inline void set_softParticles(bool value) {
    reinterpret_cast<void(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099C00))(value);
  }
  static inline void set_softVegetation(bool value) {
    reinterpret_cast<void(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099C50))(value);
  }
  static inline int32_t get_vSyncCount() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099CA0))();
  }
  static inline void set_vSyncCount(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099CF0))(value);
  }
  static inline void set_antiAliasing(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099D40))(value);
  }
  static inline void set_asyncUploadTimeSlice(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099D90))(value);
  }
  static inline void set_asyncUploadBufferSize(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099DE0))(value);
  }
  static inline void set_realtimeReflectionProbes(bool value) {
    reinterpret_cast<void(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099E30))(value);
  }
  static inline void set_billboardsFaceCameraPosition(bool value) {
    reinterpret_cast<void(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099E80))(value);
  }
  static inline void set_blendWeights(int32_t value) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099ED0))(value);
  }
  static inline int32_t get_activeColorSpace() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099F20))();
  }
};
}