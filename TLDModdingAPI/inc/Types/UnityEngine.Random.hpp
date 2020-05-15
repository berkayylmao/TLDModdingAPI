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
#include "ModdingAPI.Exposed.UnityEngine.Random.State.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Random::State.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector2.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Quaternion.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Quaternion.hpp"


namespace ModdingAPI::Exposed::UnityEngine {
struct __Random_Il2CppStaticFields {
};

struct __Random_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Random_Il2CppClass {
  Il2CppClass_1 _1;
  __Random_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Random_Il2CppVtbl vtbl;
};

class Random {
public:
  // Il2Cpp fields:
  __Random_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline void InitState(int32_t seed) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C390))(seed);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Random::State get_state() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Random::State(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C3E0))();
  }
  static inline void set_state(ModdingAPI::Exposed::UnityEngine::Random::State value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Random::State)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C450))(value);
  }
  static inline float Range(float min, float max) {
    return reinterpret_cast<float(__fastcall*)(float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C4A0))(min, max);
  }
  static inline int32_t Range(int32_t min, int32_t max) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C510))(min, max);
  }
  static inline int32_t RandomRangeInt(int32_t min, int32_t max) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C510))(min, max);
  }
  static inline float get_value() {
    return reinterpret_cast<float(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C570))();
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 get_insideUnitSphere() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C5C0))();
  }
  static inline void GetRandomUnitCircle(ModdingAPI::Exposed::UnityEngine::Vector2 output) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C640))(output);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector2 get_insideUnitCircle() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C690))();
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 get_onUnitSphere() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C6F0))();
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion get_rotation() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C770))();
  }
  static inline ModdingAPI::Exposed::UnityEngine::Color ColorHSV(float hueMin, float hueMax, float saturationMin, float saturationMax, float valueMin, float valueMax) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(float, float, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C7E0))(hueMin, hueMax, saturationMin, saturationMax, valueMin, valueMax);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Color ColorHSV(float hueMin, float hueMax, float saturationMin, float saturationMax, float valueMin, float valueMax, float alphaMin, float alphaMax) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(float, float, float, float, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109C850))(hueMin, hueMax, saturationMin, saturationMax, valueMin, valueMax, alphaMin, alphaMax);
  }
  static inline void get_state_Injected(ModdingAPI::Exposed::UnityEngine::Random::State ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Random::State)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109CAF0))(ret);
  }
  static inline void set_state_Injected(ModdingAPI::Exposed::UnityEngine::Random::State value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Random::State)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109CB40))(value);
  }
  static inline void get_insideUnitSphere_Injected(ModdingAPI::Exposed::UnityEngine::Vector3 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109CB90))(ret);
  }
  static inline void get_onUnitSphere_Injected(ModdingAPI::Exposed::UnityEngine::Vector3 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109CBE0))(ret);
  }
  static inline void get_rotation_Injected(ModdingAPI::Exposed::UnityEngine::Quaternion ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x109CC30))(ret);
  }
};
}