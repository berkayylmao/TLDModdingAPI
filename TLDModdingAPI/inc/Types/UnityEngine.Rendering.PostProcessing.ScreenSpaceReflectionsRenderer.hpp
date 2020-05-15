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


namespace ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing {
struct __ScreenSpaceReflectionsRenderer_Il2CppStaticFields {
};

struct __ScreenSpaceReflectionsRenderer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Init;
  VirtualInvokeData _5_GetCameraFlags;
  VirtualInvokeData _6_ResetHistory;
  VirtualInvokeData _7_Release;
  VirtualInvokeData _8_Render;
  VirtualInvokeData _9_SetSettings;
};

struct __ScreenSpaceReflectionsRenderer_Il2CppClass {
  Il2CppClass_1 _1;
  __ScreenSpaceReflectionsRenderer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ScreenSpaceReflectionsRenderer_Il2CppVtbl vtbl;
};

class ScreenSpaceReflectionsRenderer {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C259A8;
  static inline    ScreenSpaceReflectionsRenderer* _pStaticObjectInstance = nullptr;

public:
// Singleton object getter:
  static inline ScreenSpaceReflectionsRenderer* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (ScreenSpaceReflectionsRenderer**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Il2Cpp fields:
  __ScreenSpaceReflectionsRenderer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool m_ResetHistory;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections* PostProcessEffectRenderer_1__settings_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::RenderTexture* m_Resolve;
  ModdingAPI::Exposed::UnityEngine::RenderTexture* m_History;
  ModdingAPI::Exposed::System::Int32_array* m_MipIDs;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer::QualityPreset_array* m_Presets;

  // Member methods:
  int32_t GetCameraFlags() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3029E0))(this);
  }
  void CheckRT(ModdingAPI::Exposed::UnityEngine::RenderTexture* rt, int32_t width, int32_t height, int32_t filterMode, bool useMipMap) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*, ModdingAPI::Exposed::UnityEngine::RenderTexture*, int32_t, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22EA300))(this, rt, width, height, filterMode, useMipMap);
  }
  void Render(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22EA7B0))(this, context);
  }
  void Release() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22EC680))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionsRenderer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22EC740))(this);
  }
};
}