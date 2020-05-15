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
struct __TMP_TextElement_Il2CppStaticFields {
};

struct __TMP_TextElement_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TMP_TextElement_Il2CppClass {
  Il2CppClass_1 _1;
  __TMP_TextElement_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TMP_TextElement_Il2CppVtbl vtbl;
};

class TMP_TextElement {
public:
  // Il2Cpp fields:
  __TMP_TextElement_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  uint8_t m_ElementType;
  uint32_t m_Unicode;
  ModdingAPI::Exposed::UnityEngine::TextCore::Glyph* m_Glyph;
  uint32_t m_GlyphIndex;
  float m_Scale;

  // Member methods:
  uint8_t get_elementType() {
    return reinterpret_cast<uint8_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_TextElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33C2C0))(this);
  }
  uint32_t get_unicode() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_TextElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311080))(this);
  }
  void set_unicode(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_TextElement*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEBD0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::TextCore::Glyph* get_glyph() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::TextCore::Glyph*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_TextElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void set_glyph(ModdingAPI::Exposed::UnityEngine::TextCore::Glyph* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_TextElement*, ModdingAPI::Exposed::UnityEngine::TextCore::Glyph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, value);
  }
  uint32_t get_glyphIndex() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_TextElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x37AAE0))(this);
  }
  void set_glyphIndex(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_TextElement*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3838E0))(this, value);
  }
  float get_scale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_TextElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591530))(this);
  }
  void set_scale(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_TextElement*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA6BD0))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_TextElement*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
};
}