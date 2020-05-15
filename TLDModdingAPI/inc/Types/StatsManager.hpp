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
struct __StatsManager_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_StatInfo;
  ModdingAPI::Exposed::StatContainer* m_CurrentSessionStatsContainer;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_AllTimeStatsContainer;
  ModdingAPI::Exposed::StatsManager::IncrementStatDelegate* OnIncrementStat;
  ModdingAPI::Exposed::StatsManager::SetStatDelegate* OnSetStat;
};

struct __StatsManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __StatsManager_Il2CppClass {
  Il2CppClass_1 _1;
  __StatsManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StatsManager_Il2CppVtbl vtbl;
};

class StatsManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5E110;
  static inline    __StatsManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __StatsManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__StatsManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __StatsManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatsManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C688A0))(this);
  }
  void SetStatInfo(int32_t statId, System_String* locId, System_String* spriteName, int32_t format, bool hidden) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatsManager*, int32_t, System_String*, System_String*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C69B60))(this, statId, locId, spriteName, format, hidden);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StatsManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*> m_StatInfo = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_StatInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::StatContainer*> m_CurrentSessionStatsContainer = __CppStaticProperty<ModdingAPI::Exposed::StatContainer*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_CurrentSessionStatsContainer; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_AllTimeStatsContainer = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_AllTimeStatsContainer; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::StatsManager::IncrementStatDelegate*> OnIncrementStat = __CppStaticProperty<ModdingAPI::Exposed::StatsManager::IncrementStatDelegate*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnIncrementStat; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::StatsManager::SetStatDelegate*> OnSetStat = __CppStaticProperty<ModdingAPI::Exposed::StatsManager::SetStatDelegate*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnSetStat; }
  );

  // Static methods:
  static inline System_String* SerializeCurrentSession() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C695F0))();
  }
  static inline void DeserializeCurrentSession(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C696C0))(text);
  }
  static inline System_String* SerializeAllTimeStats() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C697D0))();
  }
  static inline void DeserializeAllTimeStats(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C698A0))(text);
  }
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C699D0))();
  }
  static inline void MaybeInitializeAllTimeBestStats() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C69DD0))();
  }
  static inline void MaybeUpdateAllTimeBestStat(int32_t id, float value) {
    reinterpret_cast<void(__fastcall*)(int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C69FC0))(id, value);
  }
  static inline float GetValue(int32_t id) {
    return reinterpret_cast<float(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6A1F0))(id);
  }
  static inline bool CanTrackStats() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6A2B0))();
  }
  static inline void SetValue(int32_t id, float value) {
    reinterpret_cast<void(__fastcall*)(int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6A3C0))(id, value);
  }
  static inline float IncrementValue(int32_t id, float increment) {
    return reinterpret_cast<float(__fastcall*)(int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6A570))(id, increment);
  }
  static inline void MaybeComputeDependantStats(int32_t id) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6AA20))(id);
  }
  static inline void CheckBurntHousesInCoastal() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6AD30))();
  }
  static inline ModdingAPI::Exposed::StatInfo* GetStatInfo(int32_t statId) {
    return reinterpret_cast<ModdingAPI::Exposed::StatInfo*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6B2A0))(statId);
  }
  static inline void FixUpCurrentSessionLongestBurningFireStat() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6B530))();
  }
  static inline void FixUpAllTimeStatsLongestBurningFireStat() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6B650))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C6B830))();
  }
};
}