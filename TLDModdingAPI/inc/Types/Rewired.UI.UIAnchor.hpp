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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI.Exposed.Rewired.UI.UIAnchor.hpp"

namespace ModdingAPI::Exposed::Rewired::UI {
struct __UIAnchor_Il2CppObject {
  ModdingAPI::Exposed::UnityEngine::Vector2 min;
  ModdingAPI::Exposed::UnityEngine::Vector2 max;
};
struct __UIAnchor_Il2CppStaticFields {
};

struct __UIAnchor_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __UIAnchor_Il2CppClass {
  Il2CppClass_1 _1;
  __UIAnchor_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UIAnchor_Il2CppVtbl vtbl;
};

class UIAnchor {
public:
  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Vector2 min;
  ModdingAPI::Exposed::UnityEngine::Vector2 max;

  // Member methods:
  void ::ctor(float minX, float minY, float maxX, float maxY) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::UI::UIAnchor*, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x29AB0))(this, minX, minY, maxX, maxY);
  }
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Vector2 min, ModdingAPI::Exposed::UnityEngine::Vector2 max) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::UI::UIAnchor*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x29AF0))(this, min, max);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_TopLeft() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E2C0))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_TopCenter() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E2E0))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_TopRight() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E300))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_MiddleLeft() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E320))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_MiddleCenter() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E340))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_MiddleRight() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E360))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_BottomLeft() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E380))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_BottomCenter() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E390))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_BottomRight() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E3B0))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_TopHStretch() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E3D0))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_MiddleHStretch() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E3F0))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_BottomHStretch() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E410))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_LeftVStretch() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E430))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_CenterVStretch() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E450))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_RightVStretch() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E470))();
  }
  static inline ModdingAPI::Exposed::Rewired::UI::UIAnchor get_Stretch() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::UI::UIAnchor(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xB3E490))();
  }

};
}