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


namespace ModdingAPI::Exposed::System::Net {
struct __WebConnection_Il2CppStaticFields {
};

struct __WebConnection_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __WebConnection_Il2CppClass {
  Il2CppClass_1 _1;
  __WebConnection_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __WebConnection_Il2CppVtbl vtbl;
};

class WebConnection {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C342E0;
  static inline    __WebConnection_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __WebConnection_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__WebConnection_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __WebConnection_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Net::ServicePoint* sPoint;
  ModdingAPI::Exposed::System::IO::Stream* nstream;
  ModdingAPI::Exposed::System::Net::Sockets::Socket* socket;
  Il2CppObject* socketLock;
  ModdingAPI::Exposed::System::Net::IWebConnectionState* state;
  int32_t status;
  bool keepAlive;
  ModdingAPI::Exposed::System::Byte_array* buffer;
  ModdingAPI::Exposed::System::EventHandler* abortHandler;
  ModdingAPI::Exposed::System::Net::WebConnection::AbortHelper* abortHelper;
  ModdingAPI::Exposed::System::Net::WebConnectionData* Data;
  bool chunkedRead;
  ModdingAPI::Exposed::System::Net::MonoChunkStream* chunkStream;
  ModdingAPI::Exposed::System::Collections::Queue* queue;
  bool reused;
  int32_t position;
  ModdingAPI::Exposed::System::Net::HttpWebRequest* priority_request;
  ModdingAPI::Exposed::System::Net::NetworkCredential* ntlm_credentials;
  bool ntlm_authenticated;
  bool unsafe_sharing;
  int32_t connect_ntlm_auth_state;
  ModdingAPI::Exposed::System::Net::HttpWebRequest* connect_request;
  ModdingAPI::Exposed::System::Exception* connect_exception;
  ModdingAPI::Exposed::Mono::Net::Security::MonoTlsStream* tlsStream;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Net::IWebConnectionState* wcs, ModdingAPI::Exposed::System::Net::ServicePoint* sPoint) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::IWebConnectionState*, ModdingAPI::Exposed::System::Net::ServicePoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAF70F0))(this, wcs, sPoint);
  }
  bool CanReuse() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAF7560))(this);
  }
  void Connect(ModdingAPI::Exposed::System::Net::HttpWebRequest* request) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAF7590))(this, request);
  }
  bool CreateTunnel(ModdingAPI::Exposed::System::Net::HttpWebRequest* request, ModdingAPI::Exposed::System::Uri* connectUri, ModdingAPI::Exposed::System::IO::Stream* stream, ModdingAPI::Exposed::System::Byte_array* buffer) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*, ModdingAPI::Exposed::System::Uri*, ModdingAPI::Exposed::System::IO::Stream*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAF7D20))(this, request, connectUri, stream, buffer);
  }
  ModdingAPI::Exposed::System::Net::WebHeaderCollection* ReadHeaders(ModdingAPI::Exposed::System::IO::Stream* stream, ModdingAPI::Exposed::System::Byte_array* retBuffer, int32_t status) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Net::WebHeaderCollection*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::IO::Stream*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAF86B0))(this, stream, retBuffer, status);
  }
  void FlushContents(ModdingAPI::Exposed::System::IO::Stream* stream, int32_t contentLength) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::IO::Stream*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAF8D90))(this, stream, contentLength);
  }
  bool CreateStream(ModdingAPI::Exposed::System::Net::HttpWebRequest* request) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAF8E60))(this, request);
  }
  void HandleError(int32_t st, ModdingAPI::Exposed::System::Exception* e, System_String* where) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, int32_t, ModdingAPI::Exposed::System::Exception*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAF92E0))(this, st, e, where);
  }
  void ReadDone(ModdingAPI::Exposed::System::IAsyncResult* result) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::IAsyncResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAF95C0))(this, result);
  }
  void InitRead() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAF9E40))(this);
  }
  void InitConnection(ModdingAPI::Exposed::System::Net::HttpWebRequest* request) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFA9F0))(this, request);
  }
  ModdingAPI::Exposed::System::EventHandler* SendRequest(ModdingAPI::Exposed::System::Net::HttpWebRequest* request) {
    return reinterpret_cast<ModdingAPI::Exposed::System::EventHandler*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFB060))(this, request);
  }
  void SendNext() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFB3B0))(this);
  }
  void NextRead() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFB590))(this);
  }
  ModdingAPI::Exposed::System::IAsyncResult* BeginRead(ModdingAPI::Exposed::System::Net::HttpWebRequest* request, ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t size, ModdingAPI::Exposed::System::AsyncCallback* cb, Il2CppObject* state) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IAsyncResult*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, ModdingAPI::Exposed::System::AsyncCallback*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFBCA0))(this, request, buffer, offset, size, cb, state);
  }
  int32_t EndRead(ModdingAPI::Exposed::System::Net::HttpWebRequest* request, ModdingAPI::Exposed::System::IAsyncResult* result) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*, ModdingAPI::Exposed::System::IAsyncResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFC220))(this, request, result);
  }
  int32_t EnsureRead(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t size) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFC7E0))(this, buffer, offset, size);
  }
  bool CompleteChunkedRead() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFC990))(this);
  }
  ModdingAPI::Exposed::System::IAsyncResult* BeginWrite(ModdingAPI::Exposed::System::Net::HttpWebRequest* request, ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t size, ModdingAPI::Exposed::System::AsyncCallback* cb, Il2CppObject* state) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IAsyncResult*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, ModdingAPI::Exposed::System::AsyncCallback*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFCA70))(this, request, buffer, offset, size, cb, state);
  }
  bool EndWrite(ModdingAPI::Exposed::System::Net::HttpWebRequest* request, bool throwOnError, ModdingAPI::Exposed::System::IAsyncResult* result) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*, bool, ModdingAPI::Exposed::System::IAsyncResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFCE40))(this, request, throwOnError, result);
  }
  int32_t Read(ModdingAPI::Exposed::System::Net::HttpWebRequest* request, ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t size) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFD180))(this, request, buffer, offset, size);
  }
  bool Write(ModdingAPI::Exposed::System::Net::HttpWebRequest* request, ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t size, System_String* err_msg) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFD5A0))(this, request, buffer, offset, size, err_msg);
  }
  void Close(bool sendNext) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFD870))(this, sendNext);
  }
  void Abort(Il2CppObject* sender, ModdingAPI::Exposed::System::EventArgs* args) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, Il2CppObject*, ModdingAPI::Exposed::System::EventArgs*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFDC80))(this, sender, args);
  }
  void ResetNtlm() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFE150))(this);
  }
  void set_PriorityRequest(ModdingAPI::Exposed::System::Net::HttpWebRequest* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x47E020))(this, value);
  }
  bool get_NtlmAuthenticated() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3199F0))(this);
  }
  void set_NtlmAuthenticated(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFE170))(this, value);
  }
  ModdingAPI::Exposed::System::Net::NetworkCredential* get_NtlmCredential() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Net::NetworkCredential*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307640))(this);
  }
  void set_NtlmCredential(ModdingAPI::Exposed::System::Net::NetworkCredential* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::NetworkCredential*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E95A0))(this, value);
  }
  bool get_UnsafeAuthenticatedConnectionSharing() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA011C0))(this);
  }
  void set_UnsafeAuthenticatedConnectionSharing(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFE180))(this, value);
  }
  void _SendRequest_b__41_0(Il2CppObject* o) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFE190))(this, o);
  }

  // Static methods:
  static inline bool ExpectContent(int32_t statusCode, System_String* method) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAF9D60))(statusCode, method);
  }
  static inline int32_t GetResponse(ModdingAPI::Exposed::System::Net::WebConnectionData* data, ModdingAPI::Exposed::System::Net::ServicePoint* sPoint, ModdingAPI::Exposed::System::Byte_array* buffer, int32_t max) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionData*, ModdingAPI::Exposed::System::Net::ServicePoint*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFA050))(data, sPoint, buffer, max);
  }
  static inline bool ReadLine(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t start, int32_t max, System_String* output) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFB9C0))(buffer, start, max, output);
  }
};
}