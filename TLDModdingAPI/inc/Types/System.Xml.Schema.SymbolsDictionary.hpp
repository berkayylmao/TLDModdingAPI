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


namespace ModdingAPI::Exposed::System::Xml::Schema {
struct __SymbolsDictionary_Il2CppStaticFields {
};

struct __SymbolsDictionary_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SymbolsDictionary_Il2CppClass {
  Il2CppClass_1 _1;
  __SymbolsDictionary_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SymbolsDictionary_Il2CppVtbl vtbl;
};

class SymbolsDictionary {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3E860;
  static inline    __SymbolsDictionary_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SymbolsDictionary_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SymbolsDictionary_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SymbolsDictionary_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t last;
  ModdingAPI::Exposed::System::Collections::Hashtable* names;
  ModdingAPI::Exposed::System::Collections::Hashtable* wildcards;
  ModdingAPI::Exposed::System::Collections::ArrayList* particles;
  Il2CppObject* particleLast;
  bool isUpaEnforced;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SymbolsDictionary*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CE1C0))(this);
  }
  int32_t get_Count() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SymbolsDictionary*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CE3E0))(this);
  }
  bool get_IsUpaEnforced() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SymbolsDictionary*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5F6810))(this);
  }
  void set_IsUpaEnforced(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SymbolsDictionary*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CE3F0))(this, value);
  }
  int32_t AddName(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* name, Il2CppObject* particle) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SymbolsDictionary*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CE400))(this, name, particle);
  }
  void AddNamespaceList(ModdingAPI::Exposed::System::Xml::Schema::NamespaceList* list, Il2CppObject* particle, bool allowLocal) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SymbolsDictionary*, ModdingAPI::Exposed::System::Xml::Schema::NamespaceList*, Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CE590))(this, list, particle, allowLocal);
  }
  void AddWildcard(System_String* wildcard, Il2CppObject* particle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SymbolsDictionary*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CE830))(this, wildcard, particle);
  }
  ModdingAPI::Exposed::System::Collections::ICollection* GetNamespaceListSymbols(ModdingAPI::Exposed::System::Xml::Schema::NamespaceList* list) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::ICollection*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SymbolsDictionary*, ModdingAPI::Exposed::System::Xml::Schema::NamespaceList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CEA90))(this, list);
  }
  int32_t get_Item(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* name) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SymbolsDictionary*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CF080))(this, name);
  }
  bool Exists(ModdingAPI::Exposed::System::Xml::XmlQualifiedName* name) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SymbolsDictionary*, ModdingAPI::Exposed::System::Xml::XmlQualifiedName*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CF1C0))(this, name);
  }
  Il2CppObject* GetParticle(int32_t symbol) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SymbolsDictionary*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CF1F0))(this, symbol);
  }
  System_String* NameOf(int32_t symbol) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::SymbolsDictionary*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CF230))(this, symbol);
  }
};
}