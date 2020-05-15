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


namespace ModdingAPI::Exposed::SWS {
struct __PathRenderer_Il2CppStaticFields {
};

struct __PathRenderer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __PathRenderer_Il2CppClass {
  Il2CppClass_1 _1;
  __PathRenderer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PathRenderer_Il2CppVtbl vtbl;
};

class PathRenderer {
public:
  // Il2Cpp fields:
  __PathRenderer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool onUpdate;
  float spacing;
  ModdingAPI::Exposed::SWS::PathManager* path;
  ModdingAPI::Exposed::UnityEngine::LineRenderer* line;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* points;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SWS::PathRenderer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB5A50))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* StartRenderer() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::SWS::PathRenderer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB5B40))(this);
  }
  void Render() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SWS::PathRenderer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB5C90))(this);
  }
  void DrawCurved() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SWS::PathRenderer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB61E0))(this);
  }
  void DrawLinear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SWS::PathRenderer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB63D0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SWS::PathRenderer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB6540))(this);
  }
};
}