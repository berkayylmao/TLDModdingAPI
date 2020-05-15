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
struct __CompatibleComparer_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::IComparer* defaultComparer;
  ModdingAPI::Exposed::System::Collections::IHashCodeProvider* defaultHashProvider;
};

struct __CompatibleComparer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Equals;
  VirtualInvokeData _5_GetHashCode;
};

struct __CompatibleComparer_Il2CppClass {
  Il2CppClass_1 _1;
  __CompatibleComparer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CompatibleComparer_Il2CppVtbl vtbl;
};

class CompatibleComparer {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C49070;
  static inline    __CompatibleComparer_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CompatibleComparer_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CompatibleComparer_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CompatibleComparer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::IComparer* _comparer;
  ModdingAPI::Exposed::System::Collections::IHashCodeProvider* _hcp;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Collections::IComparer* comparer, ModdingAPI::Exposed::System::Collections::IHashCodeProvider* hashCodeProvider) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::CompatibleComparer*, ModdingAPI::Exposed::System::Collections::IComparer*, ModdingAPI::Exposed::System::Collections::IHashCodeProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F0E70))(this, comparer, hashCodeProvider);
  }
  bool Equals(Il2CppObject* a, Il2CppObject* b) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::CompatibleComparer*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD46670))(this, a, b);
  }
  int32_t GetHashCode(Il2CppObject* obj) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::CompatibleComparer*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD467C0))(this, obj);
  }
  ModdingAPI::Exposed::System::Collections::IComparer* get_Comparer() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IComparer*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::CompatibleComparer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  ModdingAPI::Exposed::System::Collections::IHashCodeProvider* get_HashCodeProvider() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IHashCodeProvider*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Specialized::CompatibleComparer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::IComparer*> defaultComparer = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::IComparer*>(
   []() { return &GetStaticClassInstance()->pStaticFields->defaultComparer; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::IHashCodeProvider*> defaultHashProvider = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::IHashCodeProvider*>(
   []() { return &GetStaticClassInstance()->pStaticFields->defaultHashProvider; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Collections::IComparer* get_DefaultComparer() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IComparer*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xD468B0))();
  }
  static inline ModdingAPI::Exposed::System::Collections::IHashCodeProvider* get_DefaultHashCodeProvider() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IHashCodeProvider*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xD46A70))();
  }
};
}