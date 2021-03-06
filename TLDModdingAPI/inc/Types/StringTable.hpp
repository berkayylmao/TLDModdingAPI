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


namespace ModdingAPI::Exposed {
struct __StringTable_Il2CppStaticFields {
};

struct __StringTable_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __StringTable_Il2CppClass {
  Il2CppClass_1 _1;
  __StringTable_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StringTable_Il2CppVtbl vtbl;
};

class StringTable {
public:
  // Il2Cpp fields:
  __StringTable_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Languages;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Entries;
  bool m_IsGeneratedByBuild;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_EntriesMap;

  // Member methods:
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StringTable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB1D90))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetLanguages() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::StringTable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  int32_t GetNumEntries() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::StringTable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB1DA0))(this);
  }
  bool IsInitialized() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::StringTable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA48CF0))(this);
  }
  bool IsGeneratedByBuild() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::StringTable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3F0))(this);
  }
  bool DoesKeyExist(System_String* key) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::StringTable*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB1E30))(this, key);
  }
  System_String* GetStringForKeyAndLanguage(System_String* key, System_String* language) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::StringTable*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB1EF0))(this, key, language);
  }
  System_String* GetStringForKeyAndLanguage(System_String* key, int32_t languageIndex) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::StringTable*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB2030))(this, key, languageIndex);
  }
  void AddNewLanguage(System_String* language) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StringTable*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB2100))(this, language);
  }
  void AddNewLanguage(System_String* language, System_String* copyEntriesFromLanguage) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StringTable*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB22D0))(this, language, copyEntriesFromLanguage);
  }
  ModdingAPI::Exposed::StringTable::Entry* GetEntryFromKey(System_String* key) {
    return reinterpret_cast<ModdingAPI::Exposed::StringTable::Entry*(__fastcall*)(ModdingAPI::Exposed::StringTable*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB2520))(this, key);
  }
  void MaybeInitEntriesMap() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StringTable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB2620))(this);
  }
  int32_t IndexOfLanguage(System_String* language) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::StringTable*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB28B0))(this, language);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* ImportCsv(System_String* path) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::StringTable*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB2A50))(this, path);
  }
  ModdingAPI::Exposed::System::Int32_array* ParseLanguages(ModdingAPI::Exposed::BetterList_T_* importLanguages) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::StringTable*, ModdingAPI::Exposed::BetterList_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB2EC0))(this, importLanguages);
  }
  void AddOrUpdateTableEntry(System_String* key, ModdingAPI::Exposed::BetterList_T_* importEntryLanguages, ModdingAPI::Exposed::System::Int32_array* languageIndexes) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StringTable*, System_String*, ModdingAPI::Exposed::BetterList_T_*, ModdingAPI::Exposed::System::Int32_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB3220))(this, key, importEntryLanguages, languageIndexes);
  }
  ModdingAPI::Exposed::StringTable::Entry* AddEntryForKey(System_String* key) {
    return reinterpret_cast<ModdingAPI::Exposed::StringTable::Entry*(__fastcall*)(ModdingAPI::Exposed::StringTable*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB3380))(this, key);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::StringTable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EB3760))(this);
  }
};
}