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
struct __BearHuntRedux_Il2CppStaticFields {
  bool s_DeprecatedActive;
  bool s_SaveCheckPoint;
  ModdingAPI::Exposed::BaseAi* s_BearBaseAi;
  ModdingAPI::Exposed::BearHuntReduxSaveData* s_BearHuntReduxSavedData;
  bool s_Completed;
  bool s_PlayerDiesAfterSpearMiss;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* s_BearEncounterInfoList;
  bool s_DebugBearHuntRedux;
};

struct __BearHuntRedux_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __BearHuntRedux_Il2CppClass {
  Il2CppClass_1 _1;
  __BearHuntRedux_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __BearHuntRedux_Il2CppVtbl vtbl;
};

class BearHuntRedux {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8CB30;
  static inline    __BearHuntRedux_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __BearHuntRedux_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__BearHuntRedux_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __BearHuntRedux_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BearHuntRedux*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BearHuntRedux*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> s_DeprecatedActive = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_DeprecatedActive; }
  );
  static inline __CppStaticProperty<bool> s_SaveCheckPoint = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_SaveCheckPoint; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::BaseAi*> s_BearBaseAi = __CppStaticProperty<ModdingAPI::Exposed::BaseAi*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_BearBaseAi; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::BearHuntReduxSaveData*> s_BearHuntReduxSavedData = __CppStaticProperty<ModdingAPI::Exposed::BearHuntReduxSaveData*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_BearHuntReduxSavedData; }
  );
  static inline __CppStaticProperty<bool> s_Completed = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Completed; }
  );
  static inline __CppStaticProperty<bool> s_PlayerDiesAfterSpearMiss = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_PlayerDiesAfterSpearMiss; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> s_BearEncounterInfoList = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_BearEncounterInfoList; }
  );
  static inline __CppStaticProperty<bool> s_DebugBearHuntRedux = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_DebugBearHuntRedux; }
  );

  // Static methods:
  static inline void UpdateMission() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDB6F0))();
  }
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDB970))();
  }
  static inline System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDBA50))();
  }
  static inline void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDBC40))(text);
  }
  static inline void SetHuntBear(ModdingAPI::Exposed::BaseAi* bearAi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BaseAi*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDBE10))(bearAi);
  }
  static inline void Begin() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDBEC0))();
  }
  static inline void End() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDBFF0))();
  }
  static inline bool IsActive() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDC0D0))();
  }
  static inline bool IsHuntedBear(ModdingAPI::Exposed::BaseAi* bai) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BaseAi*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDC170))(bai);
  }
  static inline void OnPlayerDetected(ModdingAPI::Exposed::BaseAi* bai) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BaseAi*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDC250))(bai);
  }
  static inline bool IsBearSpawned() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDC2C0))();
  }
  static inline ModdingAPI::Exposed::BaseAi* GetSpawnedBear() {
    return reinterpret_cast<ModdingAPI::Exposed::BaseAi*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDC390))();
  }
  static inline void OnBearSpearOutcome(int32_t result, int32_t struggleOutcome) {
    reinterpret_cast<void(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDC430))(result, struggleOutcome);
  }
  static inline void SaveCheckpoint() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDC4E0))();
  }
  static inline void RetrieveSpawnedBear() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDC580))();
  }
  static inline bool ActivateEncounter(System_String* missionObjectId, bool activate) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDC630))(missionObjectId, activate);
  }
  static inline bool IsEncounterActivated(System_String* missionObjectId) {
    return reinterpret_cast<bool(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDC930))(missionObjectId);
  }
  static inline bool SetLastEncounter(System_String* missionObjectId, bool isLast) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDC9E0))(missionObjectId, isLast);
  }
  static inline bool SetPostStruggleBehavior(System_String* missionObjectId, int32_t postStruggleBehavior) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDCBB0))(missionObjectId, postStruggleBehavior);
  }
  static inline bool IsLastEncounter(System_String* missionObjectId) {
    return reinterpret_cast<bool(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDCE70))(missionObjectId);
  }
  static inline bool HasWonLatestEncounter(System_String* missionObjectId) {
    return reinterpret_cast<bool(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDCF20))(missionObjectId);
  }
  static inline void SetPlayerDiesAfterSpearMiss(bool playerShouldDie) {
    reinterpret_cast<void(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDCFD0))(playerShouldDie);
  }
  static inline bool GetPlayerDiesAfterSpearMiss() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDD080))();
  }
  static inline System_String* GetDebugText() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDD120))();
  }
  static inline void MaybeLoseMission() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDD490))();
  }
  static inline void MaybeSaveCheckpoint() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDD570))();
  }
  static inline ModdingAPI::Exposed::BaseAi* FindHuntBear() {
    return reinterpret_cast<ModdingAPI::Exposed::BaseAi*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDD650))();
  }
  static inline void Win() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDD810))();
  }
  static inline void OnBearSpearOutcomeInternal(int32_t result, int32_t struggleOutcome) {
    reinterpret_cast<void(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDD900))(result, struggleOutcome);
  }
  static inline ModdingAPI::Exposed::BearEncounterInfo* GetBearEncounterInfo(System_String* missionObjectId) {
    return reinterpret_cast<ModdingAPI::Exposed::BearEncounterInfo*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDDAF0))(missionObjectId);
  }
  static inline ModdingAPI::Exposed::BearEncounterInfo* GetOrCreateBearEncounterInfo(System_String* missionObjectId) {
    return reinterpret_cast<ModdingAPI::Exposed::BearEncounterInfo*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDDCF0))(missionObjectId);
  }
  static inline void UpdateBearEncounterInfo(ModdingAPI::Exposed::BearEncounter* bearEncounter) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BearEncounter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDDEE0))(bearEncounter);
  }
  static inline void OnBearEncounterOutcome(int32_t result, int32_t struggleOutcome, ModdingAPI::Exposed::BearEncounter* bearEncounter, ModdingAPI::Exposed::BearHuntAiRedux* bearHuntReduxAi) {
    reinterpret_cast<void(__fastcall*)(int32_t, int32_t, ModdingAPI::Exposed::BearEncounter*, ModdingAPI::Exposed::BearHuntAiRedux*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDDFD0))(result, struggleOutcome, bearEncounter, bearHuntReduxAi);
  }
  static inline ModdingAPI::Exposed::BearEncounter* FindBearEncounter(System_String* missionObjectId) {
    return reinterpret_cast<ModdingAPI::Exposed::BearEncounter*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDE2C0))(missionObjectId);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BDE410))();
  }
};
}