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
struct __SpawnWildlife_Trigger_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* s_SpawnWildlife_Triggers;
};

struct __SpawnWildlife_Trigger_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SpawnWildlife_Trigger_Il2CppClass {
  Il2CppClass_1 _1;
  __SpawnWildlife_Trigger_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SpawnWildlife_Trigger_Il2CppVtbl vtbl;
};

class SpawnWildlife_Trigger {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C30F60;
  static inline    SpawnWildlife_Trigger* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C390F0;
  static inline    __SpawnWildlife_Trigger_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline SpawnWildlife_Trigger* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (SpawnWildlife_Trigger**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __SpawnWildlife_Trigger_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SpawnWildlife_Trigger_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SpawnWildlife_Trigger_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_wildlifePrefabToSpawn;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_wildlifePrefabToSpawnAurora;
  bool m_PlayerHasEnteredTrigger;
  System_String* m_Guid;
  bool m_ResumeRequested;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_SpawnedAnimals;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_RemoveAnimals;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SpawnWildlife_Trigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D044F0))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SpawnWildlife_Trigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D04630))(this);
  }
  void OnTriggerEnter(ModdingAPI::Exposed::UnityEngine::Collider* collider) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SpawnWildlife_Trigger*, ModdingAPI::Exposed::UnityEngine::Collider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D046F0))(this, collider);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SpawnWildlife_Trigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D04830))(this);
  }
  void EnableSpawnGroups() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SpawnWildlife_Trigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D04AC0))(this);
  }
  ModdingAPI::Exposed::SpawnWildlife_TriggerSaveData* Serialize() {
    return reinterpret_cast<ModdingAPI::Exposed::SpawnWildlife_TriggerSaveData*(__fastcall*)(ModdingAPI::Exposed::SpawnWildlife_Trigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D04EB0))(this);
  }
  void Deserialize(ModdingAPI::Exposed::SpawnWildlife_TriggerSaveData* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SpawnWildlife_Trigger*, ModdingAPI::Exposed::SpawnWildlife_TriggerSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D05410))(this, data);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SpawnWildlife_Trigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D061A0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> s_SpawnWildlife_Triggers = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_SpawnWildlife_Triggers; }
  );

  // Static methods:
  static inline void OnDespawn(ModdingAPI::Exposed::BaseAi* bai) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BaseAi*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D048F0))(bai);
  }
  static inline System_String* SerializeAll() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D056D0))();
  }
  static inline void DeserializeAll(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D059D0))(text);
  }
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D05C20))();
  }
  static inline void RegisterAnySpawnWildlifeGuid() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D05D00))();
  }
  static inline bool IsChildOf(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D05FC0))(go);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D063C0))();
  }
};
}