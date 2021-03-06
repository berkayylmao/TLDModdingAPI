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
#include "ModdingAPI.Exposed.UnityEngine.Keyframe.hpp"


namespace ModdingAPI::Exposed::UnityEngine {
struct __AnimationCurve_Il2CppStaticFields {
};

struct __AnimationCurve_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Equals;
};

struct __AnimationCurve_Il2CppClass {
  Il2CppClass_1 _1;
  __AnimationCurve_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AnimationCurve_Il2CppVtbl vtbl;
};

class AnimationCurve {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7D408;
  static inline    __AnimationCurve_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AnimationCurve_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AnimationCurve_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AnimationCurve_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t m_Ptr;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Keyframe_array* keys) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, ModdingAPI::Exposed::UnityEngine::Keyframe_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4700))(this, keys);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4760))(this);
  }
  bool Internal_Equals(intptr_t other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4860))(this, other);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC48C0))(this);
  }
  float Evaluate(float time) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4980))(this, time);
  }
  ModdingAPI::Exposed::UnityEngine::Keyframe_array* get_keys() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Keyframe_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC49E0))(this);
  }
  void set_keys(ModdingAPI::Exposed::UnityEngine::Keyframe_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, ModdingAPI::Exposed::UnityEngine::Keyframe_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4A30))(this, value);
  }
  int32_t AddKey(float time, float value) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4A90))(this, time, value);
  }
  int32_t AddKey(ModdingAPI::Exposed::UnityEngine::Keyframe key) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, ModdingAPI::Exposed::UnityEngine::Keyframe)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4B00))(this, key);
  }
  int32_t AddKey_Internal(ModdingAPI::Exposed::UnityEngine::Keyframe key) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, ModdingAPI::Exposed::UnityEngine::Keyframe)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4B70))(this, key);
  }
  void RemoveKey(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4BD0))(this, index);
  }
  ModdingAPI::Exposed::UnityEngine::Keyframe get_Item(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Keyframe(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4C30))(this, index);
  }
  int32_t get_length() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4CE0))(this);
  }
  void SetKeys(ModdingAPI::Exposed::UnityEngine::Keyframe_array* keys) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, ModdingAPI::Exposed::UnityEngine::Keyframe_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4A30))(this, keys);
  }
  ModdingAPI::Exposed::UnityEngine::Keyframe GetKey(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Keyframe(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4C30))(this, index);
  }
  ModdingAPI::Exposed::UnityEngine::Keyframe_array* GetKeys() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Keyframe_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC49E0))(this);
  }
  int32_t get_preWrapMode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC5420))(this);
  }
  void set_preWrapMode(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC5470))(this, value);
  }
  int32_t get_postWrapMode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC54D0))(this);
  }
  void set_postWrapMode(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC5520))(this, value);
  }
  bool Equals(Il2CppObject* o) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC5580))(this, o);
  }
  bool Equals(ModdingAPI::Exposed::UnityEngine::AnimationCurve* other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, ModdingAPI::Exposed::UnityEngine::AnimationCurve*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC5740))(this, other);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD8A0))(this);
  }
  int32_t AddKey_Internal_Injected(ModdingAPI::Exposed::UnityEngine::Keyframe key) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, ModdingAPI::Exposed::UnityEngine::Keyframe)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC5860))(this, key);
  }
  void GetKey_Injected(int32_t index, ModdingAPI::Exposed::UnityEngine::Keyframe ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationCurve*, int32_t, ModdingAPI::Exposed::UnityEngine::Keyframe)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC58C0))(this, index, ret);
  }

  // Static methods:
  static inline void Internal_Destroy(intptr_t ptr) {
    reinterpret_cast<void(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC47C0))(ptr);
  }
  static inline intptr_t Internal_Create(ModdingAPI::Exposed::UnityEngine::Keyframe_array* keys) {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Keyframe_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4810))(keys);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AnimationCurve* Linear(float timeStart, float valueStart, float timeEnd, float valueEnd) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AnimationCurve*(__fastcall*)(float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4D30))(timeStart, valueStart, timeEnd, valueEnd);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AnimationCurve* EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AnimationCurve*(__fastcall*)(float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC50C0))(timeStart, valueStart, timeEnd, valueEnd);
  }
};
}