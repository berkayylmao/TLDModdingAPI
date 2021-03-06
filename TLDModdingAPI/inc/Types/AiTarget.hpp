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


namespace ModdingAPI::Exposed {
struct __AiTarget_Il2CppStaticFields {
};

struct __AiTarget_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AiTarget_Il2CppClass {
  Il2CppClass_1 _1;
  __AiTarget_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AiTarget_Il2CppVtbl vtbl;
};

class AiTarget {
public:
  // Il2Cpp fields:
  __AiTarget_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_EyeOffset;
  bool m_InstaKillNPC;
  float m_HP;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Stalker;
  ModdingAPI::Exposed::BaseAi* m_BaseAi;
  ModdingAPI::Exposed::NPC* m_Npc;
  ModdingAPI::Exposed::BaseAi* m_BaseAiTargetingMe;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170E180))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170E340))(this);
  }
  bool IsPlayer() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170E4B0))(this);
  }
  bool InSnowShelter() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170E5A0))(this);
  }
  bool IsWolf() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170E670))(this);
  }
  bool IsBear() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170E770))(this);
  }
  bool IsMoose() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170E870))(this);
  }
  bool IsNpcSurvivor() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170E970))(this);
  }
  bool IsDead() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170EA10))(this);
  }
  bool IsAmbient() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170EBF0))(this);
  }
  bool IsHostileTowards(ModdingAPI::Exposed::BaseAi* compareBaseAi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*, ModdingAPI::Exposed::BaseAi*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170ECD0))(this, compareBaseAi);
  }
  bool IsVulnerable() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170EEF0))(this);
  }
  void ApplyDamage(float damage, int32_t damageSource, System_String* collider) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AiTarget*, float, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170F050))(this, damage, damageSource, collider);
  }
  float Distance(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AiTarget*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170F2C0))(this, pos);
  }
  float Dot(ModdingAPI::Exposed::UnityEngine::Vector3 pos, ModdingAPI::Exposed::UnityEngine::Vector3 forward) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AiTarget*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170F4A0))(this, pos, forward);
  }
  System_String* GetName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170F6D0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetVelocity() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170F850))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetEyePos() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170FA50))(this);
  }
  bool EmitsTrackableSmell() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x170FEC0))(this);
  }
  bool HoldingLitFlare(int32_t flareType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1710010))(this, flareType);
  }
  bool HoldingRaisedSpear() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17102C0))(this);
  }
  bool HoldingLitTorch() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17104F0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }
};
}