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
struct __ExperienceModeManager_Il2CppStaticFields {
  ModdingAPI::Exposed::ExperienceModeManagerSaveDataProxy* m_ExperienceModeManagerSaveDataProxy;
  int32_t s_CurrentModeType;
  bool s_IsCustomBasedMode;
};

struct __ExperienceModeManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ExperienceModeManager_Il2CppClass {
  Il2CppClass_1 _1;
  __ExperienceModeManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ExperienceModeManager_Il2CppVtbl vtbl;
};

class ExperienceModeManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C83B20;
  static inline    __ExperienceModeManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ExperienceModeManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ExperienceModeManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ExperienceModeManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ExperienceMode_array* m_ModeLookupTable;
  ModdingAPI::Exposed::CustomExperienceModeManager* m_CustomModeManager;
  bool m_HasInitializedSetupLookTable;
  ModdingAPI::Exposed::ExperienceMode_array* m_ExperienceModeDefinitionList;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1915B20))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1915C30))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1915D50))(this, text);
  }
  int32_t GetCurrentExperienceModeType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1915EA0))(this);
  }
  bool IsCurrentEpisodeExperienceMode() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1915F40))(this);
  }
  void SetExperienceModeType(int32_t modeType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1916040))(this, modeType);
  }
  bool IsChallengeActive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1916210))(this);
  }
  ModdingAPI::Exposed::ExperienceMode* GetCurrentExperienceMode() {
    return reinterpret_cast<ModdingAPI::Exposed::ExperienceMode*(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19163D0))(this);
  }
  ModdingAPI::Exposed::ExperienceMode* GetSpecificExperienceMode(int32_t modeType) {
    return reinterpret_cast<ModdingAPI::Exposed::ExperienceMode*(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1916550))(this, modeType);
  }
  System_String* GetCurrentCustomModeString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19166C0))(this);
  }
  bool SetCurrentCustomModeString(System_String* inputString) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1916790))(this, inputString);
  }
  void SetupLookupTable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1916870))(this);
  }
  float GetDecayScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1916A80))(this);
  }
  float GetCalorieBurnScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1916B50))(this);
  }
  float GetThirstRateScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1916C20))(this);
  }
  float GetFreezingRateScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1916CF0))(this);
  }
  float GetFatigueRateScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1916DC0))(this);
  }
  float GetConditonRecoveryFromRestScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1916E90))(this);
  }
  float GetConditonRecoveryWhileAwakeScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1916F60))(this);
  }
  float GetWeatherDurationScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917030))(this);
  }
  float GetChanceOfBlizzardScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917100))(this);
  }
  float GetTimeOfDayScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19171D0))(this);
  }
  float GetSpawnRegionChanceActiveScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19172A0))(this);
  }
  float GetGearSpawnChanceScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917370))(this);
  }
  int32_t GetReduceMaxItemsInContainer() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917440))(this);
  }
  int32_t GetChanceForEmptyContainer() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917500))(this);
  }
  float GetClosestSpawnDistanceAfterTransitionScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19175C0))(this);
  }
  float GetSmellRangeScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917690))(this);
  }
  float GetStruggleTapStrenthScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917760))(this);
  }
  float GetStrugglePlayerDamageReceivedIntervalScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917830))(this);
  }
  float GetStrugglePlayerClothingDamageScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917900))(this);
  }
  float GetStrugglePlayerDamageReceivedScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19179D0))(this);
  }
  float GetStugglePlayerPercentLossFromBearScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917AA0))(this);
  }
  float GetOutdoorTempDropCelcius(float numDays) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917B70))(this, numDays);
  }
  float GetRespawnHoursScale(float numDays) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917D10))(this, numDays);
  }
  float GetFishCatchTimeScale(float numDays) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1917EB0))(this, numDays);
  }
  float GetRadialRespawnTimeScale(float numDays) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918050))(this, numDays);
  }
  float GetNumHoursWarmForHypothermiaCureScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19181F0))(this);
  }
  bool GetWildlifeNotAttackUnprovoked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19182C0))(this);
  }
  bool GetWildlifeInterruptRest() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918490))(this);
  }
  bool GetWeatherStartForceClear() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918560))(this);
  }
  bool GetWeatherWindForceCalm() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918620))(this);
  }
  void UpdateCustomMode(ModdingAPI::Exposed::ExperienceMode* customMode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*, ModdingAPI::Exposed::ExperienceMode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19186E0))(this, customMode);
  }
  ModdingAPI::Exposed::CustomExperienceMode* GetCustomMode() {
    return reinterpret_cast<ModdingAPI::Exposed::CustomExperienceMode*(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918760))(this);
  }
  bool InCustomMode() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19188D0))(this);
  }
  float GetProportionalReduceMaxItems() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19189F0))(this);
  }
  float GetCustomIndoorStartChance() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9AA1F0))(this);
  }
  float GetCustomAuroraChanceModifier() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918AC0))(this);
  }
  float GetCustomWindSpeedModifier() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918B60))(this);
  }
  float GetCustomWindChangeFrequencyModifier() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918C00))(this);
  }
  float GetCustomBloodScentModifier() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918CA0))(this);
  }
  float GetCustomWildlifeDetectionModifier() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918D40))(this);
  }
  float GetCustomWolfFleeModifier(int32_t wolfType) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918DE0))(this, wolfType);
  }
  float GetCustomPlantSpawnModifier() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918F10))(this);
  }
  float GetCustomWildlifeRespawnTimeModifier() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1918FB0))(this);
  }
  int32_t GetCustomLootXPType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1919050))(this);
  }
  void RunInitCommandStory() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19190B0))(this);
  }
  ModdingAPI::Exposed::ExperienceMode* GetExperienceModeDefinition(int32_t xpModeType) {
    return reinterpret_cast<ModdingAPI::Exposed::ExperienceMode*(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19191F0))(this, xpModeType);
  }
  bool GetStandardModeWildlifeNotAttackUnprovoked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1919260))(this);
  }
  float GetWolfFleeModifier(int32_t tunable) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1919320))(this, tunable);
  }
  float GetCustomRegularWolfFleeModifier() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19193A0))(this);
  }
  float GetCustomTimberWolfFleeModifier() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19193E0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ExperienceModeManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19194C0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::ExperienceModeManagerSaveDataProxy*> m_ExperienceModeManagerSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::ExperienceModeManagerSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ExperienceModeManagerSaveDataProxy; }
  );
  static inline __CppStaticProperty<int32_t> s_CurrentModeType = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_CurrentModeType; }
  );
  static inline __CppStaticProperty<bool> s_IsCustomBasedMode = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_IsCustomBasedMode; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1919550))();
  }
};
}