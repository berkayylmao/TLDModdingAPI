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
#include "ModdingAPI::Exposed::Steamworks::AppId_t.hpp"
#include "ModdingAPI.Exposed.Steamworks.CSteamID.hpp"
#include "ModdingAPI.Exposed.Steamworks.SteamAPICall_t.hpp"


namespace ModdingAPI::Exposed::Steamworks {
struct __SteamGameServerApps_Il2CppStaticFields {
};

struct __SteamGameServerApps_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SteamGameServerApps_Il2CppClass {
  Il2CppClass_1 _1;
  __SteamGameServerApps_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SteamGameServerApps_Il2CppVtbl vtbl;
};

class SteamGameServerApps {
public:
  // Il2Cpp fields:
  __SteamGameServerApps_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline bool BIsSubscribed() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3210))();
  }
  static inline bool BIsLowViolence() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3230))();
  }
  static inline bool BIsCybercafe() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3250))();
  }
  static inline bool BIsVACBanned() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3270))();
  }
  static inline System_String* GetCurrentGameLanguage() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3290))();
  }
  static inline System_String* GetAvailableGameLanguages() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E32C0))();
  }
  static inline bool BIsSubscribedApp(ModdingAPI::Exposed::Steamworks::AppId_t appID) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E32F0))(appID);
  }
  static inline bool BIsDlcInstalled(ModdingAPI::Exposed::Steamworks::AppId_t appID) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3320))(appID);
  }
  static inline uint32_t GetEarliestPurchaseUnixTime(ModdingAPI::Exposed::Steamworks::AppId_t nAppID) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3350))(nAppID);
  }
  static inline bool BIsSubscribedFromFreeWeekend() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3380))();
  }
  static inline int32_t GetDLCCount() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E33A0))();
  }
  static inline bool BGetDLCDataByIndex(int32_t iDLC, ModdingAPI::Exposed::Steamworks::AppId_t pAppID, bool pbAvailable, System_String* pchName, int32_t cchNameBufferSize) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, ModdingAPI::Exposed::Steamworks::AppId_t, bool, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E33C0))(iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
  }
  static inline void InstallDLC(ModdingAPI::Exposed::Steamworks::AppId_t nAppID) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3510))(nAppID);
  }
  static inline void UninstallDLC(ModdingAPI::Exposed::Steamworks::AppId_t nAppID) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3540))(nAppID);
  }
  static inline void RequestAppProofOfPurchaseKey(ModdingAPI::Exposed::Steamworks::AppId_t nAppID) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3570))(nAppID);
  }
  static inline bool GetCurrentBetaName(System_String* pchName, int32_t cchNameBufferSize) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E35A0))(pchName, cchNameBufferSize);
  }
  static inline bool MarkContentCorrupt(bool bMissingFilesOnly) {
    return reinterpret_cast<bool(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E36C0))(bMissingFilesOnly);
  }
  static inline uint32_t GetInstalledDepots(ModdingAPI::Exposed::Steamworks::AppId_t appID, ModdingAPI::Exposed::Steamworks::DepotId_t_array* pvecDepots, uint32_t cMaxDepots) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t, ModdingAPI::Exposed::Steamworks::DepotId_t_array*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E36F0))(appID, pvecDepots, cMaxDepots);
  }
  static inline uint32_t GetAppInstallDir(ModdingAPI::Exposed::Steamworks::AppId_t appID, System_String* pchFolder, uint32_t cchFolderBufferSize) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t, System_String*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3740))(appID, pchFolder, cchFolderBufferSize);
  }
  static inline bool BIsAppInstalled(ModdingAPI::Exposed::Steamworks::AppId_t appID) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3870))(appID);
  }
  static inline ModdingAPI::Exposed::Steamworks::CSteamID GetAppOwner() {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::CSteamID(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E38A0))();
  }
  static inline System_String* GetLaunchQueryParam(System_String* pchKey) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3950))(pchKey);
  }
  static inline bool GetDlcDownloadProgress(ModdingAPI::Exposed::Steamworks::AppId_t nAppID, uint64_t punBytesDownloaded, uint64_t punBytesTotal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t, uint64_t, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3B60))(nAppID, punBytesDownloaded, punBytesTotal);
  }
  static inline int32_t GetAppBuildId() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3BB0))();
  }
  static inline void RequestAllProofOfPurchaseKeys() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3BD0))();
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t GetFileDetails(System_String* pszFileName) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3BF0))(pszFileName);
  }
  static inline int32_t GetLaunchCommandLine(System_String* pszCommandLine, int32_t cubCommandLine) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3E10))(pszCommandLine, cubCommandLine);
  }
  static inline bool BIsSubscribedFromFamilySharing() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E3F30))();
  }
};
}