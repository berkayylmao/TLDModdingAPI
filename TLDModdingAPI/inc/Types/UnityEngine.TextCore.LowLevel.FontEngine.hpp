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
#include "ModdingAPI.Exposed.UnityEngine.TextCore.FaceInfo.hpp"
#include "ModdingAPI::Exposed::UnityEngine::TextCore::FaceInfo.hpp"
#include "ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct.hpp"


namespace ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel {
struct __FontEngine_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::FontEngine* s_Instance;
  ModdingAPI::Exposed::UnityEngine::TextCore::Glyph_array* s_Glyphs;
  ModdingAPI::Exposed::System::UInt32_array* s_GlyphIndexes_MarshallingArray;
  ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct_array* s_GlyphMarshallingStruct_IN;
  ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct_array* s_GlyphMarshallingStruct_OUT;
  ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array* s_FreeGlyphRects;
  ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array* s_UsedGlyphRects;
  ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord_array* s_GlyphPairAdjustmentRecords_MarshallingArray;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* s_GlyphLookupDictionary;
};

struct __FontEngine_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __FontEngine_Il2CppClass {
  Il2CppClass_1 _1;
  __FontEngine_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __FontEngine_Il2CppVtbl vtbl;
};

class FontEngine {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C25CF8;
  static inline    __FontEngine_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __FontEngine_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__FontEngine_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __FontEngine_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::FontEngine*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::FontEngine*> s_Instance = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::FontEngine*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Instance; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::Glyph_array*> s_Glyphs = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::Glyph_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Glyphs; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::UInt32_array*> s_GlyphIndexes_MarshallingArray = __CppStaticProperty<ModdingAPI::Exposed::System::UInt32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_GlyphIndexes_MarshallingArray; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct_array*> s_GlyphMarshallingStruct_IN = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_GlyphMarshallingStruct_IN; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct_array*> s_GlyphMarshallingStruct_OUT = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_GlyphMarshallingStruct_OUT; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array*> s_FreeGlyphRects = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_FreeGlyphRects; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array*> s_UsedGlyphRects = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_UsedGlyphRects; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord_array*> s_GlyphPairAdjustmentRecords_MarshallingArray = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_GlyphPairAdjustmentRecords_MarshallingArray; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*> s_GlyphLookupDictionary = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_GlyphLookupDictionary; }
  );

  // Static methods:
  static inline int32_t InitializeFontEngine() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1578C00))();
  }
  static inline int32_t InitializeFontEngine_Internal() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1578CD0))();
  }
  static inline int32_t LoadFontFace(ModdingAPI::Exposed::UnityEngine::Font* font, int32_t pointSize) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Font*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1578D20))(font, pointSize);
  }
  static inline int32_t LoadFontFace_With_Size_FromFont_Internal(ModdingAPI::Exposed::UnityEngine::Font* font, int32_t pointSize) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Font*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1578E00))(font, pointSize);
  }
  static inline ModdingAPI::Exposed::UnityEngine::TextCore::FaceInfo GetFaceInfo() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::TextCore::FaceInfo(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1578E60))();
  }
  static inline int32_t GetFaceInfo_Internal(ModdingAPI::Exposed::UnityEngine::TextCore::FaceInfo faceInfo) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::TextCore::FaceInfo)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1578F90))(faceInfo);
  }
  static inline uint32_t GetGlyphIndex(uint32_t unicode) {
    return reinterpret_cast<uint32_t(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1578FE0))(unicode);
  }
  static inline bool TryGetGlyphWithUnicodeValue(uint32_t unicode, int32_t flags, ModdingAPI::Exposed::UnityEngine::TextCore::Glyph* glyph) {
    return reinterpret_cast<bool(__fastcall*)(uint32_t, int32_t, ModdingAPI::Exposed::UnityEngine::TextCore::Glyph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1579030))(unicode, flags, glyph);
  }
  static inline bool TryGetGlyphWithUnicodeValue_Internal(uint32_t unicode, int32_t loadFlags, ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct) {
    return reinterpret_cast<bool(__fastcall*)(uint32_t, int32_t, ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1579260))(unicode, loadFlags, glyphStruct);
  }
  static inline bool TryGetGlyphWithIndexValue(uint32_t glyphIndex, int32_t flags, ModdingAPI::Exposed::UnityEngine::TextCore::Glyph* glyph) {
    return reinterpret_cast<bool(__fastcall*)(uint32_t, int32_t, ModdingAPI::Exposed::UnityEngine::TextCore::Glyph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15792D0))(glyphIndex, flags, glyph);
  }
  static inline bool TryGetGlyphWithIndexValue_Internal(uint32_t glyphIndex, int32_t loadFlags, ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct) {
    return reinterpret_cast<bool(__fastcall*)(uint32_t, int32_t, ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1579500))(glyphIndex, loadFlags, glyphStruct);
  }
  static inline bool TryPackGlyphInAtlas(ModdingAPI::Exposed::UnityEngine::TextCore::Glyph* glyph, int32_t padding, int32_t packingMode, int32_t renderMode, int32_t width, int32_t height, ModdingAPI::Exposed::System::Collections::Generic::List_T_* freeGlyphRects, ModdingAPI::Exposed::System::Collections::Generic::List_T_* usedGlyphRects) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::TextCore::Glyph*, int32_t, int32_t, int32_t, int32_t, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1579570))(glyph, padding, packingMode, renderMode, width, height, freeGlyphRects, usedGlyphRects);
  }
  static inline bool TryPackGlyphInAtlas_Internal(ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyph, int32_t padding, int32_t packingMode, int32_t renderMode, int32_t width, int32_t height, ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array* freeGlyphRects, int32_t freeGlyphRectCount, ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array* usedGlyphRects, int32_t usedGlyphRectCount) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, int32_t, int32_t, int32_t, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array*, int32_t, ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1579BB0))(glyph, padding, packingMode, renderMode, width, height, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount);
  }
  static inline int32_t RenderGlyphsToTexture(ModdingAPI::Exposed::System::Collections::Generic::List_T_* glyphs, int32_t padding, int32_t renderMode, ModdingAPI::Exposed::UnityEngine::Texture2D* texture) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::Texture2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1579C30))(glyphs, padding, renderMode, texture);
  }
  static inline int32_t RenderGlyphsToTexture_Internal(ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct_array* glyphs, int32_t glyphCount, int32_t padding, int32_t renderMode, ModdingAPI::Exposed::UnityEngine::Texture2D* texture) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct_array*, int32_t, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::Texture2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1579F70))(glyphs, glyphCount, padding, renderMode, texture);
  }
  static inline bool TryAddGlyphToTexture(uint32_t glyphIndex, int32_t padding, int32_t packingMode, ModdingAPI::Exposed::System::Collections::Generic::List_T_* freeGlyphRects, ModdingAPI::Exposed::System::Collections::Generic::List_T_* usedGlyphRects, int32_t renderMode, ModdingAPI::Exposed::UnityEngine::Texture2D* texture, ModdingAPI::Exposed::UnityEngine::TextCore::Glyph* glyph) {
    return reinterpret_cast<bool(__fastcall*)(uint32_t, int32_t, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, ModdingAPI::Exposed::UnityEngine::Texture2D*, ModdingAPI::Exposed::UnityEngine::TextCore::Glyph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1579FF0))(glyphIndex, padding, packingMode, freeGlyphRects, usedGlyphRects, renderMode, texture, glyph);
  }
  static inline bool TryAddGlyphToTexture_Internal(uint32_t glyphIndex, int32_t padding, int32_t packingMode, ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array* freeGlyphRects, int32_t freeGlyphRectCount, ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array* usedGlyphRects, int32_t usedGlyphRectCount, int32_t renderMode, ModdingAPI::Exposed::UnityEngine::Texture2D* texture, ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyph) {
    return reinterpret_cast<bool(__fastcall*)(uint32_t, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array*, int32_t, ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array*, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::Texture2D*, ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct)>(Helpers::Memory::GetInstance().MakeAbsolute(0x157A700))(glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount, renderMode, texture, glyph);
  }
  static inline bool TryAddGlyphsToTexture(ModdingAPI::Exposed::System::Collections::Generic::List_T_* glyphIndexes, int32_t padding, int32_t packingMode, ModdingAPI::Exposed::System::Collections::Generic::List_T_* freeGlyphRects, ModdingAPI::Exposed::System::Collections::Generic::List_T_* usedGlyphRects, int32_t renderMode, ModdingAPI::Exposed::UnityEngine::Texture2D* texture, ModdingAPI::Exposed::UnityEngine::TextCore::Glyph_array* glyphs) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, ModdingAPI::Exposed::UnityEngine::Texture2D*, ModdingAPI::Exposed::UnityEngine::TextCore::Glyph_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x157A780))(glyphIndexes, padding, packingMode, freeGlyphRects, usedGlyphRects, renderMode, texture, glyphs);
  }
  static inline bool TryAddGlyphsToTexture_Internal(ModdingAPI::Exposed::System::UInt32_array* glyphIndex, int32_t padding, int32_t packingMode, ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array* freeGlyphRects, int32_t freeGlyphRectCount, ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array* usedGlyphRects, int32_t usedGlyphRectCount, int32_t renderMode, ModdingAPI::Exposed::UnityEngine::Texture2D* texture, ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct_array* glyphs, int32_t glyphCount) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::UInt32_array*, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array*, int32_t, ModdingAPI::Exposed::UnityEngine::TextCore::GlyphRect_array*, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::Texture2D*, ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x157B2A0))(glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount, renderMode, texture, glyphs, glyphCount);
  }
  static inline ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord_array* GetGlyphPairAdjustmentTable(ModdingAPI::Exposed::System::UInt32_array* glyphIndexes) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord_array*(__fastcall*)(ModdingAPI::Exposed::System::UInt32_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x157B330))(glyphIndexes);
  }
  static inline int32_t GetGlyphPairAdjustmentTable_Internal(ModdingAPI::Exposed::System::UInt32_array* glyphIndexes, ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord_array* glyphPairAdjustmentRecords, int32_t adjustmentRecordCount) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::UInt32_array*, ModdingAPI::Exposed::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x157B5F0))(glyphIndexes, glyphPairAdjustmentRecords, adjustmentRecordCount);
  }
  static inline void ResetAtlasTexture(ModdingAPI::Exposed::UnityEngine::Texture2D* texture) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Texture2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x157B660))(texture);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x157B6B0))();
  }
};
}