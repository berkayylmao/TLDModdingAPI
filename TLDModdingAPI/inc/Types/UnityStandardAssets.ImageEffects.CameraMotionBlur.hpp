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
#include "ModdingAPI.Exposed.UnityEngine.LayerMask.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Matrix4x4.hpp"


namespace ModdingAPI::Exposed::UnityStandardAssets::ImageEffects {
struct __CameraMotionBlur_Il2CppStaticFields {
  float MAX_RADIUS;
};

struct __CameraMotionBlur_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CheckResources;
};

struct __CameraMotionBlur_Il2CppClass {
  Il2CppClass_1 _1;
  __CameraMotionBlur_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CameraMotionBlur_Il2CppVtbl vtbl;
};

class CameraMotionBlur {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C45BE0;
  static inline    __CameraMotionBlur_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CameraMotionBlur_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CameraMotionBlur_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CameraMotionBlur_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool supportHDRTextures;
  bool supportDX11;
  bool isSupported;
  int32_t filterType;
  bool preview;
  ModdingAPI::Exposed::UnityEngine::Vector3 previewScale;
  float movementScale;
  float rotationScale;
  float maxVelocity;
  float minVelocity;
  float velocityScale;
  float softZDistance;
  int32_t velocityDownsample;
  ModdingAPI::Exposed::UnityEngine::LayerMask excludeLayers;
  ModdingAPI::Exposed::UnityEngine::GameObject* tmpCam;
  ModdingAPI::Exposed::UnityEngine::Shader* shader;
  ModdingAPI::Exposed::UnityEngine::Shader* dx11MotionBlurShader;
  ModdingAPI::Exposed::UnityEngine::Shader* replacementClear;
  ModdingAPI::Exposed::UnityEngine::Material* motionBlurMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* dx11MotionBlurMaterial;
  ModdingAPI::Exposed::UnityEngine::Texture2D* noiseTexture;
  float jitter;
  bool showVelocity;
  float showVelocityScale;
  ModdingAPI::Exposed::UnityEngine::Matrix4x4 currentViewProjMat;
  ModdingAPI::Exposed::UnityEngine::Matrix4x4 prevViewProjMat;
  int32_t prevFrameCount;
  bool wasActive;
  ModdingAPI::Exposed::UnityEngine::Vector3 prevFrameForward;
  ModdingAPI::Exposed::UnityEngine::Vector3 prevFrameUp;
  ModdingAPI::Exposed::UnityEngine::Vector3 prevFramePos;
  ModdingAPI::Exposed::UnityEngine::Camera* _camera;

  // Member methods:
  void CalculateViewProjection() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::CameraMotionBlur*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEF92E0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::CameraMotionBlur*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEF9510))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::CameraMotionBlur*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEF96A0))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::CameraMotionBlur*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEF9810))(this);
  }
  bool CheckResources() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::CameraMotionBlur*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEF99D0))(this);
  }
  void OnRenderImage(ModdingAPI::Exposed::UnityEngine::RenderTexture* source, ModdingAPI::Exposed::UnityEngine::RenderTexture* destination) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::CameraMotionBlur*, ModdingAPI::Exposed::UnityEngine::RenderTexture*, ModdingAPI::Exposed::UnityEngine::RenderTexture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEF9A60))(this, source, destination);
  }
  void Remember() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::CameraMotionBlur*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEFB800))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Camera* GetTmpCam() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Camera*(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::CameraMotionBlur*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEFBA10))(this);
  }
  void StartFrame() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::CameraMotionBlur*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEFC3F0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::CameraMotionBlur*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEFC680))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<float> MAX_RADIUS = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->MAX_RADIUS; }
  );

  // Static methods:
  static inline int32_t divRoundUp(int32_t x, int32_t d) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEFC670))(x, d);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xEFC7F0))();
  }
};
}