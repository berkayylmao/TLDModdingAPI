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
struct __FeatsManager_Il2CppStaticFields {
  ModdingAPI::Exposed::Feat_BookSmarts* m_Feat_BookSmarts;
  ModdingAPI::Exposed::Feat_ColdFusion* m_Feat_ColdFusion;
  ModdingAPI::Exposed::Feat_EfficientMachine* m_Feat_EfficientMachine;
  ModdingAPI::Exposed::Feat_FireMaster* m_Feat_FireMaster;
  ModdingAPI::Exposed::Feat_FreeRunner* m_Feat_FreeRunner;
  ModdingAPI::Exposed::Feat_SnowWalker* m_Feat_SnowWalker;
  ModdingAPI::Exposed::Feat_ExpertTrapper* m_Feat_ExpertTrapper;
  ModdingAPI::Exposed::Feat_StraightToHeart* m_Feat_StraightToHeart;
  ModdingAPI::Exposed::Feat_BlizzardWalker* m_Feat_BlizzardWalker;
  bool m_InsantiatedFeats;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Feats;
  ModdingAPI::Exposed::FeatsManagerSaveData* m_FeatsManagerSaveData;
};

struct __FeatsManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __FeatsManager_Il2CppClass {
  Il2CppClass_1 _1;
  __FeatsManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __FeatsManager_Il2CppVtbl vtbl;
};

class FeatsManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C308D0;
  static inline    __FeatsManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __FeatsManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__FeatsManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __FeatsManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Feat_BookSmarts_Prefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Feat_ColdFusion_Prefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Feat_EfficientMachine_Prefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Feat_FireMaster_Prefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Feat_FreeRunner_Prefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Feat_SnowWalker_Prefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Feat_ExpertTrapper_Prefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Feat_StraightToHeart_Prefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Feat_BlizzardWalker_Prefab;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FeatsManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18333A0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FeatsManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::FeatsManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18336C0))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FeatsManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18340E0))(this, text);
  }
  ModdingAPI::Exposed::Feat* GetFeat(int32_t featType) {
    return reinterpret_cast<ModdingAPI::Exposed::Feat*(__fastcall*)(ModdingAPI::Exposed::FeatsManager*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1834A70))(this, featType);
  }
  ModdingAPI::Exposed::Feat* GetFeatFromIndex(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::Feat*(__fastcall*)(ModdingAPI::Exposed::FeatsManager*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1834D30))(this, index);
  }
  int32_t GetNumFeats() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::FeatsManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1834E40))(this);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* InstantiateFeatPrefab(ModdingAPI::Exposed::UnityEngine::GameObject* prefab) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::FeatsManager*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1834EF0))(this, prefab);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FeatsManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::Feat_BookSmarts*> m_Feat_BookSmarts = __CppStaticProperty<ModdingAPI::Exposed::Feat_BookSmarts*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Feat_BookSmarts; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Feat_ColdFusion*> m_Feat_ColdFusion = __CppStaticProperty<ModdingAPI::Exposed::Feat_ColdFusion*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Feat_ColdFusion; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Feat_EfficientMachine*> m_Feat_EfficientMachine = __CppStaticProperty<ModdingAPI::Exposed::Feat_EfficientMachine*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Feat_EfficientMachine; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Feat_FireMaster*> m_Feat_FireMaster = __CppStaticProperty<ModdingAPI::Exposed::Feat_FireMaster*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Feat_FireMaster; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Feat_FreeRunner*> m_Feat_FreeRunner = __CppStaticProperty<ModdingAPI::Exposed::Feat_FreeRunner*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Feat_FreeRunner; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Feat_SnowWalker*> m_Feat_SnowWalker = __CppStaticProperty<ModdingAPI::Exposed::Feat_SnowWalker*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Feat_SnowWalker; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Feat_ExpertTrapper*> m_Feat_ExpertTrapper = __CppStaticProperty<ModdingAPI::Exposed::Feat_ExpertTrapper*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Feat_ExpertTrapper; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Feat_StraightToHeart*> m_Feat_StraightToHeart = __CppStaticProperty<ModdingAPI::Exposed::Feat_StraightToHeart*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Feat_StraightToHeart; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Feat_BlizzardWalker*> m_Feat_BlizzardWalker = __CppStaticProperty<ModdingAPI::Exposed::Feat_BlizzardWalker*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Feat_BlizzardWalker; }
  );
  static inline __CppStaticProperty<bool> m_InsantiatedFeats = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_InsantiatedFeats; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_Feats = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Feats; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::FeatsManagerSaveData*> m_FeatsManagerSaveData = __CppStaticProperty<ModdingAPI::Exposed::FeatsManagerSaveData*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_FeatsManagerSaveData; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1835160))();
  }
};
}