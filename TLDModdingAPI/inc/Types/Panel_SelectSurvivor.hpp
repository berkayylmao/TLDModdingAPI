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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __Panel_SelectSurvivor_Il2CppStaticFields {
};

struct __Panel_SelectSurvivor_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_SelectSurvivor_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_SelectSurvivor_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_SelectSurvivor_Il2CppVtbl vtbl;
};

class Panel_SelectSurvivor {
public:
  // Il2Cpp fields:
  __Panel_SelectSurvivor_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  System_String* m_HeaderTitleLocalizationId;
  System_String* m_TitleLocalizationId;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_TitleHeaderOffset;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BasicMenuPrefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BasicMenuRoot;
  ModdingAPI::Exposed::BasicMenu* m_BasicMenu;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_MenuItems;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ItemDetails;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18A8440))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AB580))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AB6D0))(this);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  void AddMenuItem(int32_t itemIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AB8A0))(this, itemIndex);
  }
  void ConfigureMenu() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18ABD00))(this);
  }
  void Enable(bool enabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AC180))(this, enabled);
  }
  void OnClickBack() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AC460))(this);
  }
  void OnSelectSurvivorMale() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AC530))(this);
  }
  void OnSelectSurvivorFemale() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AC6C0))(this);
  }
  void OnSelectionUpdate(System_String* name, int32_t value, int32_t itemIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18AC860))(this, name, value, itemIndex);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18ACA40))(this);
  }
  void RestoreSelection() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18ACB60))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_SelectSurvivor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18ACC70))(this);
  }
};
}