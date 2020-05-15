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
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Color.hpp"


namespace ModdingAPI::Exposed {
struct __LightingManager_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Lights;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_FpsLights;
  bool m_LevelLoadComplete;
  ModdingAPI::Exposed::System::String_array* m_NonStaticComponentList;
  float m_LightIntensityOnPlayer;
  ModdingAPI::Exposed::UnityEngine::Color m_LightColorOnPlayer;
  int32_t m_LightingStrengthShaderId;
  ModdingAPI::Exposed::UnityEngine::Color m_DefaultLightingStrength;
};

struct __LightingManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __LightingManager_Il2CppClass {
  Il2CppClass_1 _1;
  __LightingManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __LightingManager_Il2CppVtbl vtbl;
};

class LightingManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4E640;
  static inline    __LightingManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __LightingManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__LightingManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __LightingManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::String_array* m_NonStaticComponents;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightingManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EFD30))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightingManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EFDD0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightingManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18EFE80))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightingManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_Lights = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Lights; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_FpsLights = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_FpsLights; }
  );
  static inline __CppStaticProperty<bool> m_LevelLoadComplete = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_LevelLoadComplete; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::String_array*> m_NonStaticComponentList = __CppStaticProperty<ModdingAPI::Exposed::System::String_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_NonStaticComponentList; }
  );
  static inline __CppStaticProperty<float> m_LightIntensityOnPlayer = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_LightIntensityOnPlayer; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color> m_LightColorOnPlayer = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_LightColorOnPlayer; }
  );
  static inline __CppStaticProperty<int32_t> m_LightingStrengthShaderId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_LightingStrengthShaderId; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color> m_DefaultLightingStrength = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_DefaultLightingStrength; }
  );

  // Static methods:
  static inline void Add(ModdingAPI::Exposed::LightTracking* light) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightTracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18F0540))(light);
  }
  static inline void Remove(ModdingAPI::Exposed::LightTracking* light) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LightTracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18F0910))(light);
  }
  static inline void RemoveAll() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x18F0AC0))();
  }
  static inline void OnLevelLoadComplete() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x18F0BE0))();
  }
  static inline void TransformLightPositions(ModdingAPI::Exposed::UnityEngine::Transform* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18F0E80))(t);
  }
  static inline void InverseTransformLightPositions(ModdingAPI::Exposed::UnityEngine::Transform* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18F0FF0))(t);
  }
  static inline void TransformFpsLightPositions(ModdingAPI::Exposed::UnityEngine::Transform* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18F13A0))(t);
  }
  static inline void InverseTransformFpsLightPositions(ModdingAPI::Exposed::UnityEngine::Transform* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18F1740))(t);
  }
  static inline void SetLightingStrength(ModdingAPI::Exposed::UnityEngine::Color value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18F18B0))(value);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x18F19E0))();
  }
};
}