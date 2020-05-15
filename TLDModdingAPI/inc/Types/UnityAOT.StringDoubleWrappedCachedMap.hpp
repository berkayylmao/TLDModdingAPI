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


namespace ModdingAPI::Exposed::UnityAOT {
struct __StringDoubleWrappedCachedMap_Il2CppStaticFields {
};

struct __StringDoubleWrappedCachedMap_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _65535__ctor;
};

struct __StringDoubleWrappedCachedMap_Il2CppClass {
  Il2CppClass_1 _1;
  __StringDoubleWrappedCachedMap_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StringDoubleWrappedCachedMap_Il2CppVtbl vtbl;
};

class StringDoubleWrappedCachedMap {
public:
  // Il2Cpp fields:
  __StringDoubleWrappedCachedMap_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  uint32_t Length;
  intptr_t m_Self;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_Results;

  // Member methods:
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary::KeyCollection_TKey__TValue_* get_Keys() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary::KeyCollection_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::UnityAOT::StringDoubleWrappedCachedMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248D210))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary::ValueCollection_TKey__TValue_* get_Values() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary::ValueCollection_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::UnityAOT::StringDoubleWrappedCachedMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248D410))(this);
  }
  double get_Item(System_String* key) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityAOT::StringDoubleWrappedCachedMap*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248D610))(this, key);
  }
  bool HasKey(System_String* key) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityAOT::StringDoubleWrappedCachedMap*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248D770))(this, key);
  }
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* GetDictionary() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::UnityAOT::StringDoubleWrappedCachedMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  void ::ctor(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityAOT::StringDoubleWrappedCachedMap*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248D870))(this, self);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityAOT::StringDoubleWrappedCachedMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248D880))(this);
  }
  void SetNativePtr(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityAOT::StringDoubleWrappedCachedMap*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248D910))(this, self);
  }
  intptr_t GetNativePtr() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::UnityAOT::StringDoubleWrappedCachedMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityAOT::StringDoubleWrappedCachedMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248DAB0))(this);
  }
  void SetValue(System_String* key, double val) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityAOT::StringDoubleWrappedCachedMap*, System_String*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248DB60))(this, key, val);
  }
};
}