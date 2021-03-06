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
#include "ModdingAPI.Exposed.Steamworks.SteamAPICall_t.hpp"
#include "ModdingAPI.Exposed.Steamworks.CSteamID.hpp"
#include "ModdingAPI::Exposed::Steamworks::CSteamID.hpp"
#include "ModdingAPI::Exposed::Steamworks::FriendGameInfo_t.hpp"
#include "ModdingAPI.Exposed.Steamworks.FriendsGroupID_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::FriendsGroupID_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::AppId_t.hpp"
#include "ModdingAPI.Exposed.Steamworks.AppId_t.hpp"


namespace ModdingAPI::Exposed::Steamworks {
struct __SteamFriends_Il2CppStaticFields {
};

struct __SteamFriends_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SteamFriends_Il2CppClass {
  Il2CppClass_1 _1;
  __SteamFriends_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SteamFriends_Il2CppVtbl vtbl;
};

class SteamFriends {
public:
  // Il2Cpp fields:
  __SteamFriends_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline System_String* GetPersonaName() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D8720))();
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t SetPersonaName(System_String* pchPersonaName) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D87D0))(pchPersonaName);
  }
  static inline int32_t GetPersonaState() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D8AD0))();
  }
  static inline int32_t GetFriendCount(int32_t iFriendFlags) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D8B80))(iFriendFlags);
  }
  static inline ModdingAPI::Exposed::Steamworks::CSteamID GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::CSteamID(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D8C30))(iFriend, iFriendFlags);
  }
  static inline int32_t GetFriendRelationship(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D8D80))(steamIDFriend);
  }
  static inline int32_t GetFriendPersonaState(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D8E40))(steamIDFriend);
  }
  static inline System_String* GetFriendPersonaName(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D8F00))(steamIDFriend);
  }
  static inline bool GetFriendGamePlayed(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend, ModdingAPI::Exposed::Steamworks::FriendGameInfo_t pFriendGameInfo) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, ModdingAPI::Exposed::Steamworks::FriendGameInfo_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D8FC0))(steamIDFriend, pFriendGameInfo);
  }
  static inline System_String* GetFriendPersonaNameHistory(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend, int32_t iPersonaName) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9090))(steamIDFriend, iPersonaName);
  }
  static inline int32_t GetFriendSteamLevel(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9160))(steamIDFriend);
  }
  static inline System_String* GetPlayerNickname(ModdingAPI::Exposed::Steamworks::CSteamID steamIDPlayer) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9220))(steamIDPlayer);
  }
  static inline int32_t GetFriendsGroupCount() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D92E0))();
  }
  static inline ModdingAPI::Exposed::Steamworks::FriendsGroupID_t GetFriendsGroupIDByIndex(int32_t iFG) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::FriendsGroupID_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9390))(iFG);
  }
  static inline System_String* GetFriendsGroupName(ModdingAPI::Exposed::Steamworks::FriendsGroupID_t friendsGroupID) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Steamworks::FriendsGroupID_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D94D0))(friendsGroupID);
  }
  static inline int32_t GetFriendsGroupMembersCount(ModdingAPI::Exposed::Steamworks::FriendsGroupID_t friendsGroupID) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::FriendsGroupID_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9590))(friendsGroupID);
  }
  static inline void GetFriendsGroupMembersList(ModdingAPI::Exposed::Steamworks::FriendsGroupID_t friendsGroupID, ModdingAPI::Exposed::Steamworks::CSteamID_array* pOutSteamIDMembers, int32_t nMembersCount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::FriendsGroupID_t, ModdingAPI::Exposed::Steamworks::CSteamID_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9650))(friendsGroupID, pOutSteamIDMembers, nMembersCount);
  }
  static inline bool HasFriend(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend, int32_t iFriendFlags) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9730))(steamIDFriend, iFriendFlags);
  }
  static inline int32_t GetClanCount() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9800))();
  }
  static inline ModdingAPI::Exposed::Steamworks::CSteamID GetClanByIndex(int32_t iClan) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::CSteamID(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D98B0))(iClan);
  }
  static inline System_String* GetClanName(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D99F0))(steamIDClan);
  }
  static inline System_String* GetClanTag(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9AB0))(steamIDClan);
  }
  static inline bool GetClanActivityCounts(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan, int32_t pnOnline, int32_t pnInGame, int32_t pnChatting) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9B70))(steamIDClan, pnOnline, pnInGame, pnChatting);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t DownloadClanActivityCounts(ModdingAPI::Exposed::Steamworks::CSteamID_array* psteamIDClans, int32_t cClansToRequest) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9C60))(psteamIDClans, cClansToRequest);
  }
  static inline int32_t GetFriendCountFromSource(ModdingAPI::Exposed::Steamworks::CSteamID steamIDSource) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9DC0))(steamIDSource);
  }
  static inline ModdingAPI::Exposed::Steamworks::CSteamID GetFriendFromSourceByIndex(ModdingAPI::Exposed::Steamworks::CSteamID steamIDSource, int32_t iFriend) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::CSteamID(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9E80))(steamIDSource, iFriend);
  }
  static inline bool IsUserInSource(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser, ModdingAPI::Exposed::Steamworks::CSteamID steamIDSource) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D9FD0))(steamIDUser, steamIDSource);
  }
  static inline void SetInGameVoiceSpeaking(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser, bool bSpeaking) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DA0A0))(steamIDUser, bSpeaking);
  }
  static inline void ActivateGameOverlay(System_String* pchDialog) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DA170))(pchDialog);
  }
  static inline void ActivateGameOverlayToUser(System_String* pchDialog, ModdingAPI::Exposed::Steamworks::CSteamID steamID) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DA430))(pchDialog, steamID);
  }
  static inline void ActivateGameOverlayToWebPage(System_String* pchURL, int32_t eMode) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DA710))(pchURL, eMode);
  }
  static inline void ActivateGameOverlayToStore(ModdingAPI::Exposed::Steamworks::AppId_t nAppID, int32_t eFlag) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DA9F0))(nAppID, eFlag);
  }
  static inline void SetPlayedWith(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUserPlayedWith) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DAAB0))(steamIDUserPlayedWith);
  }
  static inline void ActivateGameOverlayInviteDialog(ModdingAPI::Exposed::Steamworks::CSteamID steamIDLobby) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DAB70))(steamIDLobby);
  }
  static inline int32_t GetSmallFriendAvatar(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DAC30))(steamIDFriend);
  }
  static inline int32_t GetMediumFriendAvatar(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DACF0))(steamIDFriend);
  }
  static inline int32_t GetLargeFriendAvatar(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DADB0))(steamIDFriend);
  }
  static inline bool RequestUserInformation(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser, bool bRequireNameOnly) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DAE70))(steamIDUser, bRequireNameOnly);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t RequestClanOfficerList(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DAF40))(steamIDClan);
  }
  static inline ModdingAPI::Exposed::Steamworks::CSteamID GetClanOwner(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::CSteamID(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DB080))(steamIDClan);
  }
  static inline int32_t GetClanOfficerCount(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DB1C0))(steamIDClan);
  }
  static inline ModdingAPI::Exposed::Steamworks::CSteamID GetClanOfficerByIndex(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan, int32_t iOfficer) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::CSteamID(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DB280))(steamIDClan, iOfficer);
  }
  static inline uint32_t GetUserRestrictions() {
    return reinterpret_cast<uint32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DB3D0))();
  }
  static inline bool SetRichPresence(System_String* pchKey, System_String* pchValue) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DB480))(pchKey, pchValue);
  }
  static inline void ClearRichPresence() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DB8D0))();
  }
  static inline System_String* GetFriendRichPresence(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend, System_String* pchKey) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DB980))(steamIDFriend, pchKey);
  }
  static inline int32_t GetFriendRichPresenceKeyCount(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DBC70))(steamIDFriend);
  }
  static inline System_String* GetFriendRichPresenceKeyByIndex(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend, int32_t iKey) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DBD30))(steamIDFriend, iKey);
  }
  static inline void RequestFriendRichPresence(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DBE00))(steamIDFriend);
  }
  static inline bool InviteUserToGame(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend, System_String* pchConnectString) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DBEC0))(steamIDFriend, pchConnectString);
  }
  static inline int32_t GetCoplayFriendCount() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DC1B0))();
  }
  static inline ModdingAPI::Exposed::Steamworks::CSteamID GetCoplayFriend(int32_t iCoplayFriend) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::CSteamID(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DC260))(iCoplayFriend);
  }
  static inline int32_t GetFriendCoplayTime(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DC3A0))(steamIDFriend);
  }
  static inline ModdingAPI::Exposed::Steamworks::AppId_t GetFriendCoplayGame(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::AppId_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DC460))(steamIDFriend);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t JoinClanChatRoom(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DC5A0))(steamIDClan);
  }
  static inline bool LeaveClanChatRoom(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DC6E0))(steamIDClan);
  }
  static inline int32_t GetClanChatMemberCount(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DC7A0))(steamIDClan);
  }
  static inline ModdingAPI::Exposed::Steamworks::CSteamID GetChatMemberByIndex(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan, int32_t iUser) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::CSteamID(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DC860))(steamIDClan, iUser);
  }
  static inline bool SendClanChatMessage(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClanChat, System_String* pchText) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DC9B0))(steamIDClanChat, pchText);
  }
  static inline int32_t GetClanChatMessage(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClanChat, int32_t iMessage, System_String* prgchText, int32_t cchTextMax, int32_t peChatEntryType, ModdingAPI::Exposed::Steamworks::CSteamID psteamidChatter) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, int32_t, System_String*, int32_t, int32_t, ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DCCA0))(steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, psteamidChatter);
  }
  static inline bool IsClanChatAdmin(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClanChat, ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DCE80))(steamIDClanChat, steamIDUser);
  }
  static inline bool IsClanChatWindowOpenInSteam(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClanChat) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DCF50))(steamIDClanChat);
  }
  static inline bool OpenClanChatWindowInSteam(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClanChat) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DD010))(steamIDClanChat);
  }
  static inline bool CloseClanChatWindowInSteam(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClanChat) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DD0D0))(steamIDClanChat);
  }
  static inline bool SetListenForFriendsMessages(bool bInterceptEnabled) {
    return reinterpret_cast<bool(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DD190))(bInterceptEnabled);
  }
  static inline bool ReplyToFriendMessage(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend, System_String* pchMsgToSend) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DD250))(steamIDFriend, pchMsgToSend);
  }
  static inline int32_t GetFriendMessage(ModdingAPI::Exposed::Steamworks::CSteamID steamIDFriend, int32_t iMessageID, System_String* pvData, int32_t cubData, int32_t peChatEntryType) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, int32_t, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DD540))(steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t GetFollowerCount(ModdingAPI::Exposed::Steamworks::CSteamID steamID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DD710))(steamID);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t IsFollowing(ModdingAPI::Exposed::Steamworks::CSteamID steamID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DD850))(steamID);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t EnumerateFollowingList(uint32_t unStartIndex) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DD990))(unStartIndex);
  }
  static inline bool IsClanPublic(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DDAD0))(steamIDClan);
  }
  static inline bool IsClanOfficialGameGroup(ModdingAPI::Exposed::Steamworks::CSteamID steamIDClan) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DDB90))(steamIDClan);
  }
  static inline int32_t GetNumChatsWithUnreadPriorityMessages() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DDC50))();
  }
};
}