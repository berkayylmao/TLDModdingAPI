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
#include "ModdingAPI.Exposed.TMPro.TMP_Vertex.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Color32.hpp"

namespace ModdingAPI::Exposed::TMPro {
struct __TMP_CharacterInfo_Il2CppObject {
  wchar_t character;
  int32_t index;
  int32_t stringLength;
  int32_t elementType;
  ModdingAPI::Exposed::TMPro::TMP_TextElement* textElement;
  ModdingAPI::Exposed::TMPro::TMP_FontAsset* fontAsset;
  ModdingAPI::Exposed::TMPro::TMP_SpriteAsset* spriteAsset;
  int32_t spriteIndex;
  ModdingAPI::Exposed::UnityEngine::Material* material;
  int32_t materialReferenceIndex;
  bool isUsingAlternateTypeface;
  float pointSize;
  int32_t lineNumber;
  int32_t pageNumber;
  int32_t vertexIndex;
  ModdingAPI::Exposed::TMPro::TMP_Vertex vertex_BL;
  ModdingAPI::Exposed::TMPro::TMP_Vertex vertex_TL;
  ModdingAPI::Exposed::TMPro::TMP_Vertex vertex_TR;
  ModdingAPI::Exposed::TMPro::TMP_Vertex vertex_BR;
  ModdingAPI::Exposed::UnityEngine::Vector3 topLeft;
  ModdingAPI::Exposed::UnityEngine::Vector3 bottomLeft;
  ModdingAPI::Exposed::UnityEngine::Vector3 topRight;
  ModdingAPI::Exposed::UnityEngine::Vector3 bottomRight;
  float origin;
  float ascender;
  float baseLine;
  float descender;
  float xAdvance;
  float aspectRatio;
  float scale;
  ModdingAPI::Exposed::UnityEngine::Color32 color;
  ModdingAPI::Exposed::UnityEngine::Color32 underlineColor;
  ModdingAPI::Exposed::UnityEngine::Color32 strikethroughColor;
  ModdingAPI::Exposed::UnityEngine::Color32 highlightColor;
  int32_t style;
  bool isVisible;
};
struct __TMP_CharacterInfo_Il2CppStaticFields {
};

struct __TMP_CharacterInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TMP_CharacterInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __TMP_CharacterInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TMP_CharacterInfo_Il2CppVtbl vtbl;
};

class TMP_CharacterInfo {
public:
  // Member fields:
  wchar_t character;
  int32_t index;
  int32_t stringLength;
  int32_t elementType;
  ModdingAPI::Exposed::TMPro::TMP_TextElement* textElement;
  ModdingAPI::Exposed::TMPro::TMP_FontAsset* fontAsset;
  ModdingAPI::Exposed::TMPro::TMP_SpriteAsset* spriteAsset;
  int32_t spriteIndex;
  ModdingAPI::Exposed::UnityEngine::Material* material;
  int32_t materialReferenceIndex;
  bool isUsingAlternateTypeface;
  float pointSize;
  int32_t lineNumber;
  int32_t pageNumber;
  int32_t vertexIndex;
  ModdingAPI::Exposed::TMPro::TMP_Vertex vertex_BL;
  ModdingAPI::Exposed::TMPro::TMP_Vertex vertex_TL;
  ModdingAPI::Exposed::TMPro::TMP_Vertex vertex_TR;
  ModdingAPI::Exposed::TMPro::TMP_Vertex vertex_BR;
  ModdingAPI::Exposed::UnityEngine::Vector3 topLeft;
  ModdingAPI::Exposed::UnityEngine::Vector3 bottomLeft;
  ModdingAPI::Exposed::UnityEngine::Vector3 topRight;
  ModdingAPI::Exposed::UnityEngine::Vector3 bottomRight;
  float origin;
  float ascender;
  float baseLine;
  float descender;
  float xAdvance;
  float aspectRatio;
  float scale;
  ModdingAPI::Exposed::UnityEngine::Color32 color;
  ModdingAPI::Exposed::UnityEngine::Color32 underlineColor;
  ModdingAPI::Exposed::UnityEngine::Color32 strikethroughColor;
  ModdingAPI::Exposed::UnityEngine::Color32 highlightColor;
  int32_t style;
  bool isVisible;

};
}