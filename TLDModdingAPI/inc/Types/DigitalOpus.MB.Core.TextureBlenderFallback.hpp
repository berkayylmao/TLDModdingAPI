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
#include "ModdingAPI::Exposed::UnityEngine::Color.hpp"


namespace ModdingAPI::Exposed::DigitalOpus::MB::Core {
struct __TextureBlenderFallback_Il2CppStaticFields {
};

struct __TextureBlenderFallback_Il2CppVtbl {
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

struct __TextureBlenderFallback_Il2CppClass {
  Il2CppClass_1 _1;
  __TextureBlenderFallback_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TextureBlenderFallback_Il2CppVtbl vtbl;
};

class TextureBlenderFallback {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3C7B8;
  static inline    __TextureBlenderFallback_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TextureBlenderFallback_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TextureBlenderFallback_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TextureBlenderFallback_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool m_doTintColor;
  ModdingAPI::Exposed::UnityEngine::Color m_tintColor;
  ModdingAPI::Exposed::UnityEngine::Color m_defaultColor;

  // Member methods:
  bool DoesShaderNameMatch(System_String* shaderName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderFallback*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this, shaderName);
  }
  void OnBeforeTintTexture(ModdingAPI::Exposed::UnityEngine::Material* sourceMat, System_String* shaderTexturePropertyName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderFallback*, ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDA690))(this, sourceMat, shaderTexturePropertyName);
  }
  ModdingAPI::Exposed::UnityEngine::Color OnBlendTexturePixel(System_String* shaderPropertyName, ModdingAPI::Exposed::UnityEngine::Color pixelColor) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderFallback*, System_String*, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDA7C0))(this, shaderPropertyName, pixelColor);
  }
  bool NonTexturePropertiesAreEqual(ModdingAPI::Exposed::UnityEngine::Material* a, ModdingAPI::Exposed::UnityEngine::Material* b) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderFallback*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDA830))(this, a, b);
  }
  void SetNonTexturePropertyValuesOnResultMaterial(ModdingAPI::Exposed::UnityEngine::Material* resultMaterial) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderFallback*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDA960))(this, resultMaterial);
  }
  ModdingAPI::Exposed::UnityEngine::Color GetColorIfNoTexture(ModdingAPI::Exposed::UnityEngine::Material* mat, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty* texProperty) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderFallback*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::DigitalOpus::MB::Core::ShaderTextureProperty*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDAA60))(this, mat, texProperty);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::TextureBlenderFallback*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDB2F0))(this);
  }

  // Static methods:
  static inline bool _compareColor(ModdingAPI::Exposed::UnityEngine::Material* a, ModdingAPI::Exposed::UnityEngine::Material* b, ModdingAPI::Exposed::UnityEngine::Color defaultVal, System_String* propertyName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Color, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDB170))(a, b, defaultVal, propertyName);
  }
  static inline bool _compareFloat(ModdingAPI::Exposed::UnityEngine::Material* a, ModdingAPI::Exposed::UnityEngine::Material* b, float defaultVal, System_String* propertyName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Material*, float, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FDB240))(a, b, defaultVal, propertyName);
  }
};
}