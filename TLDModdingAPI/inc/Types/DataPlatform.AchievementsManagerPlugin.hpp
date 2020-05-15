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


namespace ModdingAPI::Exposed::DataPlatform {
struct __AchievementsManagerPlugin_Il2CppStaticFields {
};

struct __AchievementsManagerPlugin_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AchievementsManagerPlugin_Il2CppClass {
  Il2CppClass_1 _1;
  __AchievementsManagerPlugin_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AchievementsManagerPlugin_Il2CppVtbl vtbl;
};

class AchievementsManagerPlugin {
public:
  // Il2Cpp fields:
  __AchievementsManagerPlugin_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::AchievementsManagerPlugin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static methods:
  static inline bool AchievementsManager_QueryAchievementsForTitleIdAsync(uint32_t titleId, System_String* strXboxUserId, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback* callback, intptr_t userData) {
    return reinterpret_cast<bool(__fastcall*)(uint32_t, System_String*, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F81F80))(titleId, strXboxUserId, callback, userData);
  }
  static inline bool AchievementsManager_GetAchievementsForTitleIdAsync(int32_t userId, System_String* strXboxUserId, uint32_t titleId, int32_t type, bool unlockedOnly, int32_t orderBy, uint32_t skipItems, uint32_t maxItems, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback* callback, intptr_t userData) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, System_String*, uint32_t, int32_t, bool, int32_t, uint32_t, uint32_t, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F82060))(userId, strXboxUserId, titleId, type, unlockedOnly, orderBy, skipItems, maxItems, callback, userData);
  }
  static inline bool AchievementsManager_GetAchievementAsync(int32_t userId, System_String* xboxUserId, System_String* serviceConfigurationId, System_String* achievementId, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback* callback, intptr_t userData) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, System_String*, System_String*, System_String*, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F82190))(userId, xboxUserId, serviceConfigurationId, achievementId, callback, userData);
  }
  static inline bool AchievementsManager_LaunchAchievementsUIAsync(uint32_t userId, uint32_t titleId, ModdingAPI::Exposed::UnityAOT::GenericActionCallback* callback, intptr_t userData) {
    return reinterpret_cast<bool(__fastcall*)(uint32_t, uint32_t, ModdingAPI::Exposed::UnityAOT::GenericActionCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F822A0))(userId, titleId, callback, userData);
  }
  static inline void AchievementsManager_RegisterForUnlockNotifications(ModdingAPI::Exposed::UnityAOT::ObjectResultCallback* callback, intptr_t userData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityAOT::ObjectResultCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F82370))(callback, userData);
  }
  static inline void AchievementsManager_UnRegisterForUnlockNotifications() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F82420))();
  }
  static inline bool AchievementsManager_UpdateAchievementAsync(int32_t userId, System_String* xboxUserId, System_String* achievementId, uint32_t percentComplete, ModdingAPI::Exposed::UnityAOT::GenericActionCallback* callback, intptr_t userData) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, System_String*, System_String*, uint32_t, ModdingAPI::Exposed::UnityAOT::GenericActionCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F824B0))(userId, xboxUserId, achievementId, percentComplete, callback, userData);
  }
  static inline bool AchievementsManager_UpdateAchievementFullAsync(int32_t userId, System_String* xboxUserId, uint32_t titleId, System_String* serviceConfigurationId, System_String* achievementId, uint32_t percentComplete, ModdingAPI::Exposed::UnityAOT::GenericActionCallback* callback, intptr_t userData) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, System_String*, uint32_t, System_String*, System_String*, uint32_t, ModdingAPI::Exposed::UnityAOT::GenericActionCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F825B0))(userId, xboxUserId, titleId, serviceConfigurationId, achievementId, percentComplete, callback, userData);
  }
};
}