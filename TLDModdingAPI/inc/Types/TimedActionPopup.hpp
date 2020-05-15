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
struct __TimedActionPopup_Il2CppStaticFields {
};

struct __TimedActionPopup_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TimedActionPopup_Il2CppClass {
  Il2CppClass_1 _1;
  __TimedActionPopup_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TimedActionPopup_Il2CppVtbl vtbl;
};

class TimedActionPopup {
public:
  // Il2Cpp fields:
  __TimedActionPopup_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ButtonPrompt* m_ButtonPrompt;
  ModdingAPI::Exposed::UISprite* m_ProgressSprite;
  bool _m_ActionTriggered_k__BackingField;
  int32_t m_Action;
  float m_DisplayElapsed;
  float m_DisplayTime;
  float m_HoldElapsed;
  float m_HoldTime;
  System_String* m_LocalizedText;
  System_String* m_PromptKey;
  bool m_UpdateButton;

  // Member methods:
  bool get_m_ActionTriggered() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TimedActionPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3F0))(this);
  }
  void set_m_ActionTriggered(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TimedActionPopup*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A400))(this, value);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TimedActionPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BB4B60))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TimedActionPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BB4B70))(this);
  }
  void OnControllerScene(bool isController) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TimedActionPopup*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BB4ED0))(this, isController);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TimedActionPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BB4F30))(this);
  }
  void SetPrompt(System_String* prompt, System_String* action) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TimedActionPopup*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BB50B0))(this, prompt, action);
  }
  void Setup(float displaytime, float holdtime, System_String* prompt, int32_t action) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TimedActionPopup*, float, float, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BB5190))(this, displaytime, holdtime, prompt, action);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TimedActionPopup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }
};
}