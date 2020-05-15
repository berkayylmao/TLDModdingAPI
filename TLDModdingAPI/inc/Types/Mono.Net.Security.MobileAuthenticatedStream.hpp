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
#include "ModdingAPI.Exposed.System.Threading.CancellationToken.hpp"
#include "ModdingAPI.Exposed.System.ValueTuple_T1__T2_.hpp"


namespace ModdingAPI::Exposed::Mono::Net::Security {
struct __MobileAuthenticatedStream_Il2CppStaticFields {
  int32_t uniqueNameInteger;
  int32_t nextId;
};

struct __MobileAuthenticatedStream_Il2CppVtbl {
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
  VirtualInvokeData _30_AuthenticateAsClient;
  VirtualInvokeData _42_get_AuthenticatedStream;
  VirtualInvokeData _45_get_InternalLocalCertificate;
  VirtualInvokeData _46_get_Provider;
  VirtualInvokeData _65535__ctor;
};

struct __MobileAuthenticatedStream_Il2CppClass {
  Il2CppClass_1 _1;
  __MobileAuthenticatedStream_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MobileAuthenticatedStream_Il2CppVtbl vtbl;
};

class MobileAuthenticatedStream {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C828C8;
  static inline    __MobileAuthenticatedStream_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MobileAuthenticatedStream_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MobileAuthenticatedStream_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MobileAuthenticatedStream_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  Il2CppObject* MarshalByRefObject__identity;
  ModdingAPI::Exposed::System::IO::Stream::ReadWriteTask* Stream__activeReadWriteTask;
  ModdingAPI::Exposed::System::Threading::SemaphoreSlim* Stream__asyncActiveSemaphore;
  ModdingAPI::Exposed::System::IO::Stream* AuthenticatedStream__InnerStream;
  bool AuthenticatedStream__LeaveStreamOpen;
  ModdingAPI::Exposed::Mono::Net::Security::MobileTlsContext* xobileTlsContext;
  ModdingAPI::Exposed::System::Runtime::ExceptionServices::ExceptionDispatchInfo* lastException;
  ModdingAPI::Exposed::Mono::Net::Security::AsyncProtocolRequest* asyncHandshakeRequest;
  ModdingAPI::Exposed::Mono::Net::Security::AsyncProtocolRequest* asyncReadRequest;
  ModdingAPI::Exposed::Mono::Net::Security::AsyncProtocolRequest* asyncWriteRequest;
  ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize2* readBuffer;
  ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize2* writeBuffer;
  Il2CppObject* ioLock;
  int32_t closeRequested;
  bool shutdown;
  ModdingAPI::Exposed::System::Net::Security::SslStream* _SslStream_k__BackingField;
  ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings* _Settings_k__BackingField;
  ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsProvider* _Provider_k__BackingField;
  int32_t ID;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ModdingAPI::Exposed::System::Net::Security::SslStream* owner, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings* settings, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsProvider* provider) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::System::IO::Stream*, bool, ModdingAPI::Exposed::System::Net::Security::SslStream*, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*, ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3FC80))(this, innerStream, leaveInnerStreamOpen, owner, settings, provider);
  }
  ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings* get_Settings() {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsSettings*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307640))(this);
  }
  ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsProvider* get_Provider() {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::Interface::MonoTlsProvider*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BC530))(this);
  }
  void CheckThrow(bool authSuccessCheck, bool shutdownCheck) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3FFF0))(this, authSuccessCheck, shutdownCheck);
  }
  ModdingAPI::Exposed::System::Runtime::ExceptionServices::ExceptionDispatchInfo* SetException(ModdingAPI::Exposed::System::Exception* e) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC405F0))(this, e);
  }
  void AuthenticateAsClient(System_String* targetHost, ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, int32_t enabledSslProtocols, bool checkCertificateRevocation) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, System_String*, ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC40620))(this, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
  }
  ModdingAPI::Exposed::System::Net::Security::AuthenticatedStream* get_AuthenticatedStream() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Net::Security::AuthenticatedStream*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3201B0))(this);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task* ProcessAuthentication(bool runSynchronously, bool serverMode, System_String* targetHost, int32_t enabledProtocols, ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool clientCertRequired) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, bool, bool, System_String*, int32_t, ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509Certificate*, ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC40770))(this, runSynchronously, serverMode, targetHost, enabledProtocols, serverCertificate, clientCertificates, clientCertRequired);
  }
  ModdingAPI::Exposed::System::IAsyncResult* BeginRead(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t count, ModdingAPI::Exposed::System::AsyncCallback* asyncCallback, Il2CppObject* asyncState) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IAsyncResult*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, ModdingAPI::Exposed::System::AsyncCallback*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC408C0))(this, buffer, offset, count, asyncCallback, asyncState);
  }
  int32_t EndRead(ModdingAPI::Exposed::System::IAsyncResult* asyncResult) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::System::IAsyncResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC40A90))(this, asyncResult);
  }
  ModdingAPI::Exposed::System::IAsyncResult* BeginWrite(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t count, ModdingAPI::Exposed::System::AsyncCallback* asyncCallback, Il2CppObject* asyncState) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IAsyncResult*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, ModdingAPI::Exposed::System::AsyncCallback*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC40B10))(this, buffer, offset, count, asyncCallback, asyncState);
  }
  void EndWrite(ModdingAPI::Exposed::System::IAsyncResult* asyncResult) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::System::IAsyncResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC2C860))(this, asyncResult);
  }
  int32_t Read(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC40CE0))(this, buffer, offset, count);
  }
  void Write(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC40EE0))(this, buffer, offset, count);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_* ReadAsync(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t count, ModdingAPI::Exposed::System::Threading::CancellationToken cancellationToken) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, ModdingAPI::Exposed::System::Threading::CancellationToken)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC410B0))(this, buffer, offset, count, cancellationToken);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task* WriteAsync(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t count, ModdingAPI::Exposed::System::Threading::CancellationToken cancellationToken) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, ModdingAPI::Exposed::System::Threading::CancellationToken)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC41250))(this, buffer, offset, count, cancellationToken);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_* StartOperation(int32_t type, ModdingAPI::Exposed::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ModdingAPI::Exposed::System::Threading::CancellationToken cancellationToken) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, int32_t, ModdingAPI::Exposed::Mono::Net::Security::AsyncProtocolRequest*, ModdingAPI::Exposed::System::Threading::CancellationToken)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC413F0))(this, type, asyncRequest, cancellationToken);
  }
  int32_t InternalRead(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t size, bool outWantMore) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC41540))(this, buffer, offset, size, outWantMore);
  }
  ModdingAPI::Exposed::System::ValueTuple_T1__T2_ InternalRead(ModdingAPI::Exposed::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize* internalBuffer, ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t size) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ValueTuple_T1__T2_(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::Mono::Net::Security::AsyncProtocolRequest*, ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC417B0))(this, asyncRequest, internalBuffer, buffer, offset, size);
  }
  bool InternalWrite(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t size) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC41930))(this, buffer, offset, size);
  }
  bool InternalWrite(ModdingAPI::Exposed::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize2* internalBuffer, ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t size) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::Mono::Net::Security::AsyncProtocolRequest*, ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize2*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC41A60))(this, asyncRequest, internalBuffer, buffer, offset, size);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_* InnerRead(bool sync, int32_t requestedSize, ModdingAPI::Exposed::System::Threading::CancellationToken cancellationToken) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, bool, int32_t, ModdingAPI::Exposed::System::Threading::CancellationToken)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC41CC0))(this, sync, requestedSize, cancellationToken);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task* InnerWrite(bool sync, ModdingAPI::Exposed::System::Threading::CancellationToken cancellationToken) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, bool, ModdingAPI::Exposed::System::Threading::CancellationToken)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC41E00))(this, sync, cancellationToken);
  }
  int32_t ProcessHandshake(int32_t status) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC41F30))(this, status);
  }
  ModdingAPI::Exposed::System::ValueTuple_T1__T2_ ProcessRead(ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize* userBuffer) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ValueTuple_T1__T2_(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC421B0))(this, userBuffer);
  }
  ModdingAPI::Exposed::System::ValueTuple_T1__T2_ ProcessWrite(ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize* userBuffer) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ValueTuple_T1__T2_(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC42300))(this, userBuffer);
  }
  bool get_IsAuthenticated() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC42450))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC42560))(this, disposing);
  }
  void Flush() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB22310))(this);
  }
  ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509Certificate* get_InternalLocalCertificate() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::X509Certificates::X509Certificate*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC42870))(this);
  }
  int64_t Seek(int64_t offset, int32_t origin) {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, int64_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC42A20))(this, offset, origin);
  }
  bool get_CanRead() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC42A70))(this);
  }
  bool get_CanWrite() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC42AC0))(this);
  }
  bool get_CanSeek() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  int64_t get_Length() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C0710))(this);
  }
  int64_t get_Position() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF6260))(this);
  }
  void set_Position(int64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC42B30))(this, value);
  }
  int32_t get_ReadTimeout() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC42B80))(this);
  }
  int32_t get_WriteTimeout() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC42BB0))(this);
  }
  void _InnerWrite_b__67_0() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC42C60))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<int32_t> uniqueNameInteger = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->uniqueNameInteger; }
  );
  static inline __CppStaticProperty<int32_t> nextId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->nextId; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Exception* GetSSPIException(ModdingAPI::Exposed::System::Exception* e) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC40130))(e);
  }
  static inline ModdingAPI::Exposed::System::Exception* GetIOException(ModdingAPI::Exposed::System::Exception* e, System_String* message) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Exception*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC40390))(e, message);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xC42BE0))();
  }
};
}