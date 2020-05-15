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
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"


namespace ModdingAPI::Exposed {
struct __FlashlightItem_Il2CppStaticFields {
  ModdingAPI::Exposed::FlashlightItemSaveDataProxy* m_FlashlightItemSaveDataProxy;
};

struct __FlashlightItem_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __FlashlightItem_Il2CppClass {
  Il2CppClass_1 _1;
  __FlashlightItem_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __FlashlightItem_Il2CppVtbl vtbl;
};

class FlashlightItem {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C49660;
  static inline    __FlashlightItem_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __FlashlightItem_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__FlashlightItem_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __FlashlightItem_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::Color m_Color;
  ModdingAPI::Exposed::AuroraField* m_AuroraField;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_FxObjectLow;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_FxObjectHigh;
  ModdingAPI::Exposed::UnityEngine::Light* m_LightIndoor;
  ModdingAPI::Exposed::UnityEngine::Light* m_LightOutdoor;
  ModdingAPI::Exposed::UnityEngine::Light* m_LightIndoorHigh;
  ModdingAPI::Exposed::UnityEngine::Light* m_LightOutdoorHigh;
  System_String* m_TurnOnAudio;
  System_String* m_TurnOffAudio;
  float m_LowBeamDuration;
  float m_HighBeamDuration;
  float m_RechargeTime;
  float m_HighBeamCooldownSeconds;
  float m_AuroraFieldForwardOffset;
  float m_AuroraFieldVerticalOffset;
  ModdingAPI::Exposed::GearItem* m_GearItem;
  int32_t m_State;
  uint32_t m_TurnOnAudioId;
  uint32_t m_TurnOffAudioId;
  float m_CurrentBatteryCharge;
  float m_HighBeamCooldownEndTime;
  uint32_t m_IntensityAudioID;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1857A20))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1857C10))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1858360))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18584A0))(this, text);
  }
  void DoRecharge(float deltaTODHours) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18585A0))(this, deltaTODHours);
  }
  float GetNormalizedCharge() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18586F0))(this);
  }
  bool IsLit() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18587C0))(this);
  }
  bool IsLow() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1858880))(this);
  }
  bool IsOn() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1858890))(this);
  }
  void Toggle() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18588A0))(this);
  }
  void TurnOn() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18589C0))(this);
  }
  void TurnOff() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1858D60))(this);
  }
  void TurnOffImmediate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1858FD0))(this);
  }
  void OnTurnOnCompleteCallback() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1859000))(this);
  }
  void OnTurnOffCompleteCallback() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1859120))(this);
  }
  void ShowEquipItemPopup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1859210))(this);
  }
  void EnableLights(int32_t state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18592F0))(this, state);
  }
  void PlayTurnOnAudio() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1859750))(this);
  }
  void PlayTurnOffAudio() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1859850))(this);
  }
  void DoThreeDaysOfNightBonus() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1859B10))(this);
  }
  void UpdateAudio() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1859FB0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FlashlightItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x185A150))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::FlashlightItemSaveDataProxy*> m_FlashlightItemSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::FlashlightItemSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_FlashlightItemSaveDataProxy; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x185A1A0))();
  }
};
}