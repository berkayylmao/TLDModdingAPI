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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI.Exposed.UnityEngine.ContactFilter2D.hpp"
#include "ModdingAPI.Exposed.UnityEngine.ColliderDistance2D.hpp"


namespace ModdingAPI::Exposed::UnityEngine {
struct __Rigidbody2D_Il2CppStaticFields {
};

struct __Rigidbody2D_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Rigidbody2D_Il2CppClass {
  Il2CppClass_1 _1;
  __Rigidbody2D_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Rigidbody2D_Il2CppVtbl vtbl;
};

class Rigidbody2D {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C80668;
  static inline    Rigidbody2D* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2AB08;
  static inline    __Rigidbody2D_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline Rigidbody2D* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (Rigidbody2D**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __Rigidbody2D_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Rigidbody2D_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Rigidbody2D_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_position() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547850))(this);
  }
  void set_position(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15478C0))(this, value);
  }
  float get_rotation() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547920))(this);
  }
  void set_rotation(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547970))(this, value);
  }
  void MovePosition(ModdingAPI::Exposed::UnityEngine::Vector2 position) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15479D0))(this, position);
  }
  void MoveRotation(float angle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547A30))(this, angle);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_velocity() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547A90))(this);
  }
  void set_velocity(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547B00))(this, value);
  }
  float get_angularVelocity() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547B60))(this);
  }
  void set_angularVelocity(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547BB0))(this, value);
  }
  bool get_useAutoMass() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547C10))(this);
  }
  void set_useAutoMass(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547C60))(this, value);
  }
  float get_mass() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547CC0))(this);
  }
  void set_mass(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547D10))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::PhysicsMaterial2D* get_sharedMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::PhysicsMaterial2D*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547D70))(this);
  }
  void set_sharedMaterial(ModdingAPI::Exposed::UnityEngine::PhysicsMaterial2D* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::PhysicsMaterial2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547DC0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_centerOfMass() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547E20))(this);
  }
  void set_centerOfMass(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547E90))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_worldCenterOfMass() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547EF0))(this);
  }
  float get_inertia() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547F60))(this);
  }
  void set_inertia(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1547FB0))(this, value);
  }
  float get_drag() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548010))(this);
  }
  void set_drag(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548060))(this, value);
  }
  float get_angularDrag() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15480C0))(this);
  }
  void set_angularDrag(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548110))(this, value);
  }
  float get_gravityScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548170))(this);
  }
  void set_gravityScale(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15481C0))(this, value);
  }
  int32_t get_bodyType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548220))(this);
  }
  void set_bodyType(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548270))(this, value);
  }
  void SetDragBehaviour(bool dragged) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15482D0))(this, dragged);
  }
  bool get_useFullKinematicContacts() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548330))(this);
  }
  void set_useFullKinematicContacts(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548380))(this, value);
  }
  bool get_isKinematic() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15483E0))(this);
  }
  void set_isKinematic(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548440))(this, value);
  }
  bool get_fixedAngle() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15484B0))(this);
  }
  void set_fixedAngle(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548500))(this, value);
  }
  bool get_freezeRotation() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548560))(this);
  }
  void set_freezeRotation(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15485B0))(this, value);
  }
  int32_t get_constraints() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548610))(this);
  }
  void set_constraints(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548660))(this, value);
  }
  bool IsSleeping() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15486C0))(this);
  }
  bool IsAwake() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548710))(this);
  }
  void Sleep() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548760))(this);
  }
  void WakeUp() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15487B0))(this);
  }
  bool get_simulated() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548800))(this);
  }
  void set_simulated(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548850))(this, value);
  }
  int32_t get_interpolation() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15488B0))(this);
  }
  void set_interpolation(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548900))(this, value);
  }
  int32_t get_sleepMode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548960))(this);
  }
  void set_sleepMode(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15489B0))(this, value);
  }
  int32_t get_collisionDetectionMode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548A10))(this);
  }
  void set_collisionDetectionMode(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548A60))(this, value);
  }
  int32_t get_attachedColliderCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548AC0))(this);
  }
  bool IsTouching(ModdingAPI::Exposed::UnityEngine::Collider2D* collider) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Collider2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548B10))(this, collider);
  }
  bool IsTouching(ModdingAPI::Exposed::UnityEngine::Collider2D* collider, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548B70))(this, collider, contactFilter);
  }
  bool IsTouching_OtherColliderWithFilter_Internal(ModdingAPI::Exposed::UnityEngine::Collider2D* collider, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548C00))(this, collider, contactFilter);
  }
  bool IsTouching(ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548C70))(this, contactFilter);
  }
  bool IsTouching_AnyColliderWithFilter_Internal(ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548CE0))(this, contactFilter);
  }
  bool IsTouchingLayers() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548D40))(this);
  }
  bool IsTouchingLayers(int32_t layerMask) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548DA0))(this, layerMask);
  }
  bool OverlapPoint(ModdingAPI::Exposed::UnityEngine::Vector2 point) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548E00))(this, point);
  }
  ModdingAPI::Exposed::UnityEngine::ColliderDistance2D Distance(ModdingAPI::Exposed::UnityEngine::Collider2D* collider) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::ColliderDistance2D(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Collider2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1548E60))(this, collider);
  }
  ModdingAPI::Exposed::UnityEngine::ColliderDistance2D Distance_Internal(ModdingAPI::Exposed::UnityEngine::Collider2D* collider) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::ColliderDistance2D(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Collider2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549090))(this, collider);
  }
  void AddForce(ModdingAPI::Exposed::UnityEngine::Vector2 force) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549130))(this, force);
  }
  void AddForce(ModdingAPI::Exposed::UnityEngine::Vector2 force, int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549190))(this, force, mode);
  }
  void AddRelativeForce(ModdingAPI::Exposed::UnityEngine::Vector2 relativeForce) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549200))(this, relativeForce);
  }
  void AddRelativeForce(ModdingAPI::Exposed::UnityEngine::Vector2 relativeForce, int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549260))(this, relativeForce, mode);
  }
  void AddForceAtPosition(ModdingAPI::Exposed::UnityEngine::Vector2 force, ModdingAPI::Exposed::UnityEngine::Vector2 position) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15492D0))(this, force, position);
  }
  void AddForceAtPosition(ModdingAPI::Exposed::UnityEngine::Vector2 force, ModdingAPI::Exposed::UnityEngine::Vector2 position, int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549340))(this, force, position, mode);
  }
  void AddTorque(float torque) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15493C0))(this, torque);
  }
  void AddTorque(float torque, int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549430))(this, torque, mode);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetPoint(ModdingAPI::Exposed::UnityEngine::Vector2 point) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15494A0))(this, point);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetRelativePoint(ModdingAPI::Exposed::UnityEngine::Vector2 relativePoint) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549510))(this, relativePoint);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetVector(ModdingAPI::Exposed::UnityEngine::Vector2 vector) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549580))(this, vector);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetRelativeVector(ModdingAPI::Exposed::UnityEngine::Vector2 relativeVector) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15495F0))(this, relativeVector);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetPointVelocity(ModdingAPI::Exposed::UnityEngine::Vector2 point) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549660))(this, point);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetRelativePointVelocity(ModdingAPI::Exposed::UnityEngine::Vector2 relativePoint) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15496D0))(this, relativePoint);
  }
  int32_t OverlapCollider(ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::Collider2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::Collider2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549740))(this, contactFilter, results);
  }
  int32_t GetContacts(ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array* contacts) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15497B0))(this, contacts);
  }
  int32_t GetContacts(ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array* contacts) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::ContactPoint2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15498D0))(this, contactFilter, contacts);
  }
  int32_t GetContacts(ModdingAPI::Exposed::UnityEngine::Collider2D_array* colliders) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Collider2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15499B0))(this, colliders);
  }
  int32_t GetContacts(ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::Collider2D_array* colliders) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::Collider2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549AD0))(this, contactFilter, colliders);
  }
  int32_t GetAttachedColliders(ModdingAPI::Exposed::UnityEngine::Collider2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Collider2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549BB0))(this, results);
  }
  int32_t Cast(ModdingAPI::Exposed::UnityEngine::Vector2 direction, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549C10))(this, direction, results);
  }
  int32_t Cast(ModdingAPI::Exposed::UnityEngine::Vector2 direction, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results, float distance) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549C40))(this, direction, results, distance);
  }
  int32_t Cast(ModdingAPI::Exposed::UnityEngine::Vector2 direction, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549C60))(this, direction, contactFilter, results);
  }
  int32_t Cast(ModdingAPI::Exposed::UnityEngine::Vector2 direction, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results, float distance) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549D00))(this, direction, contactFilter, results, distance);
  }
  int32_t Cast_Internal(ModdingAPI::Exposed::UnityEngine::Vector2 direction, float distance, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, float, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549DA0))(this, direction, distance, results);
  }
  int32_t CastFiltered_Internal(ModdingAPI::Exposed::UnityEngine::Vector2 direction, float distance, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, float, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549E20))(this, direction, distance, contactFilter, results);
  }
  void get_position_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549EB0))(this, ret);
  }
  void set_position_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549F10))(this, value);
  }
  void MovePosition_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 position) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549F70))(this, position);
  }
  void get_velocity_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1549FD0))(this, ret);
  }
  void set_velocity_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A030))(this, value);
  }
  void get_centerOfMass_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A090))(this, ret);
  }
  void set_centerOfMass_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A0F0))(this, value);
  }
  void get_worldCenterOfMass_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A150))(this, ret);
  }
  bool IsTouching_OtherColliderWithFilter_Internal_Injected(ModdingAPI::Exposed::UnityEngine::Collider2D* collider, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A1B0))(this, collider, contactFilter);
  }
  bool IsTouching_AnyColliderWithFilter_Internal_Injected(ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A220))(this, contactFilter);
  }
  bool OverlapPoint_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 point) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A280))(this, point);
  }
  void Distance_Internal_Injected(ModdingAPI::Exposed::UnityEngine::Collider2D* collider, ModdingAPI::Exposed::UnityEngine::ColliderDistance2D ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Collider2D*, ModdingAPI::Exposed::UnityEngine::ColliderDistance2D)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A2E0))(this, collider, ret);
  }
  void AddForce_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 force, int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A350))(this, force, mode);
  }
  void AddRelativeForce_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 relativeForce, int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A3C0))(this, relativeForce, mode);
  }
  void AddForceAtPosition_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 force, ModdingAPI::Exposed::UnityEngine::Vector2 position, int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A430))(this, force, position, mode);
  }
  void GetPoint_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 point, ModdingAPI::Exposed::UnityEngine::Vector2 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A4B0))(this, point, ret);
  }
  void GetRelativePoint_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 relativePoint, ModdingAPI::Exposed::UnityEngine::Vector2 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A520))(this, relativePoint, ret);
  }
  void GetVector_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 vector, ModdingAPI::Exposed::UnityEngine::Vector2 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A590))(this, vector, ret);
  }
  void GetRelativeVector_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 relativeVector, ModdingAPI::Exposed::UnityEngine::Vector2 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A600))(this, relativeVector, ret);
  }
  void GetPointVelocity_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 point, ModdingAPI::Exposed::UnityEngine::Vector2 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A670))(this, point, ret);
  }
  void GetRelativePointVelocity_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 relativePoint, ModdingAPI::Exposed::UnityEngine::Vector2 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A6E0))(this, relativePoint, ret);
  }
  int32_t OverlapCollider_Injected(ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::Collider2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::Collider2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A750))(this, contactFilter, results);
  }
  int32_t Cast_Internal_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 direction, float distance, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, float, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A7C0))(this, direction, distance, results);
  }
  int32_t CastFiltered_Internal_Injected(ModdingAPI::Exposed::UnityEngine::Vector2 direction, float distance, ModdingAPI::Exposed::UnityEngine::ContactFilter2D contactFilter, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array* results) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rigidbody2D*, ModdingAPI::Exposed::UnityEngine::Vector2, float, ModdingAPI::Exposed::UnityEngine::ContactFilter2D, ModdingAPI::Exposed::UnityEngine::RaycastHit2D_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A840))(this, direction, distance, contactFilter, results);
  }
};
}