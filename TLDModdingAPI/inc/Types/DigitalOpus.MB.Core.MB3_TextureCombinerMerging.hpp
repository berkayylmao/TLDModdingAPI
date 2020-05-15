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
#include "ModdingAPI::Exposed::UnityEngine::Rect.hpp"


namespace ModdingAPI::Exposed::DigitalOpus::MB::Core {
struct __MB3_TextureCombinerMerging_Il2CppStaticFields {
  bool LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS;
};

struct __MB3_TextureCombinerMerging_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __MB3_TextureCombinerMerging_Il2CppClass {
  Il2CppClass_1 _1;
  __MB3_TextureCombinerMerging_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MB3_TextureCombinerMerging_Il2CppVtbl vtbl;
};

class MB3_TextureCombinerMerging {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C43FB8;
  static inline    __MB3_TextureCombinerMerging_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MB3_TextureCombinerMerging_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MB3_TextureCombinerMerging_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MB3_TextureCombinerMerging_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool _considerNonTextureProperties;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMaterialTextureBlender;
  bool fixOutOfBoundsUVs;
  int32_t LOG_LEVEL;

  // Member methods:
  void ::ctor(bool considerNonTextureProps, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMaterialTexBlender, bool fixObUVs, int32_t logLevel) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*, bool, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x261F6C0))(this, considerNonTextureProps, resultMaterialTexBlender, fixObUVs, logLevel);
  }
  void MergeOverlappingDistinctMaterialTexturesAndCalcMaterialSubrects(ModdingAPI::Exposed::System::Collections::Generic::List_T_* distinctMaterialTextures) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x261F6E0))(this, distinctMaterialTextures);
  }
  void DoIntegrityCheckMergedEncapsulatingSamplingRects(ModdingAPI::Exposed::System::Collections::Generic::List_T_* distinctMaterialTextures) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerMerging*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2620D00))(this, distinctMaterialTextures);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->LOG_LEVEL_TRACE_MERGE_MAT_SUBRECTS; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Rect BuildTransformMeshUV2AtlasRect(bool considerMeshUVs, ModdingAPI::Exposed::UnityEngine::Rect _atlasRect, ModdingAPI::Exposed::UnityEngine::Rect _obUVRect, ModdingAPI::Exposed::UnityEngine::Rect _sourceMaterialTiling, ModdingAPI::Exposed::UnityEngine::Rect _encapsulatingRect) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rect(__fastcall*)(bool, ModdingAPI::Exposed::UnityEngine::Rect, ModdingAPI::Exposed::UnityEngine::Rect, ModdingAPI::Exposed::UnityEngine::Rect, ModdingAPI::Exposed::UnityEngine::Rect)>(Helpers::Memory::GetInstance().MakeAbsolute(0x261F350))(considerMeshUVs, _atlasRect, _obUVRect, _sourceMaterialTiling, _encapsulatingRect);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))();
  }
};
}