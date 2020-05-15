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
struct __MatchesItem_Il2CppStaticFields {
  ModdingAPI::Exposed::MatchesItemSaveDataProxy* m_MatchesItemSaveDataProxy;
};

struct __MatchesItem_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __MatchesItem_Il2CppClass {
  Il2CppClass_1 _1;
  __MatchesItem_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MatchesItem_Il2CppVtbl vtbl;
};

class MatchesItem {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C67B38;
  static inline    __MatchesItem_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MatchesItem_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MatchesItem_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MatchesItem_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_MinBurnTimeGametimeSeconds;
  float m_MaxBurnTimeGametimeSeconds;
  float m_BlowOutWindSpeedMPH;
  System_String* m_IgniteAudio;
  System_String* m_BurnOutAudio;
  float m_IgniteDelaySeconds;
  ModdingAPI::Exposed::MatchesIntensity* m_IntensityComponent;
  float m_BurnTimeGametimeSeconds;
  float m_ElapsedBurnGametimeSeconds;
  bool m_Ignited;
  ModdingAPI::Exposed::StackableItem* m_StackableItem;
  bool m_IgniteAfterDelay;
  float m_ElapsedIgniteDelaySeconds;
  ModdingAPI::Exposed::UnityEngine::Transform* m_FXTransform;
  ModdingAPI::Exposed::GearItem* m_GearItem;
  bool m_IsFresh;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE4770))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnDroppedInWater() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE4870))(this);
  }
  void OnEquip() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE4880))(this);
  }
  void UpdateWhileInHands() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE4890))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE4E70))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE4F90))(this, text);
  }
  void IgniteDelayed() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE5070))(this);
  }
  void IgniteAfterDelay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE53C0))(this);
  }
  void Ignite() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE55D0))(this);
  }
  void CancelIgnite() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE5730))(this);
  }
  void PutOut(bool burntOut) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE5840))(this, burntOut);
  }
  bool IsBurning() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x766C20))(this);
  }
  bool IsFresh() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EF7A0))(this);
  }
  float GetBurnProgress() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE5C90))(this);
  }
  void OnIgniteCompleteCallback() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE5D60))(this);
  }
  void UpdateFXTransform(float percentComplete) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE5F30))(this, percentComplete);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MatchesItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE62A0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::MatchesItemSaveDataProxy*> m_MatchesItemSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::MatchesItemSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_MatchesItemSaveDataProxy; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AE62B0))();
  }
};
}