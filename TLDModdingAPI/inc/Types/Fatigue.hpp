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
#include "ModdingAPI.Exposed.HeavyBreathingLevels.hpp"


namespace ModdingAPI::Exposed {
struct __Fatigue_Il2CppStaticFields {
  ModdingAPI::Exposed::FatigueSaveDataProxy* m_FatigueSaveDataProxy;
};

struct __Fatigue_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Fatigue_Il2CppClass {
  Il2CppClass_1 _1;
  __Fatigue_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Fatigue_Il2CppVtbl vtbl;
};

class Fatigue {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C89FF0;
  static inline    __Fatigue_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Fatigue_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Fatigue_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Fatigue_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_CurrentFatigueBurnPerHour;
  float m_CurrentFatigue;
  float m_MaxFatigue;
  float m_FatigueIncreasePerHourStanding;
  float m_FatigueIncreasePerHourWalking;
  float m_FatigueIncreasePerHourSprintingMin;
  float m_FatigueIncreasePerHourSprintingMax;
  float m_SecondsSprintingForMaxFatigueIncrease;
  float m_FullBackPackScaleFactor;
  float m_RestedThreshold;
  float m_SlightlyTiredThreshold;
  float m_TiredThreshold;
  float m_VeryTiredThreshold;
  float m_ExhaustedThreshold;
  System_String* m_SlightlyTiredVoiceOver;
  System_String* m_TiredVoiceOver;
  System_String* m_VeryTiredVoiceOver;
  System_String* m_ExhaustedVoiceOver;
  float m_MinSecondsBetweenVoiceOverVariations;
  float m_TimeToDisplayFatigueWhenChanged;
  int32_t m_FatigueLevelForPreviousVoiceOver;
  float m_NumSecondsSinceLastVoiceOver;
  float m_TimeDisableFatigueOnHUD;
  int32_t m_FatigueLevelLastStatusChange;
  bool m_ExhaustedInLog;
  bool m_StartHasBeenCalled;
  bool m_SuppressVoiceOver;
  float m_TotalFatigueBurnPerHour;
  float m_FatigueValueLastFrame;
  float m_PauseBreathingAfterSpeech;
  float m_SuppressVOAfterRopeExertionSeconds;
  ModdingAPI::Exposed::HeavyBreathingLevels m_MinSecondsPerState;
  ModdingAPI::Exposed::HeavyBreathingLevels m_GeneralBreathThresholds;
  ModdingAPI::Exposed::HeavyBreathingLevels m_RopeClimbBreathThresholds;
  float m_NormalizedCriticalHealth;
  float m_NormalizedSeriousHealth;
  int32_t m_InclineMinState;
  float m_InclineBreathingStartDelay;
  float m_InclineAngle;
  int32_t m_SprintDisabledState;
  bool m_EnableCatchBreath;
  float m_StaminaLevelForRecovery;
  int32_t m_HeavyBreathingState;
  float m_SecondsInCurrentState;
  float m_SecondsOnIncline;
  bool m_SuppressCatchBreathAudio;
  bool m_SuppressHeavyBreathing;
  bool m_StaminaWasBelowLevelForRecovery;
  float m_RopeActivitySpeechSuppressionTime;
  float m_LastBreathLevelRTPCSent;
  float m_LastInclineAngle;
  float m_SinInclineAngle;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1932AA0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1932CA0))(this);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1932E50))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1932FA0))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19330F0))(this, text);
  }
  System_String* GetFatigueStateString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19331E0))(this);
  }
  float GetNormalizedFatigue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19333D0))(this);
  }
  void AddFatigue(float fatigueValue) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1933400))(this, fatigueValue);
  }
  bool IsExhausted() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1933620))(this);
  }
  float GetCurrentTotalFatigueBurnPerHour() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1933630))(this);
  }
  void SetSuppressVoiceOver(bool suppress) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x875330))(this, suppress);
  }
  void CalculateTotalFatigueBurnPerHour() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1932E50))(this);
  }
  int32_t GetFatigueLevel() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1933640))(this);
  }
  void DisplayFatigueOnHUDForTime(float seconds) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1933680))(this, seconds);
  }
  System_String* GetFatigueTextForHud() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1933740))(this);
  }
  void MaybeUpdateFatigueStatusLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19338C0))(this);
  }
  void UpdateFatigueStatusOnHUD() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1933D20))(this);
  }
  bool ShouldPlayFatigueVoiceOver() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19345B0))(this);
  }
  void MaybePlayFatigueVoiceOver() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19346C0))(this);
  }
  void MaybeUpdateExhaustedStatusInLog() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1934990))(this);
  }
  float CalculateFatigueIncrease(float realtimeSeconds) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Fatigue*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1934B10))(this, realtimeSeconds);
  }
  void SuppressHeavyBreathing(bool suppress) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1934FE0))(this, suppress);
  }
  void ResetMovementTimers() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19352D0))(this);
  }
  void HeavyBreathingInit() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19352E0))(this);
  }
  bool MovingUpIncline() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1935300))(this);
  }
  void UpdateHeavyBreathing() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1935500))(this);
  }
  void UpdateDebugText() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  int32_t GetHeavyBreathingState() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1804FD0))(this);
  }
  void CatchBreath() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19356D0))(this);
  }
  void MaybeCatchBreath() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1935810))(this);
  }
  void UpdateHeavyBreathingLoopRTPC() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19359E0))(this);
  }
  void SetHeavyBreathingState(int32_t state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1935BB0))(this, state);
  }
  void MaybePlayHeavyBreathingLoop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1935C10))(this);
  }
  int32_t ComputeHeavyBreathingState(ModdingAPI::Exposed::HeavyBreathingLevels thresholds) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Fatigue*, ModdingAPI::Exposed::HeavyBreathingLevels)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1935F20))(this, thresholds);
  }
  bool HeavyBreathingShouldSuppressVO() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1936090))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Fatigue*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1936100))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::FatigueSaveDataProxy*> m_FatigueSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::FatigueSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_FatigueSaveDataProxy; }
  );

  // Static methods:
  static inline void EndSuppressHeavyBreathingCallback() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1934FF0))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1936150))();
  }
};
}