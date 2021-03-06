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
#include "ModdingAPI.Exposed.UnityEngine.LayerMask.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector4.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Matrix4x4.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector4.hpp"


namespace ModdingAPI::Exposed::UnityStandardAssets::Water {
struct __Water_Il2CppStaticFields {
  bool s_InsideWater;
};

struct __Water_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Water_Il2CppClass {
  Il2CppClass_1 _1;
  __Water_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Water_Il2CppVtbl vtbl;
};

class Water {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C93C40;
  static inline    __Water_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Water_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Water_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Water_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t waterMode;
  bool disablePixelLights;
  int32_t textureSize;
  float clipPlaneOffset;
  ModdingAPI::Exposed::UnityEngine::LayerMask reflectLayers;
  ModdingAPI::Exposed::UnityEngine::LayerMask refractLayers;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_ReflectionCameras;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_RefractionCameras;
  ModdingAPI::Exposed::UnityEngine::RenderTexture* m_ReflectionTexture;
  ModdingAPI::Exposed::UnityEngine::RenderTexture* m_RefractionTexture;
  int32_t m_HardwareWaterSupport;
  int32_t m_OldReflectionTextureSize;
  int32_t m_OldRefractionTextureSize;

  // Member methods:
  void OnWillRenderObject() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::Water::Water*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14C8590))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::Water::Water*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14C9400))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::Water::Water*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14C9810))(this);
  }
  void UpdateCameraModes(ModdingAPI::Exposed::UnityEngine::Camera* src, ModdingAPI::Exposed::UnityEngine::Camera* dest) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::Water::Water*, ModdingAPI::Exposed::UnityEngine::Camera*, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14C9BD0))(this, src, dest);
  }
  void CreateWaterObjects(ModdingAPI::Exposed::UnityEngine::Camera* currentCamera, ModdingAPI::Exposed::UnityEngine::Camera* reflectionCamera, ModdingAPI::Exposed::UnityEngine::Camera* refractionCamera) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::Water::Water*, ModdingAPI::Exposed::UnityEngine::Camera*, ModdingAPI::Exposed::UnityEngine::Camera*, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14CA130))(this, currentCamera, reflectionCamera, refractionCamera);
  }
  int32_t GetWaterMode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::Water::Water*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14CB5E0))(this);
  }
  int32_t FindHardwareWaterSupport() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::Water::Water*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14CB5F0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector4 CameraSpacePlane(ModdingAPI::Exposed::UnityEngine::Camera* cam, ModdingAPI::Exposed::UnityEngine::Vector3 pos, ModdingAPI::Exposed::UnityEngine::Vector3 normal, float sideSign) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector4(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::Water::Water*, ModdingAPI::Exposed::UnityEngine::Camera*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14CB7F0))(this, cam, pos, normal, sideSign);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::Water::Water*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14CC350))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> s_InsideWater = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_InsideWater; }
  );

  // Static methods:
  static inline void CalculateReflectionMatrix(ModdingAPI::Exposed::UnityEngine::Matrix4x4 reflectionMat, ModdingAPI::Exposed::UnityEngine::Vector4 plane) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Matrix4x4, ModdingAPI::Exposed::UnityEngine::Vector4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14CBCA0))(reflectionMat, plane);
  }
};
}