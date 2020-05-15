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


namespace ModdingAPI::Exposed::System::Collections::Specialized {
struct __StringCollection_Il2CppStaticFields {
};

struct __StringCollection_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_Collections_IList_get_Item;
  VirtualInvokeData _5_System_Collections_IList_set_Item;
  VirtualInvokeData _6_System_Collections_IList_Add;
  VirtualInvokeData _7_System_Collections_IList_Contains;
  VirtualInvokeData _8_Clear;
  VirtualInvokeData _9_System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData _10_System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData _11_System_Collections_IList_IndexOf;
  VirtualInvokeData _12_System_Collections_IList_Insert;
  VirtualInvokeData _13_System_Collections_IList_Remove;
  VirtualInvokeData _14_RemoveAt;
  VirtualInvokeData _15_System_Collections_ICollection_CopyTo;
  VirtualInvokeData _16_get_Count;
  VirtualInvokeData _17_get_SyncRoot;
  VirtualInvokeData _18_get_IsSynchronized;
  VirtualInvokeData _19_System_Collections_IEnumerable_GetEnumerator;
};

struct __StringCollection_Il2CppClass {
  Il2CppClass_1 _1;
  __StringCollection_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StringCollection_Il2CppVtbl vtbl;
};

class StringCollection {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3DBF8;
  static inline    __StringCollection_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __StringCollection_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__StringCollection_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __StringCollection_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::ArrayList* data;

  // Member methods:
  System_String* get_Item(int32_t index) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4FC50))(this, index);
  }
  void set_Item(int32_t index, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4FD20))(this, index, value);
  }
  int32_t get_Count() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x47D250))(this);
  }
  bool System::Collections::IList::get_IsReadOnly() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  bool System::Collections::IList::get_IsFixedSize() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  int32_t Add(System_String* value) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB101C0))(this, value);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9E6610))(this);
  }
  bool Contains(System_String* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA6AF90))(this, value);
  }
  void CopyTo(ModdingAPI::Exposed::System::String_array* array, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, ModdingAPI::Exposed::System::String_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4FD50))(this, array, index);
  }
  int32_t IndexOf(System_String* value) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC272A0))(this, value);
  }
  void Insert(int32_t index, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4FD80))(this, index, value);
  }
  bool get_IsSynchronized() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  void Remove(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4FDB0))(this, value);
  }
  void RemoveAt(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB20620))(this, index);
  }
  Il2CppObject* get_SyncRoot() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB205F0))(this);
  }
  Il2CppObject* System::Collections::IList::get_Item(int32_t index) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4FC50))(this, index);
  }
  void System::Collections::IList::set_Item(int32_t index, Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, int32_t, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4FDE0))(this, index, value);
  }
  int32_t System::Collections::IList::Add(Il2CppObject* value) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4FEC0))(this, value);
  }
  bool System::Collections::IList::Contains(Il2CppObject* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4FF90))(this, value);
  }
  int32_t System::Collections::IList::IndexOf(Il2CppObject* value) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD50060))(this, value);
  }
  void System::Collections::IList::Insert(int32_t index, Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, int32_t, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD50130))(this, index, value);
  }
  void System::Collections::IList::Remove(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD50210))(this, value);
  }
  void System::Collections::ICollection::CopyTo(ModdingAPI::Exposed::System::Array* array, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*, ModdingAPI::Exposed::System::Array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD4FD50))(this, array, index);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* System::Collections::IEnumerable::GetEnumerator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC26AC0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::StringCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD502E0))(this);
  }
};
}