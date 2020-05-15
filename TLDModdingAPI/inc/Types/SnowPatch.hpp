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
#include "ModdingAPI.Exposed.UnityEngine.Bounds.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.SnowImprint.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __SnowPatch_Il2CppStaticFields {
  int32_t m_NextPatchId;
  int32_t m_MaxImprintsPerPatch;
};

struct __SnowPatch_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SnowPatch_Il2CppClass {
  Il2CppClass_1 _1;
  __SnowPatch_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SnowPatch_Il2CppVtbl vtbl;
};

class SnowPatch {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8E9D8;
  static inline    __SnowPatch_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SnowPatch_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SnowPatch_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SnowPatch_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t m_Id;
  ModdingAPI::Exposed::UnityEngine::Bounds m_Bounds;
  ModdingAPI::Exposed::UnityEngine::Bounds m_BoundsQ0;
  ModdingAPI::Exposed::UnityEngine::Bounds m_BoundsQ1;
  ModdingAPI::Exposed::UnityEngine::Bounds m_BoundsQ2;
  ModdingAPI::Exposed::UnityEngine::Bounds m_BoundsQ3;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* m_HermiteCoefficients;
  ModdingAPI::Exposed::SnowImprintExpanded_array* m_Imprints;
  int32_t m_NumImprints;
  int32_t m_MaxImprints;
  int32_t m_NextImprint;
  int32_t m_RefCount;
  int32_t m_QuadrantUsage;
  int32_t m_CaptureTick;
  float m_CaptureWeight;
  float m_DeviationWeight;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowPatch*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CE2AC0))(this);
  }
  void Initialize(ModdingAPI::Exposed::UnityEngine::Vector3 centrePos, float boundsSize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowPatch*, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CE2B80))(this, centrePos, boundsSize);
  }
  void AddReference() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowPatch*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CE3510))(this);
  }
  bool RemoveReference() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::SnowPatch*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CE3520))(this);
  }
  void OnRenderCapture(int32_t captureTick, ModdingAPI::Exposed::UnityEngine::Camera* cam) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowPatch*, int32_t, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CE3530))(this, captureTick, cam);
  }
  void Hide() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowPatch*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CE35E0))(this);
  }
  float GetPatchHeightAtPosition(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::SnowPatch*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CE3780))(this, pos);
  }
  float GetPatchHeightTangentAtPosition(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::SnowPatch*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CE3920))(this, pos);
  }
  int32_t AddImprint(ModdingAPI::Exposed::SnowImprint imprint, ModdingAPI::Exposed::UnityEngine::Bounds imprintBounds, int32_t typeMask) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::SnowPatch*, ModdingAPI::Exposed::SnowImprint, ModdingAPI::Exposed::UnityEngine::Bounds, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CE3AC0))(this, imprint, imprintBounds, typeMask);
  }

  // Static fields:
  static inline __CppStaticProperty<int32_t> m_NextPatchId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_NextPatchId; }
  );
  static inline __CppStaticProperty<int32_t> m_MaxImprintsPerPatch = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_MaxImprintsPerPatch; }
  );

  // Static methods:
  static inline void GeneratePatchCoefficients(ModdingAPI::Exposed::UnityEngine::Vector3 minPos, ModdingAPI::Exposed::UnityEngine::Vector3 maxPos, ModdingAPI::Exposed::UnityEngine::Vector3_array* hermiteCoefficients, float deviationWeight) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3_array*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CE35F0))(minPos, maxPos, hermiteCoefficients, deviationWeight);
  }
};
}