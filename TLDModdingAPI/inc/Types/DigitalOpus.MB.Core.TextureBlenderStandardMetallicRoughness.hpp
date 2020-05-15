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


namespace ModdingAPI::Exposed::DigitalOpus::MB::Core {
struct __TextureBlenderStandardMetallicRoughness_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Color NeutralNormalMap;
};

struct __TextureBlenderStandardMetallicRoughness_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_DoesShaderNameMatch;
  VirtualInvokeData _5_OnBeforeTintTexture;
  VirtualInvokeData _6_OnBlendTexturePixel;
  VirtualInvokeData _7_NonTexturePropertiesAreEqual;
  VirtualInvokeData _8_SetNonTexturePropertyValuesOnResultMaterial;
  VirtualInvokeData _9_GetColorIfNoTexture;
};

struct __TextureBlenderStandardMetallicRoughness_Il2CppClass {
  Il2CppClass_1 _1;
  __TextureBlenderStandardMetallicRoughness_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TextureBlenderStandardMetallicRoughness_Il2CppVtbl vtbl;
};

class TextureBlenderStandardMetallicRoughness {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C79500;
  static inline    __TextureBlenderStandardMetallicRoughness_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TextureBlenderStandardMetallicRoughness_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TextureBlenderStandardMetallicRoughness_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TextureBlenderStandardMetallicRoughness_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache;
  ModdingAPI::Exposed::UnityEngine::Color m_tintColor;
  float m_roughness;
  float m_metallic;
  bool m_hasMetallicGlossMap;
  bool m_hasSpecGlossMap;
  float m_bumpScale;
  bool m_shaderDoesEmission;
  ModdingAPI::Exposed::UnityEngine::Color m_emissionColor;
  int32_t propertyToDo;
  ModdingAPI::Exposed::UnityEngine::Color m_generatingTintedAtlasColor;
  float m_generatingTintedAtlasMetallic;
  float m_generatingTintedAtlasRoughness;
  float m_generatingTintedAtlasBumpScale;
  ModdingAPI::Exposed::UnityEngine::Color m_generatingTintedAtlasEmission;
  ModdingAPI::Exposed::UnityEngine::Color m_notGeneratingAtlasDefaultColor;
  float m_notGeneratingAtlasDefaultMetallic;
  float m_notGeneratingAtlasDefaultGlossiness;
  ModdingAPI::Exposed::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor;

  // Member methods:
  bool DoesShaderNameMatch(System_String* shaderName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDDB70))(this, shaderName);
  }
  void OnBeforeTintTexture(ModdingAPI::Exposed::UnityEngine::Material* sourceMat, System_String* shaderTexturePropertyName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*, ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDDC00))(this, sourceMat, shaderTexturePropertyName);
  }
  ModdingAPI::Exposed::UnityEngine::Color OnBlendTexturePixel(System_String* propertyToDoshaderPropertyName, ModdingAPI::Exposed::UnityEngine::Color pixelColor) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*, System_String*, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDDF90))(this, propertyToDoshaderPropertyName, pixelColor);
  }
  bool NonTexturePropertiesAreEqual(ModdingAPI::Exposed::UnityEngine::Material* a, ModdingAPI::Exposed::UnityEngine::Material* b) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDE1E0))(this, a, b);
  }
  void SetNonTexturePropertyValuesOnResultMaterial(ModdingAPI::Exposed::UnityEngine::Material* resultMaterial) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDE560))(this, resultMaterial);
  }
  ModdingAPI::Exposed::UnityEngine::Color GetColorIfNoTexture(ModdingAPI::Exposed::UnityEngine::Material* mat, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDE9E0))(this, mat, texPropertyName);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDEF60))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color> NeutralNormalMap = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color>(
   []() { return &GetStaticClassInstance()->pStaticFields->NeutralNormalMap; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDF0F0))();
  }
};
}