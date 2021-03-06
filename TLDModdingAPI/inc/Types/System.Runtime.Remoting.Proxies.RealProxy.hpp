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
#include "ModdingAPI.Exposed.System.Runtime.Serialization.StreamingContext.hpp"


namespace ModdingAPI::Exposed::System::Runtime::Remoting::Proxies {
struct __RealProxy_Il2CppStaticFields {
};

struct __RealProxy_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_GetObjectData;
  VirtualInvokeData _6_InternalGetTransparentProxy;
  VirtualInvokeData _7_GetTransparentProxy;
  VirtualInvokeData _65535__ctor;
};

struct __RealProxy_Il2CppClass {
  Il2CppClass_1 _1;
  __RealProxy_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RealProxy_Il2CppVtbl vtbl;
};

class RealProxy {
public:
  // Il2Cpp fields:
  __RealProxy_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Type* class_to_proxy;
  ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context* _targetContext;
  ModdingAPI::Exposed::System::MarshalByRefObject* _server;
  int32_t _targetDomainId;
  System_String* _targetUri;
  ModdingAPI::Exposed::System::Runtime::Remoting::Identity* _objectIdentity;
  Il2CppObject* _objTP;
  Il2CppObject* _stubData;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Type* classToProxy) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF71180))(this, classToProxy);
  }
  void ::ctor(ModdingAPI::Exposed::System::Type* classToProxy, ModdingAPI::Exposed::System::Runtime::Remoting::ClientIdentity* identity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Runtime::Remoting::ClientIdentity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF71220))(this, classToProxy, identity);
  }
  void ::ctor(ModdingAPI::Exposed::System::Type* classToProxy, intptr_t stub, Il2CppObject* stubData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*, ModdingAPI::Exposed::System::Type*, intptr_t, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF712D0))(this, classToProxy, stub, stubData);
  }
  ModdingAPI::Exposed::System::Type* GetProxiedType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF71410))(this);
  }
  void GetObjectData(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF714F0))(this, info, context);
  }
  ModdingAPI::Exposed::System::Runtime::Remoting::Identity* get_ObjectIdentity() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::Identity*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  void set_ObjectIdentity(ModdingAPI::Exposed::System::Runtime::Remoting::Identity* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*, ModdingAPI::Exposed::System::Runtime::Remoting::Identity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A420))(this, value);
  }
  Il2CppObject* InternalGetTransparentProxy(System_String* className) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF72020))(this, className);
  }
  Il2CppObject* GetTransparentProxy() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF72030))(this);
  }
  void AttachServer(ModdingAPI::Exposed::System::MarshalByRefObject* s) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*, ModdingAPI::Exposed::System::MarshalByRefObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310F00))(this, s);
  }
  void SetTargetDomain(int32_t domainId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31DD50))(this, domainId);
  }
  Il2CppObject* GetAppDomainTarget() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF721B0))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Type* InternalGetProxyType(Il2CppObject* transparentProxy) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF71400))(transparentProxy);
  }
  static inline Il2CppObject* PrivateInvoke(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy* rp, ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessage* msg, ModdingAPI::Exposed::System::Exception* exc, ModdingAPI::Exposed::System::Object_array* out_args) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*, ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessage*, ModdingAPI::Exposed::System::Exception*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF715C0))(rp, msg, exc, out_args);
  }
  static inline ModdingAPI::Exposed::System::Object_array* ProcessResponse(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMethodReturnMessage* mrm, ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::MonoMethodMessage* call) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Object_array*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMethodReturnMessage*, ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::MonoMethodMessage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF72300))(mrm, call);
  }
};
}