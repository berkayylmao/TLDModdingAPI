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
#include "ModdingAPI.Exposed.System.DateTime.hpp"


namespace ModdingAPI::Exposed::System::Net {
struct __FtpWebResponse_Il2CppStaticFields {
};

struct __FtpWebResponse_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CreateObjRef;
  VirtualInvokeData _5_InitializeLifetimeService;
  VirtualInvokeData _6_System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData _7_Dispose;
  VirtualInvokeData _8_GetObjectData;
  VirtualInvokeData _9_Close;
  VirtualInvokeData _10_Dispose;
  VirtualInvokeData _11_GetResponseStream;
  VirtualInvokeData _12_get_ResponseUri;
  VirtualInvokeData _13_get_Headers;
};

struct __FtpWebResponse_Il2CppClass {
  Il2CppClass_1 _1;
  __FtpWebResponse_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __FtpWebResponse_Il2CppVtbl vtbl;
};

class FtpWebResponse {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3FF28;
  static inline    __FtpWebResponse_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __FtpWebResponse_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__FtpWebResponse_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __FtpWebResponse_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  Il2CppObject* MarshalByRefObject__identity;
  ModdingAPI::Exposed::System::IO::Stream* stream;
  ModdingAPI::Exposed::System::Uri* uri;
  int32_t statusCode;
  ModdingAPI::Exposed::System::DateTime lastModified;
  System_String* bannerMessage;
  System_String* welcomeMessage;
  System_String* exitMessage;
  System_String* statusDescription;
  System_String* method;
  bool disposed;
  ModdingAPI::Exposed::System::Net::FtpWebRequest* request;
  int64_t contentLength;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Net::FtpWebRequest* request, ModdingAPI::Exposed::System::Uri* uri, System_String* method, bool keepAlive) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*, ModdingAPI::Exposed::System::Net::FtpWebRequest*, ModdingAPI::Exposed::System::Uri*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x92B310))(this, request, uri, method, keepAlive);
  }
  void ::ctor(ModdingAPI::Exposed::System::Net::FtpWebRequest* request, ModdingAPI::Exposed::System::Uri* uri, System_String* method, int32_t statusCode, System_String* statusDescription) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*, ModdingAPI::Exposed::System::Net::FtpWebRequest*, ModdingAPI::Exposed::System::Uri*, System_String*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x92B430))(this, request, uri, method, statusCode, statusDescription);
  }
  void ::ctor(ModdingAPI::Exposed::System::Net::FtpWebRequest* request, ModdingAPI::Exposed::System::Uri* uri, System_String* method, ModdingAPI::Exposed::System::Net::FtpStatus* status) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*, ModdingAPI::Exposed::System::Net::FtpWebRequest*, ModdingAPI::Exposed::System::Uri*, System_String*, ModdingAPI::Exposed::System::Net::FtpStatus*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x92B560))(this, request, uri, method, status);
  }
  ModdingAPI::Exposed::System::Net::WebHeaderCollection* get_Headers() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Net::WebHeaderCollection*(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x92B5A0))(this);
  }
  ModdingAPI::Exposed::System::Uri* get_ResponseUri() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Uri*(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  void set_LastModified(ModdingAPI::Exposed::System::DateTime value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A410))(this, value);
  }
  void set_BannerMessage(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A420))(this, value);
  }
  void set_WelcomeMessage(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31F420))(this, value);
  }
  void set_StatusCode(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31DD50))(this, value);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x92B6E0))(this);
  }
  ModdingAPI::Exposed::System::IO::Stream* GetResponseStream() {
    return reinterpret_cast<ModdingAPI::Exposed::System::IO::Stream*(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x92B7E0))(this);
  }
  void set_Stream(ModdingAPI::Exposed::System::IO::Stream* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*, ModdingAPI::Exposed::System::IO::Stream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, value);
  }
  void UpdateStatus(ModdingAPI::Exposed::System::Net::FtpStatus* status) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*, ModdingAPI::Exposed::System::Net::FtpStatus*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x92B9C0))(this, status);
  }
  void CheckDisposed() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x92B9F0))(this);
  }
  bool IsFinal() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::FtpWebResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x92BAD0))(this);
  }
};
}