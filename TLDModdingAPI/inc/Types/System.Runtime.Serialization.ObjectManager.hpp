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


namespace ModdingAPI::Exposed::System::Runtime::Serialization {
struct __ObjectManager_Il2CppStaticFields {
};

struct __ObjectManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_GetObject;
  VirtualInvokeData _5_DoFixups;
  VirtualInvokeData _6_RecordFixup;
  VirtualInvokeData _7_RecordDelayedFixup;
  VirtualInvokeData _8_RecordArrayElementFixup;
  VirtualInvokeData _9_RaiseDeserializationEvent;
  VirtualInvokeData _10_AddOnDeserialization;
  VirtualInvokeData _11_AddOnDeserialized;
  VirtualInvokeData _12_RaiseOnDeserializedEvent;
};

struct __ObjectManager_Il2CppClass {
  Il2CppClass_1 _1;
  __ObjectManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ObjectManager_Il2CppVtbl vtbl;
};

class ObjectManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C55D48;
  static inline    __ObjectManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ObjectManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ObjectManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ObjectManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Runtime::Serialization::DeserializationEventHandler* m_onDeserializationHandler;
  ModdingAPI::Exposed::System::Runtime::Serialization::SerializationEventHandler* m_onDeserializedHandler;
  ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder_array* m_objects;
  Il2CppObject* m_topObject;
  ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolderList* m_specialFixupObjects;
  int64_t m_fixupCount;
  ModdingAPI::Exposed::System::Runtime::Serialization::ISurrogateSelector* m_selector;
  ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext m_context;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Runtime::Serialization::ISurrogateSelector* selector, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, ModdingAPI::Exposed::System::Runtime::Serialization::ISurrogateSelector*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA44A40))(this, selector, context, checkSecurity, isCrossAppDomain);
  }
  bool CanCallGetType(Il2CppObject* obj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this, obj);
  }
  void set_TopObject(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110C0))(this, value);
  }
  Il2CppObject* get_TopObject() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolderList* get_SpecialFixupObjects() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolderList*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA44AF0))(this);
  }
  ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder* FindObjectHolder(int64_t objectID) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA44CB0))(this, objectID);
  }
  ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder* FindOrCreateObjectHolder(int64_t objectID) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA44D20))(this, objectID);
  }
  void AddObjectHolder(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder* holder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA44F20))(this, holder);
  }
  bool GetCompletionInfo(ModdingAPI::Exposed::System::Runtime::Serialization::FixupHolder* fixup, ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder* holder, Il2CppObject* member, bool bThrowIfMissing) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, ModdingAPI::Exposed::System::Runtime::Serialization::FixupHolder*, ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder*, Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA450F0))(this, fixup, holder, member, bThrowIfMissing);
  }
  void FixupSpecialObject(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder* holder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA454A0))(this, holder);
  }
  bool ResolveObjectReference(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder* holder) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA456F0))(this, holder);
  }
  bool DoValueTypeFixup(ModdingAPI::Exposed::System::Reflection::FieldInfo* memberToFix, ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder* holder, Il2CppObject* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, ModdingAPI::Exposed::System::Reflection::FieldInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA45960))(this, memberToFix, holder, value);
  }
  void CompleteObject(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder* holder, bool bObjectFullyComplete) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA45F50))(this, holder, bObjectFullyComplete);
  }
  void DoNewlyRegisteredObjectFixups(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder* holder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, ModdingAPI::Exposed::System::Runtime::Serialization::ObjectHolder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA46710))(this, holder);
  }
  Il2CppObject* GetObject(int64_t objectID) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA46920))(this, objectID);
  }
  void RegisterString(System_String* obj, int64_t objectID, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, ModdingAPI::Exposed::System::Reflection::MemberInfo* member) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, System_String*, int64_t, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, int64_t, ModdingAPI::Exposed::System::Reflection::MemberInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA46A30))(this, obj, objectID, info, idOfContainingObj, member);
  }
  void RegisterObject(Il2CppObject* obj, int64_t objectID, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, ModdingAPI::Exposed::System::Reflection::MemberInfo* member, ModdingAPI::Exposed::System::Int32_array* arrayIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, Il2CppObject*, int64_t, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, int64_t, ModdingAPI::Exposed::System::Reflection::MemberInfo*, ModdingAPI::Exposed::System::Int32_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA46C80))(this, obj, objectID, info, idOfContainingObj, member, arrayIndex);
  }
  void CompleteISerializableObject(Il2CppObject* obj, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, Il2CppObject*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA47380))(this, obj, info, context);
  }
  void DoFixups() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA476F0))(this);
  }
  void RegisterFixup(ModdingAPI::Exposed::System::Runtime::Serialization::FixupHolder* fixup, int64_t objectToBeFixed, int64_t objectRequired) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, ModdingAPI::Exposed::System::Runtime::Serialization::FixupHolder*, int64_t, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA47BF0))(this, fixup, objectToBeFixed, objectRequired);
  }
  void RecordFixup(int64_t objectToBeFixed, ModdingAPI::Exposed::System::Reflection::MemberInfo* member, int64_t objectRequired) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, int64_t, ModdingAPI::Exposed::System::Reflection::MemberInfo*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA47D40))(this, objectToBeFixed, member, objectRequired);
  }
  void RecordDelayedFixup(int64_t objectToBeFixed, System_String* memberName, int64_t objectRequired) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, int64_t, System_String*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA48090))(this, objectToBeFixed, memberName, objectRequired);
  }
  void RecordArrayElementFixup(int64_t arrayToBeFixed, ModdingAPI::Exposed::System::Int32_array* indices, int64_t objectRequired) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, int64_t, ModdingAPI::Exposed::System::Int32_array*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA482B0))(this, arrayToBeFixed, indices, objectRequired);
  }
  void RaiseDeserializationEvent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA484D0))(this);
  }
  void AddOnDeserialization(ModdingAPI::Exposed::System::Runtime::Serialization::DeserializationEventHandler* handler) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, ModdingAPI::Exposed::System::Runtime::Serialization::DeserializationEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA48520))(this, handler);
  }
  void AddOnDeserialized(Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA485E0))(this, obj);
  }
  void RaiseOnDeserializedEvent(Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA486D0))(this, obj);
  }
  void RaiseOnDeserializingEvent(Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Serialization::ObjectManager*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA487C0))(this, obj);
  }

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))();
  }
  static inline ModdingAPI::Exposed::System::Reflection::RuntimeConstructorInfo* GetConstructor(ModdingAPI::Exposed::System::RuntimeType* t) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::RuntimeConstructorInfo*(__fastcall*)(ModdingAPI::Exposed::System::RuntimeType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA475A0))(t);
  }
};
}