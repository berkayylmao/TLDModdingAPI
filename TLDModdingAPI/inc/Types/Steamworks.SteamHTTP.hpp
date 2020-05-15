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
#include "ModdingAPI.Exposed.Steamworks.HTTPRequestHandle.hpp"
#include "ModdingAPI::Exposed::Steamworks::HTTPRequestHandle.hpp"
#include "ModdingAPI::Exposed::Steamworks::SteamAPICall_t.hpp"
#include "ModdingAPI.Exposed.Steamworks.HTTPCookieContainerHandle.hpp"
#include "ModdingAPI::Exposed::Steamworks::HTTPCookieContainerHandle.hpp"


namespace ModdingAPI::Exposed::Steamworks {
struct __SteamHTTP_Il2CppStaticFields {
};

struct __SteamHTTP_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SteamHTTP_Il2CppClass {
  Il2CppClass_1 _1;
  __SteamHTTP_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SteamHTTP_Il2CppVtbl vtbl;
};

class SteamHTTP {
public:
  // Il2Cpp fields:
  __SteamHTTP_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline ModdingAPI::Exposed::Steamworks::HTTPRequestHandle CreateHTTPRequest(int32_t eHTTPRequestMethod, System_String* pchAbsoluteURL) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::HTTPRequestHandle(__fastcall*)(int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2806030))(eHTTPRequestMethod, pchAbsoluteURL);
  }
  static inline bool SetHTTPRequestContextValue(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, uint64_t ulContextValue) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2806270))(hRequest, ulContextValue);
  }
  static inline bool SetHTTPRequestNetworkActivityTimeout(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, uint32_t unTimeoutSeconds) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28062B0))(hRequest, unTimeoutSeconds);
  }
  static inline bool SetHTTPRequestHeaderValue(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, System_String* pchHeaderName, System_String* pchHeaderValue) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28062F0))(hRequest, pchHeaderName, pchHeaderValue);
  }
  static inline bool SetHTTPRequestGetOrPostParameter(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, System_String* pchParamName, System_String* pchParamValue) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2806630))(hRequest, pchParamName, pchParamValue);
  }
  static inline bool SendHTTPRequest(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, ModdingAPI::Exposed::Steamworks::SteamAPICall_t pCallHandle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, ModdingAPI::Exposed::Steamworks::SteamAPICall_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2806970))(hRequest, pCallHandle);
  }
  static inline bool SendHTTPRequestAndStreamResponse(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, ModdingAPI::Exposed::Steamworks::SteamAPICall_t pCallHandle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, ModdingAPI::Exposed::Steamworks::SteamAPICall_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28069B0))(hRequest, pCallHandle);
  }
  static inline bool DeferHTTPRequest(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28069F0))(hRequest);
  }
  static inline bool PrioritizeHTTPRequest(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2806A20))(hRequest);
  }
  static inline bool GetHTTPResponseHeaderSize(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, System_String* pchHeaderName, uint32_t unResponseHeaderSize) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, System_String*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2806A50))(hRequest, pchHeaderName, unResponseHeaderSize);
  }
  static inline bool GetHTTPResponseHeaderValue(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, System_String* pchHeaderName, ModdingAPI::Exposed::System::Byte_array* pHeaderValueBuffer, uint32_t unBufferSize) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, System_String*, ModdingAPI::Exposed::System::Byte_array*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2806C80))(hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
  }
  static inline bool GetHTTPResponseBodySize(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, uint32_t unBodySize) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2806EA0))(hRequest, unBodySize);
  }
  static inline bool GetHTTPResponseBodyData(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, ModdingAPI::Exposed::System::Byte_array* pBodyDataBuffer, uint32_t unBufferSize) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, ModdingAPI::Exposed::System::Byte_array*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2806EE0))(hRequest, pBodyDataBuffer, unBufferSize);
  }
  static inline bool GetHTTPStreamingResponseBodyData(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, uint32_t cOffset, ModdingAPI::Exposed::System::Byte_array* pBodyDataBuffer, uint32_t unBufferSize) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, uint32_t, ModdingAPI::Exposed::System::Byte_array*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2806F30))(hRequest, cOffset, pBodyDataBuffer, unBufferSize);
  }
  static inline bool ReleaseHTTPRequest(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2806F90))(hRequest);
  }
  static inline bool GetHTTPDownloadProgressPct(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, float pflPercentOut) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2806FC0))(hRequest, pflPercentOut);
  }
  static inline bool SetHTTPRequestRawPostBody(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, System_String* pchContentType, ModdingAPI::Exposed::System::Byte_array* pubBody, uint32_t unBodyLen) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, System_String*, ModdingAPI::Exposed::System::Byte_array*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2807000))(hRequest, pchContentType, pubBody, unBodyLen);
  }
  static inline ModdingAPI::Exposed::Steamworks::HTTPCookieContainerHandle CreateCookieContainer(bool bAllowResponsesToModify) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::HTTPCookieContainerHandle(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2807220))(bAllowResponsesToModify);
  }
  static inline bool ReleaseCookieContainer(ModdingAPI::Exposed::Steamworks::HTTPCookieContainerHandle hCookieContainer) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPCookieContainerHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28072D0))(hCookieContainer);
  }
  static inline bool SetCookie(ModdingAPI::Exposed::Steamworks::HTTPCookieContainerHandle hCookieContainer, System_String* pchHost, System_String* pchUrl, System_String* pchCookie) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPCookieContainerHandle, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2807300))(hCookieContainer, pchHost, pchUrl, pchCookie);
  }
  static inline bool SetHTTPRequestCookieContainer(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, ModdingAPI::Exposed::Steamworks::HTTPCookieContainerHandle hCookieContainer) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, ModdingAPI::Exposed::Steamworks::HTTPCookieContainerHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2807770))(hRequest, hCookieContainer);
  }
  static inline bool SetHTTPRequestUserAgentInfo(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, System_String* pchUserAgentInfo) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28077B0))(hRequest, pchUserAgentInfo);
  }
  static inline bool SetHTTPRequestRequiresVerifiedCertificate(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x28079D0))(hRequest, bRequireVerifiedCertificate);
  }
  static inline bool SetHTTPRequestAbsoluteTimeoutMS(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, uint32_t unMilliseconds) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2807A10))(hRequest, unMilliseconds);
  }
  static inline bool GetHTTPRequestWasTimedOut(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle hRequest, bool pbWasTimedOut) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HTTPRequestHandle, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2807A50))(hRequest, pbWasTimedOut);
  }
};
}