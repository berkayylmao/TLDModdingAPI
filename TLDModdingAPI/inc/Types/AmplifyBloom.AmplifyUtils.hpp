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


namespace ModdingAPI::Exposed::AmplifyBloom {
struct __AmplifyUtils_Il2CppStaticFields {
  int32_t MaskTextureId;
  int32_t BlurRadiusId;
  System_String* HighPrecisionKeyword;
  System_String* ShaderModeTag;
  System_String* ShaderModeValue;
  System_String* DebugStr;
  int32_t UpscaleContributionId;
  int32_t SourceContributionId;
  int32_t LensStarburstRTId;
  int32_t LensDirtRTId;
  int32_t LensFlareRTId;
  int32_t LensGlareRTId;
  ModdingAPI::Exposed::System::Int32_array* MipResultsRTS;
  ModdingAPI::Exposed::System::Int32_array* AnamorphicRTS;
  ModdingAPI::Exposed::System::Int32_array* AnamorphicGlareWeightsMatStr;
  ModdingAPI::Exposed::System::Int32_array* AnamorphicGlareOffsetsMatStr;
  ModdingAPI::Exposed::System::Int32_array* AnamorphicGlareWeightsStr;
  ModdingAPI::Exposed::System::Int32_array* UpscaleWeightsStr;
  ModdingAPI::Exposed::System::Int32_array* LensDirtWeightsStr;
  ModdingAPI::Exposed::System::Int32_array* LensStarburstWeightsStr;
  int32_t BloomRangeId;
  int32_t LensDirtStrengthId;
  int32_t BloomParamsId;
  int32_t TempFilterValueId;
  int32_t LensFlareStarMatrixId;
  int32_t LensFlareStarburstStrengthId;
  int32_t LensFlareGhostsParamsId;
  int32_t LensFlareLUTId;
  int32_t LensFlareHaloParamsId;
  int32_t LensFlareGhostChrDistortionId;
  int32_t LensFlareHaloChrDistortionId;
  int32_t BokehParamsId;
  int32_t CurrentRTFormat;
  int32_t CurrentFilterMode;
  int32_t CurrentWrapMode;
  int32_t CurrentReadWriteMode;
  bool IsInitialized;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _allocatedRT;
};

struct __AmplifyUtils_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AmplifyUtils_Il2CppClass {
  Il2CppClass_1 _1;
  __AmplifyUtils_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AmplifyUtils_Il2CppVtbl vtbl;
};

class AmplifyUtils {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C422B8;
  static inline    __AmplifyUtils_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AmplifyUtils_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AmplifyUtils_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AmplifyUtils_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AmplifyBloom::AmplifyUtils*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<int32_t> MaskTextureId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->MaskTextureId; }
  );
  static inline __CppStaticProperty<int32_t> BlurRadiusId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->BlurRadiusId; }
  );
  static inline __CppStaticProperty<System_String*> HighPrecisionKeyword = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->HighPrecisionKeyword; }
  );
  static inline __CppStaticProperty<System_String*> ShaderModeTag = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->ShaderModeTag; }
  );
  static inline __CppStaticProperty<System_String*> ShaderModeValue = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->ShaderModeValue; }
  );
  static inline __CppStaticProperty<System_String*> DebugStr = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->DebugStr; }
  );
  static inline __CppStaticProperty<int32_t> UpscaleContributionId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->UpscaleContributionId; }
  );
  static inline __CppStaticProperty<int32_t> SourceContributionId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->SourceContributionId; }
  );
  static inline __CppStaticProperty<int32_t> LensStarburstRTId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensStarburstRTId; }
  );
  static inline __CppStaticProperty<int32_t> LensDirtRTId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensDirtRTId; }
  );
  static inline __CppStaticProperty<int32_t> LensFlareRTId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensFlareRTId; }
  );
  static inline __CppStaticProperty<int32_t> LensGlareRTId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensGlareRTId; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> MipResultsRTS = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->MipResultsRTS; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> AnamorphicRTS = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->AnamorphicRTS; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> AnamorphicGlareWeightsMatStr = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->AnamorphicGlareWeightsMatStr; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> AnamorphicGlareOffsetsMatStr = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->AnamorphicGlareOffsetsMatStr; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> AnamorphicGlareWeightsStr = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->AnamorphicGlareWeightsStr; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> UpscaleWeightsStr = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->UpscaleWeightsStr; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> LensDirtWeightsStr = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensDirtWeightsStr; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> LensStarburstWeightsStr = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensStarburstWeightsStr; }
  );
  static inline __CppStaticProperty<int32_t> BloomRangeId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->BloomRangeId; }
  );
  static inline __CppStaticProperty<int32_t> LensDirtStrengthId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensDirtStrengthId; }
  );
  static inline __CppStaticProperty<int32_t> BloomParamsId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->BloomParamsId; }
  );
  static inline __CppStaticProperty<int32_t> TempFilterValueId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->TempFilterValueId; }
  );
  static inline __CppStaticProperty<int32_t> LensFlareStarMatrixId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensFlareStarMatrixId; }
  );
  static inline __CppStaticProperty<int32_t> LensFlareStarburstStrengthId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensFlareStarburstStrengthId; }
  );
  static inline __CppStaticProperty<int32_t> LensFlareGhostsParamsId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensFlareGhostsParamsId; }
  );
  static inline __CppStaticProperty<int32_t> LensFlareLUTId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensFlareLUTId; }
  );
  static inline __CppStaticProperty<int32_t> LensFlareHaloParamsId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensFlareHaloParamsId; }
  );
  static inline __CppStaticProperty<int32_t> LensFlareGhostChrDistortionId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensFlareGhostChrDistortionId; }
  );
  static inline __CppStaticProperty<int32_t> LensFlareHaloChrDistortionId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->LensFlareHaloChrDistortionId; }
  );
  static inline __CppStaticProperty<int32_t> BokehParamsId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->BokehParamsId; }
  );
  static inline __CppStaticProperty<int32_t> CurrentRTFormat = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->CurrentRTFormat; }
  );
  static inline __CppStaticProperty<int32_t> CurrentFilterMode = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->CurrentFilterMode; }
  );
  static inline __CppStaticProperty<int32_t> CurrentWrapMode = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->CurrentWrapMode; }
  );
  static inline __CppStaticProperty<int32_t> CurrentReadWriteMode = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->CurrentReadWriteMode; }
  );
  static inline __CppStaticProperty<bool> IsInitialized = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->IsInitialized; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> _allocatedRT = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->_allocatedRT; }
  );

  // Static methods:
  static inline void InitializeIds() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C98DF0))();
  }
  static inline void DebugLog(System_String* value, int32_t type) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C9B160))(value, type);
  }
  static inline ModdingAPI::Exposed::UnityEngine::RenderTexture* GetTempRenderTarget(int32_t width, int32_t height) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RenderTexture*(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C9B350))(width, height);
  }
  static inline void ReleaseTempRenderTarget(ModdingAPI::Exposed::UnityEngine::RenderTexture* renderTarget) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::RenderTexture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C9B590))(renderTarget);
  }
  static inline void ReleaseAllRT() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C9B6F0))();
  }
  static inline void EnsureKeywordEnabled(ModdingAPI::Exposed::UnityEngine::Material* mat, System_String* keyword, bool state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C9B8F0))(mat, keyword, state);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C9BA20))();
  }
};
}