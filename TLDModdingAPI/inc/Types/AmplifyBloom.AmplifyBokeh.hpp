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
#include "ModdingAPI.Exposed.UnityEngine.Vector4.hpp"


namespace ModdingAPI::Exposed::AmplifyBloom {
struct __AmplifyBokeh_Il2CppStaticFields {
};

struct __AmplifyBokeh_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Destroy;
  VirtualInvokeData _5_OnBeforeSerialize;
  VirtualInvokeData _6_OnAfterDeserialize;
};

struct __AmplifyBokeh_Il2CppClass {
  Il2CppClass_1 _1;
  __AmplifyBokeh_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AmplifyBokeh_Il2CppVtbl vtbl;
};

class AmplifyBokeh {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C48C90;
  static inline    __AmplifyBokeh_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AmplifyBokeh_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AmplifyBokeh_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AmplifyBokeh_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool m_isActive;
  bool m_applyOnBloomSource;
  float m_bokehSampleRadius;
  ModdingAPI::Exposed::UnityEngine::Vector4 m_bokehCameraProperties;
  float m_offsetRotation;
  int32_t m_apertureShape;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_bokehOffsets;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C92040))(this);
  }
  void Destroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C921C0))(this);
  }
  void CreateBokehOffsets(int32_t shape) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C92390))(this, shape);
  }
  ModdingAPI::Exposed::UnityEngine::Vector4_array* CalculateBokehSamples(int32_t sampleCount, float angle) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector4_array*(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C92D50))(this, sampleCount, angle);
  }
  void ApplyBokehFilter(ModdingAPI::Exposed::UnityEngine::RenderTexture* source, ModdingAPI::Exposed::UnityEngine::Material* material) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, ModdingAPI::Exposed::UnityEngine::RenderTexture*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C93040))(this, source, material);
  }
  void OnAfterDeserialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C936D0))(this);
  }
  void OnBeforeSerialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  int32_t get_ApertureShape() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F820))(this);
  }
  void set_ApertureShape(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C936E0))(this, value);
  }
  bool get_ApplyBokeh() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33C2C0))(this);
  }
  void set_ApplyBokeh(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30CFB0))(this, value);
  }
  bool get_ApplyOnBloomSource() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33CD00))(this);
  }
  void set_ApplyOnBloomSource(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33CD10))(this, value);
  }
  float get_BokehSampleRadius() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x580F50))(this);
  }
  void set_BokehSampleRadius(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x802110))(this, value);
  }
  float get_OffsetRotation() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x56ED60))(this);
  }
  void set_OffsetRotation(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7B8D40))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector4 get_BokehCameraProperties() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector4(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F7F0))(this);
  }
  void set_BokehCameraProperties(ModdingAPI::Exposed::UnityEngine::Vector4 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, ModdingAPI::Exposed::UnityEngine::Vector4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F800))(this, value);
  }
  float get_Aperture() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x88C900))(this);
  }
  void set_Aperture(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x699250))(this, value);
  }
  float get_FocalLength() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x79C3E0))(this);
  }
  void set_FocalLength(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x88C910))(this, value);
  }
  float get_FocalDistance() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x56ECC0))(this);
  }
  void set_FocalDistance(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x88C920))(this, value);
  }
  float get_MaxCoCDiameter() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591530))(this);
  }
  void set_MaxCoCDiameter(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyBokeh*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA6BD0))(this, value);
  }
};
}