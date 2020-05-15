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
struct __FirePoint_Il2CppStaticFields {
};

struct __FirePoint_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __FirePoint_Il2CppClass {
  Il2CppClass_1 _1;
  __FirePoint_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __FirePoint_Il2CppVtbl vtbl;
};

class FirePoint {
public:
  // Il2Cpp fields:
  __FirePoint_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_Intensity;
  bool m_LightSelf;
  float m_LightRange;
  float m_LightMinimum;
  float m_LightMaximum;
  float m_LightIntervalSeconds;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SmokeParticles;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SparkParticles;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_SpriteParticles;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Lights;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ChildLightRandomIntensityList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ChildLightList;
  ModdingAPI::Exposed::UnityEngine::ParticleSystem* m_SpriteParticlesPS;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FirePoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1842A50))(this);
  }
  void StartFire() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FirePoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1842DD0))(this);
  }
  void SetEmissionRate(ModdingAPI::Exposed::UnityEngine::GameObject* ps, float newRate) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FirePoint*, ModdingAPI::Exposed::UnityEngine::GameObject*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1843010))(this, ps, newRate);
  }
  void SetSize(ModdingAPI::Exposed::UnityEngine::GameObject* ps, float newSize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FirePoint*, ModdingAPI::Exposed::UnityEngine::GameObject*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1843190))(this, ps, newSize);
  }
  void UpdateRatesAndSizes() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FirePoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18432D0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FirePoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1843700))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FirePoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18437C0))(this);
  }
};
}