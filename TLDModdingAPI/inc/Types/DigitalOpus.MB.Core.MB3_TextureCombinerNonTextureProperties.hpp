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
struct __MB3_TextureCombinerNonTextureProperties_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Color NEUTRAL_NORMAL_MAP_COLOR;
};

struct __MB3_TextureCombinerNonTextureProperties_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __MB3_TextureCombinerNonTextureProperties_Il2CppClass {
  Il2CppClass_1 _1;
  __MB3_TextureCombinerNonTextureProperties_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MB3_TextureCombinerNonTextureProperties_Il2CppVtbl vtbl;
};

class MB3_TextureCombinerNonTextureProperties {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7E8D8;
  static inline    __MB3_TextureCombinerNonTextureProperties_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MB3_TextureCombinerNonTextureProperties_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MB3_TextureCombinerNonTextureProperties_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MB3_TextureCombinerNonTextureProperties_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::TexPropertyNameColorPair_array* defaultTextureProperty2DefaultColorMap;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MaterialProperty_array* _nonTextureProperties;
  int32_t LOG_LEVEL;
  bool _considerNonTextureProperties;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlender* resultMaterialTextureBlender;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlender_array* textureBlenders;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* textureProperty2DefaultColorMap;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTextureProperties* _nonTexturePropertiesBlender;

  // Member methods:
  void ::ctor(int32_t ll, bool considerNonTextureProps) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2621790))(this, ll, considerNonTextureProps);
  }
  void CollectAverageValuesOfNonTextureProperties(ModdingAPI::Exposed::UnityEngine::Material* resultMaterial, ModdingAPI::Exposed::UnityEngine::Material* mat) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2622710))(this, resultMaterial, mat);
  }
  void LoadTextureBlendersIfNeeded(ModdingAPI::Exposed::UnityEngine::Material* resultMaterial) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26228F0))(this, resultMaterial);
  }
  void FindBestTextureBlender(ModdingAPI::Exposed::UnityEngine::Material* resultMaterial) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26229D0))(this, resultMaterial);
  }
  void LoadTextureBlenders() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2622E00))(this);
  }
  bool NonTexturePropertiesAreEqual(ModdingAPI::Exposed::UnityEngine::Material* a, ModdingAPI::Exposed::UnityEngine::Material* b) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2623620))(this, a, b);
  }
  ModdingAPI::Exposed::UnityEngine::Texture2D* TintTextureWithTextureCombiner(ModdingAPI::Exposed::UnityEngine::Texture2D* t, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet* sourceMaterial, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty* shaderPropertyName) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture2D*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ModdingAPI::Exposed::UnityEngine::Texture2D*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB_TexSet*, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26236D0))(this, t, sourceMaterial, shaderPropertyName);
  }
  void AdjustNonTextureProperties(ModdingAPI::Exposed::UnityEngine::Material* resultMat, ModdingAPI::Exposed::System::Collections::Generic::List_T_* texPropertyNames, ModdingAPI::Exposed::System::Collections::Generic::List_T_* distinctMaterialTextures, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2623800))(this, resultMat, texPropertyNames, distinctMaterialTextures, editorMethods);
  }
  ModdingAPI::Exposed::UnityEngine::Color GetColorAsItWouldAppearInAtlasIfNoTexture(ModdingAPI::Exposed::UnityEngine::Material* matIfBlender, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty* texProperty) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2623970))(this, matIfBlender, texProperty);
  }
  ModdingAPI::Exposed::UnityEngine::Color GetColorForTemporaryTexture(ModdingAPI::Exposed::UnityEngine::Material* matIfBlender, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty* texProperty) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2623A40))(this, matIfBlender, texProperty);
  }
  ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlender* FindMatchingTextureBlender(System_String* shaderName) {
    return reinterpret_cast<ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlender*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2623B10))(this, shaderName);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color> NEUTRAL_NORMAL_MAP_COLOR = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color>(
   []() { return &GetStaticClassInstance()->pStaticFields->NEUTRAL_NORMAL_MAP_COLOR; }
  );

  // Static methods:
  static inline bool InterfaceFilter(ModdingAPI::Exposed::System::Type* typeObj, Il2CppObject* criteriaObj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Type*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2622930))(typeObj, criteriaObj);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2623C40))();
  }
};
}