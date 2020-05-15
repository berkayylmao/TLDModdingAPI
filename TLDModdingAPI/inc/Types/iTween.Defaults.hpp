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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed::iTween {
struct __Defaults_Il2CppStaticFields {
  float time;
  float delay;
  int32_t namedColorValue;
  int32_t loopType;
  int32_t easeType;
  float lookSpeed;
  bool isLocal;
  int32_t space;
  bool orientToPath;
  ModdingAPI::Exposed::UnityEngine::Color color;
  float updateTimePercentage;
  float updateTime;
  int32_t cameraFadeDepth;
  float lookAhead;
  bool useRealTime;
  ModdingAPI::Exposed::UnityEngine::Vector3 up;
};

struct __Defaults_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Defaults_Il2CppClass {
  Il2CppClass_1 _1;
  __Defaults_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Defaults_Il2CppVtbl vtbl;
};

class Defaults {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3C670;
  static inline    __Defaults_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Defaults_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Defaults_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Defaults_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<float> time = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->time; }
  );
  static inline __CppStaticProperty<float> delay = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->delay; }
  );
  static inline __CppStaticProperty<int32_t> namedColorValue = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->namedColorValue; }
  );
  static inline __CppStaticProperty<int32_t> loopType = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->loopType; }
  );
  static inline __CppStaticProperty<int32_t> easeType = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeType; }
  );
  static inline __CppStaticProperty<float> lookSpeed = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->lookSpeed; }
  );
  static inline __CppStaticProperty<bool> isLocal = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->isLocal; }
  );
  static inline __CppStaticProperty<int32_t> space = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->space; }
  );
  static inline __CppStaticProperty<bool> orientToPath = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->orientToPath; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color> color = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color>(
   []() { return &GetStaticClassInstance()->pStaticFields->color; }
  );
  static inline __CppStaticProperty<float> updateTimePercentage = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->updateTimePercentage; }
  );
  static inline __CppStaticProperty<float> updateTime = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->updateTime; }
  );
  static inline __CppStaticProperty<int32_t> cameraFadeDepth = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->cameraFadeDepth; }
  );
  static inline __CppStaticProperty<float> lookAhead = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->lookAhead; }
  );
  static inline __CppStaticProperty<bool> useRealTime = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->useRealTime; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3> up = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3>(
   []() { return &GetStaticClassInstance()->pStaticFields->up; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CAA6C0))();
  }
};
}