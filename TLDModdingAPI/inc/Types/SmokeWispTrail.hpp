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
#include "ModdingAPI.Exposed.UnityEngine.Vector4.hpp"


namespace ModdingAPI::Exposed {
struct __SmokeWispTrail_Il2CppStaticFields {
};

struct __SmokeWispTrail_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SmokeWispTrail_Il2CppClass {
  Il2CppClass_1 _1;
  __SmokeWispTrail_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SmokeWispTrail_Il2CppVtbl vtbl;
};

class SmokeWispTrail {
public:
  // Il2Cpp fields:
  __SmokeWispTrail_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_Gravity;
  float m_UVOffsetSpeed;
  float m_UVOffsetSeed;
  float m_Alpha1SpeedMultiplier;
  float m_Alpha2SpeedMultiplier;
  float m_DistortionSpeedMultiplier;
  ModdingAPI::Exposed::UnityEngine::TrailRenderer* m_TrailRenderer;
  int32_t m_VertCount;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* m_VertPositions;
  ModdingAPI::Exposed::UnityEngine::Material* m_Material;
  int32_t m_UVOffsetID;
  ModdingAPI::Exposed::UnityEngine::Vector4 m_UVOffsets;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SmokeWispTrail*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C55800))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SmokeWispTrail*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C55960))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SmokeWispTrail*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C55DE0))(this);
  }
};
}