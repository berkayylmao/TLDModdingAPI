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


namespace ModdingAPI::Exposed::System::Collections::ArrayList {
struct __ReadOnlyArrayList_Il2CppStaticFields {
};

struct __ReadOnlyArrayList_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _21_set_Capacity;
  VirtualInvokeData _22_get_Count;
  VirtualInvokeData _23_get_IsFixedSize;
  VirtualInvokeData _24_get_IsReadOnly;
  VirtualInvokeData _25_get_IsSynchronized;
  VirtualInvokeData _26_get_SyncRoot;
  VirtualInvokeData _27_get_Item;
  VirtualInvokeData _28_set_Item;
  VirtualInvokeData _29_Add;
  VirtualInvokeData _30_AddRange;
  VirtualInvokeData _31_Clear;
  VirtualInvokeData _32_Clone;
  VirtualInvokeData _33_Contains;
  VirtualInvokeData _34_CopyTo;
  VirtualInvokeData _35_CopyTo;
  VirtualInvokeData _36_CopyTo;
  VirtualInvokeData _37_GetEnumerator;
  VirtualInvokeData _38_IndexOf;
  VirtualInvokeData _39_Insert;
  VirtualInvokeData _40_InsertRange;
  VirtualInvokeData _41_Remove;
  VirtualInvokeData _42_RemoveAt;
  VirtualInvokeData _43_RemoveRange;
  VirtualInvokeData _44_Sort;
  VirtualInvokeData _45_Sort;
  VirtualInvokeData _46_ToArray;
  VirtualInvokeData _47_ToArray;
};

struct __ReadOnlyArrayList_Il2CppClass {
  Il2CppClass_1 _1;
  __ReadOnlyArrayList_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ReadOnlyArrayList_Il2CppVtbl vtbl;
};

class ReadOnlyArrayList {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C71098;
  static inline    __ReadOnlyArrayList_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ReadOnlyArrayList_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ReadOnlyArrayList_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ReadOnlyArrayList_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Object_array* ArrayList__items;
  int32_t ArrayList__size;
  int32_t ArrayList__version;
  Il2CppObject* ArrayList__syncRoot;
  ModdingAPI::Exposed::System::Collections::ArrayList* _list;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Collections::ArrayList* l) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, ModdingAPI::Exposed::System::Collections::ArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00690))(this, l);
  }
  int32_t get_Count() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00740))(this);
  }
  bool get_IsReadOnly() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this);
  }
  bool get_IsFixedSize() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this);
  }
  bool get_IsSynchronized() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00770))(this);
  }
  Il2CppObject* get_Item(int32_t index) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE007A0))(this, index);
  }
  void set_Item(int32_t index, Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, int32_t, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE007D0))(this, index, value);
  }
  Il2CppObject* get_SyncRoot() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF6110))(this);
  }
  int32_t Add(Il2CppObject* obj) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00840))(this, obj);
  }
  void AddRange(ModdingAPI::Exposed::System::Collections::ICollection* c) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, ModdingAPI::Exposed::System::Collections::ICollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE008B0))(this, c);
  }
  void set_Capacity(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00920))(this, value);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00990))(this);
  }
  Il2CppObject* Clone() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00A00))(this);
  }
  bool Contains(Il2CppObject* obj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00BE0))(this, obj);
  }
  void CopyTo(ModdingAPI::Exposed::System::Array* array, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, ModdingAPI::Exposed::System::Array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00C10))(this, array, index);
  }
  void CopyTo(int32_t index, ModdingAPI::Exposed::System::Array* array, int32_t arrayIndex, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, int32_t, ModdingAPI::Exposed::System::Array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00C40))(this, index, array, arrayIndex, count);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* GetEnumerator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00C70))(this);
  }
  int32_t IndexOf(Il2CppObject* value) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00CA0))(this, value);
  }
  void Insert(int32_t index, Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, int32_t, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00CD0))(this, index, obj);
  }
  void InsertRange(int32_t index, ModdingAPI::Exposed::System::Collections::ICollection* c) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, int32_t, ModdingAPI::Exposed::System::Collections::ICollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00D40))(this, index, c);
  }
  void Remove(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00DB0))(this, value);
  }
  void RemoveAt(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00E20))(this, index);
  }
  void RemoveRange(int32_t index, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00E90))(this, index, count);
  }
  void Sort(int32_t index, int32_t count, ModdingAPI::Exposed::System::Collections::IComparer* comparer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, int32_t, int32_t, ModdingAPI::Exposed::System::Collections::IComparer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00F00))(this, index, count, comparer);
  }
  ModdingAPI::Exposed::System::Object_array* ToArray() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Object_array*(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00F70))(this);
  }
  ModdingAPI::Exposed::System::Array* ToArray(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Array*(__fastcall*)(ModdingAPI::Exposed::System::Collections::ArrayList::ReadOnlyArrayList*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE00FA0))(this, type);
  }
};
}