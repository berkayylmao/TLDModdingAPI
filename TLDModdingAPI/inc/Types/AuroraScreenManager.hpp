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
struct __AuroraScreenManager_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::HashSet_T_* s_PrefabsInUse;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* s_AssignedPrefabs;
};

struct __AuroraScreenManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AuroraScreenManager_Il2CppClass {
  Il2CppClass_1 _1;
  __AuroraScreenManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AuroraScreenManager_Il2CppVtbl vtbl;
};

class AuroraScreenManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C898B0;
  static inline    __AuroraScreenManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AuroraScreenManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AuroraScreenManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AuroraScreenManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::HashSet_T_*> s_PrefabsInUse = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::HashSet_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_PrefabsInUse; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*> s_AssignedPrefabs = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_AssignedPrefabs; }
  );

  // Static methods:
  static inline void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16A5A10))(text);
  }
  static inline System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x16A5CC0))();
  }
  static inline void AssociatePrefabWithId(System_String* guid, System_String* prefabName) {
    reinterpret_cast<void(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16A5E70))(guid, prefabName);
  }
  static inline System_String* GetPrefabForId(System_String* id) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16A6020))(id);
  }
  static inline bool IsPrefabInUse(System_String* prefabName) {
    return reinterpret_cast<bool(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16A6150))(prefabName);
  }
  static inline void MarkPrefabAsInUse(System_String* prefabName) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16A6210))(prefabName);
  }
  static inline void RemovePrefabAssociation(System_String* id) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16A62E0))(id);
  }
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x16A6470))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x16A6590))();
  }
};
}