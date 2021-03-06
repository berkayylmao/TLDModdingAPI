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
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"


namespace ModdingAPI::Exposed::CarcassSite {
struct __Manager_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_AllCarcassSiteList;
  ModdingAPI::Exposed::CarcassSite::ManagerDataProxy* m_ManagerDataProxy;
};

struct __Manager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Manager_Il2CppClass {
  Il2CppClass_1 _1;
  __Manager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Manager_Il2CppVtbl vtbl;
};

class Manager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C90D90;
  static inline    __Manager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Manager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Manager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Manager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CarcassSite::Manager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_AllCarcassSiteList = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_AllCarcassSiteList; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::CarcassSite::ManagerDataProxy*> m_ManagerDataProxy = __CppStaticProperty<ModdingAPI::Exposed::CarcassSite::ManagerDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ManagerDataProxy; }
  );

  // Static methods:
  static inline System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B813A0))();
  }
  static inline void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B816E0))(text);
  }
  static inline ModdingAPI::Exposed::CarcassSite* TryInstanciateCarcassSite(ModdingAPI::Exposed::UnityEngine::GameObject* carcassSitePrefab, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::GameObject* originCorpse) {
    return reinterpret_cast<ModdingAPI::Exposed::CarcassSite*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B81A80))(carcassSitePrefab, position, originCorpse);
  }
  static inline ModdingAPI::Exposed::CarcassSite* TrySpawnCarcassSite(ModdingAPI::Exposed::UnityEngine::GameObject* carcassSitePrefab, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::GameObject* originCorpse, bool spawnPostHarvestFX, float timeHours) {
    return reinterpret_cast<ModdingAPI::Exposed::CarcassSite*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::GameObject*, bool, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B81C70))(carcassSitePrefab, position, originCorpse, spawnPostHarvestFX, timeHours);
  }
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B81DF0))();
  }
  static inline bool IsCarcasseSiteNearby(ModdingAPI::Exposed::UnityEngine::Vector3 position, float radius) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B81ED0))(position, radius);
  }
  static inline void Add(ModdingAPI::Exposed::CarcassSite* site) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CarcassSite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B82110))(site);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B821D0))();
  }
};
}