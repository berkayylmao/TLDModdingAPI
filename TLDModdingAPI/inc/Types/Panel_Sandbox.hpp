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
struct __Panel_Sandbox_Il2CppStaticFields {
};

struct __Panel_Sandbox_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_Sandbox_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_Sandbox_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_Sandbox_Il2CppVtbl vtbl;
};

class Panel_Sandbox {
public:
  // Il2Cpp fields:
  __Panel_Sandbox_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  System_String* m_TitleLocalizationId;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BasicMenuPrefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BasicMenuRoot;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_MenuItems;
  ModdingAPI::Exposed::BasicMenu* m_BasicMenu;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189E3E0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189E470))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189E5C0))(this);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  ModdingAPI::Exposed::System::Action* GetActionFromType(int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Action*(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189E790))(this, type);
  }
  void ConfigureMenu() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189EC40))(this);
  }
  void AddMenuItem(int32_t itemIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189F100))(this, itemIndex);
  }
  void Enable(bool enabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189F390))(this, enabled);
  }
  void OnClickNew() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189F580))(this);
  }
  void OnClickLoad() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189F850))(this);
  }
  void OnClickResume() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189F940))(this);
  }
  void OnClickFeats() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189FA30))(this);
  }
  void OnClickBack() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189FB70))(this);
  }
  void OnSelectionUpdate(System_String* name, int32_t value, int32_t itemIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, name, value, itemIndex);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189FC90))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_Sandbox*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x189FDB0))(this);
  }
};
}