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
struct __CameraPathSpeed_Il2CppStaticFields {
};

struct __CameraPathSpeed_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CameraPathSpeed_Il2CppClass {
  Il2CppClass_1 _1;
  __CameraPathSpeed_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CameraPathSpeed_Il2CppVtbl vtbl;
};

class CameraPathSpeed {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7CA98;
  static inline    __CameraPathSpeed_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CameraPathSpeed_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CameraPathSpeed_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CameraPathSpeed_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t positionModes;
  System_String* givenName;
  System_String* customName;
  System_String* fullName;
  float _percent;
  float _animationPercentage;
  ModdingAPI::Exposed::CameraPathControlPoint* point;
  int32_t index;
  ModdingAPI::Exposed::CameraPathControlPoint* cpointA;
  ModdingAPI::Exposed::CameraPathControlPoint* cpointB;
  float curvePercentage;
  ModdingAPI::Exposed::UnityEngine::Vector3 worldPosition;
  bool lockPoint;
  float _speed;

  // Member methods:
  float get_speed() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17AFD30))(this);
  }
  void set_speed(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeed*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B73990))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B73A40))(this);
  }
};
}