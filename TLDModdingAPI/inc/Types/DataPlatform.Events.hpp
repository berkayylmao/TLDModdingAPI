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
#include "ModdingAPI::Exposed::System::Guid.hpp"


namespace ModdingAPI::Exposed::DataPlatform {
struct __Events_Il2CppStaticFields {
};

struct __Events_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Events_Il2CppClass {
  Il2CppClass_1 _1;
  __Events_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Events_Il2CppVtbl vtbl;
};

class Events {
public:
  // Il2Cpp fields:
  __Events_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::Events*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static methods:
  static inline void SendAchievementUnlocked(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, int32_t AchievementId) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, AchievementId);
  }
  static inline void SendBearAttackSurvived(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId);
  }
  static inline void SendBlizzardSurvived(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId);
  }
  static inline void SendConsecutiveNightSurvived_Sandbox(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, int32_t NightSurvived) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, NightSurvived);
  }
  static inline void SendCurrentArea(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* AreaName) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, AreaName);
  }
  static inline void SendDeltaDaysSurvived_Sandbox(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, int32_t DeltaDays) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, DeltaDays);
  }
  static inline void SendDeltaDistanceTravelled(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, float DeltaDistance) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, DeltaDistance);
  }
  static inline void SendEnemyDefeated(System_String* UserId, int32_t SectionId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId, ModdingAPI::Exposed::System::Guid RoundId, int32_t PlayerRoleId, int32_t PlayerWeaponId, int32_t EnemyRoleId, int32_t KillTypeId, float LocationX, float LocationY, float LocationZ, int32_t EnemyWeaponId) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t, ModdingAPI::Exposed::System::Guid, int32_t, int32_t, int32_t, int32_t, float, float, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, SectionId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId, RoundId, PlayerRoleId, PlayerWeaponId, EnemyRoleId, KillTypeId, LocationX, LocationY, LocationZ, EnemyWeaponId);
  }
  static inline void SendFullyHarvestedDeer_Sandbox(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, int32_t NumDeers) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, NumDeers);
  }
  static inline void SendGameProgress(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, float CompletionPercent) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, CompletionPercent);
  }
  static inline void SendItemAcquired(System_String* UserId, int32_t SectionId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId, int32_t ItemId, int32_t AcquisitionMethodId, float LocationX, float LocationY, float LocationZ) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t, int32_t, int32_t, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, SectionId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId, ItemId, AcquisitionMethodId, LocationX, LocationY, LocationZ);
  }
  static inline void SendItemUsed(System_String* UserId, int32_t SectionId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId, int32_t ItemId, float LocationX, float LocationY, float LocationZ) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t, int32_t, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, SectionId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId, ItemId, LocationX, LocationY, LocationZ);
  }
  static inline void SendMediaUsage(System_String* AppSessionId, System_String* AppSessionStartDateTime, uint32_t UserIdType, System_String* UserId, System_String* SubscriptionTierType, System_String* SubscriptionTier, System_String* MediaType, System_String* ProviderId, System_String* ProviderMediaId, System_String* ProviderMediaInstanceId, ModdingAPI::Exposed::System::Guid BingId, uint64_t MediaLengthMs, uint32_t MediaControlAction, float PlaybackSpeed, uint64_t MediaPositionMs, uint64_t PlaybackDurationMs, System_String* AcquisitionType, System_String* AcquisitionContext, System_String* AcquisitionContextType, System_String* AcquisitionContextId, int32_t PlaybackIsStream, int32_t PlaybackIsTethered, System_String* MarketplaceLocation, System_String* ContentLocale, float TimeZoneOffset, uint32_t ScreenState) {
    reinterpret_cast<void(__fastcall*)(System_String*, System_String*, uint32_t, System_String*, System_String*, System_String*, System_String*, System_String*, System_String*, System_String*, ModdingAPI::Exposed::System::Guid, uint64_t, uint32_t, float, uint64_t, uint64_t, System_String*, System_String*, System_String*, System_String*, int32_t, int32_t, System_String*, System_String*, float, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(AppSessionId, AppSessionStartDateTime, UserIdType, UserId, SubscriptionTierType, SubscriptionTier, MediaType, ProviderId, ProviderMediaId, ProviderMediaInstanceId, BingId, MediaLengthMs, MediaControlAction, PlaybackSpeed, MediaPositionMs, PlaybackDurationMs, AcquisitionType, AcquisitionContext, AcquisitionContextType, AcquisitionContextId, PlaybackIsStream, PlaybackIsTethered, MarketplaceLocation, ContentLocale, TimeZoneOffset, ScreenState);
  }
  static inline void SendMultiplayerRoundEnd(System_String* UserId, ModdingAPI::Exposed::System::Guid RoundId, int32_t SectionId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t MatchTypeId, int32_t DifficultyLevelId, float TimeInSeconds, int32_t ExitStatusId) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, int32_t, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t, int32_t, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, RoundId, SectionId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, MatchTypeId, DifficultyLevelId, TimeInSeconds, ExitStatusId);
  }
  static inline void SendMultiplayerRoundStart(System_String* UserId, ModdingAPI::Exposed::System::Guid RoundId, int32_t SectionId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t MatchTypeId, int32_t DifficultyLevelId) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, int32_t, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, RoundId, SectionId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, MatchTypeId, DifficultyLevelId);
  }
  static inline void SendNumDaysSurvived_Sandbox(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, int32_t NumDaysSurvived) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, NumDaysSurvived);
  }
  static inline void SendNumDaysSurvivedOffLand_Sandbox(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, int32_t NumDaysSurvived) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, NumDaysSurvived);
  }
  static inline void SendNumDaysSurvivedWithoutGunFired_Sandbox(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, int32_t NumDaysSurvived) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, NumDaysSurvived);
  }
  static inline void SendNumDaysSurvivedWithoutKill_Sandbox(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, int32_t NumDaysSurvived) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, NumDaysSurvived);
  }
  static inline void SendObjectiveEnd(System_String* UserId, int32_t SectionId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId, int32_t ObjectiveId, int32_t ExitStatusId) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, SectionId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId, ObjectiveId, ExitStatusId);
  }
  static inline void SendObjectiveStart(System_String* UserId, int32_t SectionId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId, int32_t ObjectiveId) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, SectionId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId, ObjectiveId);
  }
  static inline void SendPageAction(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, int32_t ActionTypeId, int32_t ActionInputMethodId, System_String* Page, System_String* TemplateId, System_String* DestinationPage, System_String* Content) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, int32_t, int32_t, System_String*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, ActionTypeId, ActionInputMethodId, Page, TemplateId, DestinationPage, Content);
  }
  static inline void SendPageView(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* Page, System_String* RefererPage, int32_t PageTypeId, System_String* PageTags, System_String* TemplateId, System_String* Content) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, System_String*, System_String*, int32_t, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, Page, RefererPage, PageTypeId, PageTags, TemplateId, Content);
  }
  static inline void SendPlayerDefeated(System_String* UserId, int32_t SectionId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId, ModdingAPI::Exposed::System::Guid RoundId, int32_t PlayerRoleId, int32_t PlayerWeaponId, int32_t EnemyRoleId, int32_t EnemyWeaponId, float LocationX, float LocationY, float LocationZ) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t, ModdingAPI::Exposed::System::Guid, int32_t, int32_t, int32_t, int32_t, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, SectionId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId, RoundId, PlayerRoleId, PlayerWeaponId, EnemyRoleId, EnemyWeaponId, LocationX, LocationY, LocationZ);
  }
  static inline void SendPlayerSessionEnd(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId, int32_t ExitStatusId) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId, ExitStatusId);
  }
  static inline void SendPlayerSessionPause(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, MultiplayerCorrelationId);
  }
  static inline void SendPlayerSessionResume(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId);
  }
  static inline void SendPlayerSessionStart(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId);
  }
  static inline void SendPlayerSpawned(System_String* UserId, int32_t SectionId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId, ModdingAPI::Exposed::System::Guid RoundId, int32_t PlayerRoleId, float LocationX, float LocationY, float LocationZ) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t, ModdingAPI::Exposed::System::Guid, int32_t, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, SectionId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId, RoundId, PlayerRoleId, LocationX, LocationY, LocationZ);
  }
  static inline void SendPuzzleSolved(System_String* UserId, int32_t SectionId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId, float TimeInSeconds) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, SectionId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId, TimeInSeconds);
  }
  static inline void SendSectionEnd(System_String* UserId, int32_t SectionId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId, int32_t ExitStatusId) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, SectionId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId, ExitStatusId);
  }
  static inline void SendSectionStart(System_String* UserId, int32_t SectionId, ModdingAPI::Exposed::System::Guid PlayerSessionId, System_String* MultiplayerCorrelationId, int32_t GameplayModeId, int32_t DifficultyLevelId) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::Guid, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, SectionId, PlayerSessionId, MultiplayerCorrelationId, GameplayModeId, DifficultyLevelId);
  }
  static inline void SendViewOffer(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, ModdingAPI::Exposed::System::Guid OfferGuid, ModdingAPI::Exposed::System::Guid ProductGuid) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, ModdingAPI::Exposed::System::Guid, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, OfferGuid, ProductGuid);
  }
  static inline void SendWildlifeBowHit(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId);
  }
  static inline void SendWildlifeRifleHit(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId);
  }
  static inline void SendWolfKill(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId);
  }
  static inline void SendWorldExploredUpdate(System_String* UserId, ModdingAPI::Exposed::System::Guid PlayerSessionId, float WorldExplorerPercent) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(UserId, PlayerSessionId, WorldExplorerPercent);
  }
};
}