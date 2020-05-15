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
struct __WeatherTransition_Il2CppStaticFields {
  float m_WeatherTransitionTimeScalar;
  bool m_SuppressBlizzards;
  ModdingAPI::Exposed::WeatherTransitionSaveDataProxy* m_WeatherTransitionSaveDataProxy;
};

struct __WeatherTransition_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __WeatherTransition_Il2CppClass {
  Il2CppClass_1 _1;
  __WeatherTransition_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __WeatherTransition_Il2CppVtbl vtbl;
};

class WeatherTransition {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C64DA0;
  static inline    __WeatherTransition_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __WeatherTransition_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__WeatherTransition_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __WeatherTransition_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t m_DefaultStartWeather;
  ModdingAPI::Exposed::WeatherSet* m_CurrentWeatherSet;
  int32_t m_PreviousWeatherSetType;
  int32_t m_UnmanagedWeatherStage;
  bool m_StartHasBeenCalled;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E4560))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E4580))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E4650))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E4760))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E4AE0))(this, text);
  }
  void ChooseNextWeatherSet(ModdingAPI::Exposed::System::Int32_array* customWeights, bool forceClear) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, ModdingAPI::Exposed::System::Int32_array*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E4D20))(this, customWeights, forceClear);
  }
  bool ActivateWeatherSet(System_String* customTypeName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E5610))(this, customTypeName);
  }
  void ActivateWeatherSetImmediate(int32_t reqType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E5750))(this, reqType);
  }
  void ActivateWeatherSetAtFrac(int32_t reqType, float startAtFrac) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E5850))(this, reqType, startAtFrac);
  }
  void ActivateWeatherSet(int32_t reqType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E5A30))(this, reqType);
  }
  void ActivateWeatherSet(ModdingAPI::Exposed::WeatherSet* ws, float startAtFrac, int32_t previousType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, ModdingAPI::Exposed::WeatherSet*, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E5A40))(this, ws, startAtFrac, previousType);
  }
  void ActivateDefaultWeatherSet() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E5C10))(this);
  }
  void MaybePlayStinger(System_String* stinger) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E5C20))(this, stinger);
  }
  void ForceTransitionToWeatherStage(int32_t forceIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E5E10))(this, forceIndex);
  }
  void ForceNextWeatherStage(int32_t forceIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E5F70))(this, forceIndex);
  }
  void ForceUnmanagedWeatherStage(int32_t ws, float transitionTime) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E6040))(this, ws, transitionTime);
  }
  System_String* GetDebugString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E6180))(this);
  }
  bool IsLocked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E62B0))(this);
  }
  void OverrideDurationOfStageInCurrentWeatherSet(int32_t weatherType, float duration) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E6350))(this, weatherType, duration);
  }
  float GetDurationOfStageInCurrentWeatherSet(int32_t weatherType) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E6520))(this, weatherType);
  }
  ModdingAPI::Exposed::System::Int32_array* GetCustomWeightsForCurrentXpMode() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E6660))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::WeatherTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<float> m_WeatherTransitionTimeScalar = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_WeatherTransitionTimeScalar; }
  );
  static inline __CppStaticProperty<bool> m_SuppressBlizzards = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_SuppressBlizzards; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::WeatherTransitionSaveDataProxy*> m_WeatherTransitionSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::WeatherTransitionSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_WeatherTransitionSaveDataProxy; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x18E6A20))();
  }
};
}