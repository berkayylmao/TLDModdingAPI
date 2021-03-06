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


namespace ModdingAPI::Exposed::System::Net::Security {
struct __SslStream_Il2CppStaticFields {
};

struct __SslStream_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CreateObjRef;
  VirtualInvokeData _5_InitializeLifetimeService;
  VirtualInvokeData _6_Dispose;
  VirtualInvokeData _7_get_CanRead;
  VirtualInvokeData _8_get_CanSeek;
  VirtualInvokeData _9_get_CanWrite;
  VirtualInvokeData _10_get_Length;
  VirtualInvokeData _11_get_Position;
  VirtualInvokeData _12_set_Position;
  VirtualInvokeData _13_get_ReadTimeout;
  VirtualInvokeData _14_get_WriteTimeout;
  VirtualInvokeData _15_Close;
  VirtualInvokeData _16_Dispose;
  VirtualInvokeData _17_Flush;
  VirtualInvokeData _18_BeginRead;
  VirtualInvokeData _19_EndRead;
  VirtualInvokeData _20_ReadAsync;
  VirtualInvokeData _21_BeginWrite;
  VirtualInvokeData _22_EndWrite;
  VirtualInvokeData _23_WriteAsync;
  VirtualInvokeData _24_Seek;
  VirtualInvokeData _25_Read;
  VirtualInvokeData _26_ReadByte;
  VirtualInvokeData _27_Write;
  VirtualInvokeData _28_WriteByte;
  VirtualInvokeData _29_get_IsAuthenticated;
};

struct __SslStream_Il2CppClass {
  Il2CppClass_1 _1;
  __SslStream_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SslStream_Il2CppVtbl vtbl;
};

class SslStream {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3EDE0;
  static inline    __SslStream_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SslStream_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SslStream_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SslStream_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  Il2CppObject* MarshalByRefObject__identity;
  ModdingAPI::Exposed::System::IO::Stream::ReadWriteTask* Stream__activeReadWriteTask;
  ModdingAPI::Exposed::System::Threading::SemaphoreSlim* Stream__asyncActiveSemaphore;
  ModdingAPI::Exposed::System::IO::Stream* AuthenticatedStream__InnerStream;
  bool AuthenticatedStream__LeaveStreamOpen;
  ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsProvider* provider;
  ModdingAPI::Exposed::Mono::Security::Interface::IMonoSslStream* impl;

  // Member methods:
  ModdingAPI::Exposed::Mono::Security::Interface::IMonoSslStream* get_Impl() {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::Interface::IMonoSslStream*(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB21AF0))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsProvider* provider, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings* settings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*, ModdingAPI::Exposed::System::IO::Stream*, bool, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsProvider*, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB21BA0))(this, innerStream, leaveInnerStreamOpen, provider, settings);
  }
  bool get_IsAuthenticated() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB21DD0))(this);
  }
  bool get_CanSeek() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  bool get_CanRead() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB21E70))(this);
  }
  bool get_CanWrite() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB21F10))(this);
  }
  int32_t get_ReadTimeout() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB21FB0))(this);
  }
  int32_t get_WriteTimeout() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB22050))(this);
  }
  int64_t get_Length() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB220F0))(this);
  }
  int64_t get_Position() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB22190))(this);
  }
  void set_Position(int64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB22230))(this, value);
  }
  int64_t Seek(int64_t offset, int32_t origin) {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*, int64_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB222A0))(this, offset, origin);
  }
  void Flush() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB22310))(this);
  }
  void CheckDisposed() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB22340))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB223F0))(this, disposing);
  }
  int32_t Read(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB22530))(this, buffer, offset, count);
  }
  void Write(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB22600))(this, buffer, offset, count);
  }
  ModdingAPI::Exposed::System::IAsyncResult* BeginRead(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t count, ModdingAPI::Exposed::System::AsyncCallback* asyncCallback, Il2CppObject* asyncState) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IAsyncResult*(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, ModdingAPI::Exposed::System::AsyncCallback*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB226D0))(this, buffer, offset, count, asyncCallback, asyncState);
  }
  int32_t EndRead(ModdingAPI::Exposed::System::IAsyncResult* asyncResult) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*, ModdingAPI::Exposed::System::IAsyncResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB227B0))(this, asyncResult);
  }
  ModdingAPI::Exposed::System::IAsyncResult* BeginWrite(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t count, ModdingAPI::Exposed::System::AsyncCallback* asyncCallback, Il2CppObject* asyncState) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IAsyncResult*(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, ModdingAPI::Exposed::System::AsyncCallback*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB22860))(this, buffer, offset, count, asyncCallback, asyncState);
  }
  void EndWrite(ModdingAPI::Exposed::System::IAsyncResult* asyncResult) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::Security::SslStream*, ModdingAPI::Exposed::System::IAsyncResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB22940))(this, asyncResult);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::Mono::Security::Interface::IMonoSslStream* CreateMonoSslStream(ModdingAPI::Exposed::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsProvider* provider, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings* settings) {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::Interface::IMonoSslStream*(__fastcall*)(ModdingAPI::Exposed::System::IO::Stream*, bool, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsProvider*, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB21C20))(innerStream, leaveInnerStreamOpen, provider, settings);
  }
};
}