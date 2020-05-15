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


namespace ModdingAPI::Exposed {
struct __qd_Decal_Il2CppStaticFields {
  int32_t ID_DecalZTestModeID;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_QuickDecalMaterials;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_StaticDecalMaterials;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_CameraClippedStaticDecalMaterials;
};

struct __qd_Decal_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __qd_Decal_Il2CppClass {
  Il2CppClass_1 _1;
  __qd_Decal_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __qd_Decal_Il2CppVtbl vtbl;
};

class qd_Decal {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C840F8;
  static inline    qd_Decal* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C327B8;
  static inline    __qd_Decal_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline qd_Decal* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (qd_Decal**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __qd_Decal_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__qd_Decal_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __qd_Decal_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::Texture2D* _texture;
  ModdingAPI::Exposed::UnityEngine::Rect _rect;
  float _scale;
  System_String* _decalId;
  ModdingAPI::Exposed::UnityEngine::Material* m_fullscreenDecalMaterial;
  int32_t m_Layer;
  ModdingAPI::Exposed::StaticDecal* m_StaticDecal;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Texture2D* get_texture() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture2D*(__fastcall*)(ModdingAPI::Exposed::qd_Decal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB16E0))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB1700))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB1900))(this);
  }
  void SetScale(float scale) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x807930))(this, scale);
  }
  void SetTexture(ModdingAPI::Exposed::UnityEngine::Texture2D* tex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*, ModdingAPI::Exposed::UnityEngine::Texture2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, tex);
  }
  void SetDecalId(System_String* decalId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A420))(this, decalId);
  }
  System_String* GetDecalId() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::qd_Decal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  void SetFullScreenDecalMaterial(ModdingAPI::Exposed::UnityEngine::Material* mat) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31F420))(this, mat);
  }
  void SetUVRect(ModdingAPI::Exposed::UnityEngine::Rect r) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*, ModdingAPI::Exposed::UnityEngine::Rect)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB1B00))(this, r);
  }
  void FreezeTransform() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB1D00))(this);
  }
  void Verify() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB2100))(this);
  }
  void MaybeUpdateUvsFromDecalManager() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB23E0))(this);
  }
  void RefreshStaticDecal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB2510))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetStaticDecalMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::qd_Decal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB32F0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::qd_Decal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB3680))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<int32_t> ID_DecalZTestModeID = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->ID_DecalZTestModeID; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*> m_QuickDecalMaterials = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_QuickDecalMaterials; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*> m_StaticDecalMaterials = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_StaticDecalMaterials; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*> m_CameraClippedStaticDecalMaterials = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_CameraClippedStaticDecalMaterials; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Material* GetQuickDecalMaterial(ModdingAPI::Exposed::UnityEngine::Texture* texture) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Texture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB3300))(texture);
  }
  static inline System_String* GetAtlasUvPathWithoutExtensionFromPngPath(System_String* texturePath) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB35E0))(texturePath);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CB37D0))();
  }
};
}