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


namespace ModdingAPI::Exposed::System::Collections::Specialized {
struct __NameValueCollection_Il2CppStaticFields {
};

struct __NameValueCollection_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_Collections_ICollection_CopyTo;
  VirtualInvokeData _6_System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData _7_System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData _11_GetObjectData;
  VirtualInvokeData _12_OnDeserialization;
  VirtualInvokeData _13_GetEnumerator;
  VirtualInvokeData _14_get_Count;
  VirtualInvokeData _15_Add;
  VirtualInvokeData _16_Get;
  VirtualInvokeData _17_GetValues;
  VirtualInvokeData _18_Set;
  VirtualInvokeData _19_Remove;
  VirtualInvokeData _20_Get;
  VirtualInvokeData _21_GetKey;
};

struct __NameValueCollection_Il2CppClass {
  Il2CppClass_1 _1;
  __NameValueCollection_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NameValueCollection_Il2CppVtbl vtbl;
};

class NameValueCollection {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C34ED0;
  static inline    __NameValueCollection_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __NameValueCollection_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__NameValueCollection_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __NameValueCollection_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool NameObjectCollectionBase__readOnly;
  ModdingAPI::Exposed::System::Collections::ArrayList* NameObjectCollectionBase__entriesArray;
  ModdingAPI::Exposed::System::Collections::IEqualityComparer* NameObjectCollectionBase__keyComparer;
  ModdingAPI::Exposed::System::Collections::Hashtable* NameObjectCollectionBase__entriesTable;
  ModdingAPI::Exposed::System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry* NameObjectCollectionBase__nullKeyEntry;
  ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* NameObjectCollectionBase__serializationInfo;
  int32_t NameObjectCollectionBase__version;
  Il2CppObject* NameObjectCollectionBase__syncRoot;
  ModdingAPI::Exposed::System::String_array* _all;
  ModdingAPI::Exposed::System::String_array* _allKeys;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4C6B0))(this);
  }
  void ::ctor(int32_t capacity, ModdingAPI::Exposed::System::Collections::IEqualityComparer* equalityComparer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*, int32_t, ModdingAPI::Exposed::System::Collections::IEqualityComparer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4C7F0))(this, capacity, equalityComparer);
  }
  void ::ctor(ModdingAPI::Exposed::System::DBNull* dummy) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*, ModdingAPI::Exposed::System::DBNull*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4C8B0))(this, dummy);
  }
  void ::ctor(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4C940))(this, info, context);
  }
  void InvalidateCachedArrays() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4C9F0))(this);
  }
  void Add(System_String* name, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4CED0))(this, name, value);
  }
  System_String* Get(System_String* name) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4D190))(this, name);
  }
  ModdingAPI::Exposed::System::String_array* GetValues(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4D290))(this, name);
  }
  void Set(System_String* name, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4D440))(this, name, value);
  }
  void Remove(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4D730))(this, name);
  }
  System_String* get_Item(System_String* name) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4D750))(this, name);
  }
  void set_Item(System_String* name, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4D770))(this, name, value);
  }
  System_String* Get(int32_t index) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4D790))(this, index);
  }
  System_String* GetKey(int32_t index) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::NameValueCollection*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4D980))(this, index);
  }

  // Static methods:
  static inline System_String* GetAsOneString(ModdingAPI::Exposed::System::Collections::ArrayList* list) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4CA00))(list);
  }
  static inline ModdingAPI::Exposed::System::String_array* GetAsStringArray(ModdingAPI::Exposed::System::Collections::ArrayList* list) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4CDE0))(list);
  }
};
}