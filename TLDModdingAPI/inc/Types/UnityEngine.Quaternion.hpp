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
#include "ModdingAPI.Exposed.UnityEngine.Quaternion.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"

namespace ModdingAPI::Exposed::UnityEngine {
struct __Quaternion_Il2CppObject {
  float x;
  float y;
  float z;
  float w;
};
struct __Quaternion_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Quaternion identityQuaternion;
};

struct __Quaternion_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Equals;
};

struct __Quaternion_Il2CppClass {
  Il2CppClass_1 _1;
  __Quaternion_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Quaternion_Il2CppVtbl vtbl;
};

class Quaternion {
  static constexpr uint64_t _rvaObjectInstance     = 0x3C844A0;
  static inline    Quaternion* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t _rvaClassInstance     = 0x3C88500;
  static inline    __Quaternion_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Singleton object getter:
  static inline Quaternion* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (Quaternion**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Static class getter:
  static inline __Quaternion_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Quaternion_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  float x;
  float y;
  float z;
  float w;

  // Member methods:
  void ::ctor(float x, float y, float z, float w) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion*, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3B0))(this, x, y, z, w);
  }
  float get_Item(int32_t index) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x45790))(this, index);
  }
  void set_Item(int32_t index, float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x457A0))(this, index, value);
  }
  void SetLookRotation(ModdingAPI::Exposed::UnityEngine::Vector3 view, ModdingAPI::Exposed::UnityEngine::Vector3 up) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x457B0))(this, view, up);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_eulerAngles() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x457F0))(this);
  }
  void set_eulerAngles(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x45820))(this, value);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x45850))(this);
  }
  bool Equals(Il2CppObject* other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x45860))(this, other);
  }
  bool Equals(ModdingAPI::Exposed::UnityEngine::Quaternion other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion*, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BBD0))(this, other);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x45870))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion FromToRotation(ModdingAPI::Exposed::UnityEngine::Vector3 fromDirection, ModdingAPI::Exposed::UnityEngine::Vector3 toDirection) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1099F70))(fromDirection, toDirection);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion Inverse(ModdingAPI::Exposed::UnityEngine::Quaternion rotation) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109A080))(rotation);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion Slerp(ModdingAPI::Exposed::UnityEngine::Quaternion a, ModdingAPI::Exposed::UnityEngine::Quaternion b, float t) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Quaternion, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109A180))(a, b, t);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion Lerp(ModdingAPI::Exposed::UnityEngine::Quaternion a, ModdingAPI::Exposed::UnityEngine::Quaternion b, float t) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Quaternion, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109A2A0))(a, b, t);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion Internal_FromEulerRad(ModdingAPI::Exposed::UnityEngine::Vector3 euler) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109A3C0))(euler);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 Internal_ToEulerRad(ModdingAPI::Exposed::UnityEngine::Quaternion rotation) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109A4C0))(rotation);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion AngleAxis(float angle, ModdingAPI::Exposed::UnityEngine::Vector3 axis) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(float, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109A5D0))(angle, axis);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion LookRotation(ModdingAPI::Exposed::UnityEngine::Vector3 forward, ModdingAPI::Exposed::UnityEngine::Vector3 upwards) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109A6E0))(forward, upwards);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion LookRotation(ModdingAPI::Exposed::UnityEngine::Vector3 forward) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109A7F0))(forward);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion get_identity() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x109AC10))();
  }
  static inline bool IsEqualUsingDot(float dot) {
    return reinterpret_cast<bool(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109AFD0))(dot);
  }
  static inline float Dot(ModdingAPI::Exposed::UnityEngine::Quaternion a, ModdingAPI::Exposed::UnityEngine::Quaternion b) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109B1B0))(a, b);
  }
  static inline float Angle(ModdingAPI::Exposed::UnityEngine::Quaternion a, ModdingAPI::Exposed::UnityEngine::Quaternion b) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109B3C0))(a, b);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 Internal_MakePositive(ModdingAPI::Exposed::UnityEngine::Vector3 euler) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109B520))(euler);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion Euler(float x, float y, float z) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109B940))(x, y, z);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion Euler(ModdingAPI::Exposed::UnityEngine::Vector3 euler) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109BA80))(euler);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x109BF90))();
  }
  static inline void FromToRotation_Injected(ModdingAPI::Exposed::UnityEngine::Vector3 fromDirection, ModdingAPI::Exposed::UnityEngine::Vector3 toDirection, ModdingAPI::Exposed::UnityEngine::Quaternion ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C020))(fromDirection, toDirection, ret);
  }
  static inline void Inverse_Injected(ModdingAPI::Exposed::UnityEngine::Quaternion rotation, ModdingAPI::Exposed::UnityEngine::Quaternion ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C090))(rotation, ret);
  }
  static inline void Slerp_Injected(ModdingAPI::Exposed::UnityEngine::Quaternion a, ModdingAPI::Exposed::UnityEngine::Quaternion b, float t, ModdingAPI::Exposed::UnityEngine::Quaternion ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Quaternion, float, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C0F0))(a, b, t, ret);
  }
  static inline void Lerp_Injected(ModdingAPI::Exposed::UnityEngine::Quaternion a, ModdingAPI::Exposed::UnityEngine::Quaternion b, float t, ModdingAPI::Exposed::UnityEngine::Quaternion ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Quaternion, float, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C170))(a, b, t, ret);
  }
  static inline void Internal_FromEulerRad_Injected(ModdingAPI::Exposed::UnityEngine::Vector3 euler, ModdingAPI::Exposed::UnityEngine::Quaternion ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C1F0))(euler, ret);
  }
  static inline void Internal_ToEulerRad_Injected(ModdingAPI::Exposed::UnityEngine::Quaternion rotation, ModdingAPI::Exposed::UnityEngine::Vector3 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C250))(rotation, ret);
  }
  static inline void AngleAxis_Injected(float angle, ModdingAPI::Exposed::UnityEngine::Vector3 axis, ModdingAPI::Exposed::UnityEngine::Quaternion ret) {
    reinterpret_cast<void(__fastcall*)(float, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C2B0))(angle, axis, ret);
  }
  static inline void LookRotation_Injected(ModdingAPI::Exposed::UnityEngine::Vector3 forward, ModdingAPI::Exposed::UnityEngine::Vector3 upwards, ModdingAPI::Exposed::UnityEngine::Quaternion ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C320))(forward, upwards, ret);
  }

};
}