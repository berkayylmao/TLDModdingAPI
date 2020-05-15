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


namespace ModdingAPI::Exposed::TMPro {
struct __TMP_FontAssetUtilities_Il2CppStaticFields {
  ModdingAPI::Exposed::TMPro::TMP_FontAssetUtilities* s_Instance;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* k_SearchedFontAssets;
  bool k_IsFontEngineInitialized;
};

struct __TMP_FontAssetUtilities_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TMP_FontAssetUtilities_Il2CppClass {
  Il2CppClass_1 _1;
  __TMP_FontAssetUtilities_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TMP_FontAssetUtilities_Il2CppVtbl vtbl;
};

class TMP_FontAssetUtilities {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C25980;
  static inline    __TMP_FontAssetUtilities_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TMP_FontAssetUtilities_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TMP_FontAssetUtilities_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TMP_FontAssetUtilities_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_FontAssetUtilities*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::TMPro::TMP_FontAssetUtilities*> s_Instance = __CppStaticProperty<ModdingAPI::Exposed::TMPro::TMP_FontAssetUtilities*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Instance; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> k_SearchedFontAssets = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->k_SearchedFontAssets; }
  );
  static inline __CppStaticProperty<bool> k_IsFontEngineInitialized = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->k_IsFontEngineInitialized; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x3FB7C0))();
  }
  static inline ModdingAPI::Exposed::TMPro::TMP_FontAssetUtilities* get_instance() {
    return reinterpret_cast<ModdingAPI::Exposed::TMPro::TMP_FontAssetUtilities*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x3FB900))();
  }
  static inline ModdingAPI::Exposed::TMPro::TMP_Character* GetCharacterFromFontAsset(uint32_t unicode, ModdingAPI::Exposed::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, int32_t fontStyle, int32_t fontWeight, bool isAlternativeTypeface, ModdingAPI::Exposed::TMPro::TMP_FontAsset* fontAsset) {
    return reinterpret_cast<ModdingAPI::Exposed::TMPro::TMP_Character*(__fastcall*)(uint32_t, ModdingAPI::Exposed::TMPro::TMP_FontAsset*, bool, int32_t, int32_t, bool, ModdingAPI::Exposed::TMPro::TMP_FontAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3FB9A0))(unicode, sourceFontAsset, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface, fontAsset);
  }
  static inline ModdingAPI::Exposed::TMPro::TMP_Character* GetCharacterFromFontAsset_Internal(uint32_t unicode, ModdingAPI::Exposed::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, int32_t fontStyle, int32_t fontWeight, bool isAlternativeTypeface, ModdingAPI::Exposed::TMPro::TMP_FontAsset* fontAsset) {
    return reinterpret_cast<ModdingAPI::Exposed::TMPro::TMP_Character*(__fastcall*)(uint32_t, ModdingAPI::Exposed::TMPro::TMP_FontAsset*, bool, int32_t, int32_t, bool, ModdingAPI::Exposed::TMPro::TMP_FontAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3FBCC0))(unicode, sourceFontAsset, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface, fontAsset);
  }
  static inline ModdingAPI::Exposed::TMPro::TMP_Character* GetCharacterFromFontAssets(uint32_t unicode, ModdingAPI::Exposed::System::Collections::Generic::List_T_* fontAssets, bool includeFallbacks, int32_t fontStyle, int32_t fontWeight, bool isAlternativeTypeface, ModdingAPI::Exposed::TMPro::TMP_FontAsset* fontAsset) {
    return reinterpret_cast<ModdingAPI::Exposed::TMPro::TMP_Character*(__fastcall*)(uint32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, bool, int32_t, int32_t, bool, ModdingAPI::Exposed::TMPro::TMP_FontAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3FC3C0))(unicode, fontAssets, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface, fontAsset);
  }
  static inline bool TryGetCharacterFromFontFile(uint32_t unicode, ModdingAPI::Exposed::TMPro::TMP_FontAsset* fontAsset, ModdingAPI::Exposed::TMPro::TMP_Character* character) {
    return reinterpret_cast<bool(__fastcall*)(uint32_t, ModdingAPI::Exposed::TMPro::TMP_FontAsset*, ModdingAPI::Exposed::TMPro::TMP_Character*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3FC7E0))(unicode, fontAsset, character);
  }
  static inline bool TryGetGlyphFromFontFile(uint32_t glyphIndex, ModdingAPI::Exposed::TMPro::TMP_FontAsset* fontAsset, ModdingAPI::Exposed::UnityEngine::TextCore::Glyph* glyph) {
    return reinterpret_cast<bool(__fastcall*)(uint32_t, ModdingAPI::Exposed::TMPro::TMP_FontAsset*, ModdingAPI::Exposed::UnityEngine::TextCore::Glyph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3FCAA0))(glyphIndex, fontAsset, glyph);
  }
};
}