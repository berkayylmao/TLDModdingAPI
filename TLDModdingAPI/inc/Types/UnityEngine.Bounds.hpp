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
#include "ModdingAPI.Exposed.UnityEngine.Bounds.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Ray.hpp"

namespace ModdingAPI::Exposed::UnityEngine {
struct __Bounds_Il2CppObject {
  ModdingAPI::Exposed::UnityEngine::Vector3 m_Center;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_Extents;
};
struct __Bounds_Il2CppStaticFields {
};

struct __Bounds_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Equals;
};

struct __Bounds_Il2CppClass {
  Il2CppClass_1 _1;
  __Bounds_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Bounds_Il2CppVtbl vtbl;
};

class Bounds {
  static constexpr uint64_t _rvaClassInstance     = 0x3C2DDD8;
  static inline    __Bounds_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Static class getter:
  static inline __Bounds_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Bounds_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Vector3 m_Center;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_Extents;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Vector3 center, ModdingAPI::Exposed::UnityEngine::Vector3 size) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B4D0))(this, center, size);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B510))(this);
  }
  bool Equals(Il2CppObject* other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B520))(this, other);
  }
  bool Equals(ModdingAPI::Exposed::UnityEngine::Bounds other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B530))(this, other);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_center() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B560))(this);
  }
  void set_center(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE540))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_size() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B580))(this);
  }
  void set_size(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B5B0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_extents() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B5E0))(this);
  }
  void set_extents(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE570))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_min() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B600))(this);
  }
  void set_min(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B630))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_max() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B690))(this);
  }
  void set_max(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B6C0))(this, value);
  }
  void SetMinMax(ModdingAPI::Exposed::UnityEngine::Vector3 min, ModdingAPI::Exposed::UnityEngine::Vector3 max) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B720))(this, min, max);
  }
  void Encapsulate(ModdingAPI::Exposed::UnityEngine::Vector3 point) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B760))(this, point);
  }
  void Encapsulate(ModdingAPI::Exposed::UnityEngine::Bounds bounds) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B790))(this, bounds);
  }
  void Expand(float amount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B7C0))(this, amount);
  }
  void Expand(ModdingAPI::Exposed::UnityEngine::Vector3 amount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B7D0))(this, amount);
  }
  bool Intersects(ModdingAPI::Exposed::UnityEngine::Bounds bounds) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B800))(this, bounds);
  }
  bool IntersectRay(ModdingAPI::Exposed::UnityEngine::Ray ray) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Ray)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B830))(this, ray);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3B8C0))(this);
  }
  bool Contains(ModdingAPI::Exposed::UnityEngine::Vector3 point) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BA60))(this, point);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 ClosestPoint(ModdingAPI::Exposed::UnityEngine::Vector3 point) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BAD0))(this, point);
  }

  // Static methods:
  static inline bool IntersectRayAABB(ModdingAPI::Exposed::UnityEngine::Ray ray, ModdingAPI::Exposed::UnityEngine::Bounds bounds, float dist) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Ray, ModdingAPI::Exposed::UnityEngine::Bounds, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFCA290))(ray, bounds, dist);
  }
  static inline bool Contains_Injected(ModdingAPI::Exposed::UnityEngine::Bounds _unity_self, ModdingAPI::Exposed::UnityEngine::Vector3 point) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFCA390))(_unity_self, point);
  }
  static inline bool IntersectRayAABB_Injected(ModdingAPI::Exposed::UnityEngine::Ray ray, ModdingAPI::Exposed::UnityEngine::Bounds bounds, float dist) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Ray, ModdingAPI::Exposed::UnityEngine::Bounds, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFCA3F0))(ray, bounds, dist);
  }
  static inline void ClosestPoint_Injected(ModdingAPI::Exposed::UnityEngine::Bounds _unity_self, ModdingAPI::Exposed::UnityEngine::Vector3 point, ModdingAPI::Exposed::UnityEngine::Vector3 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFCA460))(_unity_self, point, ret);
  }

};
}