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


namespace ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing {
struct __Spline_Il2CppStaticFields {
};

struct __Spline_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Spline_Il2CppClass {
  Il2CppClass_1 _1;
  __Spline_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Spline_Il2CppVtbl vtbl;
};

class Spline {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C45658;
  static inline    __Spline_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Spline_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Spline_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Spline_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::AnimationCurve* curve;
  bool m_Loop;
  float m_ZeroValue;
  float m_Range;
  ModdingAPI::Exposed::UnityEngine::AnimationCurve* m_InternalLoopingCurve;
  int32_t frameCount;
  ModdingAPI::Exposed::System::Single_array* cachedData;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityEngine::AnimationCurve* curve, float zeroValue, bool loop, ModdingAPI::Exposed::UnityEngine::Vector2 bounds) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::Spline*, ModdingAPI::Exposed::UnityEngine::AnimationCurve*, float, bool, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22F0610))(this, curve, zeroValue, loop, bounds);
  }
  void Cache(int32_t frame) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::Spline*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22F06E0))(this, frame);
  }
  float Evaluate(float t, int32_t length) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::Spline*, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22F0BF0))(this, t, length);
  }
  float Evaluate(float t) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::Spline*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22F0C40))(this, t);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22F0D10))(this);
  }
};
}