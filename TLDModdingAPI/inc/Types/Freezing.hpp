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
struct __Freezing_Il2CppStaticFields {
  bool m_ShowRunningTempBonus;
  ModdingAPI::Exposed::FreezingSaveDataProxy* m_FreezingSaveDataProxy;
};

struct __Freezing_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Freezing_Il2CppClass {
  Il2CppClass_1 _1;
  __Freezing_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Freezing_Il2CppVtbl vtbl;
};

class Freezing {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C685A8;
  static inline    __Freezing_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Freezing_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Freezing_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Freezing_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_CurrentFreezingPerHour;
  float m_CurrentWarmingPerHour;
  float m_CurrentFreezing;
  float m_MaxFreezing;
  float m_TemperatureFreezingStarts;
  float m_FreezingIncreasePerHourPerDegreeCelsius;
  float m_WarmingIncreasePerHourPerDegreeCelsius;
  float m_CalorieBurnMultiplier;
  float m_SlightlyColdThreshold;
  float m_ColdThreshold;
  float m_VeryColdThreshold;
  float m_FreezingThreshold;
  float m_MaxTemperatureBonusFromRunning;
  float m_NumGameMinutesToRampRunningTemperatureBonus;
  float m_NumGameMinutesToHoldRunningTemperatureBonus;
  float m_NumGameMinutesToRampDownRunningTemperatureBonus;
  System_String* m_SlightlyColdVoiceOver;
  System_String* m_ColdVoiceOver;
  System_String* m_VeryColdVoiceOver;
  System_String* m_FreezingVoiceOver;
  System_String* m_FreezingTeethChatter;
  float m_MinSecondsBetweenVoiceOverVariations;
  float m_TimeToDisplayFreezingWhenChanged;
  float m_PercentModifierPerWetClothingItem;
  int32_t m_FreezingLevelForPreviousVoiceOver;
  float m_NumSecondsSinceLastVoiceOver;
  float m_TimeDisableFreezingOnHUD;
  int32_t m_FreezingLevelLastStatusChange;
  float m_TemperatureBonusFromRunning;
  bool m_FreezingInLog;
  float m_HoldRunningTemperatureBonusMinutes;
  float m_HoursInRangeOfFire;
  bool m_StartHasBeenCalled;
  bool m_SuppressVoiceOver;
  uint32_t m_FreezingTeethChatterSoundId;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F10B0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F1280))(this);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F1440))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F15A0))(this, text);
  }
  System_String* GetFreezingStateString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F16A0))(this);
  }
  float GetTemperatureBonusFromRunning() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F1780))(this);
  }
  void AddFreezing(float freezeValue) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F1790))(this, freezeValue);
  }
  bool IsFreezing() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F18B0))(this);
  }
  float CalculateBodyTemperature() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F18C0))(this);
  }
  void SetSuppressVoiceOver(bool suppress) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F1AF0))(this, suppress);
  }
  void MaybePlayPlayerFreezingTeethChatter() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F1B00))(this);
  }
  void MaybeCancelPlayerFreezingTeethChatter() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F1BE0))(this);
  }
  void UpdateFreezingStatus() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F1CE0))(this);
  }
  bool ShouldPlayFreezingVoiceOver() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F23C0))(this);
  }
  void MaybePlayPlayerFreezingVoiceOver() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F24E0))(this);
  }
  int32_t GetFreezingLevel() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F27C0))(this);
  }
  void UpdateBodyTempStats(float bodyTemp) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F2800))(this, bodyTemp);
  }
  void DisplayFreezingOnHUDForTime(float seconds) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F28D0))(this, seconds);
  }
  System_String* GetFreezingTextForHud() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F2990))(this);
  }
  void MaybeUpdateFreezingStatusLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F2B10))(this);
  }
  void UpdateFreezingStatusOnHUD() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F2F80))(this);
  }
  void MaybeUpdateFreezingStatusInLog() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F3810))(this);
  }
  void UpdateHoursWithinRangeOfFire() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F3990))(this);
  }
  float GetHoursWithinRangeOfFire() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F3BB0))(this);
  }
  void UpdateTemperatureBonusFromRunning() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F3BC0))(this);
  }
  void MaybeAdjustFreezingDueToNearbyFire() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F3EB0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Freezing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> m_ShowRunningTempBonus = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ShowRunningTempBonus; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::FreezingSaveDataProxy*> m_FreezingSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::FreezingSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_FreezingSaveDataProxy; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F4150))();
  }
};
}