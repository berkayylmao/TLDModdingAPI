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
struct __WeatherSet_Il2CppStaticFields {
  ModdingAPI::Exposed::WeatherSetInstanceSaveData* m_WeatherSetInstanceSaveData;
};

struct __WeatherSet_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __WeatherSet_Il2CppClass {
  Il2CppClass_1 _1;
  __WeatherSet_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __WeatherSet_Il2CppVtbl vtbl;
};

class WeatherSet {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C903D8;
  static inline    __WeatherSet_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __WeatherSet_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__WeatherSet_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __WeatherSet_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  System_String* m_CustomTypeName;
  int32_t m_CharacterizingType;
  int32_t m_SameTypeSelectionWeight;
  ModdingAPI::Exposed::WeatherSetStage_array* m_WeatherStages;
  int32_t m_ClearAsNextSelectionWeight;
  int32_t m_CloudyAsNextSelectionWeight;
  int32_t m_LightSnowAsNextSelectionWeight;
  int32_t m_HeavySnowAsNextSelectionWeight;
  int32_t m_LightFogAsNextSelectionWeight;
  int32_t m_DenseFogAsNextSelectionWeight;
  int32_t m_BlizzardAsNextSelectionWeight;
  bool m_IsDefaultSet;
  int32_t m_CurrentIndex;
  float m_CurrentSetDuration;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  bool IsComplete() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::WeatherSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E0DD0))(this);
  }
  void Initialize(System_String* name, ModdingAPI::Exposed::WeatherSetStage_array* stages) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*, System_String*, ModdingAPI::Exposed::WeatherSetStage_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E0E00))(this, name, stages);
  }
  void Prepare() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E0E50))(this);
  }
  void Activate(float startAtFrac, int32_t previousType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E1060))(this, startAtFrac, previousType);
  }
  void Deactivate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E1340))(this);
  }
  void ActivateStage(float startAtFrac, int32_t previousType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E14D0))(this, startAtFrac, previousType);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::WeatherSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E1790))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E1C30))(this, text);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E1F20))(this);
  }
  float GetProgressFrac() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::WeatherSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E23B0))(this);
  }
  void ForceTransitionToStep(int32_t forceIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E2570))(this, forceIndex);
  }
  void ForceStep(int32_t forceIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E2610))(this, forceIndex);
  }
  System_String* GetDebugString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::WeatherSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E2A30))(this);
  }
  void WeatherSetComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E2CA0))(this);
  }
  float ReportHoursOfBlizzardForDay(int32_t reportDay) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::WeatherSet*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E2D50))(this, reportDay);
  }
  void RefreshDuration() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E3070))(this);
  }
  int32_t ReportWeatherForDay(int32_t reportDay) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::WeatherSet*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E3100))(this, reportDay);
  }
  int32_t GetBlendedWeatherPair(int32_t ws1, int32_t ws2, bool allowSubordination) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::WeatherSet*, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E39E0))(this, ws1, ws2, allowSubordination);
  }
  int32_t GetDowngradedWeatherType(int32_t ws) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::WeatherSet*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E3BA0))(this, ws);
  }
  int32_t GetMoreSeriousWeatherType(int32_t ws1, int32_t ws2) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::WeatherSet*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E3C10))(this, ws1, ws2);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::WeatherSetInstanceSaveData*> m_WeatherSetInstanceSaveData = __CppStaticProperty<ModdingAPI::Exposed::WeatherSetInstanceSaveData*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_WeatherSetInstanceSaveData; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E3CB0))();
  }
};
}