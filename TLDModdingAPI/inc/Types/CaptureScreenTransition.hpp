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
struct __CaptureScreenTransition_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Texture2D* m_ScreenCaptureTexture;
};

struct __CaptureScreenTransition_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CaptureScreenTransition_Il2CppClass {
  Il2CppClass_1 _1;
  __CaptureScreenTransition_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CaptureScreenTransition_Il2CppVtbl vtbl;
};

class CaptureScreenTransition {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4A9B8;
  static inline    __CaptureScreenTransition_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CaptureScreenTransition_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CaptureScreenTransition_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CaptureScreenTransition_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool m_CaptureFadeOutCompleted;
  bool m_HasRequestedCapture;
  bool m_HasStartedCapture;
  bool m_HasStartedFadeout;
  bool m_HasCaptured;
  ModdingAPI::Exposed::System::Action* m_OnCaptureFinish;
  bool m_UseCaptureFading;

  // Member methods:
  void StartCapture(ModdingAPI::Exposed::System::Action* OnCaptureFinish) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*, ModdingAPI::Exposed::System::Action*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C0C0))(this, OnCaptureFinish);
  }
  void UpdateCapture() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C0E0))(this);
  }
  bool HasFadeoutCaptureCompleted() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33C2C0))(this);
  }
  void StartCaptureFadeOut(ModdingAPI::Exposed::UISprite* background) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*, ModdingAPI::Exposed::UISprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C120))(this, background);
  }
  void DoCaptureScreen() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C1F0))(this);
  }
  bool ShouldCaptureScreen() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C300))(this);
  }
  void OnFadeoutCompleted() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C320))(this);
  }
  void OnDisable(ModdingAPI::Exposed::UISprite* background) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*, ModdingAPI::Exposed::UISprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C480))(this, background);
  }
  void CaptureStarted() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C4A0))(this);
  }
  void MaybeStartCaptureFadeOut(ModdingAPI::Exposed::UISprite* background) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*, ModdingAPI::Exposed::UISprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C4B0))(this, background);
  }
  void OnUpdate(ModdingAPI::Exposed::UISprite* background, ModdingAPI::Exposed::UISprite* sprite_animation_loading) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*, ModdingAPI::Exposed::UISprite*, ModdingAPI::Exposed::UISprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C5A0))(this, background, sprite_animation_loading);
  }
  void ResetBackgrounds(ModdingAPI::Exposed::UISprite* backround) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*, ModdingAPI::Exposed::UISprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C710))(this, backround);
  }
  void MaybeResetBackgrounds(ModdingAPI::Exposed::UISprite* background) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*, ModdingAPI::Exposed::UISprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C880))(this, background);
  }
  void MaybeInitFadeOut(ModdingAPI::Exposed::UISprite* background, ModdingAPI::Exposed::UISprite* sprite_Animation_Loading) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*, ModdingAPI::Exposed::UISprite*, ModdingAPI::Exposed::UISprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7C890))(this, background, sprite_Animation_Loading);
  }
  bool IsCaptureFadingInProgress() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7CA10))(this);
  }
  void MaybeEnableAnimationLoading(ModdingAPI::Exposed::UISprite* sprite_Animation_Loading) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*, ModdingAPI::Exposed::UISprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7CA30))(this, sprite_Animation_Loading);
  }
  void SetTweenAlpha(ModdingAPI::Exposed::TweenAlpha* tweenAlpha, float from, float to, float duration) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*, ModdingAPI::Exposed::TweenAlpha*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7CAC0))(this, tweenAlpha, from, to, duration);
  }
  void InitBackgroundTweenAlpha(ModdingAPI::Exposed::UISprite* background, float currentAlpha) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*, ModdingAPI::Exposed::UISprite*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7CAF0))(this, background, currentAlpha);
  }
  void InitFadeOutCapture(ModdingAPI::Exposed::UISprite* background, ModdingAPI::Exposed::UISprite* animation) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*, ModdingAPI::Exposed::UISprite*, ModdingAPI::Exposed::UISprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7CCD0))(this, background, animation);
  }
  bool IsCaptureFading() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x46FCC0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CaptureScreenTransition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Texture2D*> m_ScreenCaptureTexture = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Texture2D*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ScreenCaptureTexture; }
  );

  // Static methods:
  static inline void SetBackgroundAlpha(ModdingAPI::Exposed::UIWidget* widget, float alpha) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIWidget*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B7CE50))(widget, alpha);
  }
};
}