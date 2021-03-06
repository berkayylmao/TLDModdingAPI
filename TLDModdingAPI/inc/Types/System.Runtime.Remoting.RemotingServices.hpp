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
#include "ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext.hpp"


namespace ModdingAPI::Exposed::System::Runtime::Remoting {
struct __RemotingServices_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Hashtable* uri_hash;
  ModdingAPI::Exposed::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _serializationFormatter;
  ModdingAPI::Exposed::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _deserializationFormatter;
  System_String* app_id;
  Il2CppObject* app_id_lock;
  int32_t next_id;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* FieldSetterMethod;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* FieldGetterMethod;
};

struct __RemotingServices_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __RemotingServices_Il2CppClass {
  Il2CppClass_1 _1;
  __RemotingServices_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RemotingServices_Il2CppVtbl vtbl;
};

class RemotingServices {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C551B8;
  static inline    __RemotingServices_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RemotingServices_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RemotingServices_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RemotingServices_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*> uri_hash = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*>(
   []() { return &GetStaticClassInstance()->pStaticFields->uri_hash; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*> _serializationFormatter = __CppStaticProperty<ModdingAPI::Exposed::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*>(
   []() { return &GetStaticClassInstance()->pStaticFields->_serializationFormatter; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*> _deserializationFormatter = __CppStaticProperty<ModdingAPI::Exposed::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*>(
   []() { return &GetStaticClassInstance()->pStaticFields->_deserializationFormatter; }
  );
  static inline __CppStaticProperty<System_String*> app_id = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->app_id; }
  );
  static inline __CppStaticProperty<Il2CppObject*> app_id_lock = __CppStaticProperty<Il2CppObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->app_id_lock; }
  );
  static inline __CppStaticProperty<int32_t> next_id = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->next_id; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::MethodInfo*> FieldSetterMethod = __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::MethodInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->FieldSetterMethod; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::MethodInfo*> FieldGetterMethod = __CppStaticProperty<ModdingAPI::Exposed::System::Reflection::MethodInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->FieldGetterMethod; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xF77AE0))();
  }
  static inline Il2CppObject* InternalExecute(ModdingAPI::Exposed::System::Reflection::MethodBase* method, Il2CppObject* obj, ModdingAPI::Exposed::System::Object_array* parameters, ModdingAPI::Exposed::System::Object_array* out_args) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MethodBase*, Il2CppObject*, ModdingAPI::Exposed::System::Object_array*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF78170))(method, obj, parameters, out_args);
  }
  static inline ModdingAPI::Exposed::System::Reflection::MethodBase* GetVirtualMethod(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::System::Reflection::MethodBase* method) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MethodBase*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Reflection::MethodBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF78180))(type, method);
  }
  static inline bool IsTransparentProxy(Il2CppObject* proxy) {
    return reinterpret_cast<bool(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF78190))(proxy);
  }
  static inline ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMethodReturnMessage* InternalExecuteMessage(ModdingAPI::Exposed::System::MarshalByRefObject* target, ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMethodCallMessage* reqMsg) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMethodReturnMessage*(__fastcall*)(ModdingAPI::Exposed::System::MarshalByRefObject*, ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMethodCallMessage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF781E0))(target, reqMsg);
  }
  static inline Il2CppObject* Connect(ModdingAPI::Exposed::System::Type* classToProxy, System_String* url) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF786A0))(classToProxy, url);
  }
  static inline Il2CppObject* Connect(ModdingAPI::Exposed::System::Type* classToProxy, System_String* url, Il2CppObject* data) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF78830))(classToProxy, url, data);
  }
  static inline ModdingAPI::Exposed::System::Type* GetServerTypeForUri(System_String* URI) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF789C0))(URI);
  }
  static inline Il2CppObject* Unmarshal(ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef* objectRef) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF78AC0))(objectRef);
  }
  static inline Il2CppObject* Unmarshal(ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef* objectRef, bool fRefine) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF78B60))(objectRef, fRefine);
  }
  static inline ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef* Marshal(ModdingAPI::Exposed::System::MarshalByRefObject* Obj) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef*(__fastcall*)(ModdingAPI::Exposed::System::MarshalByRefObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF78F00))(Obj);
  }
  static inline ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef* Marshal(ModdingAPI::Exposed::System::MarshalByRefObject* Obj, System_String* ObjURI, ModdingAPI::Exposed::System::Type* RequestedType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef*(__fastcall*)(ModdingAPI::Exposed::System::MarshalByRefObject*, System_String*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF78FA0))(Obj, ObjURI, RequestedType);
  }
  static inline System_String* NewUri() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xF79040))();
  }
  static inline ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy* GetRealProxy(Il2CppObject* proxy) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::Proxies::RealProxy*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF795A0))(proxy);
  }
  static inline ModdingAPI::Exposed::System::Reflection::MethodBase* GetMethodBaseFromMethodMessage(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MethodBase*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMethodMessage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF79640))(msg);
  }
  static inline ModdingAPI::Exposed::System::Reflection::MethodBase* GetMethodBaseFromName(ModdingAPI::Exposed::System::Type* type, System_String* methodName, ModdingAPI::Exposed::System::Type_array* signature) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MethodBase*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*, ModdingAPI::Exposed::System::Type_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF79840))(type, methodName, signature);
  }
  static inline ModdingAPI::Exposed::System::Reflection::MethodBase* FindInterfaceMethod(ModdingAPI::Exposed::System::Type* type, System_String* methodName, ModdingAPI::Exposed::System::Type_array* signature) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MethodBase*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*, ModdingAPI::Exposed::System::Type_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF79AB0))(type, methodName, signature);
  }
  static inline void GetObjectData(Il2CppObject* obj, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF79C60))(obj, info, context);
  }
  static inline bool IsOneWay(ModdingAPI::Exposed::System::Reflection::MethodBase* method) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MethodBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF79D40))(method);
  }
  static inline Il2CppObject* CreateClientProxy(ModdingAPI::Exposed::System::Runtime::Remoting::ActivatedClientTypeEntry* entry, ModdingAPI::Exposed::System::Object_array* activationAttributes) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ActivatedClientTypeEntry*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF79E10))(entry, activationAttributes);
  }
  static inline Il2CppObject* CreateClientProxy(ModdingAPI::Exposed::System::Type* objectType, System_String* url, ModdingAPI::Exposed::System::Object_array* activationAttributes) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7A010))(objectType, url, activationAttributes);
  }
  static inline Il2CppObject* CreateClientProxy(ModdingAPI::Exposed::System::Runtime::Remoting::WellKnownClientTypeEntry* entry) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::WellKnownClientTypeEntry*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7A230))(entry);
  }
  static inline Il2CppObject* CreateClientProxyForContextBound(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::System::Object_array* activationAttributes) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7A2F0))(type, activationAttributes);
  }
  static inline ModdingAPI::Exposed::System::Runtime::Remoting::Identity* GetIdentityForUri(System_String* uri) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::Identity*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7A580))(uri);
  }
  static inline System_String* RemoveAppNameFromUri(System_String* uri) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7A850))(uri);
  }
  static inline ModdingAPI::Exposed::System::Runtime::Remoting::ClientIdentity* GetOrCreateClientIdentity(ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef* objRef, ModdingAPI::Exposed::System::Type* proxyType, Il2CppObject* clientProxy) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::ClientIdentity*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef*, ModdingAPI::Exposed::System::Type*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7A9E0))(objRef, proxyType, clientProxy);
  }
  static inline ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessageSink* GetClientChannelSinkChain(System_String* url, Il2CppObject* channelData, System_String* objectUri) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessageSink*(__fastcall*)(System_String*, Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7B210))(url, channelData, objectUri);
  }
  static inline ModdingAPI::Exposed::System::Runtime::Remoting::ClientActivatedIdentity* CreateContextBoundObjectIdentity(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::ClientActivatedIdentity*(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7B360))(objectType);
  }
  static inline ModdingAPI::Exposed::System::Runtime::Remoting::ClientActivatedIdentity* CreateClientActivatedServerIdentity(ModdingAPI::Exposed::System::MarshalByRefObject* realObject, ModdingAPI::Exposed::System::Type* objectType, System_String* objectUri) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::ClientActivatedIdentity*(__fastcall*)(ModdingAPI::Exposed::System::MarshalByRefObject*, ModdingAPI::Exposed::System::Type*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7B560))(realObject, objectType, objectUri);
  }
  static inline ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity* CreateWellKnownServerIdentity(ModdingAPI::Exposed::System::Type* objectType, System_String* objectUri, int32_t mode) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7B6F0))(objectType, objectUri, mode);
  }
  static inline void RegisterServerIdentity(ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity* identity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ServerIdentity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7B990))(identity);
  }
  static inline Il2CppObject* GetProxyForRemoteObject(ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef* objref, ModdingAPI::Exposed::System::Type* classToProxy) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7BC10))(objref, classToProxy);
  }
  static inline Il2CppObject* GetRemoteObject(ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef* objRef, ModdingAPI::Exposed::System::Type* proxyType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::ObjRef*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7BD60))(objRef, proxyType);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* SerializeCallData(Il2CppObject* obj) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7BE20))(obj);
  }
  static inline Il2CppObject* DeserializeCallData(ModdingAPI::Exposed::System::Byte_array* array) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7C120))(array);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* SerializeExceptionData(ModdingAPI::Exposed::System::Exception* ex) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7C400))(ex);
  }
  static inline void RegisterInternalChannels() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7C5E0))();
  }
  static inline void DisposeIdentity(ModdingAPI::Exposed::System::Runtime::Remoting::Identity* ident) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Identity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7C670))(ident);
  }
  static inline ModdingAPI::Exposed::System::Runtime::Remoting::Identity* GetMessageTargetIdentity(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessage* msg) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Remoting::Identity*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7C910))(msg);
  }
  static inline void SetMessageTargetIdentity(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessage* msg, ModdingAPI::Exposed::System::Runtime::Remoting::Identity* ident) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Messaging::IMessage*, ModdingAPI::Exposed::System::Runtime::Remoting::Identity*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7CC90))(msg, ident);
  }
  static inline bool UpdateOutArgObject(ModdingAPI::Exposed::System::Reflection::ParameterInfo* pi, Il2CppObject* local, Il2CppObject* remote) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::ParameterInfo*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7CD90))(pi, local, remote);
  }
  static inline System_String* GetNormalizedUri(System_String* uri) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF7CF70))(uri);
  }
};
}