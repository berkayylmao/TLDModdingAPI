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
#include "ModdingAPI.Exposed.UnityEngine.Color32.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Rect.hpp"


namespace ModdingAPI::Exposed {
struct __MB_TextureCombinerRenderTexture_Il2CppStaticFields {
};

struct __MB_TextureCombinerRenderTexture_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __MB_TextureCombinerRenderTexture_Il2CppClass {
  Il2CppClass_1 _1;
  __MB_TextureCombinerRenderTexture_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MB_TextureCombinerRenderTexture_Il2CppVtbl vtbl;
};

class MB_TextureCombinerRenderTexture {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C898A8;
  static inline    __MB_TextureCombinerRenderTexture_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MB_TextureCombinerRenderTexture_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MB_TextureCombinerRenderTexture_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MB_TextureCombinerRenderTexture_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t LOG_LEVEL;
  ModdingAPI::Exposed::UnityEngine::Material* mat;
  ModdingAPI::Exposed::UnityEngine::RenderTexture* _destinationTexture;
  ModdingAPI::Exposed::UnityEngine::Camera* myCamera;
  int32_t _padding;
  bool _isNormalMap;
  bool _fixOutOfBoundsUVs;
  bool _doRenderAtlas;
  ModdingAPI::Exposed::UnityEngine::Rect_array* rs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* textureSets;
  int32_t indexOfTexSetToRender;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty* _texPropertyName;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* _resultMaterialTextureBlender;
  ModdingAPI::Exposed::UnityEngine::Texture2D* targTex;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Texture2D* DoRenderAtlas(ModdingAPI::Exposed::UnityEngine::GameObject* gameObject, int32_t width, int32_t height, int32_t padding, ModdingAPI::Exposed::UnityEngine::Rect_array* rss, ModdingAPI::Exposed::System::Collections::Generic::List_T_* textureSetss, int32_t indexOfTexSetToRenders, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyname, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMaterialTextureBlender, bool isNormalMap, bool fixOutOfBoundsUVs, bool considerNonTextureProperties, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombiner* texCombiner, int32_t LOG_LEV) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture2D*(__fastcall*)(ModdingAPI::Exposed::MB_TextureCombinerRenderTexture*, ModdingAPI::Exposed::UnityEngine::GameObject*, int32_t, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::Rect_array*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, bool, bool, bool, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombiner*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21B5260))(this, gameObject, width, height, padding, rss, textureSetss, indexOfTexSetToRenders, texPropertyname, resultMaterialTextureBlender, isNormalMap, fixOutOfBoundsUVs, considerNonTextureProperties, texCombiner, LOG_LEV);
  }
  void OnRenderObject() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MB_TextureCombinerRenderTexture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21B5D40))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Color32 ConvertNormalFormatFromUnity_ToStandard(ModdingAPI::Exposed::UnityEngine::Color32 c) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color32(__fastcall*)(ModdingAPI::Exposed::MB_TextureCombinerRenderTexture*, ModdingAPI::Exposed::UnityEngine::Color32)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21B6D70))(this, c);
  }
  bool YisFlipped() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::MB_TextureCombinerRenderTexture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21B6F10))(this);
  }
  void CopyScaledAndTiledToAtlas(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet* texSet, ModdingAPI::Exposed::DigitalOpus::MB::Core::MeshBakerMaterialTexture* source, ModdingAPI::Exposed::UnityEngine::Vector2 obUVoffset, ModdingAPI::Exposed::UnityEngine::Vector2 obUVscale, ModdingAPI::Exposed::UnityEngine::Rect rec, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty* texturePropertyName, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMatTexBlender, bool yIsFlipped) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MB_TextureCombinerRenderTexture*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MeshBakerMaterialTexture*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Rect, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21B70F0))(this, texSet, source, obUVoffset, obUVscale, rec, texturePropertyName, resultMatTexBlender, yIsFlipped);
  }
  void _printTexture(ModdingAPI::Exposed::UnityEngine::Texture2D* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MB_TextureCombinerRenderTexture*, ModdingAPI::Exposed::UnityEngine::Texture2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21B8620))(this, t);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MB_TextureCombinerRenderTexture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21B88F0))(this);
  }
};
}