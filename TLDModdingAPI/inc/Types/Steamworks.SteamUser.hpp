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
#include "ModdingAPI.Exposed.Steamworks.HSteamUser.hpp"
#include "ModdingAPI.Exposed.Steamworks.CSteamID.hpp"
#include "ModdingAPI::Exposed::Steamworks::CSteamID.hpp"
#include "ModdingAPI::Exposed::Steamworks::CGameID.hpp"
#include "ModdingAPI.Exposed.Steamworks.HAuthTicket.hpp"
#include "ModdingAPI::Exposed::Steamworks::HAuthTicket.hpp"
#include "ModdingAPI::Exposed::Steamworks::AppId_t.hpp"
#include "ModdingAPI.Exposed.Steamworks.SteamAPICall_t.hpp"


namespace ModdingAPI::Exposed::Steamworks {
struct __SteamUser_Il2CppStaticFields {
};

struct __SteamUser_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SteamUser_Il2CppClass {
  Il2CppClass_1 _1;
  __SteamUser_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SteamUser_Il2CppVtbl vtbl;
};

class SteamUser {
public:
  // Il2Cpp fields:
  __SteamUser_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline ModdingAPI::Exposed::Steamworks::HSteamUser GetHSteamUser() {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::HSteamUser(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x28234E0))();
  }
  static inline bool BLoggedOn() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823590))();
  }
  static inline ModdingAPI::Exposed::Steamworks::CSteamID GetSteamID() {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::CSteamID(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823640))();
  }
  static inline int32_t InitiateGameConnection(ModdingAPI::Exposed::System::Byte_array* pAuthBlob, int32_t cbMaxAuthBlob, ModdingAPI::Exposed::Steamworks::CSteamID steamIDGameServer, uint32_t unIPServer, uint16_t usPortServer, bool bSecure) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t, ModdingAPI::Exposed::Steamworks::CSteamID, uint32_t, uint16_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823770))(pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
  }
  static inline void TerminateGameConnection(uint32_t unIPServer, uint16_t usPortServer) {
    reinterpret_cast<void(__fastcall*)(uint32_t, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823890))(unIPServer, usPortServer);
  }
  static inline void TrackAppUsageEvent(ModdingAPI::Exposed::Steamworks::CGameID gameID, int32_t eAppUsageEvent, System_String* pchExtraInfo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::CGameID, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823960))(gameID, eAppUsageEvent, pchExtraInfo);
  }
  static inline bool GetUserDataFolder(System_String* pchBuffer, int32_t cubBuffer) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823C40))(pchBuffer, cubBuffer);
  }
  static inline void StartVoiceRecording() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823DF0))();
  }
  static inline void StopVoiceRecording() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823EA0))();
  }
  static inline int32_t GetAvailableVoice(uint32_t pcbCompressed) {
    return reinterpret_cast<int32_t(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823F50))(pcbCompressed);
  }
  static inline int32_t GetVoice(bool bWantCompressed, ModdingAPI::Exposed::System::Byte_array* pDestBuffer, uint32_t cbDestBufferSize, uint32_t nBytesWritten) {
    return reinterpret_cast<int32_t(__fastcall*)(bool, ModdingAPI::Exposed::System::Byte_array*, uint32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2824070))(bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten);
  }
  static inline int32_t DecompressVoice(ModdingAPI::Exposed::System::Byte_array* pCompressed, uint32_t cbCompressed, ModdingAPI::Exposed::System::Byte_array* pDestBuffer, uint32_t cbDestBufferSize, uint32_t nBytesWritten, uint32_t nDesiredSampleRate) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, uint32_t, ModdingAPI::Exposed::System::Byte_array*, uint32_t, uint32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28241F0))(pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
  }
  static inline uint32_t GetVoiceOptimalSampleRate() {
    return reinterpret_cast<uint32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2824310))();
  }
  static inline ModdingAPI::Exposed::Steamworks::HAuthTicket GetAuthSessionTicket(ModdingAPI::Exposed::System::Byte_array* pTicket, int32_t cbMaxTicket, uint32_t pcbTicket) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::HAuthTicket(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28243C0))(pTicket, cbMaxTicket, pcbTicket);
  }
  static inline int32_t BeginAuthSession(ModdingAPI::Exposed::System::Byte_array* pAuthTicket, int32_t cbAuthTicket, ModdingAPI::Exposed::Steamworks::CSteamID steamID) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t, ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2824530))(pAuthTicket, cbAuthTicket, steamID);
  }
  static inline void EndAuthSession(ModdingAPI::Exposed::Steamworks::CSteamID steamID) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2824610))(steamID);
  }
  static inline void CancelAuthTicket(ModdingAPI::Exposed::Steamworks::HAuthTicket hAuthTicket) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::HAuthTicket)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28246D0))(hAuthTicket);
  }
  static inline int32_t UserHasLicenseForApp(ModdingAPI::Exposed::Steamworks::CSteamID steamID, ModdingAPI::Exposed::Steamworks::AppId_t appID) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, ModdingAPI::Exposed::Steamworks::AppId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2824780))(steamID, appID);
  }
  static inline bool BIsBehindNAT() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2824850))();
  }
  static inline void AdvertiseGame(ModdingAPI::Exposed::Steamworks::CSteamID steamIDGameServer, uint32_t unIPServer, uint16_t usPortServer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, uint32_t, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2824900))(steamIDGameServer, unIPServer, usPortServer);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t RequestEncryptedAppTicket(ModdingAPI::Exposed::System::Byte_array* pDataToInclude, int32_t cbDataToInclude) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28249E0))(pDataToInclude, cbDataToInclude);
  }
  static inline bool GetEncryptedAppTicket(ModdingAPI::Exposed::System::Byte_array* pTicket, int32_t cbMaxTicket, uint32_t pcbTicket) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2824B40))(pTicket, cbMaxTicket, pcbTicket);
  }
  static inline int32_t GetGameBadgeLevel(int32_t nSeries, bool bFoil) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2824C20))(nSeries, bFoil);
  }
  static inline int32_t GetPlayerSteamLevel() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2824CF0))();
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t RequestStoreAuthURL(System_String* pchRedirectURL) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2824DA0))(pchRedirectURL);
  }
  static inline bool BIsPhoneVerified() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x28250A0))();
  }
  static inline bool BIsTwoFactorEnabled() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2825150))();
  }
  static inline bool BIsPhoneIdentifying() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2825200))();
  }
  static inline bool BIsPhoneRequiringVerification() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x28252B0))();
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t GetMarketEligibility() {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2825360))();
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t GetDurationControl() {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2825490))();
  }
};
}