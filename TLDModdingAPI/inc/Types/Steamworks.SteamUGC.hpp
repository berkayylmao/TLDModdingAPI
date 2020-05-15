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
#include "ModdingAPI.Exposed.Steamworks.UGCQueryHandle_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::AccountID_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::AppId_t.hpp"
#include "ModdingAPI.Exposed.Steamworks.SteamAPICall_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::SteamUGCDetails_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::PublishedFileId_t.hpp"
#include "ModdingAPI.Exposed.Steamworks.UGCUpdateHandle_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::DepotId_t.hpp"


namespace ModdingAPI::Exposed::Steamworks {
struct __SteamUGC_Il2CppStaticFields {
};

struct __SteamUGC_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SteamUGC_Il2CppClass {
  Il2CppClass_1 _1;
  __SteamUGC_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SteamUGC_Il2CppVtbl vtbl;
};

class SteamUGC {
public:
  // Il2Cpp fields:
  __SteamUGC_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t CreateQueryUserUGCRequest(ModdingAPI::Exposed::Steamworks::AccountID_t unAccountID, int32_t eListType, int32_t eMatchingUGCType, int32_t eSortOrder, ModdingAPI::Exposed::Steamworks::AppId_t nCreatorAppID, ModdingAPI::Exposed::Steamworks::AppId_t nConsumerAppID, uint32_t unPage) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::AccountID_t, int32_t, int32_t, int32_t, ModdingAPI::Exposed::Steamworks::AppId_t, ModdingAPI::Exposed::Steamworks::AppId_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281E240))(unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
  }
  static inline ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t CreateQueryAllUGCRequest(int32_t eQueryType, int32_t eMatchingeMatchingUGCTypeFileType, ModdingAPI::Exposed::Steamworks::AppId_t nCreatorAppID, ModdingAPI::Exposed::Steamworks::AppId_t nConsumerAppID, uint32_t unPage) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t(__fastcall*)(int32_t, int32_t, ModdingAPI::Exposed::Steamworks::AppId_t, ModdingAPI::Exposed::Steamworks::AppId_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281E350))(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
  }
  static inline ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t CreateQueryAllUGCRequest(int32_t eQueryType, int32_t eMatchingeMatchingUGCTypeFileType, ModdingAPI::Exposed::Steamworks::AppId_t nCreatorAppID, ModdingAPI::Exposed::Steamworks::AppId_t nConsumerAppID, System_String* pchCursor) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t(__fastcall*)(int32_t, int32_t, ModdingAPI::Exposed::Steamworks::AppId_t, ModdingAPI::Exposed::Steamworks::AppId_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281E450))(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
  }
  static inline ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t CreateQueryUGCDetailsRequest(ModdingAPI::Exposed::Steamworks::PublishedFileId_t_array* pvecPublishedFileID, uint32_t unNumPublishedFileIDs) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t_array*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281E6B0))(pvecPublishedFileID, unNumPublishedFileIDs);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t SendQueryUGCRequest(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281E780))(handle);
  }
  static inline bool GetQueryUGCResult(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t index, ModdingAPI::Exposed::Steamworks::SteamUGCDetails_t pDetails) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t, ModdingAPI::Exposed::Steamworks::SteamUGCDetails_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281E830))(handle, index, pDetails);
  }
  static inline bool GetQueryUGCPreviewURL(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t index, System_String* pchURL, uint32_t cchURLSize) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t, System_String*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281E880))(handle, index, pchURL, cchURLSize);
  }
  static inline bool GetQueryUGCMetadata(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t index, System_String* pchMetadata, uint32_t cchMetadatasize) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t, System_String*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281E9B0))(handle, index, pchMetadata, cchMetadatasize);
  }
  static inline bool GetQueryUGCChildren(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t index, ModdingAPI::Exposed::Steamworks::PublishedFileId_t_array* pvecPublishedFileID, uint32_t cMaxEntries) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t, ModdingAPI::Exposed::Steamworks::PublishedFileId_t_array*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281EAE0))(handle, index, pvecPublishedFileID, cMaxEntries);
  }
  static inline bool GetQueryUGCStatistic(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t index, int32_t eStatType, uint64_t pStatValue) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t, int32_t, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281EB40))(handle, index, eStatType, pStatValue);
  }
  static inline uint32_t GetQueryUGCNumAdditionalPreviews(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t index) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281EBB0))(handle, index);
  }
  static inline bool GetQueryUGCAdditionalPreview(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t index, uint32_t previewIndex, System_String* pchURLOrVideoID, uint32_t cchURLSize, System_String* pchOriginalFileName, uint32_t cchOriginalFileNameSize, int32_t pPreviewType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t, System_String*, uint32_t, System_String*, uint32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281EBF0))(handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
  }
  static inline uint32_t GetQueryUGCNumKeyValueTags(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t index) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281EDB0))(handle, index);
  }
  static inline bool GetQueryUGCKeyValueTag(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t index, uint32_t keyValueTagIndex, System_String* pchKey, uint32_t cchKeySize, System_String* pchValue, uint32_t cchValueSize) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t, uint32_t, System_String*, uint32_t, System_String*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281EDF0))(handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
  }
  static inline bool GetQueryUGCKeyValueTag(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t index, System_String* pchKey, System_String* pchValue, uint32_t cchValueSize) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t, System_String*, System_String*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281EFA0))(handle, index, pchKey, pchValue, cchValueSize);
  }
  static inline bool ReleaseQueryUGCRequest(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281F240))(handle);
  }
  static inline bool AddRequiredTag(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, System_String* pTagName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281F270))(handle, pTagName);
  }
  static inline bool AddExcludedTag(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, System_String* pTagName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281F490))(handle, pTagName);
  }
  static inline bool SetReturnOnlyIDs(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, bool bReturnOnlyIDs) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281F6B0))(handle, bReturnOnlyIDs);
  }
  static inline bool SetReturnKeyValueTags(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, bool bReturnKeyValueTags) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281F6F0))(handle, bReturnKeyValueTags);
  }
  static inline bool SetReturnLongDescription(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, bool bReturnLongDescription) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281F730))(handle, bReturnLongDescription);
  }
  static inline bool SetReturnMetadata(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, bool bReturnMetadata) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281F770))(handle, bReturnMetadata);
  }
  static inline bool SetReturnChildren(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, bool bReturnChildren) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281F7B0))(handle, bReturnChildren);
  }
  static inline bool SetReturnAdditionalPreviews(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, bool bReturnAdditionalPreviews) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281F7F0))(handle, bReturnAdditionalPreviews);
  }
  static inline bool SetReturnTotalOnly(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, bool bReturnTotalOnly) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281F830))(handle, bReturnTotalOnly);
  }
  static inline bool SetReturnPlaytimeStats(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t unDays) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281F870))(handle, unDays);
  }
  static inline bool SetLanguage(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, System_String* pchLanguage) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281F8B0))(handle, pchLanguage);
  }
  static inline bool SetAllowCachedResponse(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t unMaxAgeSeconds) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281FAD0))(handle, unMaxAgeSeconds);
  }
  static inline bool SetCloudFileNameFilter(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, System_String* pMatchCloudFileName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281FB10))(handle, pMatchCloudFileName);
  }
  static inline bool SetMatchAnyTag(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, bool bMatchAnyTag) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281FD30))(handle, bMatchAnyTag);
  }
  static inline bool SetSearchText(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, System_String* pSearchText) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281FD70))(handle, pSearchText);
  }
  static inline bool SetRankedByTrendDays(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, uint32_t unDays) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281FF90))(handle, unDays);
  }
  static inline bool AddRequiredKeyValueTag(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t handle, System_String* pKey, System_String* pValue) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCQueryHandle_t, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x281FFD0))(handle, pKey, pValue);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t RequestUGCDetails(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID, uint32_t unMaxAgeSeconds) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2820310))(nPublishedFileID, unMaxAgeSeconds);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t CreateItem(ModdingAPI::Exposed::Steamworks::AppId_t nConsumerAppId, int32_t eFileType) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28203D0))(nConsumerAppId, eFileType);
  }
  static inline ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t StartItemUpdate(ModdingAPI::Exposed::Steamworks::AppId_t nConsumerAppId, ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t, ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2820490))(nConsumerAppId, nPublishedFileID);
  }
  static inline bool SetItemTitle(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, System_String* pchTitle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2820550))(handle, pchTitle);
  }
  static inline bool SetItemDescription(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, System_String* pchDescription) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2820770))(handle, pchDescription);
  }
  static inline bool SetItemUpdateLanguage(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, System_String* pchLanguage) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2820990))(handle, pchLanguage);
  }
  static inline bool SetItemMetadata(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, System_String* pchMetaData) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2820BB0))(handle, pchMetaData);
  }
  static inline bool SetItemVisibility(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, int32_t eVisibility) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2820DD0))(handle, eVisibility);
  }
  static inline bool SetItemTags(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t updateHandle, ModdingAPI::Exposed::System::Collections::Generic::IList_T_* pTags) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2820E10))(updateHandle, pTags);
  }
  static inline bool SetItemContent(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, System_String* pszContentFolder) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2820F90))(handle, pszContentFolder);
  }
  static inline bool SetItemPreview(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, System_String* pszPreviewFile) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28211B0))(handle, pszPreviewFile);
  }
  static inline bool SetAllowLegacyUpload(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, bool bAllowLegacyUpload) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28213D0))(handle, bAllowLegacyUpload);
  }
  static inline bool RemoveAllItemKeyValueTags(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2821410))(handle);
  }
  static inline bool RemoveItemKeyValueTags(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, System_String* pchKey) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2821440))(handle, pchKey);
  }
  static inline bool AddItemKeyValueTag(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, System_String* pchKey, System_String* pchValue) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2821660))(handle, pchKey, pchValue);
  }
  static inline bool AddItemPreviewFile(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, System_String* pszPreviewFile, int32_t type) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28219A0))(handle, pszPreviewFile, type);
  }
  static inline bool AddItemPreviewVideo(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, System_String* pszVideoID) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2821BD0))(handle, pszVideoID);
  }
  static inline bool UpdateItemPreviewFile(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, uint32_t index, System_String* pszPreviewFile) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, uint32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2821DF0))(handle, index, pszPreviewFile);
  }
  static inline bool UpdateItemPreviewVideo(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, uint32_t index, System_String* pszVideoID) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, uint32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822020))(handle, index, pszVideoID);
  }
  static inline bool RemoveItemPreview(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, uint32_t index) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822250))(handle, index);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t SubmitItemUpdate(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, System_String* pchChangeNote) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822290))(handle, pchChangeNote);
  }
  static inline int32_t GetItemUpdateProgress(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t handle, uint64_t punBytesProcessed, uint64_t punBytesTotal) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::UGCUpdateHandle_t, uint64_t, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28224D0))(handle, punBytesProcessed, punBytesTotal);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t SetUserItemVote(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID, bool bVoteUp) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822520))(nPublishedFileID, bVoteUp);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t GetUserItemVote(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28225F0))(nPublishedFileID);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t AddItemToFavorites(ModdingAPI::Exposed::Steamworks::AppId_t nAppId, ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t, ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28226A0))(nAppId, nPublishedFileID);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t RemoveItemFromFavorites(ModdingAPI::Exposed::Steamworks::AppId_t nAppId, ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::AppId_t, ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822760))(nAppId, nPublishedFileID);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t SubscribeItem(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822820))(nPublishedFileID);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t UnsubscribeItem(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28228D0))(nPublishedFileID);
  }
  static inline uint32_t GetNumSubscribedItems() {
    return reinterpret_cast<uint32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822980))();
  }
  static inline uint32_t GetSubscribedItems(ModdingAPI::Exposed::Steamworks::PublishedFileId_t_array* pvecPublishedFileID, uint32_t cMaxEntries) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t_array*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28229A0))(pvecPublishedFileID, cMaxEntries);
  }
  static inline uint32_t GetItemState(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28229E0))(nPublishedFileID);
  }
  static inline bool GetItemInstallInfo(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID, uint64_t punSizeOnDisk, System_String* pchFolder, uint32_t cchFolderSize, uint32_t punTimeStamp) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t, uint64_t, System_String*, uint32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822A10))(nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
  }
  static inline bool GetItemDownloadInfo(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID, uint64_t punBytesDownloaded, uint64_t punBytesTotal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t, uint64_t, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822B50))(nPublishedFileID, punBytesDownloaded, punBytesTotal);
  }
  static inline bool DownloadItem(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID, bool bHighPriority) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822BA0))(nPublishedFileID, bHighPriority);
  }
  static inline bool BInitWorkshopForGameServer(ModdingAPI::Exposed::Steamworks::DepotId_t unWorkshopDepotID, System_String* pszFolder) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::DepotId_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822BE0))(unWorkshopDepotID, pszFolder);
  }
  static inline void SuspendDownloads(bool bSuspend) {
    reinterpret_cast<void(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822E00))(bSuspend);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t StartPlaytimeTracking(ModdingAPI::Exposed::Steamworks::PublishedFileId_t_array* pvecPublishedFileID, uint32_t unNumPublishedFileIDs) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t_array*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822E30))(pvecPublishedFileID, unNumPublishedFileIDs);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t StopPlaytimeTracking(ModdingAPI::Exposed::Steamworks::PublishedFileId_t_array* pvecPublishedFileID, uint32_t unNumPublishedFileIDs) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t_array*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822F00))(pvecPublishedFileID, unNumPublishedFileIDs);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t StopPlaytimeTrackingForAllItems() {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2822FD0))();
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t AddDependency(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nParentPublishedFileID, ModdingAPI::Exposed::Steamworks::PublishedFileId_t nChildPublishedFileID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t, ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823080))(nParentPublishedFileID, nChildPublishedFileID);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t RemoveDependency(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nParentPublishedFileID, ModdingAPI::Exposed::Steamworks::PublishedFileId_t nChildPublishedFileID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t, ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823140))(nParentPublishedFileID, nChildPublishedFileID);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t AddAppDependency(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID, ModdingAPI::Exposed::Steamworks::AppId_t nAppID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t, ModdingAPI::Exposed::Steamworks::AppId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823200))(nPublishedFileID, nAppID);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t RemoveAppDependency(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID, ModdingAPI::Exposed::Steamworks::AppId_t nAppID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t, ModdingAPI::Exposed::Steamworks::AppId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28232C0))(nPublishedFileID, nAppID);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t GetAppDependencies(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823380))(nPublishedFileID);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t DeleteItem(ModdingAPI::Exposed::Steamworks::PublishedFileId_t nPublishedFileID) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::PublishedFileId_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2823430))(nPublishedFileID);
  }
};
}