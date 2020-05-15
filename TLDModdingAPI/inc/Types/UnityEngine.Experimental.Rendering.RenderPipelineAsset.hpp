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


namespace ModdingAPI::Exposed::UnityEngine::Experimental::Rendering {
struct __RenderPipelineAsset_Il2CppStaticFields {
};

struct __RenderPipelineAsset_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_DestroyCreatedInstances;
  VirtualInvokeData _5_CreatePipeline;
  VirtualInvokeData _6_GetRenderingLayerMaskNames;
  VirtualInvokeData _7_GetDefaultMaterial;
  VirtualInvokeData _8_GetAutodeskInteractiveShader;
  VirtualInvokeData _9_GetAutodeskInteractiveTransparentShader;
  VirtualInvokeData _10_GetAutodeskInteractiveMaskedShader;
  VirtualInvokeData _11_GetDefaultParticleMaterial;
  VirtualInvokeData _12_GetDefaultLineMaterial;
  VirtualInvokeData _13_GetDefaultTerrainMaterial;
  VirtualInvokeData _14_GetDefaultUIMaterial;
  VirtualInvokeData _15_GetDefaultUIOverdrawMaterial;
  VirtualInvokeData _16_GetDefaultUIETC1SupportedMaterial;
  VirtualInvokeData _17_GetDefault2DMaterial;
  VirtualInvokeData _18_GetDefaultShader;
  VirtualInvokeData _20_OnValidate;
  VirtualInvokeData _21_OnDisable;
  VirtualInvokeData _65535__ctor;
};

struct __RenderPipelineAsset_Il2CppClass {
  Il2CppClass_1 _1;
  __RenderPipelineAsset_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RenderPipelineAsset_Il2CppVtbl vtbl;
};

class RenderPipelineAsset {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4CF40;
  static inline    __RenderPipelineAsset_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RenderPipelineAsset_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RenderPipelineAsset_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RenderPipelineAsset_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_CreatedPipelines;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFDBDC0))(this);
  }
  void DestroyCreatedInstances() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFDBF20))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipeline* CreatePipeline() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipeline*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFDC120))(this);
  }
  ModdingAPI::Exposed::System::String_array* GetRenderingLayerMaskNames() {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetDefaultMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Shader* GetAutodeskInteractiveShader() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Shader*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Shader* GetAutodeskInteractiveTransparentShader() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Shader*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Shader* GetAutodeskInteractiveMaskedShader() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Shader*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetDefaultParticleMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetDefaultLineMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetDefaultTerrainMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetDefaultUIMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetDefaultUIOverdrawMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetDefaultUIETC1SupportedMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetDefault2DMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Shader* GetDefaultShader() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Shader*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* CreatedInstances() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD890))(this);
  }
  void OnValidate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFDC1E0))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::RenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFDC1E0))(this);
  }
};
}