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


namespace ModdingAPI::Exposed::DigitalOpus::MB::Core {
struct __MB3_TextureCombinerPackerMeshBakerHorizontalVertical_Il2CppStaticFields {
};

struct __MB3_TextureCombinerPackerMeshBakerHorizontalVertical_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _7_ConvertTexturesToReadableFormats;
  VirtualInvokeData _8_CalculateAtlasRectangles;
  VirtualInvokeData _9_CreateAtlases;
};

struct __MB3_TextureCombinerPackerMeshBakerHorizontalVertical_Il2CppClass {
  Il2CppClass_1 _1;
  __MB3_TextureCombinerPackerMeshBakerHorizontalVertical_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MB3_TextureCombinerPackerMeshBakerHorizontalVertical_Il2CppVtbl vtbl;
};

class MB3_TextureCombinerPackerMeshBakerHorizontalVertical {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C70388;
  static inline    __MB3_TextureCombinerPackerMeshBakerHorizontalVertical_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MB3_TextureCombinerPackerMeshBakerHorizontalVertical_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MB3_TextureCombinerPackerMeshBakerHorizontalVertical_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MB3_TextureCombinerPackerMeshBakerHorizontalVertical_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t _atlasDirection;

  // Member methods:
  void ::ctor(int32_t ad) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311070))(this, ad);
  }
  ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult_array* CalculateAtlasRectangles(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data, bool doMultiAtlas, int32_t LOG_LEVEL) {
    return reinterpret_cast<ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult_array*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2629370))(this, data, doMultiAtlas, LOG_LEVEL);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult* TestStackRectanglesHorizontal(ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult* a, ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult* b, int32_t maxHeightDim, int32_t maxWidthDim, bool stretchBToAtlasWidth) {
    return reinterpret_cast<ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult*, ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult*, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x262B470))(a, b, maxHeightDim, maxWidthDim, stretchBToAtlasWidth);
  }
  static inline ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult* TestStackRectanglesVertical(ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult* a, ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult* b, int32_t maxHeightDim, int32_t maxWidthDim, bool stretchBToAtlasWidth) {
    return reinterpret_cast<ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult*, ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult*, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x262B5F0))(a, b, maxHeightDim, maxWidthDim, stretchBToAtlasWidth);
  }
  static inline ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult* MergeAtlasPackingResultStackBonA(ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult* a, ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult* b, int32_t maxWidthDim, int32_t maxHeightDim, bool stretchBToAtlasWidth, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::IPipeline* pipeline) {
    return reinterpret_cast<ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult*, ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult*, int32_t, int32_t, bool, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::IPipeline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x262B770))(a, b, maxWidthDim, maxHeightDim, stretchBToAtlasWidth, pipeline);
  }
};
}