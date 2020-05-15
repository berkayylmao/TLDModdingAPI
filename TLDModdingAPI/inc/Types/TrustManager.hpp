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
struct __TrustManager_Il2CppStaticFields {
};

struct __TrustManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TrustManager_Il2CppClass {
  Il2CppClass_1 _1;
  __TrustManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TrustManager_Il2CppVtbl vtbl;
};

class TrustManager {
public:
  // Il2Cpp fields:
  __TrustManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t m_MinTrustValue;
  int32_t m_MaxTrustValue;
  int32_t m_DefaultTrustValue;
  bool m_DisableTrustForRedux;
  ModdingAPI::Exposed::TrustManager::TheftTrustLossTunables* m_TheftTrustLossTunables;
  ModdingAPI::Exposed::TrustManager::TrustDecayValue_array* m_TrustDecayValues;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_TrustDictionary;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_StrikesDictionary;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_StrikeTimersDictionary;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_NeedTrackers;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_UnlockableTrackers;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_TrustDecayDictionary;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_TrustDecayValuesDictionary;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_GracePeriodTimersDictionary;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_GracePeriodValuesDictionary;

  // Member methods:
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::TrustManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AAB90))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AAD50))(this, text);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AAEC0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AB010))(this);
  }
  void RegisterNeedTracker(ModdingAPI::Exposed::NPC_NeedTracker* needTracker, System_String* id) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, ModdingAPI::Exposed::NPC_NeedTracker*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AB430))(this, needTracker, id);
  }
  void RegisterUnlockableTracker(ModdingAPI::Exposed::NPC_UnlockableTracker* unlockableTracker, System_String* id) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, ModdingAPI::Exposed::NPC_UnlockableTracker*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AB530))(this, unlockableTracker, id);
  }
  void AddTrustDecayGracePeriod(System_String* npcID, System_String* missionID, float gracePeriodHours) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AB630))(this, npcID, missionID, gracePeriodHours);
  }
  void RemoveTrustDecayGracePeriod(System_String* npcID, System_String* missionID) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AB790))(this, npcID, missionID);
  }
  void ResetTrustDecayGracePeriod(System_String* npcID) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AB8B0))(this, npcID);
  }
  int32_t GetTrustValue(System_String* id) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AB9A0))(this, id);
  }
  float GetNormalizedTrustValue(System_String* id) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20ABA80))(this, id);
  }
  void SetTrustValue(System_String* id, int32_t val) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20ABAD0))(this, id, val);
  }
  void AddToTrustValue(System_String* id, int32_t amountToAdd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20ABC80))(this, id, amountToAdd);
  }
  System_String* GetTrustChangeMessage(System_String* id, int32_t amountToAdd) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20ABD10))(this, id, amountToAdd);
  }
  void AddStrike(System_String* id) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AC030))(this, id);
  }
  int32_t GetNumStrikes(System_String* id) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AC2B0))(this, id);
  }
  ModdingAPI::Exposed::NPC_NeedTracker* GetNeedTracker(System_String* id) {
    return reinterpret_cast<ModdingAPI::Exposed::NPC_NeedTracker*(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AC390))(this, id);
  }
  ModdingAPI::Exposed::NPC_UnlockableTracker* GetUnlockableTracker(System_String* id) {
    return reinterpret_cast<ModdingAPI::Exposed::NPC_UnlockableTracker*(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AC470))(this, id);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetAllTrustIDs() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::TrustManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AC550))(this);
  }
  void OutputTrustValues() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20ACB70))(this);
  }
  void OutputSingleTrustValue(System_String* npcID, int32_t trustVal) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20ACE70))(this, npcID, trustVal);
  }
  void AddTrustDecay(System_String* npcID, float decayPerDay, float deltaTimeDays) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AD8B0))(this, npcID, decayPerDay, deltaTimeDays);
  }
  float GetTrustDecayPerDay(System_String* npcID) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20ADD40))(this, npcID);
  }
  bool TrustDecayInGracePeriod(System_String* npcID) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20ADF00))(this, npcID);
  }
  float GetHighestGracePeriodThreshold(System_String* npcID) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20ADF50))(this, npcID);
  }
  float GetGracePeriodTimerHours(System_String* npcID) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AE420))(this, npcID);
  }
  void AddGracePeriodHours(System_String* npcID, float hoursToAdd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AE5F0))(this, npcID, hoursToAdd);
  }
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* SerializeNeedTrackers() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::TrustManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AE830))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* SerializeUnlockableTrackers() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::TrustManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AEC20))(this);
  }
  void DeserializeNeedTrackers(ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* needTrackersSerialized) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AF010))(this, needTrackersSerialized);
  }
  void DeserializeUnlockableTrackers(ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* unlockableTrackersSerialized) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AF320))(this, unlockableTrackersSerialized);
  }
  void StartStrikeCooldown(System_String* id, float numHours) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AF630))(this, id, numHours);
  }
  void StrikeTimerReduce(System_String* id, float numHours) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AF760))(this, id, numHours);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TrustManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AFB00))(this);
  }

  // Static methods:
  static inline void MaybeHandleContainerTheft(ModdingAPI::Exposed::UnityEngine::GameObject* containerObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AC6C0))(containerObject);
  }
  static inline void MaybeHandleItemTheft(ModdingAPI::Exposed::GearItem* gearItem) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20AC800))(gearItem);
  }
  static inline void MaybeHandleItemBreakdown(ModdingAPI::Exposed::UnityEngine::GameObject* breakdownObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20ACA00))(breakdownObject);
  }
};
}