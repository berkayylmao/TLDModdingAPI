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
struct __Skill_Archery_Il2CppStaticFields {
  ModdingAPI::Exposed::Skill_ArcherySaveData* m_Skill_ArcherySaveData;
};

struct __Skill_Archery_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_GetTierBenefits;
};

struct __Skill_Archery_Il2CppClass {
  Il2CppClass_1 _1;
  __Skill_Archery_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Skill_Archery_Il2CppVtbl vtbl;
};

class Skill_Archery {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C68B00;
  static inline    __Skill_Archery_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Skill_Archery_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Skill_Archery_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Skill_Archery_Il2CppClass* __pClassInstance;
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
  int32_t Skill_m_CurrentPoints;
  ModdingAPI::Exposed::System::Int32_array* m_CriticalHitChanceIncrease;
  ModdingAPI::Exposed::System::Int32_array* m_DamageIncrease;
  ModdingAPI::Exposed::System::Int32_array* m_ConditionDegradeOnUseReduction;
  ModdingAPI::Exposed::System::Int32_array* m_SwayReduction;
  ModdingAPI::Exposed::System::Int32_array* m_BleedOutTimeReduction;
  int32_t m_LevelWhereCanFireFromCrouch;

  // Member methods:
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Skill_Archery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C4B830))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Skill_Archery*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C4B920))(this, text);
  }
  float GetCriticalHitChanceScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Skill_Archery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C4B9F0))(this);
  }
  float GetArcheryDamageScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Skill_Archery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C4BA50))(this);
  }
  float GetConditionDegradeScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Skill_Archery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C4BAB0))(this);
  }
  float GetSwayScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Skill_Archery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C4BBD0))(this);
  }
  float GetBleedOutTimeScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Skill_Archery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C4BCE0))(this);
  }
  bool CanFireBowWhileCrouched() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Skill_Archery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C4BE00))(this);
  }
  System_String* GetTierBenefits(int32_t index) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Skill_Archery*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C4BE30))(this, index);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Skill_Archery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C4C1B0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::Skill_ArcherySaveData*> m_Skill_ArcherySaveData = __CppStaticProperty<ModdingAPI::Exposed::Skill_ArcherySaveData*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Skill_ArcherySaveData; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C4C2A0))();
  }
};
}