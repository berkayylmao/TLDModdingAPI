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
struct __Hunger_Il2CppStaticFields {
  ModdingAPI::Exposed::HungerSaveDataProxy* m_HungerSaveDataProxy;
};

struct __Hunger_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Hunger_Il2CppClass {
  Il2CppClass_1 _1;
  __Hunger_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Hunger_Il2CppVtbl vtbl;
};

class Hunger {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C20120;
  static inline    __Hunger_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Hunger_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Hunger_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Hunger_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_CurrentReserveCalories;
  float m_CaloriesEatenToday;
  float m_ReserveCaloriesAccumulator;
  float m_SlightlyHungryCalorieThreshold;
  float m_HungryCalorieThreshold;
  float m_VeryHungryCalorieThreshold;
  float m_StarvingCalorieThreshold;
  System_String* m_SlightlyHungryVoiceOver;
  System_String* m_HungryVoiceOver;
  System_String* m_VeryHungryVoiceOver;
  System_String* m_StarvingVoiceOver;
  float m_MinSecondsBetweenVoiceOverVariations;
  float m_TimeToDisplayCaloriesWhenChanged;
  float m_TimeToDisplayHungerWhenChanged;
  float m_HoursStarvingBeforeFatiguePenalty;
  float m_FatiguePenaltyPerHourIncrease;
  float m_FatiguePenaltyPerHourDecrease;
  float m_MaxFatiguePenalty;
  float m_HungerStartsAtCalories;
  float m_MaxReserveCalories;
  float m_MaxDeficitCalories;
  float m_StartingReserveCalories;
  float m_CalorieBurnPerHourSleeping;
  float m_CalorieBurnPerHourStanding;
  float m_CalorieBurnPerHourWalking;
  float m_CalorieBurnPerHourSprinting;
  float m_CalorieBurnPerHourBreakingDown;
  float m_CalorieBurnPerHourBuildingSnowShelter;
  float m_CalorieBurnPerHourRepairingSnowShelter;
  float m_CalorieBurnPerHourDismantlingSnowShelter;
  float m_CalorieBurnPerHourHarvestingCarcass;
  float m_CalorieBurnPerHourClimbing;
  float m_CurrentCalorieBurnPerHour;
  int32_t m_HungerLevelForPreviousVoiceOver;
  float m_NumSecondsSinceLastVoiceOver;
  ModdingAPI::Exposed::FoodItem* m_FoodItemProvidingCalories;
  float m_CaloriesToAddOverTime;
  float m_CaloriesLeftToAdd;
  float m_CalroiesToAddOverTimeDuration;
  float m_TimeDisableCaloriesOnHUD;
  float m_TimeDisableHungerOnHUD;
  int32_t m_HungerLevelLastStatusChange;
  float m_NumHoursStarving;
  float m_FatiguePenalty;
  bool m_StarvingInLog;
  bool m_StartHasBeenCalled;
  bool m_SuppressVoiceOver;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA7640))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA7940))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA7B80))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA7CF0))(this, text);
  }
  void AddReserveCalories(float calories) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA7E10))(this, calories);
  }
  void RemoveReserveCalories(float calories) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8040))(this, calories);
  }
  void AddReserveCaloriesOverTime(ModdingAPI::Exposed::FoodItem* fi, float calories, float timeSeconds) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*, ModdingAPI::Exposed::FoodItem*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8240))(this, fi, calories, timeSeconds);
  }
  void ResetFoodItemProvingCalories() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8270))(this);
  }
  bool IsEatingInProgress() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8280))(this);
  }
  void ClearAddReserveCaloriesOverTime() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8330))(this);
  }
  bool IsAddingCaloriesOverTime() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8340))(this);
  }
  bool ItemBeingEatenAffectsThirst() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8360))(this);
  }
  ModdingAPI::Exposed::FoodItem* GetItemBeingEaten() {
    return reinterpret_cast<ModdingAPI::Exposed::FoodItem*(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F1090))(this);
  }
  float GetCaloriesToAddOverTime() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8460))(this);
  }
  bool IsStarving() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8470))(this);
  }
  void SetCalorieBurnPerHour(float burnRate) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEFB0))(this, burnRate);
  }
  float GetCalorieReserves() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x88C900))(this);
  }
  float GetCurrentCalorieBurnPerHour() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8480))(this);
  }
  void DisplayCaloriesOnHUDForTime(float seconds) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8490))(this, seconds);
  }
  float GetFatiguePenalty() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8550))(this);
  }
  void SetSuppressVoiceOver(bool suppress) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8560))(this, suppress);
  }
  void UpdateCalorieReserves() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8570))(this);
  }
  bool ShouldPlayHungerVoiceOver() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8950))(this);
  }
  void MaybePlayPlayerHungryVoiceOver() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8A80))(this);
  }
  int32_t GetHungerLevel() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8D80))(this);
  }
  void UpdateCaloriesOnHUD() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8DD0))(this);
  }
  void DisplayHungerOnHUDForTime(float seconds) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA9950))(this, seconds);
  }
  System_String* GetHungerTextForHud() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA9A10))(this);
  }
  void MaybeUpdateStarvingStatusLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA9BA0))(this);
  }
  System_String* GetHungerIconName(int32_t currHungerLevel) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Hunger*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AAA120))(this, currHungerLevel);
  }
  void UpdateStarvingStatusOnHUD() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AAA2A0))(this);
  }
  float CalculateNextCaloriesThresholdForDisplayOnHud() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AAAB30))(this);
  }
  void MaybeUpdateStarvingStatusInLog() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AAAC30))(this);
  }
  void UpdateFatiguePenalty() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AAADB0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Hunger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::HungerSaveDataProxy*> m_HungerSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::HungerSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_HungerSaveDataProxy; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AAB040))();
  }
};
}