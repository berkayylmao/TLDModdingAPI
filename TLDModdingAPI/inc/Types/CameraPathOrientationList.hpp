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


namespace ModdingAPI::Exposed {
struct __CameraPathOrientationList_Il2CppStaticFields {
};

struct __CameraPathOrientationList_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Init;
  VirtualInvokeData _5_CleanUp;
  VirtualInvokeData _6_RecalculatePoints;
};

struct __CameraPathOrientationList_Il2CppClass {
  Il2CppClass_1 _1;
  __CameraPathOrientationList_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CameraPathOrientationList_Il2CppVtbl vtbl;
};

class CameraPathOrientationList {
public:
  // Il2Cpp fields:
  __CameraPathOrientationList_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* CameraPathPointList__points;
  ModdingAPI::Exposed::CameraPath* cameraPath;
  System_String* pointTypeName;
  bool initialised;
  int32_t interpolation;

  // Member methods:
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B73A50))(this);
  }
  void Init(ModdingAPI::Exposed::CameraPath* _cameraPath) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*, ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EE08A0))(this, _cameraPath);
  }
  void CleanUp() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EE0A40))(this);
  }
  ModdingAPI::Exposed::CameraPathOrientation* get_Item(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathOrientation*(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EE0BC0))(this, index);
  }
  void AddOrientation(ModdingAPI::Exposed::CameraPathControlPoint* atPoint) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*, ModdingAPI::Exposed::CameraPathControlPoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EE0CA0))(this, atPoint);
  }
  ModdingAPI::Exposed::CameraPathOrientation* AddOrientation(ModdingAPI::Exposed::CameraPathControlPoint* curvePointA, ModdingAPI::Exposed::CameraPathControlPoint* curvePointB, float curvePercetage, ModdingAPI::Exposed::UnityEngine::Quaternion rotation) {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathOrientation*(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*, ModdingAPI::Exposed::CameraPathControlPoint*, ModdingAPI::Exposed::CameraPathControlPoint*, float, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EE1000))(this, curvePointA, curvePointB, curvePercetage, rotation);
  }
  void RemovePoint(ModdingAPI::Exposed::CameraPathOrientation* orientation) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*, ModdingAPI::Exposed::CameraPathOrientation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EE11B0))(this, orientation);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion GetOrientation(float percentage) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EE1280))(this, percentage);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion LinearInterpolation(float percentage) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EE1560))(this, percentage);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion SmootStepInterpolation(float percentage) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EE18B0))(this, percentage);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion CubicInterpolation(float percentage) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EE1C20))(this, percentage);
  }
  void RecalculatePoints() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EE2350))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathOrientationList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EE2570))(this);
  }
};
}