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
struct __BloodLoss_Il2CppStaticFields {
  ModdingAPI::Exposed::BloodLossSaveDataProxy* m_BloodLossSaveDataProxy;
};

struct __BloodLoss_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __BloodLoss_Il2CppClass {
  Il2CppClass_1 _1;
  __BloodLoss_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __BloodLoss_Il2CppVtbl vtbl;
};

class BloodLoss {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C31B20;
  static inline    __BloodLoss_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __BloodLoss_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__BloodLoss_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __BloodLoss_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDisplayName;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDescription;
  float m_ChanceBloodLossAfterFall;
  float m_DurationHoursMin;
  float m_DurationHoursMax;
  float m_HPDrainPerHour;
  float m_HPDrainPerHourBandaged;
  float m_FatigueIncreasePerHour;
  float m_FatigueIncreasePerHourBandaged;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BandagePrefab;
  float m_HPThresholdForSound;
  float m_ScentIntensity;
  System_String* m_SoundToPlayAboveThreshold;
  System_String* m_SoundToPlayBelowThreshold;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_CausesLocIDs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Locations;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ElapsedHoursList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_DurationHoursList;
  bool m_StartHasBeenCalled;
  bool m_ForceNoDamage;
  bool m_ShouldOverrideArea;
  int32_t m_OverrideArea;

  // Member methods:
  System_String* get_m_DisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35A0))(this);
  }
  System_String* get_m_Description() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35C0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE84A0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE84C0))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE87D0))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE8AB0))(this, text);
  }
  bool LocationAvailable() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE91E0))(this);
  }
  int32_t GetAfflictionsCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE9320))(this);
  }
  System_String* GetAfflictionCauseLocalizationId(int32_t localAfflictionIndex) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BloodLoss*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE93B0))(this, localAfflictionIndex);
  }
  void BloodLossStartOverrideArea(int32_t area, System_String* cause, bool displayIcon, int32_t options) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*, int32_t, System_String*, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE9480))(this, area, cause, displayIcon, options);
  }
  void BloodLossStart(System_String* cause, bool displayIcon, int32_t options) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*, System_String*, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE94B0))(this, cause, displayIcon, options);
  }
  void BloodLossEnd(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE9F00))(this, index);
  }
  void Cure() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEA230))(this);
  }
  bool HasBloodLoss() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEA370))(this);
  }
  bool RequiresBandage() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEA400))(this);
  }
  void ApplyBandage(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEA410))(this, index);
  }
  void ApplyBandageToLocation(int32_t area) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEA420))(this, area);
  }
  ModdingAPI::Exposed::System::String_array* GetCauseLocIDList() {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEA5B0))(this);
  }
  int32_t GetLocation(int32_t index) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::BloodLoss*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEA640))(this, index);
  }
  int32_t GetIndexFromLocation(int32_t area) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::BloodLoss*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEA710))(this, area);
  }
  int32_t GetLocationOfLastAdded() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEA890))(this);
  }
  bool GetNoDamage() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x875300))(this);
  }
  void SetNoDamage(bool noDamage) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x875310))(this, noDamage);
  }
  void UpdateBloodLoss(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEA920))(this, index);
  }
  void MaybeApplyDamage() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEAA10))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BloodLoss*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEACD0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::BloodLossSaveDataProxy*> m_BloodLossSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::BloodLossSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_BloodLossSaveDataProxy; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BEB2A0))();
  }
};
}