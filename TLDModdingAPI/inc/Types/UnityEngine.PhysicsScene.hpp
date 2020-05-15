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
#include "ModdingAPI.Exposed.UnityEngine.PhysicsScene.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.RaycastHit.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Ray.hpp"

namespace ModdingAPI::Exposed::UnityEngine {
struct __PhysicsScene_Il2CppObject {
  int32_t m_Handle;
};
struct __PhysicsScene_Il2CppStaticFields {
};

struct __PhysicsScene_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Equals;
};

struct __PhysicsScene_Il2CppClass {
  Il2CppClass_1 _1;
  __PhysicsScene_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PhysicsScene_Il2CppVtbl vtbl;
};

class PhysicsScene {
  static constexpr uint64_t _rvaClassInstance     = 0x3C872B8;
  static inline    __PhysicsScene_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Static class getter:
  static inline __PhysicsScene_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PhysicsScene_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  int32_t m_Handle;

  // Member methods:
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x537F0))(this);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BB70))(this);
  }
  bool Equals(Il2CppObject* other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x53900))(this, other);
  }
  bool Equals(ModdingAPI::Exposed::UnityEngine::PhysicsScene other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene*, ModdingAPI::Exposed::UnityEngine::PhysicsScene)>(Helpers::Memory::GetInstance().MakeAbsolute(0x456A0))(this, other);
  }
  bool Raycast(ModdingAPI::Exposed::UnityEngine::Vector3 origin, ModdingAPI::Exposed::UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask, int32_t queryTriggerInteraction) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, float, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x539D0))(this, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
  }
  bool Raycast(ModdingAPI::Exposed::UnityEngine::Vector3 origin, ModdingAPI::Exposed::UnityEngine::Vector3 direction, ModdingAPI::Exposed::UnityEngine::RaycastHit hitInfo, float maxDistance, int32_t layerMask, int32_t queryTriggerInteraction) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::RaycastHit, float, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x53A30))(this, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
  }
  int32_t Raycast(ModdingAPI::Exposed::UnityEngine::Vector3 origin, ModdingAPI::Exposed::UnityEngine::Vector3 direction, ModdingAPI::Exposed::UnityEngine::RaycastHit_array* raycastHits, float maxDistance, int32_t layerMask, int32_t queryTriggerInteraction) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::RaycastHit_array*, float, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x53AA0))(this, origin, direction, raycastHits, maxDistance, layerMask, queryTriggerInteraction);
  }

  // Static methods:
  static inline bool Internal_RaycastTest(ModdingAPI::Exposed::UnityEngine::PhysicsScene physicsScene, ModdingAPI::Exposed::UnityEngine::Ray ray, float maxDistance, int32_t layerMask, int32_t queryTriggerInteraction) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene, ModdingAPI::Exposed::UnityEngine::Ray, float, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1535CB0))(physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction);
  }
  static inline bool Internal_Raycast(ModdingAPI::Exposed::UnityEngine::PhysicsScene physicsScene, ModdingAPI::Exposed::UnityEngine::Ray ray, float maxDistance, ModdingAPI::Exposed::UnityEngine::RaycastHit hit, int32_t layerMask, int32_t queryTriggerInteraction) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene, ModdingAPI::Exposed::UnityEngine::Ray, float, ModdingAPI::Exposed::UnityEngine::RaycastHit, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1535FB0))(physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction);
  }
  static inline int32_t Internal_RaycastNonAlloc(ModdingAPI::Exposed::UnityEngine::PhysicsScene physicsScene, ModdingAPI::Exposed::UnityEngine::Ray ray, ModdingAPI::Exposed::UnityEngine::RaycastHit_array* raycastHits, float maxDistance, int32_t mask, int32_t queryTriggerInteraction) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene, ModdingAPI::Exposed::UnityEngine::Ray, ModdingAPI::Exposed::UnityEngine::RaycastHit_array*, float, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1536220))(physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction);
  }
  static inline bool Internal_RaycastTest_Injected(ModdingAPI::Exposed::UnityEngine::PhysicsScene physicsScene, ModdingAPI::Exposed::UnityEngine::Ray ray, float maxDistance, int32_t layerMask, int32_t queryTriggerInteraction) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene, ModdingAPI::Exposed::UnityEngine::Ray, float, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15362B0))(physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction);
  }
  static inline bool Internal_Raycast_Injected(ModdingAPI::Exposed::UnityEngine::PhysicsScene physicsScene, ModdingAPI::Exposed::UnityEngine::Ray ray, float maxDistance, ModdingAPI::Exposed::UnityEngine::RaycastHit hit, int32_t layerMask, int32_t queryTriggerInteraction) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene, ModdingAPI::Exposed::UnityEngine::Ray, float, ModdingAPI::Exposed::UnityEngine::RaycastHit, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1536340))(physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction);
  }
  static inline int32_t Internal_RaycastNonAlloc_Injected(ModdingAPI::Exposed::UnityEngine::PhysicsScene physicsScene, ModdingAPI::Exposed::UnityEngine::Ray ray, ModdingAPI::Exposed::UnityEngine::RaycastHit_array* raycastHits, float maxDistance, int32_t mask, int32_t queryTriggerInteraction) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene, ModdingAPI::Exposed::UnityEngine::Ray, ModdingAPI::Exposed::UnityEngine::RaycastHit_array*, float, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15363D0))(physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction);
  }

};
}