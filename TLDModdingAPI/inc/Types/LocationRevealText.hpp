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


namespace ModdingAPI::Exposed {
struct __LocationRevealText_Il2CppStaticFields {
};

struct __LocationRevealText_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __LocationRevealText_Il2CppClass {
  Il2CppClass_1 _1;
  __LocationRevealText_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __LocationRevealText_Il2CppVtbl vtbl;
};

class LocationRevealText {
public:
  // Il2Cpp fields:
  __LocationRevealText_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::AnimationCurve* m_FadeCurve;
  float m_FadeInDelay;
  float m_FadeTime;
  float m_FullViewTime;
  float m_FadeOutTime;
  bool m_DisplayOverAccelTime;
  ModdingAPI::Exposed::UnityEngine::Texture2D* m_TextureLeftToRight;
  ModdingAPI::Exposed::UnityEngine::Texture2D* m_TextureRightToLeft;
  ModdingAPI::Exposed::TMPro::TextMeshPro* m_TMP;
  ModdingAPI::Exposed::UnityEngine::Material* m_Material;
  bool m_HideLocationLabelLastFrame;
  float m_AlphaOrig;
  bool m_DoFade;
  float m_FadeTimer;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Queue;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LocationRevealText*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1901650))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LocationRevealText*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1901870))(this);
  }
  void GetMaterialAndHide() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LocationRevealText*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1901AA0))(this);
  }
  void Hide() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LocationRevealText*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1901B90))(this);
  }
  void StartFade(System_String* msg) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LocationRevealText*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1901C90))(this, msg);
  }
  bool FadeActive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::LocationRevealText*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x58F760))(this);
  }
  void SetTextureElementsForTime(float timeVal) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LocationRevealText*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1901E00))(this, timeVal);
  }
  void NormalizeTextureAlpha(ModdingAPI::Exposed::UnityEngine::Texture2D* textureToNormalize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LocationRevealText*, ModdingAPI::Exposed::UnityEngine::Texture2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19020B0))(this, textureToNormalize);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::LocationRevealText*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }
};
}