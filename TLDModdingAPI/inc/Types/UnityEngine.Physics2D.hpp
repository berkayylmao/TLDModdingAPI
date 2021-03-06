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
#include "ModdingAPI.Exposed.UnityEngine.PhysicsScene2D.hpp"
#include "ModdingAPI.Exposed.UnityEngine.ColliderDistance2D.hpp"
#include "ModdingAPI.Exposed.UnityEngine.RaycastHit2D.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector2.hpp"
#include "ModdingAPI::Exposed::UnityEngine::PhysicsScene2D.hpp"
#include "ModdingAPI::Exposed::UnityEngine::ContactFilter2D.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Ray.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::ColliderDistance2D.hpp"


namespace ModdingAPI::Exposed::UnityEngine {
struct __Physics2D_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_LastDisabledRigidbody2D;
};

struct __Physics2D_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Physics2D_Il2CppClass {
  Il2CppClass_1 _1;
  __Physics2D_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Physics2D_Il2CppVtbl vtbl;
};

class Physics2D {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C85E60;
  static inline    Physics2D* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2A9A0;
  static inline    __Physics2D_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline Physics2D* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (Physics2D**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __Physics2D_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Physics2D_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Physics2D_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_LastDisabledRigidbody2D = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_LastDisabledRigidbody2D; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::PhysicsScene2D get_defaultPhysicsScene() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::PhysicsScene2D(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15433C0))();
  }
  static inline bool get_queriesHitTriggers() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15434A0))();
  }
  static inline int32_t GetLayerCollisionMask(int32_t layer) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15434F0))(layer);
  }
  static inline int32_t GetLayerCollisionMask_Internal(int32_t layer) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1543600))(layer);
  }
  static inline ModdingAPI::Exposed::UnityEngine::ColliderDistance2D Distance(ModdingAPI::Exposed::UnityEngine::Collider2D* colliderA, ModdingAPI::Exposed::UnityEngine::Collider2D* colliderB) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::ColliderDistance2D(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::Collider2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1543650))(colliderA, colliderB);
  }
  static inline ModdingAPI::Exposed::UnityEngine::ColliderDistance2D Distance_Internal(ModdingAPI::Exposed::UnityEngine::Collider2D* colliderA, ModdingAPI::Exposed::UnityEngine::Collider2D* colliderB) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::ColliderDistance2D(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::Collider2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1543920))(colliderA, colliderB);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D Linecast(ModdingAPI::Exposed::UnityEngine::Vector2 start, ModdingAPI::Exposed::UnityEngine::Vector2 end, int32_t layerMask) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1543A40))(start, end, layerMask);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* LinecastAll(ModdingAPI::Exposed::UnityEngine::Vector2 start, ModdingAPI::Exposed::UnityEngine::Vector2 end, int32_t layerMask) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1543BF0))(start, end, layerMask);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* LinecastAll_Internal(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D physicsScene, ModdingAPI::Exposed::UnityEngine::Vector2 start, ModdingAPI::Exposed::UnityEngine::Vector2 end, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::ContactFilter2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1543DF0))(physicsScene, start, end, contactFilter);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D Raycast(ModdingAPI::Exposed::UnityEngine::Vector2 origin, ModdingAPI::Exposed::UnityEngine::Vector2 direction) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1543EE0))(origin, direction);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D Raycast(ModdingAPI::Exposed::UnityEngine::Vector2 origin, ModdingAPI::Exposed::UnityEngine::Vector2 direction, float distance) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1543FF0))(origin, direction, distance);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D Raycast(ModdingAPI::Exposed::UnityEngine::Vector2 origin, ModdingAPI::Exposed::UnityEngine::Vector2 direction, float distance, int32_t layerMask) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1544110))(origin, direction, distance, layerMask);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D Raycast(ModdingAPI::Exposed::UnityEngine::Vector2 origin, ModdingAPI::Exposed::UnityEngine::Vector2 direction, float distance, int32_t layerMask, float minDepth) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, float, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15442E0))(origin, direction, distance, layerMask, minDepth);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D Raycast(ModdingAPI::Exposed::UnityEngine::Vector2 origin, ModdingAPI::Exposed::UnityEngine::Vector2 direction, float distance, int32_t layerMask, float minDepth, float maxDepth) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, float, int32_t, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15444B0))(origin, direction, distance, layerMask, minDepth, maxDepth);
  }
  static inline int32_t Raycast(ModdingAPI::Exposed::UnityEngine::Vector2 origin, ModdingAPI::Exposed::UnityEngine::Vector2 direction, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1544670))(origin, direction, contactFilter, results);
  }
  static inline int32_t Raycast(ModdingAPI::Exposed::UnityEngine::Vector2 origin, ModdingAPI::Exposed::UnityEngine::Vector2 direction, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results, float distance) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15447D0))(origin, direction, contactFilter, results, distance);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D CircleCast(ModdingAPI::Exposed::UnityEngine::Vector2 origin, float radius, ModdingAPI::Exposed::UnityEngine::Vector2 direction, float distance, int32_t layerMask) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, float, ModdingAPI::Exposed::UnityEngine::Vector2, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1544940))(origin, radius, direction, distance, layerMask);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* GetRayIntersectionAll(ModdingAPI::Exposed::UnityEngine::Ray ray) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Ray)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1544B10))(ray);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* GetRayIntersectionAll(ModdingAPI::Exposed::UnityEngine::Ray ray, float distance) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Ray, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1544C00))(ray, distance);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* GetRayIntersectionAll(ModdingAPI::Exposed::UnityEngine::Ray ray, float distance, int32_t layerMask) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Ray, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1544D00))(ray, distance, layerMask);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* GetRayIntersectionAll_Internal(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D physicsScene, ModdingAPI::Exposed::UnityEngine::Vector3 origin, ModdingAPI::Exposed::UnityEngine::Vector3 direction, float distance, int32_t layerMask) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1544E00))(physicsScene, origin, direction, distance, layerMask);
  }
  static inline int32_t GetRayIntersectionNonAlloc(ModdingAPI::Exposed::UnityEngine::Ray ray, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Ray, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1544F10))(ray, results);
  }
  static inline int32_t GetRayIntersectionNonAlloc(ModdingAPI::Exposed::UnityEngine::Ray ray, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results, float distance) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Ray, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1545060))(ray, results, distance);
  }
  static inline int32_t GetRayIntersectionNonAlloc(ModdingAPI::Exposed::UnityEngine::Ray ray, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results, float distance, int32_t layerMask) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Ray, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15451C0))(ray, results, distance, layerMask);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Collider2D* OverlapPoint(ModdingAPI::Exposed::UnityEngine::Vector2 point, int32_t layerMask) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Collider2D*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1545320))(point, layerMask);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Collider2D_array* OverlapPointAll(ModdingAPI::Exposed::UnityEngine::Vector2 point, int32_t layerMask) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Collider2D_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1545490))(point, layerMask);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Collider2D_array* OverlapPointAll_Internal(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D physicsScene, ModdingAPI::Exposed::UnityEngine::Vector2 point, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Collider2D_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::ContactFilter2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1545670))(physicsScene, point, contactFilter);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Collider2D* OverlapCircle(ModdingAPI::Exposed::UnityEngine::Vector2 point, float radius, int32_t layerMask) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Collider2D*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1545760))(point, radius, layerMask);
  }
  static inline int32_t GetContacts(ModdingAPI::Exposed::UnityEngine::Collider2D* collider, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array* contacts) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15458E0))(collider, contactFilter, contacts);
  }
  static inline int32_t GetContacts(ModdingAPI::Exposed::UnityEngine::Collider2D* collider, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::Collider2D_array* colliders) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::Collider2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1545A70))(collider, contactFilter, colliders);
  }
  static inline int32_t GetContacts(ModdingAPI::Exposed::UnityEngine::Rigidbody2D* rigidbody, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array* contacts) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1545C00))(rigidbody, contactFilter, contacts);
  }
  static inline int32_t GetContacts(ModdingAPI::Exposed::UnityEngine::Rigidbody2D* rigidbody, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::Collider2D_array* colliders) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::Collider2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1545D90))(rigidbody, contactFilter, colliders);
  }
  static inline int32_t GetColliderContacts(ModdingAPI::Exposed::UnityEngine::Collider2D* collider, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1545F20))(collider, contactFilter, results);
  }
  static inline int32_t GetRigidbodyContacts(ModdingAPI::Exposed::UnityEngine::Rigidbody2D* rigidbody, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1546010))(rigidbody, contactFilter, results);
  }
  static inline int32_t GetColliderContactsCollidersOnly(ModdingAPI::Exposed::UnityEngine::Collider2D* collider, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::Collider2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::Collider2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1546100))(collider, contactFilter, results);
  }
  static inline int32_t GetRigidbodyContactsCollidersOnly(ModdingAPI::Exposed::UnityEngine::Rigidbody2D* rigidbody, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::Collider2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::Collider2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15461F0))(rigidbody, contactFilter, results);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15462E0))();
  }
  static inline void get_defaultPhysicsScene_Injected(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1546430))(ret);
  }
  static inline void Distance_Internal_Injected(ModdingAPI::Exposed::UnityEngine::Collider2D* colliderA, ModdingAPI::Exposed::UnityEngine::Collider2D* colliderB, ModdingAPI::Exposed::UnityEngine::ColliderDistance2D ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::ColliderDistance2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1546480))(colliderA, colliderB, ret);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* LinecastAll_Internal_Injected(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D physicsScene, ModdingAPI::Exposed::UnityEngine::Vector2 start, ModdingAPI::Exposed::UnityEngine::Vector2 end, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::ContactFilter2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15464F0))(physicsScene, start, end, contactFilter);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* GetRayIntersectionAll_Internal_Injected(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D physicsScene, ModdingAPI::Exposed::UnityEngine::Vector3 origin, ModdingAPI::Exposed::UnityEngine::Vector3 direction, float distance, int32_t layerMask) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1546570))(physicsScene, origin, direction, distance, layerMask);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Collider2D_array* OverlapPointAll_Internal_Injected(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D physicsScene, ModdingAPI::Exposed::UnityEngine::Vector2 point, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Collider2D_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::PhysicsScene2D, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::ContactFilter2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1546600))(physicsScene, point, contactFilter);
  }
  static inline int32_t GetColliderContacts_Injected(ModdingAPI::Exposed::UnityEngine::Collider2D* collider, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1546670))(collider, contactFilter, results);
  }
  static inline int32_t GetRigidbodyContacts_Injected(ModdingAPI::Exposed::UnityEngine::Rigidbody2D* rigidbody, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15466E0))(rigidbody, contactFilter, results);
  }
  static inline int32_t GetColliderContactsCollidersOnly_Injected(ModdingAPI::Exposed::UnityEngine::Collider2D* collider, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::Collider2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::Collider2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1546750))(collider, contactFilter, results);
  }
  static inline int32_t GetRigidbodyContactsCollidersOnly_Injected(ModdingAPI::Exposed::UnityEngine::Rigidbody2D* rigidbody, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::Collider2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::Collider2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15467C0))(rigidbody, contactFilter, results);
  }
};
}