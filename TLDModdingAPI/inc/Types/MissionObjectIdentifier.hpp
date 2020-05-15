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
struct __MissionObjectIdentifier_Il2CppStaticFields {
  ModdingAPI::Exposed::MissionObjectIdentifierSaveProxy* m_MissionObjectIdentifierSaveProxy;
};

struct __MissionObjectIdentifier_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __MissionObjectIdentifier_Il2CppClass {
  Il2CppClass_1 _1;
  __MissionObjectIdentifier_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MissionObjectIdentifier_Il2CppVtbl vtbl;
};

class MissionObjectIdentifier {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C6CEA0;
  static inline    MissionObjectIdentifier* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3F800;
  static inline    __MissionObjectIdentifier_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline MissionObjectIdentifier* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (MissionObjectIdentifier**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __MissionObjectIdentifier_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MissionObjectIdentifier_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MissionObjectIdentifier_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  System_String* m_Id;
  int32_t m_ObjectClass;
  System_String* m_ActivityTags;
  bool m_DestroyAfterMission;
  bool m_BaseAiOnlySerializeIfActive;
  bool m_IsUnique;
  int32_t m_NumTags;
  bool m_SkipSaveManagedItemTest;
  bool m_SkipUnregister;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionObjectIdentifier*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B03A90))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionObjectIdentifier*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B04190))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MissionObjectIdentifier*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B04680))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionObjectIdentifier*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B047E0))(this, text);
  }
  bool HasAnyTag(ModdingAPI::Exposed::System::String_array* tags) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::MissionObjectIdentifier*, ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B048C0))(this, tags);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionObjectIdentifier*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::MissionObjectIdentifierSaveProxy*> m_MissionObjectIdentifierSaveProxy = __CppStaticProperty<ModdingAPI::Exposed::MissionObjectIdentifierSaveProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_MissionObjectIdentifierSaveProxy; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::MissionObjectIdentifier* AddMissionComponentForSaveManagedItem(ModdingAPI::Exposed::UnityEngine::GameObject* smObject, System_String* missionObjectSerialized) {
    return reinterpret_cast<ModdingAPI::Exposed::MissionObjectIdentifier*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B042B0))(smObject, missionObjectSerialized);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B04AF0))();
  }
};
}