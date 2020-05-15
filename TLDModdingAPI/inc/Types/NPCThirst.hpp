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
struct __NPCThirst_Il2CppStaticFields {
};

struct __NPCThirst_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __NPCThirst_Il2CppClass {
  Il2CppClass_1 _1;
  __NPCThirst_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NPCThirst_Il2CppVtbl vtbl;
};

class NPCThirst {
public:
  // Il2Cpp fields:
  __NPCThirst_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_FullThirstAsLiters;
  float m_InitialThirstPercentage;
  float m_ThirstIncreasePerHour;
  float m_DehydrationRiskThresholdPercentage;
  float m_MinimumWaterFromPlayerLiters;
  bool m_AlwaysHydrated;
  ModdingAPI::Exposed::NPC* m_NPC;
  float m_CurrentThirstPercentage;
  bool m_HasInitialized;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCThirst*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E868C0))(this);
  }
  void DoUpdate(float deltaTODHours) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCThirst*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E868E0))(this, deltaTODHours);
  }
  float GeAfflictionDehydrationRequiredLiters() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::NPCThirst*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E86AC0))(this);
  }
  float GetHealthyDelta(float delta) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::NPCThirst*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E86AE0))(this, delta);
  }
  bool IsDehydrated() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NPCThirst*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E86BD0))(this);
  }
  bool HasDehydrationRisk() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NPCThirst*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E86BE0))(this);
  }
  void ApplyTODHours(float delta) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCThirst*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E86BF0))(this, delta);
  }
  void Deserialize(System_String* serialized) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCThirst*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E86D40))(this, serialized);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NPCThirst*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E86E10))(this);
  }
  void StartDehydrationAffliction() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCThirst*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E86F80))(this);
  }
  void StartDehydrationRiskAffliction() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCThirst*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E87080))(this);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCThirst*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E87140))(this);
  }
  void AddWaterLiters(float waterAddedLiters) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCThirst*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E87150))(this, waterAddedLiters);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPCThirst*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E872A0))(this);
  }
};
}