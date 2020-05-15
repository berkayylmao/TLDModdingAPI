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
#include "ModdingAPI::Exposed::UnityEngine::Rect.hpp"


namespace ModdingAPI::Exposed::Rewired::Utils::GUITools {
struct __Solid_Il2CppStaticFields {
  bool bXQBwCLuqtRTGFmABwLSrlkTvni;
  ModdingAPI::Exposed::UnityEngine::Texture2D* zMprYdPaIFGxrllxWpCFqAOrHyA;
  ModdingAPI::Exposed::UnityEngine::Color zvPhVhCUCYDdCVRsjASRDFaSIZVu;
};

struct __Solid_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Solid_Il2CppClass {
  Il2CppClass_1 _1;
  __Solid_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Solid_Il2CppVtbl vtbl;
};

class Solid {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C27AF0;
  static inline    __Solid_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Solid_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Solid_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Solid_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<bool> bXQBwCLuqtRTGFmABwLSrlkTvni = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->bXQBwCLuqtRTGFmABwLSrlkTvni; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Texture2D*> zMprYdPaIFGxrllxWpCFqAOrHyA = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Texture2D*>(
   []() { return &GetStaticClassInstance()->pStaticFields->zMprYdPaIFGxrllxWpCFqAOrHyA; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color> zvPhVhCUCYDdCVRsjASRDFaSIZVu = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color>(
   []() { return &GetStaticClassInstance()->pStaticFields->zvPhVhCUCYDdCVRsjASRDFaSIZVu; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Color get_color() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC3A20))();
  }
  static inline void set_color(ModdingAPI::Exposed::UnityEngine::Color value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC3AD0))(value);
  }
  static inline float get_colorR() {
    return reinterpret_cast<float(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC3B80))();
  }
  static inline void set_colorR(float value) {
    reinterpret_cast<void(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC3C20))(value);
  }
  static inline float get_colorG() {
    return reinterpret_cast<float(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC3DA0))();
  }
  static inline void set_colorG(float value) {
    reinterpret_cast<void(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC3E40))(value);
  }
  static inline float get_colorB() {
    return reinterpret_cast<float(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC4050))();
  }
  static inline void set_colorB(float value) {
    reinterpret_cast<void(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC40F0))(value);
  }
  static inline float get_colorA() {
    return reinterpret_cast<float(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC42D0))();
  }
  static inline void set_colorA(float value) {
    reinterpret_cast<void(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC4370))(value);
  }
  static inline void Draw(ModdingAPI::Exposed::UnityEngine::Rect rect) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rect)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC4550))(rect);
  }
  static inline void Draw(ModdingAPI::Exposed::UnityEngine::Rect rect, ModdingAPI::Exposed::UnityEngine::Color color) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rect, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC48C0))(rect, color);
  }
  static inline void DrawRotated(ModdingAPI::Exposed::UnityEngine::Rect rect, float rotation) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rect, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC4B60))(rect, rotation);
  }
  static inline void DrawRotated(ModdingAPI::Exposed::UnityEngine::Rect rect, ModdingAPI::Exposed::UnityEngine::Color color, float rotation) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rect, ModdingAPI::Exposed::UnityEngine::Color, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC4E90))(rect, color, rotation);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Texture2D* DrawToTexture(ModdingAPI::Exposed::UnityEngine::Rect rect) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture2D*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rect)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC51F0))(rect);
  }
  static inline void BeginDrawSet() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC5410))();
  }
  static inline void EndDrawSet() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC54F0))();
  }
  static inline void DrawBox(ModdingAPI::Exposed::UnityEngine::Rect rect, ModdingAPI::Exposed::UnityEngine::Color color, float lineWidth) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rect, ModdingAPI::Exposed::UnityEngine::Color, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC55E0))(rect, color, lineWidth);
  }
  static inline void DrawBox(ModdingAPI::Exposed::UnityEngine::Rect rect, float lineWidth) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rect, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC57B0))(rect, lineWidth);
  }
  static inline void DrawBoxRotated(ModdingAPI::Exposed::UnityEngine::Rect rect, float rotation, float lineWidth) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rect, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC59E0))(rect, rotation, lineWidth);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xCC5EA0))();
  }
};
}