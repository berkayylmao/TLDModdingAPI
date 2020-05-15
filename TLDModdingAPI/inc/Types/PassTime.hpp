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
struct __PassTime_Il2CppStaticFields {
};

struct __PassTime_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __PassTime_Il2CppClass {
  Il2CppClass_1 _1;
  __PassTime_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PassTime_Il2CppVtbl vtbl;
};

class PassTime {
public:
  // Il2Cpp fields:
  __PassTime_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_PassTimeRealtimeSecondsPerHour;
  System_String* m_PassTimeAudio;
  bool m_PassingTime;
  float m_NumHoursPassingTime;
  float m_PassTimeDurationHours;
  bool m_TimeAccelerated;
  float m_DayLengthScaleOriginal;
  uint32_t m_PassTimeAudioInstance;
  ModdingAPI::Exposed::Bed* m_Bed;
  bool m_SkipSave;
  bool m_SuppressAudio;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PassTime*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8352B0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PassTime*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2096BF0))(this);
  }
  void UpdatePassingTime() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PassTime*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2096D10))(this);
  }
  void Begin(float hours, ModdingAPI::Exposed::Bed* bed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PassTime*, float, ModdingAPI::Exposed::Bed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2096F40))(this, hours, bed);
  }
  void End() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PassTime*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20971B0))(this);
  }
  void SetSuppressAudio(bool shouldSuppress) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PassTime*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x169B740))(this, shouldSuppress);
  }
  void SetSkipSaveFlag() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PassTime*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20973A0))(this);
  }
  bool IsPassingTime() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PassTime*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3F0))(this);
  }
  float GetNumHoursRemaining() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::PassTime*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20973B0))(this);
  }
  float GetBedWarmthBonusCelsius() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::PassTime*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20973C0))(this);
  }
  void RestoreTimeOfDay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PassTime*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2097490))(this);
  }
  void AccelerateTimeOfDay(float hours) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PassTime*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2097550))(this, hours);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PassTime*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }
};
}