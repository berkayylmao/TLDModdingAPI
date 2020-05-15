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


namespace ModdingAPI::Exposed::System::Runtime::Remoting {
struct __ServerIdentity_Il2CppStaticFields {
};

struct __ServerIdentity_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CreateObjRef;
  VirtualInvokeData _5_OnLifetimeExpired;
  VirtualInvokeData _65535__ctor;
};

struct __ServerIdentity_Il2CppClass {
  Il2CppClass_1 _1;
  __ServerIdentity_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ServerIdentity_Il2CppVtbl vtbl;
};

class ServerIdentity {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C55478;
  static inline    __ServerIdentity_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ServerIdentity_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ServerIdentity_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ServerIdentity_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* _objectUri;
  ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessageSink* _channelSink;
  ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessageSink* _envoySink;
  ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* Identity__clientDynamicProperties;
  ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* Identity__serverDynamicProperties;
  ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef* _objRef;
  bool Identity__disposed;
  ModdingAPI::Exposed::System::Type* _objectType;
  ModdingAPI::Exposed::System::MarshalByRefObject* _serverObject;
  ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessageSink* _serverSink;
  ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context* _context;
  ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease* _lease;

  // Member methods:
  void ::ctor(System_String* objectUri, ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context* context, ModdingAPI::Exposed::System::Type* objectType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity*, System_String*, ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x95DB10))(this, objectUri, context, objectType);
  }
  ModdingAPI::Exposed::System::Type* get_ObjectType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319980))(this);
  }
  void StartTrackingLifetime(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::ILease* lease) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity*, ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::ILease*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x95DB20))(this, lease);
  }
  void OnLifetimeExpired() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x95DDF0))(this);
  }
  ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef* CreateObjRef(ModdingAPI::Exposed::System::Type* requestedType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x95DE00))(this, requestedType);
  }
  void AttachServerObject(ModdingAPI::Exposed::System::MarshalByRefObject* serverObject, ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context* context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity*, ModdingAPI::Exposed::System::MarshalByRefObject*, ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x95E1F0))(this, serverObject, context);
  }
  ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease* get_Lease() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319930))(this);
  }
  ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context* get_Context() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3199C0))(this);
  }
  void set_Context(ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity*, ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A4B0))(this, value);
  }
  void DisposeServerObject() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x95E2B0))(this);
  }
};
}