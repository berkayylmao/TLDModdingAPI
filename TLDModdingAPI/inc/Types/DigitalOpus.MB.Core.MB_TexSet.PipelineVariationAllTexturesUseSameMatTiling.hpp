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
#include "ModdingAPI.Exposed.UnityEngine.Rect.hpp"


namespace ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet {
struct __PipelineVariationAllTexturesUseSameMatTiling_Il2CppStaticFields {
};

struct __PipelineVariationAllTexturesUseSameMatTiling_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_GetRectsForTextureBakeResults;
  VirtualInvokeData _5_SetTilingTreatmentAndAdjustEncapsulatingSamplingRect;
  VirtualInvokeData _6_GetMaterialTilingRectForTextureBakerResults;
  VirtualInvokeData _7_AdjustResultMaterialNonTextureProperties;
};

struct __PipelineVariationAllTexturesUseSameMatTiling_Il2CppClass {
  Il2CppClass_1 _1;
  __PipelineVariationAllTexturesUseSameMatTiling_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PipelineVariationAllTexturesUseSameMatTiling_Il2CppVtbl vtbl;
};

class PipelineVariationAllTexturesUseSameMatTiling {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C390F8;
  static inline    __PipelineVariationAllTexturesUseSameMatTiling_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __PipelineVariationAllTexturesUseSameMatTiling_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PipelineVariationAllTexturesUseSameMatTiling_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PipelineVariationAllTexturesUseSameMatTiling_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet* texSet;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet* ts) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet::PipelineVariationAllTexturesUseSameMatTiling*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, ts);
  }
  void GetRectsForTextureBakeResults(ModdingAPI::Exposed::UnityEngine::Rect allPropsUseSameTiling_encapsulatingSamplingRect, ModdingAPI::Exposed::UnityEngine::Rect propsUseDifferntTiling_obUVRect) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet::PipelineVariationAllTexturesUseSameMatTiling*, ModdingAPI::Exposed::UnityEngine::Rect, ModdingAPI::Exposed::UnityEngine::Rect)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FD4C40))(this, allPropsUseSameTiling_encapsulatingSamplingRect, propsUseDifferntTiling_obUVRect);
  }
  void SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(int32_t newTilingTreatment) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet::PipelineVariationAllTexturesUseSameMatTiling*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FD4D70))(this, newTilingTreatment);
  }
  ModdingAPI::Exposed::UnityEngine::Rect GetMaterialTilingRectForTextureBakerResults(int32_t materialIndex) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rect(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet::PipelineVariationAllTexturesUseSameMatTiling*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FD4F60))(this, materialIndex);
  }
  void AdjustResultMaterialNonTextureProperties(ModdingAPI::Exposed::UnityEngine::Material* resultMaterial, ModdingAPI::Exposed::System::Collections::Generic::List_T_* props) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet::PipelineVariationAllTexturesUseSameMatTiling*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, resultMaterial, props);
  }
};
}