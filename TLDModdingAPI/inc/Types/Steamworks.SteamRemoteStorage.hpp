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
#include "ModdingAPI::Exposed::Steamworks::SteamAPICall_t.hpp"
#include "ModdingAPI.Exposed.Steamworks.UGCFileWriteStreamHandle_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::UGCFileWriteStreamHandle_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::UGCHandle_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::AppId_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::CSteamID.hpp"
#include "ModdingAPI.Exposed.Steamworks.UGCHandle_t.hpp"
#include "ModdingAPI.Exposed.Steamworks.PublishedFileUpdateHandle_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::PublishedFileId_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t.hpp"


namespace ModdingAPI::Exposed::Steamworks {
struct __SteamRemoteStorage_Il2CppStaticFields {
};

struct __SteamRemoteStorage_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SteamRemoteStorage_Il2CppClass {
  Il2CppClass_1 _1;
  __SteamRemoteStorage_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SteamRemoteStorage_Il2CppVtbl vtbl;
};

class SteamRemoteStorage {
public:
  // Il2Cpp fields:
  __SteamRemoteStorage_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline bool FileWrite(System_String* pchFile, ModdingAPI::Exposed::System::Byte_array* pvData, int32_t cubData) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2815F00))(pchFile, pvData, cubData);
  }
  static inline int32_t FileRead(System_String* pchFile, ModdingAPI::Exposed::System::Byte_array* pvData, int32_t cubDataToRead) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2816210))(pchFile, pvData, cubDataToRead);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t FileWriteAsync(System_String* pchFile, ModdingAPI::Exposed::System::Byte_array* pvData, uint32_t cubData) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Byte_array*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2816510))(pchFile, pvData, cubData);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t FileReadAsync(System_String* pchFile, uint32_t nOffset, uint32_t cubToRead) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(System_String*, uint32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2816830))(pchFile, nOffset, cubToRead);
  }
  static inline bool FileReadAsyncComplete(ModdingAPI::Exposed::Steamworks::SteamAPICall_t hReadCall, ModdingAPI::Exposed::System::Byte_array* pvBuffer, uint32_t cubToRead) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::SteamAPICall_t, ModdingAPI::Exposed::System::Byte_array*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2816B50))(hReadCall, pvBuffer, cubToRead);
  }
  static inline bool FileForget(System_String* pchFile) {
    return reinterpret_cast<bool(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2816C40))(pchFile);
  }
  static inline bool FileDelete(System_String* pchFile) {
    return reinterpret_cast<bool(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2816F20))(pchFile);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t FileShare(System_String* pchFile) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2817200))(pchFile);
  }
  static inline bool SetSyncPlatforms(System_String* pchFile, int32_t eRemoteStoragePlatform) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2817500))(pchFile, eRemoteStoragePlatform);
  }
  static inline ModdingAPI::Exposed::Steamworks::UGCFileWriteStreamHandle_t FileWriteStreamOpen(System_String* pchFile) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::UGCFileWriteStreamHandle_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28177F0))(pchFile);
  }
  static inline bool FileWriteStreamWriteChunk(ModdingAPI::Exposed::Steamworks::UGCFileWriteStreamHandle_t writeHandle, ModdingAPI::Exposed::System::Byte_array* pvData, int32_t cubData) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCFileWriteStreamHandle_t, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2817AF0))(writeHandle, pvData, cubData);
  }
  static inline bool FileWriteStreamClose(ModdingAPI::Exposed::Steamworks::UGCFileWriteStreamHandle_t writeHandle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCFileWriteStreamHandle_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2817BE0))(writeHandle);
  }
  static inline bool FileWriteStreamCancel(ModdingAPI::Exposed::Steamworks::UGCFileWriteStreamHandle_t writeHandle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCFileWriteStreamHandle_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2817CA0))(writeHandle);
  }
  static inline bool FileExists(System_String* pchFile) {
    return reinterpret_cast<bool(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2817D60))(pchFile);
  }
  static inline bool FilePersisted(System_String* pchFile) {
    return reinterpret_cast<bool(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2818040))(pchFile);
  }
  static inline int32_t GetFileSize(System_String* pchFile) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2818320))(pchFile);
  }
  static inline int64_t GetFileTimestamp(System_String* pchFile) {
    return reinterpret_cast<int64_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2818600))(pchFile);
  }
  static inline int32_t GetSyncPlatforms(System_String* pchFile) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28188E0))(pchFile);
  }
  static inline int32_t GetFileCount() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2818BC0))();
  }
  static inline System_String* GetFileNameAndSize(int32_t iFile, int32_t pnFileSizeInBytes) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2818C70))(iFile, pnFileSizeInBytes);
  }
  static inline bool GetQuota(uint64_t pnTotalBytes, uint64_t puAvailableBytes) {
    return reinterpret_cast<bool(__fastcall*)(uint64_t, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2818D40))(pnTotalBytes, puAvailableBytes);
  }
  static inline bool IsCloudEnabledForAccount() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2818E10))();
  }
  static inline bool IsCloudEnabledForApp() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2818EC0))();
  }
  static inline void SetCloudEnabledForApp(bool bEnabled) {
    reinterpret_cast<void(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2818F70))(bEnabled);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t UGCDownload(ModdingAPI::Exposed::Steamworks::UGCHandle_t hContent, uint32_t unPriority) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCHandle_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2819030))(hContent, unPriority);
  }
  static inline bool GetUGCDownloadProgress(ModdingAPI::Exposed::Steamworks::UGCHandle_t hContent, int32_t pnBytesDownloaded, int32_t pnBytesExpected) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCHandle_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2819180))(hContent, pnBytesDownloaded, pnBytesExpected);
  }
  static inline bool GetUGCDetails(ModdingAPI::Exposed::Steamworks::UGCHandle_t hContent, ModdingAPI::Exposed::Steamworks::AppId_t pnAppID, System_String* ppchName, int32_t pnFileSizeInBytes, ModdingAPI::Exposed::Steamworks::CSteamID pSteamIDOwner) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCHandle_t, ModdingAPI::Exposed::Steamworks::AppId_t, System_String*, int32_t, ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2819260))(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
  }
  static inline int32_t UGCRead(ModdingAPI::Exposed::Steamworks::UGCHandle_t hContent, ModdingAPI::Exposed::System::Byte_array* pvData, int32_t cubDataToRead, uint32_t cOffset, int32_t eAction) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCHandle_t, ModdingAPI::Exposed::System::Byte_array*, int32_t, uint32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2819380))(hContent, pvData, cubDataToRead, cOffset, eAction);
  }
  static inline int32_t GetCachedUGCCount() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2819490))();
  }
  static inline ModdingAPI::Exposed::Steamworks::UGCHandle_t GetCachedUGCHandle(int32_t iCachedContent) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::UGCHandle_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2819540))(iCachedContent);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t PublishWorkshopFile(System_String* pchFile, System_String* pchPreviewFile, ModdingAPI::Exposed::Steamworks::AppId_t nConsumerAppId, System_String* pchTitle, System_String* pchDescription, int32_t eVisibility, ModdingAPI::Exposed::System::Collections::Generic::IList_T_* pTags, int32_t eWorkshopFileType) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(System_String*, System_String*, ModdingAPI::Exposed::Steamworks::AppId_t, System_String*, System_String*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2819680))(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
  }
  static inline ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t CreatePublishedFileUpdateRequest(ModdingAPI::Exposed::Steamworks::PublishedFileId_t unPublishedFileId) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2819D60))(unPublishedFileId);
  }
  static inline bool UpdatePublishedFileFile(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t updateHandle, System_String* pchFile) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2819EA0))(updateHandle, pchFile);
  }
  static inline bool UpdatePublishedFilePreviewFile(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t updateHandle, System_String* pchPreviewFile) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281A190))(updateHandle, pchPreviewFile);
  }
  static inline bool UpdatePublishedFileTitle(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t updateHandle, System_String* pchTitle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281A480))(updateHandle, pchTitle);
  }
  static inline bool UpdatePublishedFileDescription(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t updateHandle, System_String* pchDescription) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281A770))(updateHandle, pchDescription);
  }
  static inline bool UpdatePublishedFileVisibility(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t updateHandle, int32_t eVisibility) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281AA60))(updateHandle, eVisibility);
  }
  static inline bool UpdatePublishedFileTags(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t updateHandle, ModdingAPI::Exposed::System::Collections::Generic::IList_T_* pTags) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281AB30))(updateHandle, pTags);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t CommitPublishedFileUpdate(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t updateHandle) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281AD40))(updateHandle);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t GetPublishedFileDetails(ModdingAPI::Exposed::Steamworks::PublishedFileId_t unPublishedFileId, uint32_t unMaxSecondsOld) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281AE80))(unPublishedFileId, unMaxSecondsOld);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t DeletePublishedFile(ModdingAPI::Exposed::Steamworks::PublishedFileId_t unPublishedFileId) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281AFD0))(unPublishedFileId);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t EnumerateUserPublishedFiles(uint32_t unStartIndex) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281B110))(unStartIndex);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t SubscribePublishedFile(ModdingAPI::Exposed::Steamworks::PublishedFileId_t unPublishedFileId) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281B250))(unPublishedFileId);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t EnumerateUserSubscribedFiles(uint32_t unStartIndex) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281B390))(unStartIndex);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t UnsubscribePublishedFile(ModdingAPI::Exposed::Steamworks::PublishedFileId_t unPublishedFileId) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281B4D0))(unPublishedFileId);
  }
  static inline bool UpdatePublishedFileSetChangeDescription(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t updateHandle, System_String* pchChangeDescription) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281B610))(updateHandle, pchChangeDescription);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t GetPublishedItemVoteDetails(ModdingAPI::Exposed::Steamworks::PublishedFileId_t unPublishedFileId) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281B900))(unPublishedFileId);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t UpdateUserPublishedItemVote(ModdingAPI::Exposed::Steamworks::PublishedFileId_t unPublishedFileId, bool bVoteUp) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281BA40))(unPublishedFileId, bVoteUp);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t GetUserPublishedItemVoteDetails(ModdingAPI::Exposed::Steamworks::PublishedFileId_t unPublishedFileId) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281BB90))(unPublishedFileId);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t EnumerateUserSharedWorkshopFiles(ModdingAPI::Exposed::Steamworks::CSteamID steamId, uint32_t unStartIndex, ModdingAPI::Exposed::System::Collections::Generic::IList_T_* pRequiredTags, ModdingAPI::Exposed::System::Collections::Generic::IList_T_* pExcludedTags) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, uint32_t, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281BCD0))(steamId, unStartIndex, pRequiredTags, pExcludedTags);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t PublishVideo(int32_t eVideoProvider, System_String* pchVideoAccount, System_String* pchVideoIdentifier, System_String* pchPreviewFile, ModdingAPI::Exposed::Steamworks::AppId_t nConsumerAppId, System_String* pchTitle, System_String* pchDescription, int32_t eVisibility, ModdingAPI::Exposed::System::Collections::Generic::IList_T_* pTags) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(int32_t, System_String*, System_String*, System_String*, ModdingAPI::Exposed::Steamworks::AppId_t, System_String*, System_String*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281BFF0))(eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t SetUserPublishedFileAction(ModdingAPI::Exposed::Steamworks::PublishedFileId_t unPublishedFileId, int32_t eAction) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281C820))(unPublishedFileId, eAction);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t EnumeratePublishedFilesByUserAction(int32_t eAction, uint32_t unStartIndex) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(int32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281C970))(eAction, unStartIndex);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t EnumeratePublishedWorkshopFiles(int32_t eEnumerationType, uint32_t unStartIndex, uint32_t unCount, uint32_t unDays, ModdingAPI::Exposed::System::Collections::Generic::IList_T_* pTags, ModdingAPI::Exposed::System::Collections::Generic::IList_T_* pUserTags) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(int32_t, uint32_t, uint32_t, uint32_t, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281CAC0))(eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t UGCDownloadToLocation(ModdingAPI::Exposed::Steamworks::UGCHandle_t hContent, System_String* pchLocation, uint32_t unPriority) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCHandle_t, System_String*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281CE10))(hContent, pchLocation, unPriority);
  }
};
}