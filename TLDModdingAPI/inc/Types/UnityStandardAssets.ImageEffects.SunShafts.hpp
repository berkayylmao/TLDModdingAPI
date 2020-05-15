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


namespace ModdingAPI::Exposed::UnityStandardAssets::ImageEffects {
struct __SunShafts_Il2CppStaticFields {
};

struct __SunShafts_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CheckResources;
};

struct __SunShafts_Il2CppClass {
  Il2CppClass_1 _1;
  __SunShafts_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SunShafts_Il2CppVtbl vtbl;
};

class SunShafts {
public:
  // Il2Cpp fields:
  __SunShafts_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool supportHDRTextures;
  bool supportDX11;
  bool isSupported;
  int32_t resolution;
  int32_t screenBlendMode;
  ModdingAPI::Exposed::UnityEngine::Transform* sunTransform;
  int32_t radialBlurIterations;
  ModdingAPI::Exposed::UnityEngine::Color sunColor;
  ModdingAPI::Exposed::UnityEngine::Color sunThreshold;
  float sunShaftBlurRadius;
  float sunShaftIntensity;
  float maxRadius;
  bool useDepthTexture;
  ModdingAPI::Exposed::UnityEngine::Shader* sunShaftsShader;
  ModdingAPI::Exposed::UnityEngine::Material* sunShaftsMaterial;
  ModdingAPI::Exposed::UnityEngine::Shader* simpleClearShader;
  ModdingAPI::Exposed::UnityEngine::Material* simpleClearMaterial;

  // Member methods:
  bool CheckResources() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::SunShafts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14B5840))(this);
  }
  void OnRenderImage(ModdingAPI::Exposed::UnityEngine::RenderTexture* source, ModdingAPI::Exposed::UnityEngine::RenderTexture* destination) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::SunShafts*, ModdingAPI::Exposed::UnityEngine::RenderTexture*, ModdingAPI::Exposed::UnityEngine::RenderTexture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14B58B0))(this, source, destination);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityStandardAssets::ImageEffects::SunShafts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14B6560))(this);
  }
};
}