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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __FootstepTrailManager_Il2CppStaticFields {
  ModdingAPI::Exposed::FootstepTrailManager* m_Instance;
  ModdingAPI::Exposed::FootstepTrailManagerSaveDataProxy* m_FootstepTrailManagerSaveDataProxy;
};

struct __FootstepTrailManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __FootstepTrailManager_Il2CppClass {
  Il2CppClass_1 _1;
  __FootstepTrailManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __FootstepTrailManager_Il2CppVtbl vtbl;
};

class FootstepTrailManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C20818;
  static inline    __FootstepTrailManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __FootstepTrailManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__FootstepTrailManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __FootstepTrailManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool m_DebugShowBounds;
  float m_CameraCaptureBoundsSize;
  float m_CameraCaptureHideDistance;
  float m_DepthNoiseScalar;
  float m_GlobalDepthScalar;
  float m_MinGroundNormalYForPlacement;
  ModdingAPI::Exposed::SnowImprintDef_array* m_ImprintDefs;
  ModdingAPI::Exposed::FootstepTrail* m_ActivePlayerTrail;
  float m_MinInitialSnowDepthOnDeserialize;
  ModdingAPI::Exposed::OctreeBounds_T_* m_FootstepGroupOctree;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Trails;
  ModdingAPI::Exposed::System::Collections::Generic::List_T__array* m_CaptureLists;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_OpenFootstepGroups;
  int32_t m_CaptureTick;
  int32_t m_TrailPurgeIndex;
  bool m_AwakeHasBeenCalled;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EAAE0))(this);
  }
  ModdingAPI::Exposed::SnowImprintDef* GetImprintDef(int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::SnowImprintDef*(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EB150))(this, type);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EB190))(this);
  }
  void AddFootstepTrail(ModdingAPI::Exposed::FootstepTrail* fst, bool isPlayerTrail) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*, ModdingAPI::Exposed::FootstepTrail*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EB2C0))(this, fst, isPlayerTrail);
  }
  void OnAddFootstepGroup(ModdingAPI::Exposed::FootstepGroup* group) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*, ModdingAPI::Exposed::FootstepGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EB370))(this, group);
  }
  void OnCloseFootstepGroup(ModdingAPI::Exposed::FootstepGroup* group) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*, ModdingAPI::Exposed::FootstepGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EB460))(this, group);
  }
  void OnRemoveFootstepGroup(ModdingAPI::Exposed::FootstepGroup* group) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*, ModdingAPI::Exposed::FootstepGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EB540))(this, group);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EB620))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EB880))(this, text);
  }
  void AddPlayerFootstep(ModdingAPI::Exposed::UnityEngine::Vector3 ownerPos, ModdingAPI::Exposed::UnityEngine::Vector3 pos, ModdingAPI::Exposed::UnityEngine::Vector3 groundNormal, float yRotation, bool flip, float forceDeepFrac) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, float, bool, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EBDA0))(this, ownerPos, pos, groundNormal, yRotation, flip, forceDeepFrac);
  }
  void OnPlayerEnterSnowDepthTrigger(ModdingAPI::Exposed::SnowDepth* sd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*, ModdingAPI::Exposed::SnowDepth*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EBE40))(this, sd);
  }
  void OnPlayerExitSnowDepthTrigger(ModdingAPI::Exposed::SnowDepth* sd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*, ModdingAPI::Exposed::SnowDepth*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EBE60))(this, sd);
  }
  bool IsFootprintPositionValid(ModdingAPI::Exposed::UnityEngine::Vector3 heelPos, ModdingAPI::Exposed::UnityEngine::Vector3 offset, float footLen, ModdingAPI::Exposed::UnityEngine::Vector3 point, ModdingAPI::Exposed::UnityEngine::Vector3 normal) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, float, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EBFD0))(this, heelPos, offset, footLen, point, normal);
  }
  void OnQualityChange(int32_t quality) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EC680))(this, quality);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15EC780))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FootstepTrailManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::FootstepTrailManager*> m_Instance = __CppStaticProperty<ModdingAPI::Exposed::FootstepTrailManager*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Instance; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::FootstepTrailManagerSaveDataProxy*> m_FootstepTrailManagerSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::FootstepTrailManagerSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_FootstepTrailManagerSaveDataProxy; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15ED350))();
  }
};
}