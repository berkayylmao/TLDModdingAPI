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


namespace ModdingAPI::Exposed::UnityEngine {
struct __Gradient_Il2CppStaticFields {
};

struct __Gradient_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Equals;
};

struct __Gradient_Il2CppClass {
  Il2CppClass_1 _1;
  __Gradient_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Gradient_Il2CppVtbl vtbl;
};

class Gradient {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7D7B0;
  static inline    __Gradient_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Gradient_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Gradient_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Gradient_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t m_Ptr;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE0FE0))(this);
  }
  void Cleanup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE1090))(this);
  }
  bool Internal_Equals(intptr_t other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE10E0))(this, other);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE1140))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Color Evaluate(float time) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE1200))(this, time);
  }
  ModdingAPI::Exposed::UnityEngine::GradientColorKey_array* get_colorKeys() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GradientColorKey_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE1290))(this);
  }
  void set_colorKeys(ModdingAPI::Exposed::UnityEngine::GradientColorKey_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*, ModdingAPI::Exposed::UnityEngine::GradientColorKey_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE12E0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GradientAlphaKey_array* get_alphaKeys() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GradientAlphaKey_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE1340))(this);
  }
  void set_alphaKeys(ModdingAPI::Exposed::UnityEngine::GradientAlphaKey_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*, ModdingAPI::Exposed::UnityEngine::GradientAlphaKey_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE1390))(this, value);
  }
  void SetKeys(ModdingAPI::Exposed::UnityEngine::GradientColorKey_array* colorKeys, ModdingAPI::Exposed::UnityEngine::GradientAlphaKey_array* alphaKeys) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*, ModdingAPI::Exposed::UnityEngine::GradientColorKey_array*, ModdingAPI::Exposed::UnityEngine::GradientAlphaKey_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE13F0))(this, colorKeys, alphaKeys);
  }
  bool Equals(Il2CppObject* o) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE1460))(this, o);
  }
  bool Equals(ModdingAPI::Exposed::UnityEngine::Gradient* other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*, ModdingAPI::Exposed::UnityEngine::Gradient*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE1620))(this, other);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD8A0))(this);
  }
  void Evaluate_Injected(float time, ModdingAPI::Exposed::UnityEngine::Color ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Gradient*, float, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE1740))(this, time, ret);
  }

  // Static methods:
  static inline intptr_t Init() {
    return reinterpret_cast<intptr_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE1040))();
  }
};
}