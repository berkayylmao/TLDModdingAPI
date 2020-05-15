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


namespace ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager {
struct __RuleSet_Il2CppStaticFields {
};

struct __RuleSet_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Rewired_Utils_Interfaces_IDeepCloneable_DeepClone;
  VirtualInvokeData _5_System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData _6_get_Item;
  VirtualInvokeData _7_set_Item;
  VirtualInvokeData _8_IndexOf;
  VirtualInvokeData _9_Insert;
  VirtualInvokeData _10_RemoveAt;
  VirtualInvokeData _11_get_Count;
  VirtualInvokeData _12_System_Collections_Generic_ICollection_Rewired_ControllerMapLayoutManager_Rule__get_IsReadOnly;
  VirtualInvokeData _13_Add;
  VirtualInvokeData _14_Clear;
  VirtualInvokeData _15_Contains;
  VirtualInvokeData _16_CopyTo;
  VirtualInvokeData _17_Remove;
  VirtualInvokeData _18_GetEnumerator;
};

struct __RuleSet_Il2CppClass {
  Il2CppClass_1 _1;
  __RuleSet_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RuleSet_Il2CppVtbl vtbl;
};

class RuleSet {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C225F8;
  static inline    __RuleSet_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RuleSet_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RuleSet_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RuleSet_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool _enabled;
  System_String* _tag;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _rules;

  // Member methods:
  bool get_enabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33C2C0))(this);
  }
  void set_enabled(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30CFB0))(this, value);
  }
  System_String* get_tag() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void set_tag(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, value);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* get_rules() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  void set_rules(ModdingAPI::Exposed::System::Collections::Generic::List_T_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE17C50))(this, value);
  }
  void ::ctor(bool enabled, System_String* tag, ModdingAPI::Exposed::System::Collections::Generic::List_T_* rules) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, bool, System_String*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE17C60))(this, enabled, tag, rules);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE17DE0))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet* source) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE17F30))(this, source);
  }
  ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule* Find(ModdingAPI::Exposed::System::Predicate_T_* predicate) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, ModdingAPI::Exposed::System::Predicate_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18040))(this, predicate);
  }
  ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule* FindLast(ModdingAPI::Exposed::System::Predicate_T_* predicate) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, ModdingAPI::Exposed::System::Predicate_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18210))(this, predicate);
  }
  int32_t FindIndex(ModdingAPI::Exposed::System::Predicate_T_* predicate) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, ModdingAPI::Exposed::System::Predicate_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18450))(this, predicate);
  }
  int32_t FindLastIndex(ModdingAPI::Exposed::System::Predicate_T_* predicate) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, ModdingAPI::Exposed::System::Predicate_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18630))(this, predicate);
  }
  int32_t IndexOf(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule* item) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18810))(this, item);
  }
  void Insert(int32_t index, ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule* item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, int32_t, ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE188A0))(this, index, item);
  }
  void RemoveAt(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18950))(this, index);
  }
  ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule* get_Item(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18A00))(this, index);
  }
  void set_Item(int32_t index, ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, int32_t, ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18AB0))(this, index, value);
  }
  void Add(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule* item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18B90))(this, item);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18C60))(this);
  }
  bool Contains(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule* item) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18D10))(this, item);
  }
  void CopyTo(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule_array* array, int32_t arrayIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18DC0))(this, array, arrayIndex);
  }
  int32_t get_Count() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18E90))(this);
  }
  bool System::Collections::Generic::ICollection_Rewired::ControllerMapLayoutManager::Rule_::get_IsReadOnly() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18F20))(this);
  }
  bool Remove(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule* item) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*, ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::Rule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE18FC0))(this, item);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerator_T_* GetEnumerator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerator_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE19070))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* System::Collections::IEnumerable::GetEnumerator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE19150))(this);
  }
  Il2CppObject* Rewired::Utils::Interfaces::IDeepCloneable::DeepClone() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE19230))(this);
  }
  void CheckList() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::RuleSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE19450))(this);
  }
};
}