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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"

namespace ModdingAPI::Exposed::UnityEngine {
struct __CharacterInfo_Il2CppObject {
  int32_t index;
  ModdingAPI::Exposed::UnityEngine::Rect uv;
  ModdingAPI::Exposed::UnityEngine::Rect vert;
  float width;
  int32_t size;
  int32_t style;
  bool flipped;
};
struct __CharacterInfo_Il2CppStaticFields {
};

struct __CharacterInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CharacterInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __CharacterInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CharacterInfo_Il2CppVtbl vtbl;
};

class CharacterInfo {
public:
  // Member fields:
  int32_t index;
  ModdingAPI::Exposed::UnityEngine::Rect uv;
  ModdingAPI::Exposed::UnityEngine::Rect vert;
  float width;
  int32_t size;
  int32_t style;
  bool flipped;

  // Member methods:
  int32_t get_advance() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D2E0))(this);
  }
  int32_t get_minY() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D2F0))(this);
  }
  int32_t get_maxY() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D310))(this);
  }
  int32_t get_minX() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D320))(this);
  }
  int32_t get_maxX() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D330))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_uvBottomLeftUnFlipped() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D350))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_uvBottomRightUnFlipped() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D370))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_uvTopRightUnFlipped() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D390))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_uvTopLeftUnFlipped() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D3B0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_uvBottomLeft() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D350))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_uvBottomRight() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D3D0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_uvTopRight() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D390))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_uvTopLeft() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::CharacterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D410))(this);
  }

};
}