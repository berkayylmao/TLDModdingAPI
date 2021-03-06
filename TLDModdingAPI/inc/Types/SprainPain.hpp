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
#include "ModdingAPI.Exposed.SprainPain.Instance.hpp"


namespace ModdingAPI::Exposed {
struct __SprainPain_Il2CppStaticFields {
};

struct __SprainPain_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SprainPain_Il2CppClass {
  Il2CppClass_1 _1;
  __SprainPain_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SprainPain_Il2CppVtbl vtbl;
};

class SprainPain {
public:
  // Il2Cpp fields:
  __SprainPain_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_AfflictionDurationHours;
  float m_TreatmentPercent;
  float m_PulseFxStartDelaySeconds;
  float m_PulseFxFrequencySeconds;
  float m_PulseFxIntensity;
  System_String* m_PulseFxWwiseRtpcName;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ActiveInstances;
  ModdingAPI::Exposed::SprainPain::SaveDataProxy* m_SaveDataProxy;
  float m_SecondsSinceLastPulseFx;

  // Member methods:
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SprainPain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D09BC0))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::SprainPain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0A110))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SprainPain*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0A3F0))(this, text);
  }
  bool HasSprainPain() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::SprainPain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0A660))(this);
  }
  int32_t GetAfflictionsCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::SprainPain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0A6F0))(this);
  }
  bool RequiresPainKiller() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::SprainPain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0A780))(this);
  }
  void ApplyAffliction(int32_t location, System_String* cause, int32_t opts) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SprainPain*, int32_t, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0A810))(this, location, cause, opts);
  }
  void CureAffliction(ModdingAPI::Exposed::SprainPain::Instance inst) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SprainPain*, ModdingAPI::Exposed::SprainPain::Instance)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0AC10))(this, inst);
  }
  void Cure() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SprainPain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0ADA0))(this);
  }
  float GetRemainingHours(int32_t index) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::SprainPain*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0AEA0))(this, index);
  }
  void TakePainKillers(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SprainPain*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0AFB0))(this, index);
  }
  System_String* GetCauseLocId(int32_t index) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::SprainPain*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0B160))(this, index);
  }
  int32_t GetLocation(int32_t index) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::SprainPain*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0B220))(this, index);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SprainPain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0B2D0))(this);
  }
};
}