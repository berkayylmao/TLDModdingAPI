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


namespace ModdingAPI::Exposed::System::Runtime::Remoting::Proxies {
struct __RemotingProxy_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Reflection::MethodInfo* _cache_GetTypeMethod;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* _cache_GetHashCodeMethod;
};

struct __RemotingProxy_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_GetObjectData;
  VirtualInvokeData _5_Invoke;
  VirtualInvokeData _6_InternalGetTransparentProxy;
  VirtualInvokeData _7_GetTransparentProxy;
  VirtualInvokeData _8_get_TypeName;
  VirtualInvokeData _9_CanCastTo;
};

struct __RemotingProxy_Il2CppClass {
  Il2CppClass_1 _1;
  __RemotingProxy_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RemotingProxy_Il2CppVtbl vtbl;
};

class RemotingProxy {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C62EF0;
  static inline    __RemotingProxy_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RemotingProxy_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RemotingProxy_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RemotingProxy_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Type* RealProxy_class_to_proxy;
  ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context* _targetContext;
  ModdingAPI::Exposed::System::MarshalByRefObject* _server;
  int32_t RealProxy__targetDomainId;
  System_String* _targetUri;
  ModdingAPI::Exposed::System::Runtime::Remoting::Identity* _objectIdentity;
  Il2CppObject* RealProxy__objTP;
  Il2CppObject* RealProxy__stubData;
  ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessageSink* _sink;
  bool _hasEnvoySink;
  ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::ConstructionCall* _ctorCall;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::System::Runtime::Remoting::ClientIdentity* identity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RemotingProxy*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Runtime::Remoting::ClientIdentity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF72910))(this, type, identity);
  }
  void ::ctor(ModdingAPI::Exposed::System::Type* type, System_String* activationUrl, ModdingAPI::Exposed::System::Object_array* activationAttributes) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RemotingProxy*, ModdingAPI::Exposed::System::Type*, System_String*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF72A00))(this, type, activationUrl, activationAttributes);
  }
  ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessage* Invoke(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessage* request) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessage*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RemotingProxy*, ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF72AD0))(this, request);
  }
  void AttachIdentity(ModdingAPI::Exposed::System::Runtime::Remoting::Identity* identity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RemotingProxy*, ModdingAPI::Exposed::System::Runtime::Remoting::Identity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF73090))(this, identity);
  }
  ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessage* ActivateRemoteObject(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMethodMessage* request) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessage*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RemotingProxy*, ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMethodMessage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF73490))(this, request);
  }
  System_String* get_TypeName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RemotingProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF73780))(this);
  }
  bool CanCastTo(ModdingAPI::Exposed::System::Type* fromType, Il2CppObject* o) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RemotingProxy*, ModdingAPI::Exposed::System::Type*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF738F0))(this, fromType, o);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RemotingProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF73B00))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::MethodInfo*> _cache_GetTypeMethod = __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::MethodInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->_cache_GetTypeMethod; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::MethodInfo*> _cache_GetHashCodeMethod = __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::MethodInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->_cache_GetHashCodeMethod; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xF73C40))();
  }
};
}