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
struct __AuroraActivatedToggle_Il2CppStaticFields {
};

struct __AuroraActivatedToggle_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AuroraActivatedToggle_Il2CppClass {
  Il2CppClass_1 _1;
  __AuroraActivatedToggle_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AuroraActivatedToggle_Il2CppVtbl vtbl;
};

class AuroraActivatedToggle {
public:
  // Il2Cpp fields:
  __AuroraActivatedToggle_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDisplayName;
  int32_t m_ToggleState;
  System_String* m_ToggleOnAudio;
  System_String* m_ToggleOffAudio;
  bool m_ChildrenDisabled;
  ModdingAPI::Exposed::AuroraField* m_ActiveAuroraField;
  bool m_RequiresAuroraField;

  // Member methods:
  System_String* get_m_DisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::AuroraActivatedToggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35A0))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraActivatedToggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC05C0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraActivatedToggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC0710))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraActivatedToggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC0730))(this);
  }
  System_String* GetHoverText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::AuroraActivatedToggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35A0))(this);
  }
  void SetAuroraField(ModdingAPI::Exposed::AuroraField* auroraField) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraActivatedToggle*, ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31F420))(this, auroraField);
  }
  bool ProcessInteraction() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AuroraActivatedToggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC08A0))(this);
  }
  void TurnOn() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraActivatedToggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x158BAD0))(this);
  }
  void TurnOff() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraActivatedToggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7F8390))(this);
  }
  void EnableChildren() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraActivatedToggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC0A30))(this);
  }
  void DisableChildren() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraActivatedToggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC0C60))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraActivatedToggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18117A0))(this);
  }
};
}