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
struct __Skill_Il2CppStaticFields {
};

struct __Skill_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_GetTierBenefits;
};

struct __Skill_Il2CppClass {
  Il2CppClass_1 _1;
  __Skill_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Skill_Il2CppVtbl vtbl;
};

class Skill {
public:
  // Il2Cpp fields:
  __Skill_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDisplayName;
  int32_t m_SkillType;
  ModdingAPI::Exposed::System::Int32_array* m_TierPoints;
  ModdingAPI::Exposed::LocalizedString_array* m_TierLocalizedBenefits;
  ModdingAPI::Exposed::LocalizedString_array* m_TierLocalizedDescriptions;
  System_String* m_SkillImage;
  System_String* m_SkillIcon;
  System_String* m_SkillIconBackground;
  int32_t m_CurrentPoints;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Skill*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49060))(this);
  }
  System_String* get_m_DisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Skill*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35A0))(this);
  }
  int32_t GetTierPoints(int32_t index) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Skill*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49120))(this, index);
  }
  System_String* GetCurrentTierName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Skill*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49170))(this);
  }
  System_String* GetCurrentTierDescription() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Skill*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49280))(this);
  }
  System_String* GetCurrentTierBenefits() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Skill*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C492F0))(this);
  }
  System_String* GetTierDescription(int32_t index) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Skill*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49320))(this, index);
  }
  System_String* GetTierBenefits(int32_t index) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Skill*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49380))(this, index);
  }
  int32_t GetPoints() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Skill*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E8B70))(this);
  }
  void SetPoints(int32_t points, int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Skill*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C493E0))(this, points, mode);
  }
  void SetTier(int32_t tier, int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Skill*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49510))(this, tier, mode);
  }
  float GetPointsAsPercent() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Skill*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49550))(this);
  }
  float GetPointsAsNormalizedValue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Skill*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49650))(this);
  }
  float GetProgressToNextLevelAsNormalizedValue(int32_t addPoints) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Skill*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49750))(this, addPoints);
  }
  int32_t GetMaxPoints() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Skill*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49A90))(this);
  }
  void IncrementPoints(int32_t increase, int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Skill*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49AD0))(this, increase, mode);
  }
  int32_t GetCurrentTierNumber() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Skill*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49C00))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Skill*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C49C90))(this);
  }
};
}