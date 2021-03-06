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


namespace ModdingAPI::Exposed {
struct __SSAOPro_Il2CppStaticFields {
};

struct __SSAOPro_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SSAOPro_Il2CppClass {
  Il2CppClass_1 _1;
  __SSAOPro_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SSAOPro_Il2CppVtbl vtbl;
};

class SSAOPro {
public:
  // Il2Cpp fields:
  __SSAOPro_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::Texture2D* NoiseTexture;
  bool UseHighPrecisionDepthMap;
  int32_t Samples;
  int32_t Downsampling;
  float Radius;
  float Intensity;
  float Distance;
  float Bias;
  float LumContribution;
  ModdingAPI::Exposed::UnityEngine::Color OcclusionColor;
  float CutoffDistance;
  float CutoffFalloff;
  int32_t Blur;
  bool BlurDownsampling;
  int32_t BlurPasses;
  float BlurBilateralThreshold;
  bool DebugAO;
  ModdingAPI::Exposed::UnityEngine::Shader* m_ShaderSSAO_v2;
  ModdingAPI::Exposed::UnityEngine::Shader* m_ShaderHighPrecisionDepth;
  ModdingAPI::Exposed::UnityEngine::Material* m_Material_v2;
  ModdingAPI::Exposed::UnityEngine::Camera* m_Camera;
  ModdingAPI::Exposed::UnityEngine::Camera* m_RWSCamera;
  int32_t m_RTFormat;
  ModdingAPI::Exposed::System::String_array* keywords;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Material* get_Material() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::SSAOPro*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB0400))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Shader* get_ShaderSSAO() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Shader*(__fastcall*)(ModdingAPI::Exposed::SSAOPro*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB05F0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SSAOPro*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB06F0))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SSAOPro*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB0910))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SSAOPro*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB09A0))(this);
  }
  void OnRenderImage(ModdingAPI::Exposed::UnityEngine::RenderTexture* source, ModdingAPI::Exposed::UnityEngine::RenderTexture* destination) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SSAOPro*, ModdingAPI::Exposed::UnityEngine::RenderTexture*, ModdingAPI::Exposed::UnityEngine::RenderTexture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB0B40))(this, source, destination);
  }
  int32_t SetShaderStates() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::SSAOPro*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB1660))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SSAOPro*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB1A10))(this);
  }
};
}