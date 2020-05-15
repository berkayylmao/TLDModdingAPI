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
struct __ButtonLegend_Il2CppStaticFields {
};

struct __ButtonLegend_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ButtonLegend_Il2CppClass {
  Il2CppClass_1 _1;
  __ButtonLegend_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ButtonLegend_Il2CppVtbl vtbl;
};

class ButtonLegend {
public:
  // Il2Cpp fields:
  __ButtonLegend_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::GameObject* ButtonLegendItemPrefab;
  ModdingAPI::Exposed::UIAtlas* m_ButtonIconAtlasXbox;
  ModdingAPI::Exposed::UIAtlas* m_ButtonIconAtlasSteam;
  ModdingAPI::Exposed::UIAtlas* m_ButtonIconAtlasPS4;
  bool m_OverrideIsControllerActive;
  ModdingAPI::Exposed::UITable* m_Table;
  bool m_OverrideDepth;
  int32_t m_Depth;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_ButtonLegendItems;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_ButtonIconsDictionaryXbox;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_ButtonIconsDictionarySteam;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_ButtonIconsDictionaryPS4;
  bool m_UpdateInProgress;
  bool m_Reposition;
  bool m_LastFrameWasController;

  // Member methods:
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* BuildDictionary(ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* input, ModdingAPI::Exposed::UIAtlas* atlas) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*, ModdingAPI::Exposed::UIAtlas*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1827D60))(this, input, atlas);
  }
  void AdjustSteamDictionary(ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* dictionary) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18280E0))(this, dictionary);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1828340))(this);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1828550))(this);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18288E0))(this);
  }
  void BeginUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1828B80))(this);
  }
  void UpdateButton(System_String* action, System_String* localizationKey, bool active, int32_t priority, bool localize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*, System_String*, System_String*, bool, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1828B90))(this, action, localizationKey, active, priority, localize);
  }
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* GetActiveDictionary() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1828BC0))(this);
  }
  ModdingAPI::Exposed::ButtonIcon* GetButtonIcon(System_String* action) {
    return reinterpret_cast<ModdingAPI::Exposed::ButtonIcon*(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1828E00))(this, action);
  }
  ModdingAPI::Exposed::ButtonIcon* GetButtonIconSpriteName(System_String* action) {
    return reinterpret_cast<ModdingAPI::Exposed::ButtonIcon*(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1828F70))(this, action);
  }
  void ConfigureButtonIconSpriteName(System_String* action, ModdingAPI::Exposed::UISprite* buttonSprite) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*, System_String*, ModdingAPI::Exposed::UISprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1828F80))(this, action, buttonSprite);
  }
  void ForceButtonSpriteName(System_String* spriteName, ModdingAPI::Exposed::UISprite* buttonSprite) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*, System_String*, ModdingAPI::Exposed::UISprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1828FE0))(this, spriteName, buttonSprite);
  }
  void AddButton(System_String* action, System_String* localizationKey, int32_t priority, bool localize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*, System_String*, System_String*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1829000))(this, action, localizationKey, priority, localize);
  }
  void RemoveButton(System_String* action) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1829360))(this, action);
  }
  void EndUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1829700))(this);
  }
  ModdingAPI::Exposed::ButtonLegendItem* CreatePrefab() {
    return reinterpret_cast<ModdingAPI::Exposed::ButtonLegendItem*(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18297B0))(this);
  }
  int32_t OnSort(ModdingAPI::Exposed::UnityEngine::Transform* a, ModdingAPI::Exposed::UnityEngine::Transform* b) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*, ModdingAPI::Exposed::UnityEngine::Transform*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1829C60))(this, a, b);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ButtonLegend*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1829E60))(this);
  }
};
}