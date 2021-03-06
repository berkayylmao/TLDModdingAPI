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
struct __SaveSlotViewItem_Il2CppStaticFields {
};

struct __SaveSlotViewItem_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SaveSlotViewItem_Il2CppClass {
  Il2CppClass_1 _1;
  __SaveSlotViewItem_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SaveSlotViewItem_Il2CppVtbl vtbl;
};

class SaveSlotViewItem {
public:
  // Il2Cpp fields:
  __SaveSlotViewItem_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_NonEmptySlotParent;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_EmptySlotObject;
  ModdingAPI::Exposed::TextInputField* m_NameInput;
  ModdingAPI::Exposed::UILabel* m_ExploredLabel;
  ModdingAPI::Exposed::UISprite* m_RegionSprite;
  ModdingAPI::Exposed::UISprite* m_GenderSprite;
  ModdingAPI::Exposed::UILabel* m_ConditionLabel;
  ModdingAPI::Exposed::UILabel* m_DateLabel;
  ModdingAPI::Exposed::UISprite* m_XPSprite;
  ModdingAPI::Exposed::UILabel* m_XPLabel;
  ModdingAPI::Exposed::UILabel* m_SurvivalLabel;
  ModdingAPI::Exposed::UILabel* m_RegionLabel;
  ModdingAPI::Exposed::UILabel* m_LocationLabel;
  float m_AlphaSelected;
  float m_AlphaUnselected;
  float m_AlphaHover;
  ModdingAPI::Exposed::UIWidget* m_Widget;
  ModdingAPI::Exposed::UnityEngine::BoxCollider* m_Collider;
  bool m_IsSelected;
  bool m_IsHover;
  ModdingAPI::Exposed::SaveSlotInfo* m_SlotInfo;
  float m_DoubleClickTimer;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SaveSlotViewItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C2D2E0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SaveSlotViewItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C2D390))(this);
  }
  void OnClick() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SaveSlotViewItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C2D730))(this);
  }
  void OnHover(bool hover) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SaveSlotViewItem*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C2DB70))(this, hover);
  }
  void LoadSlotData(ModdingAPI::Exposed::SaveSlotInfo* slotInfo, int32_t slotType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SaveSlotViewItem*, ModdingAPI::Exposed::SaveSlotInfo*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C2DC20))(this, slotInfo, slotType);
  }
  void SetSelected(bool selected) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SaveSlotViewItem*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319880))(this, selected);
  }
  void DoRename() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SaveSlotViewItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C2E730))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SaveSlotViewItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static methods:
  static inline System_String* GetRegionSpriteName(System_String* saveSlotLocation) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C2E750))(saveSlotLocation);
  }
};
}