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

namespace ModdingAPI::Exposed::UnityEngine {
struct __Mathf_Il2CppObject {
};
struct __Mathf_Il2CppStaticFields {
  float Epsilon;
};

struct __Mathf_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Mathf_Il2CppClass {
  Il2CppClass_1 _1;
  __Mathf_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Mathf_Il2CppVtbl vtbl;
};

class Mathf {
  static constexpr uint64_t _rvaClassInstance     = 0x3C6C830;
  static inline    __Mathf_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Static class getter:
  static inline __Mathf_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Mathf_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Static methods:
  static inline int32_t ClosestPowerOfTwo(int32_t value) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1068990))(value);
  }
  static inline int32_t NextPowerOfTwo(int32_t value) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10689E0))(value);
  }
  static inline float GammaToLinearSpace(float value) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1068A30))(value);
  }
  static inline float PerlinNoise(float x, float y) {
    return reinterpret_cast<float(__fastcall*)(float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1068A90))(x, y);
  }
  static inline float Sin(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1068B00))(f);
  }
  static inline float Cos(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1068BB0))(f);
  }
  static inline float Tan(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1068C60))(f);
  }
  static inline float Asin(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1068D10))(f);
  }
  static inline float Acos(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1068DC0))(f);
  }
  static inline float Atan(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1068E70))(f);
  }
  static inline float Atan2(float y, float x) {
    return reinterpret_cast<float(__fastcall*)(float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1068F20))(y, x);
  }
  static inline float Sqrt(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1068FE0))(f);
  }
  static inline float Abs(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069090))(f);
  }
  static inline int32_t Abs(int32_t value) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069140))(value);
  }
  static inline float Min(float a, float b) {
    return reinterpret_cast<float(__fastcall*)(float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10691E0))(a, b);
  }
  static inline float Min(ModdingAPI::Exposed::System::Single_array* values) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::System::Single_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10691F0))(values);
  }
  static inline int32_t Min(int32_t a, int32_t b) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069260))(a, b);
  }
  static inline float Max(float a, float b) {
    return reinterpret_cast<float(__fastcall*)(float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069270))(a, b);
  }
  static inline float Max(ModdingAPI::Exposed::System::Single_array* values) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::System::Single_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069280))(values);
  }
  static inline int32_t Max(int32_t a, int32_t b) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10692F0))(a, b);
  }
  static inline float Pow(float f, float p) {
    return reinterpret_cast<float(__fastcall*)(float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069300))(f, p);
  }
  static inline float Exp(float power) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10693C0))(power);
  }
  static inline float Log(float f, float p) {
    return reinterpret_cast<float(__fastcall*)(float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069470))(f, p);
  }
  static inline float Log(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069530))(f);
  }
  static inline float Log10(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10695E0))(f);
  }
  static inline float Ceil(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069690))(f);
  }
  static inline float Floor(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069740))(f);
  }
  static inline float Round(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10697F0))(f);
  }
  static inline int32_t CeilToInt(float f) {
    return reinterpret_cast<int32_t(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10698A0))(f);
  }
  static inline int32_t FloorToInt(float f) {
    return reinterpret_cast<int32_t(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069950))(f);
  }
  static inline int32_t RoundToInt(float f) {
    return reinterpret_cast<int32_t(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069A00))(f);
  }
  static inline float Sign(float f) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069AB0))(f);
  }
  static inline float Clamp(float value, float min, float max) {
    return reinterpret_cast<float(__fastcall*)(float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069AD0))(value, min, max);
  }
  static inline int32_t Clamp(int32_t value, int32_t min, int32_t max) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069AF0))(value, min, max);
  }
  static inline float Clamp01(float value) {
    return reinterpret_cast<float(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCD1180))(value);
  }
  static inline float Lerp(float a, float b, float t) {
    return reinterpret_cast<float(__fastcall*)(float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069B10))(a, b, t);
  }
  static inline float LerpAngle(float a, float b, float t) {
    return reinterpret_cast<float(__fastcall*)(float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069C00))(a, b, t);
  }
  static inline float MoveTowards(float current, float target, float maxDelta) {
    return reinterpret_cast<float(__fastcall*)(float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069D30))(current, target, maxDelta);
  }
  static inline float MoveTowardsAngle(float current, float target, float maxDelta) {
    return reinterpret_cast<float(__fastcall*)(float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1069E70))(current, target, maxDelta);
  }
  static inline float SmoothStep(float from, float to, float t) {
    return reinterpret_cast<float(__fastcall*)(float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x106A070))(from, to, t);
  }
  static inline bool Approximately(float a, float b) {
    return reinterpret_cast<bool(__fastcall*)(float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x106A180))(a, b);
  }
  static inline float SmoothDamp(float current, float target, float currentVelocity, float smoothTime) {
    return reinterpret_cast<float(__fastcall*)(float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x106A290))(current, target, currentVelocity, smoothTime);
  }
  static inline float SmoothDamp(float current, float target, float currentVelocity, float smoothTime, float maxSpeed, float deltaTime) {
    return reinterpret_cast<float(__fastcall*)(float, float, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x106A3D0))(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
  }
  static inline float SmoothDampAngle(float current, float target, float currentVelocity, float smoothTime) {
    return reinterpret_cast<float(__fastcall*)(float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x106A5B0))(current, target, currentVelocity, smoothTime);
  }
  static inline float SmoothDampAngle(float current, float target, float currentVelocity, float smoothTime, float maxSpeed, float deltaTime) {
    return reinterpret_cast<float(__fastcall*)(float, float, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x106A780))(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
  }
  static inline float Repeat(float t, float length) {
    return reinterpret_cast<float(__fastcall*)(float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x106A870))(t, length);
  }
  static inline float PingPong(float t, float length) {
    return reinterpret_cast<float(__fastcall*)(float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x106A950))(t, length);
  }
  static inline float InverseLerp(float a, float b, float value) {
    return reinterpret_cast<float(__fastcall*)(float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x106AA30))(a, b, value);
  }
  static inline float DeltaAngle(float current, float target) {
    return reinterpret_cast<float(__fastcall*)(float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x106AB20))(current, target);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x106ABF0))();
  }

};
}