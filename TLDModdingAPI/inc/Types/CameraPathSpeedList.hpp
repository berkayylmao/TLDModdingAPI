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


namespace ModdingAPI::Exposed {
struct __CameraPathSpeedList_Il2CppStaticFields {
};

struct __CameraPathSpeedList_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Init;
  VirtualInvokeData _5_CleanUp;
  VirtualInvokeData _6_RecalculatePoints;
};

struct __CameraPathSpeedList_Il2CppClass {
  Il2CppClass_1 _1;
  __CameraPathSpeedList_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CameraPathSpeedList_Il2CppVtbl vtbl;
};

class CameraPathSpeedList {
public:
  // Il2Cpp fields:
  __CameraPathSpeedList_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* CameraPathPointList__points;
  ModdingAPI::Exposed::CameraPath* cameraPath;
  System_String* pointTypeName;
  bool initialised;
  int32_t interpolation;
  bool _enabled;

  // Member methods:
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeedList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B73A50))(this);
  }
  ModdingAPI::Exposed::CameraPathSpeed* get_Item(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathSpeed*(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeedList*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B73AB0))(this, index);
  }
  void Init(ModdingAPI::Exposed::CameraPath* _cameraPath) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeedList*, ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B73B90))(this, _cameraPath);
  }
  bool get_listEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeedList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B73C30))(this);
  }
  void set_listEnabled(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeedList*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC468E0))(this, value);
  }
  void AddSpeedPoint(ModdingAPI::Exposed::CameraPathControlPoint* atPoint) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeedList*, ModdingAPI::Exposed::CameraPathControlPoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B73C60))(this, atPoint);
  }
  ModdingAPI::Exposed::CameraPathSpeed* AddSpeedPoint(ModdingAPI::Exposed::CameraPathControlPoint* curvePointA, ModdingAPI::Exposed::CameraPathControlPoint* curvePointB, float curvePercetage) {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathSpeed*(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeedList*, ModdingAPI::Exposed::CameraPathControlPoint*, ModdingAPI::Exposed::CameraPathControlPoint*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B73DC0))(this, curvePointA, curvePointB, curvePercetage);
  }
  float GetLowesetSpeed() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeedList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B73FA0))(this);
  }
  float GetSpeed(float percentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeedList*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B740E0))(this, percentage);
  }
  float LinearInterpolation(float percentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeedList*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B742E0))(this, percentage);
  }
  float SmoothStepInterpolation(float percentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeedList*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B745A0))(this, percentage);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPathSpeedList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B74890))(this);
  }
};
}