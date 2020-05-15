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
struct __DownsampleFX_Il2CppStaticFields {
};

struct __DownsampleFX_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __DownsampleFX_Il2CppClass {
  Il2CppClass_1 _1;
  __DownsampleFX_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DownsampleFX_Il2CppVtbl vtbl;
};

class DownsampleFX {
public:
  // Il2Cpp fields:
  __DownsampleFX_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t m_Resolution;
  int32_t m_RenderOrder;
  ModdingAPI::Exposed::UnityEngine::Shader* m_EffectShader;
  ModdingAPI::Exposed::UnityEngine::Shader* m_BlitShader;
  ModdingAPI::Exposed::UnityEngine::Shader* m_BlurShader;
  float m_Alpha;
  int32_t m_BlurIterations;
  float m_BlurSize;
  bool m_UseWeaponViewCamera;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ParticleRenderers;
  ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer;
  ModdingAPI::Exposed::UnityEngine::Camera* m_Camera;
  ModdingAPI::Exposed::UnityEngine::Material* m_DefaultEffectMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* m_DownsampledEffectMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* m_BlitMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* m_BlurMaterial;
  bool m_Initialized;
  int32_t m_LastRenderOrder;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DownsampleFX*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FE5560))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DownsampleFX*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FE5570))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DownsampleFX*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FE5590))(this);
  }
  void DetachCommandBuffer() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DownsampleFX*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FE55A0))(this);
  }
  void ReattachCommandBuffer() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DownsampleFX*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FE5790))(this);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DownsampleFX*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FE5A00))(this);
  }
  void RebuildCommandBuffer() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DownsampleFX*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FE6150))(this);
  }
  void TryToFindParticleRenderers() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DownsampleFX*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FE6C50))(this);
  }
  void RegisterParticleSystem(ModdingAPI::Exposed::UnityEngine::ParticleSystem* particleSystem) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DownsampleFX*, ModdingAPI::Exposed::UnityEngine::ParticleSystem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FE6DB0))(this, particleSystem);
  }
  void ClearParticleRenderers() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DownsampleFX*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FE6E90))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DownsampleFX*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FE6F40))(this);
  }
};
}