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
#include "ModdingAPI::Exposed::UnityEngine::Color.hpp"


namespace ModdingAPI::Exposed::DigitalOpus::MB::Core {
struct __MB2_TexturePackerRegular_Il2CppStaticFields {
};

struct __MB2_TexturePackerRegular_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_GetRects;
  VirtualInvokeData _5_GetRects;
};

struct __MB2_TexturePackerRegular_Il2CppClass {
  Il2CppClass_1 _1;
  __MB2_TexturePackerRegular_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MB2_TexturePackerRegular_Il2CppVtbl vtbl;
};

class MB2_TexturePackerRegular {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C48670;
  static inline    __MB2_TexturePackerRegular_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MB2_TexturePackerRegular_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MB2_TexturePackerRegular_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MB2_TexturePackerRegular_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t LOG_LEVEL;
  bool atlasMustBePowerOfTwo;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult* bestRoot;
  int32_t atlasY;

  // Member methods:
  void DrawGizmos() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F61B40))(this);
  }
  bool ProbeSingleAtlas(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePacker::Image_array* imgsToAdd, int32_t idealAtlasW, int32_t idealAtlasH, float imgArea, int32_t maxAtlasDimX, int32_t maxAtlasDimY, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult* pr) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePacker::Image_array*, int32_t, int32_t, float, int32_t, int32_t, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F61C80))(this, imgsToAdd, idealAtlasW, idealAtlasH, imgArea, maxAtlasDimX, maxAtlasDimY, pr);
  }
  bool ProbeMultiAtlas(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePacker::Image_array* imgsToAdd, int32_t idealAtlasW, int32_t idealAtlasH, float imgArea, int32_t maxAtlasDimX, int32_t maxAtlasDimY, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult* pr) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePacker::Image_array*, int32_t, int32_t, float, int32_t, int32_t, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F623F0))(this, imgsToAdd, idealAtlasW, idealAtlasH, imgArea, maxAtlasDimX, maxAtlasDimY, pr);
  }
  void GetExtent(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node* r, int32_t x, int32_t y) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F62D90))(this, r, x, y);
  }
  int32_t StepWidthHeight(int32_t oldVal, int32_t step, int32_t maxDim) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F62F10))(this, oldVal, step, maxDim);
  }
  ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult_array* GetRects(ModdingAPI::Exposed::System::Collections::Generic::List_T_* imgWidthHeights, int32_t maxDimensionX, int32_t maxDimensionY, int32_t atPadding) {
    return reinterpret_cast<ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult_array*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F62F30))(this, imgWidthHeights, maxDimensionX, maxDimensionY, atPadding);
  }
  ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult_array* GetRects(ModdingAPI::Exposed::System::Collections::Generic::List_T_* imgWidthHeights, ModdingAPI::Exposed::System::Collections::Generic::List_T_* paddings, int32_t maxDimensionX, int32_t maxDimensionY, bool doMultiAtlas) {
    return reinterpret_cast<ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult_array*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F63230))(this, imgWidthHeights, paddings, maxDimensionX, maxDimensionY, doMultiAtlas);
  }
  ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult* _GetRectsSingleAtlas(ModdingAPI::Exposed::System::Collections::Generic::List_T_* imgWidthHeights, ModdingAPI::Exposed::System::Collections::Generic::List_T_* paddings, int32_t maxDimensionX, int32_t maxDimensionY, int32_t minImageSizeX, int32_t minImageSizeY, int32_t masterImageSizeX, int32_t masterImageSizeY, int32_t recursionDepth) {
    return reinterpret_cast<ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F63480))(this, imgWidthHeights, paddings, maxDimensionX, maxDimensionY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY, recursionDepth);
  }
  ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult_array* _GetRectsMultiAtlas(ModdingAPI::Exposed::System::Collections::Generic::List_T_* imgWidthHeights, ModdingAPI::Exposed::System::Collections::Generic::List_T_* paddings, int32_t maxDimensionPassedX, int32_t maxDimensionPassedY, int32_t minImageSizeX, int32_t minImageSizeY, int32_t masterImageSizeX, int32_t masterImageSizeY) {
    return reinterpret_cast<ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult_array*(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F651A0))(this, imgWidthHeights, paddings, maxDimensionPassedX, maxDimensionPassedY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F5CD30))(this);
  }

  // Static methods:
  static inline void printTree(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node* r, System_String* spc) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F60EB0))(r, spc);
  }
  static inline void flattenTree(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node* r, ModdingAPI::Exposed::System::Collections::Generic::List_T_* putHere) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F61290))(r, putHere);
  }
  static inline void drawGizmosNode(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node* r) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F61430))(r);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Texture2D* createFilledTex(ModdingAPI::Exposed::UnityEngine::Color c, int32_t w, int32_t h) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture2D*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Color, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F61960))(c, w, h);
  }
};
}