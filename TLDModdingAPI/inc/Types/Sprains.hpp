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
struct __Sprains_Il2CppStaticFields {
};

struct __Sprains_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Sprains_Il2CppClass {
  Il2CppClass_1 _1;
  __Sprains_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Sprains_Il2CppVtbl vtbl;
};

class Sprains {
public:
  // Il2Cpp fields:
  __Sprains_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t m_AnimParameter_ShowSprainWarning;
  bool m_IsDebugging;
  float m_CheckSecondsIntervalWhileSprainRisk;
  float m_ChanceOfWristSprainWhenMoving;
  int32_t m_MinSlopeDegreesForSprain;
  float m_BaseChanceWhenMovingOnSlope;
  float m_ChanceIncreaseEachDegreeAboveMinSlope;
  float m_MinSecondsForSlopeRisk;
  float m_ChanceIncreaseEncumbered;
  float m_ChanceIncreaseExhausted;
  float m_ChanceIncreaseSprinting;
  float m_ChanceReduceWhenCrouchedPercent;
  float m_MinSecondsToShowWarning;
  float m_MinSecondsBeforeHidingWarning;
  ModdingAPI::Exposed::Sprains::SaveDataProxy* m_SaveDataProxy;
  float m_SecondsOnSlope;
  float m_SecondsOffSlope;
  float m_SecondsSprainRisk;
  bool m_HadSprainRiskAffliction;

  // Member methods:
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C5FE60))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C60150))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Sprains*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C60210))(this, text);
  }
  void MaybeSprainWhileMoving() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C602D0))(this);
  }
  void UpdateSprainRiskWarning(float slopeDegrees) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Sprains*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C60B10))(this, slopeDegrees);
  }
  float ComputeSprainChanceForSlope(float slopeDegrees) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Sprains*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C60C00))(this, slopeDegrees);
  }
  float ComputeSprainChanceForEncumberance() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C60C40))(this);
  }
  float ComputeSprainChanceForExhaustion() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C60D00))(this);
  }
  float ModifyChanceForSprinting(float sprainChance) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Sprains*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C60DC0))(this, sprainChance);
  }
  float ModifyChanceForCrouching(float sprainChance) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Sprains*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C60EB0))(this, sprainChance);
  }
  bool AreSprainsFromSlopesBlocked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C61030))(this);
  }
  bool IsSlopeWarningShowing() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C61040))(this);
  }
  void ShowSlopeWarning(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Sprains*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C61160))(this, enable);
  }
  bool RollForSprainWhenMoving(float sprainChance) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Sprains*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C61250))(this, sprainChance);
  }
  void MaybeSprainWrist() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C61400))(this);
  }
  void MaybeSprainAnkle() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C614F0))(this);
  }
  bool HasSprainsRiskAffliction() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C615E0))(this);
  }
  System_String* GetSprainRiskAfflictionReason() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C616D0))(this);
  }
  void UpdateSprainRiskAffliction() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C617D0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Sprains*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C61950))(this);
  }
};
}