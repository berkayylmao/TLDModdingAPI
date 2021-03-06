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
struct __Panel_PauseMenu_Il2CppStaticFields {
  bool m_NoMenuBlur;
};

struct __Panel_PauseMenu_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_PauseMenu_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_PauseMenu_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_PauseMenu_Il2CppVtbl vtbl;
};

class Panel_PauseMenu {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C847A0;
  static inline    __Panel_PauseMenu_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Panel_PauseMenu_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Panel_PauseMenu_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Panel_PauseMenu_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  ModdingAPI::Exposed::UISprite* m_PilgrimIcon;
  ModdingAPI::Exposed::UISprite* m_VoyageurIcon;
  ModdingAPI::Exposed::UISprite* m_StalkerIcon;
  ModdingAPI::Exposed::UISprite* m_RescueIcon;
  ModdingAPI::Exposed::UISprite* m_HuntedIcon;
  ModdingAPI::Exposed::UISprite* m_WhiteoutIcon;
  ModdingAPI::Exposed::UISprite* m_NomadIcon;
  ModdingAPI::Exposed::UISprite* m_HuntedPart2Icon;
  ModdingAPI::Exposed::UISprite* m_NightmareIcon;
  ModdingAPI::Exposed::UISprite* m_CustomModeIcon;
  ModdingAPI::Exposed::UISprite* m_FourDaysOfNightIcon;
  ModdingAPI::Exposed::UISprite* m_ArchivistIcon;
  ModdingAPI::Exposed::UISprite* m_DeadManIcon;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BuyNowObject;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_ActiveFeatObjects;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BasicMenuPrefab;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_BasicMenuRoot;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_MenuItems;
  ModdingAPI::Exposed::BasicMenu* m_BasicMenu;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188B210))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188B2B0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188B490))(this);
  }
  ModdingAPI::Exposed::System::Action* GetActionFromType(int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Action*(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188B830))(this, type);
  }
  void AddMenuItem(int32_t itemIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188BDB0))(this, itemIndex);
  }
  void ConfigureMenu() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188C000))(this);
  }
  void UpdateMenuNavigation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188C2A0))(this);
  }
  void Enable(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188C2D0))(this, enable);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x165DF10))(this);
  }
  void OnSaveGame() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188C5C0))(this);
  }
  void OnLoadGame() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188C6D0))(this);
  }
  void OnQuitGame() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188C830))(this);
  }
  void DoQuitGame() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188CB50))(this);
  }
  void OnBadges() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188CC10))(this);
  }
  void OnOptions() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188CD20))(this);
  }
  void OnHelp() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188CE50))(this);
  }
  void OnDone() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188CF80))(this);
  }
  void SetExperienceModeIcon() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188D0E0))(this);
  }
  void OnBuyNow() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188DC70))(this);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188DD00))(this);
  }
  void UpdateSaving() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188DE20))(this);
  }
  void UpdateSelectedFeats() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188E100))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_PauseMenu*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x188E670))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> m_NoMenuBlur = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_NoMenuBlur; }
  );
};
}