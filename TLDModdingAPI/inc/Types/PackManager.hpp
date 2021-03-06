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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __PackManager_Il2CppStaticFields {
};

struct __PackManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __PackManager_Il2CppClass {
  Il2CppClass_1 _1;
  __PackManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PackManager_Il2CppVtbl vtbl;
};

class PackManager {
public:
  // Il2Cpp fields:
  __PackManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::PackExperienceModeSettings* m_DefaultPackExperienceModeSettings;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_PackExperienceModeSettings;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_PackExperienceModeSettingsByMode;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_PackAnimals;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_PackAnimalGroupByLeader;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_FreePackGroups;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_RemoveAnimalList;
  int32_t m_MaxPackSize;
  float m_PackReformDisplayTimeSeconds;
  float m_PackReformDisplayTimer;
  float m_PackNearbyRange;
  System_String* m_PackNearbySoundName;
  float m_MinCombatRestrictedDistance;
  float m_MinPlayerDistanceToHoldGroundPoint;
  float m_MaxPlayerDistanceToHoldGroundPoint;
  float m_MinAngleBetweenPlayerAndMarkup;
  float m_QueueCombatRestrictedAttackDelay;
  float m_AiModeSwitchDelayDuringRepositioningSeconds;
  float m_MinDistanceToPlayerDuringReposition;
  float m_AcceptanceDistanceToHoldGround;
  bool m_EnablePacksOnLoad;
  bool m_PlayerInPackCombatTrigger;
  float m_DeserializeDelayTimeSeconds;
  float m_DeserializeDelayTimer;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_AreaMarkupList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_PrunedAreaMarkupList;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_PackAnimalByHoldGroundHint;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_HoldGroundHintByPackAnimal;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_LonerWanderLocationByGroupId;
  bool m_IsPackNearby;
  bool m_WasPackNearby;
  float m_HoursPlayedAtStart;
  bool m_SystemEnabled;

  // Member methods:
  ModdingAPI::Exposed::PackExperienceModeSettings* GetExperienceModeSettings() {
    return reinterpret_cast<ModdingAPI::Exposed::PackExperienceModeSettings*(__fastcall*)(ModdingAPI::Exposed::PackManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A0D620))(this);
  }
  System_String* SerializeGlobal() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::PackManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A0D7C0))(this);
  }
  void DeserializeGlobal(System_String* serialized) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A0D940))(this, serialized);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::PackManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A0DA10))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A0E300))(this, text);
  }
  void RegisterPackAnimal(ModdingAPI::Exposed::PackAnimal* pa) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A0EC70))(this, pa);
  }
  void RemoveGroup(ModdingAPI::Exposed::PackAnimal* leader, bool setReformTimer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A0ED60))(this, leader, setReformTimer);
  }
  ModdingAPI::Exposed::PackAnimal* FindPackGroupLeaderByGroupId(System_String* groupId) {
    return reinterpret_cast<ModdingAPI::Exposed::PackAnimal*(__fastcall*)(ModdingAPI::Exposed::PackManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A0F200))(this, groupId);
  }
  ModdingAPI::Exposed::PackAnimal* MaybeAddOrUpdateGroup(ModdingAPI::Exposed::PackAnimal* newLeader) {
    return reinterpret_cast<ModdingAPI::Exposed::PackAnimal*(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A0F3D0))(this, newLeader);
  }
  bool IsMismatchWildlifeMode(ModdingAPI::Exposed::PackAnimal* animal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A0F860))(this, animal);
  }
  bool CanAnimalFormGroup(ModdingAPI::Exposed::PackAnimal* animal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A0F990))(this, animal);
  }
  bool MaybeFormGroup(ModdingAPI::Exposed::PackAnimal* newLeader) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A0FB40))(this, newLeader);
  }
  void MaybeAlertMembers(ModdingAPI::Exposed::PackAnimal* animal) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A10240))(this, animal);
  }
  bool DisbandGroup(ModdingAPI::Exposed::PackAnimal* pa, bool setReformTimer) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A104F0))(this, pa, setReformTimer);
  }
  ModdingAPI::Exposed::PackAnimal* ChooseLeader(ModdingAPI::Exposed::PackGroup* pack) {
    return reinterpret_cast<ModdingAPI::Exposed::PackAnimal*(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A10610))(this, pack);
  }
  void UnregisterPackAnimal(ModdingAPI::Exposed::PackAnimal* pa, bool onDeath) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A107A0))(this, pa, onDeath);
  }
  bool IsPointCloseToPackMembers(ModdingAPI::Exposed::PackAnimal* animal, ModdingAPI::Exposed::UnityEngine::Vector3 point, float radius) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A10EE0))(this, animal, point, radius);
  }
  float GroupMoraleHeuristic(ModdingAPI::Exposed::PackAnimal* animal) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A11300))(this, animal);
  }
  void DebugMoraleReport(System_String* text, float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A114E0))(this, text, value);
  }
  void ModifyGroupMoraleOnDamage(ModdingAPI::Exposed::PackAnimal* animal) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A11570))(this, animal);
  }
  void ModifyGroupMoraleOnNearMissGunshot(ModdingAPI::Exposed::PackAnimal* animal) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A11600))(this, animal);
  }
  void ModifyGroupMoraleOnFlareGunRound(ModdingAPI::Exposed::PackAnimal* animal, bool isStuckInAnimal) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A11660))(this, animal, isStuckInAnimal);
  }
  void ModifyGroupMoraleOnGunshot(ModdingAPI::Exposed::PackAnimal* animal) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A116E0))(this, animal);
  }
  void ModifyGroupMoraleOnHitWithItem(ModdingAPI::Exposed::PackAnimal* animal, ModdingAPI::Exposed::GearItem* item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A119D0))(this, animal, item);
  }
  void ModifyGroupMoraleOnThrownItem(ModdingAPI::Exposed::PackAnimal* animal, ModdingAPI::Exposed::GearItem* item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A11BB0))(this, animal, item);
  }
  bool ModifyGroupMorale(ModdingAPI::Exposed::PackExperienceModeSettings* modeSettings, ModdingAPI::Exposed::PackAnimal* animal, float percent, int32_t eventType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackExperienceModeSettings*, ModdingAPI::Exposed::PackAnimal*, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A11D90))(this, modeSettings, animal, percent, eventType);
  }
  ModdingAPI::Exposed::PackAnimal* GetPackLeader(ModdingAPI::Exposed::BaseAi* ai) {
    return reinterpret_cast<ModdingAPI::Exposed::PackAnimal*(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::BaseAi*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A11FD0))(this, ai);
  }
  int32_t GetMemberCount(ModdingAPI::Exposed::PackAnimal* leader) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A120B0))(this, leader);
  }
  void SetPackCombatRestricted(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x875310))(this, enable);
  }
  bool IsPackCombatRestricted(ModdingAPI::Exposed::PackAnimal* animal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A121D0))(this, animal);
  }
  int32_t GetFormationCount(ModdingAPI::Exposed::PackAnimal* leader) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A12490))(this, leader);
  }
  bool ShouldAnimalFlee(ModdingAPI::Exposed::PackAnimal* animal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A125A0))(this, animal);
  }
  float GetMoraleThreshold() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::PackManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A12990))(this);
  }
  bool ShouldAnimalFleeChance(ModdingAPI::Exposed::PackAnimal* animal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A129B0))(this, animal);
  }
  bool CanAttack(ModdingAPI::Exposed::PackAnimal* animal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A12BF0))(this, animal);
  }
  void ClearAttackCooldownTimeOnAttackFailed(ModdingAPI::Exposed::PackAnimal* animal) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A13050))(this, animal);
  }
  void MaybeSetPackAttackCooldownTime(ModdingAPI::Exposed::PackAnimal* animal) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A13170))(this, animal);
  }
  void MaybeForceAttackInCombatRestrictedArea(ModdingAPI::Exposed::PackExperienceModeSettings* modeSettings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackExperienceModeSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A13300))(this, modeSettings);
  }
  void MaybeCleanupDeadPackAnimals(ModdingAPI::Exposed::PackExperienceModeSettings* modeSettings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackExperienceModeSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A136D0))(this, modeSettings);
  }
  void MaybeDisbandGroupOnTargetLost(ModdingAPI::Exposed::PackExperienceModeSettings* modeSettings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackExperienceModeSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A13DF0))(this, modeSettings);
  }
  void MaybeSetAuroraMaterialsOnFlee(ModdingAPI::Exposed::BaseAi* ai) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::BaseAi*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A14340))(this, ai);
  }
  void MaybeFleeAndDisbandOnMoraleCheck() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A144E0))(this);
  }
  void MaybeFleeAndDisbandOnBearOrMooseCheck(ModdingAPI::Exposed::PackExperienceModeSettings* modeSettings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackExperienceModeSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A149E0))(this, modeSettings);
  }
  void MaybeForceMoveMembers(ModdingAPI::Exposed::PackExperienceModeSettings* modeSettings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackExperienceModeSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A14F70))(this, modeSettings);
  }
  bool IsMovingToHoldGroundPosition(ModdingAPI::Exposed::PackAnimal* animal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A154A0))(this, animal);
  }
  bool MaybePickAndMoveToHoldGroundHint(ModdingAPI::Exposed::PackAnimal* member) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A15560))(this, member);
  }
  void MaybeForceHoldGroundAfterReposition(ModdingAPI::Exposed::PackExperienceModeSettings* modeSettings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackExperienceModeSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A155F0))(this, modeSettings);
  }
  void MaybeMoveToNewHoldGroundPosition(ModdingAPI::Exposed::PackExperienceModeSettings* modeSettings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackExperienceModeSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A15CB0))(this, modeSettings);
  }
  void MaybeKeepLonersWithinRadius() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A16170))(this);
  }
  void MaybeFormGroupOnPlayerDetectionRange(ModdingAPI::Exposed::PackExperienceModeSettings* modeSettings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackExperienceModeSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A16B70))(this, modeSettings);
  }
  bool MaybePickHoldGroundHint(ModdingAPI::Exposed::PackAnimal* animal, ModdingAPI::Exposed::UnityEngine::Vector3 point) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackAnimal*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A17010))(this, animal, point);
  }
  float GetHighestPackMorale(float modifier, int32_t memberCount, int32_t originalMemberCount) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::PackManager*, float, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A17A20))(this, modifier, memberCount, originalMemberCount);
  }
  void MaybeEnableAnimalsOnLoad() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A17C20))(this);
  }
  void ResetGroupEventFlags() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A17FF0))(this);
  }
  void MaybeUpdateInteriorAudio(ModdingAPI::Exposed::PackExperienceModeSettings* modeSettings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*, ModdingAPI::Exposed::PackExperienceModeSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A18160))(this, modeSettings);
  }
  bool ArePacksAllowed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A18660))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A18740))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A18A50))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PackManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A18C40))(this);
  }

  // Static methods:
  static inline bool InPack(ModdingAPI::Exposed::PackAnimal* animal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A10C30))(animal);
  }
  static inline bool IsLeader(ModdingAPI::Exposed::PackAnimal* animal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A10D10))(animal);
  }
  static inline bool IsValidPackTarget(ModdingAPI::Exposed::AiTarget* target) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AiTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A10E00))(target);
  }
  static inline bool IsTaggedGroupAnimal(ModdingAPI::Exposed::PackAnimal* animal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A16100))(animal);
  }
  static inline bool AreSameTaggedGroupAnimals(ModdingAPI::Exposed::PackAnimal* a, ModdingAPI::Exposed::PackAnimal* b) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PackAnimal*, ModdingAPI::Exposed::PackAnimal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A16130))(a, b);
  }
};
}