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
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __UIPopupList_Il2CppStaticFields {
  ModdingAPI::Exposed::UIPopupList* current;
};

struct __UIPopupList_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __UIPopupList_Il2CppClass {
  Il2CppClass_1 _1;
  __UIPopupList_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UIPopupList_Il2CppVtbl vtbl;
};

class UIPopupList {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C43DC8;
  static inline    UIPopupList* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C60D48;
  static inline    __UIPopupList_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline UIPopupList* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (UIPopupList**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __UIPopupList_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__UIPopupList_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __UIPopupList_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::Vector2 popupWindowSize;
  ModdingAPI::Exposed::UIAtlas* atlas;
  ModdingAPI::Exposed::UIFont* bitmapFont;
  ModdingAPI::Exposed::UnityEngine::Font* trueTypeFont;
  int32_t fontSize;
  int32_t fontStyle;
  System_String* backgroundSprite;
  System_String* highlightSprite;
  int32_t position;
  int32_t alignment;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* items;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* itemData;
  ModdingAPI::Exposed::UnityEngine::Vector2 padding;
  ModdingAPI::Exposed::UnityEngine::Color textColor;
  ModdingAPI::Exposed::UnityEngine::Color backgroundColor;
  ModdingAPI::Exposed::UnityEngine::Color highlightColor;
  bool isAnimated;
  bool isLocalized;
  int32_t openOn;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* onChange;
  System_String* mSelectedItem;
  ModdingAPI::Exposed::UIPanel* mPanel;
  ModdingAPI::Exposed::UnityEngine::GameObject* mChild;
  ModdingAPI::Exposed::UISprite* mBackground;
  ModdingAPI::Exposed::UISprite* mHighlight;
  ModdingAPI::Exposed::UILabel* mHighlightedLabel;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* mLabelList;
  float mBgBorder;
  ModdingAPI::Exposed::UnityEngine::GameObject* mSelection;
  ModdingAPI::Exposed::UnityEngine::GameObject* eventReceiver;
  System_String* functionName;
  float textScale;
  ModdingAPI::Exposed::UIFont* font;
  ModdingAPI::Exposed::UILabel* textLabel;
  ModdingAPI::Exposed::UIPopupList::LegacyEvent* mLegacyEvent;
  bool mUseDynamicFont;
  bool mTweening;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Object* get_ambigiousFont() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Object*(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CD000))(this);
  }
  void set_ambigiousFont(ModdingAPI::Exposed::UnityEngine::Object* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, ModdingAPI::Exposed::UnityEngine::Object*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CD110))(this, value);
  }
  ModdingAPI::Exposed::UIPopupList::LegacyEvent* get_onSelectionChange() {
    return reinterpret_cast<ModdingAPI::Exposed::UIPopupList::LegacyEvent*(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E120))(this);
  }
  void set_onSelectionChange(ModdingAPI::Exposed::UIPopupList::LegacyEvent* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, ModdingAPI::Exposed::UIPopupList::LegacyEvent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E130))(this, value);
  }
  bool get_isOpen() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CD240))(this);
  }
  System_String* get_value() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307710))(this);
  }
  void set_value(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CD2F0))(this, value);
  }
  Il2CppObject* get_data() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CD310))(this);
  }
  System_String* get_selection() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307710))(this);
  }
  void set_selection(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CD2F0))(this, value);
  }
  bool get_handleEvents() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CD410))(this);
  }
  void set_handleEvents(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CD520))(this, value);
  }
  bool get_isValid() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CD600))(this);
  }
  int32_t get_activeFontSize() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CD6F0))(this);
  }
  float get_activeFontScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CD800))(this);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CD930))(this);
  }
  void AddItem(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CDA10))(this, text);
  }
  void AddItem(System_String* text, Il2CppObject* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CDAD0))(this, text, data);
  }
  void RemoveItem(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CDBA0))(this, text);
  }
  void RemoveItemByData(Il2CppObject* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CDCA0))(this, data);
  }
  void TriggerCallbacks() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CDDA0))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CDF90))(this);
  }
  void OnValidate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CE2A0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CE430))(this);
  }
  void OnLocalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CE6C0))(this);
  }
  void Highlight(ModdingAPI::Exposed::UILabel* lbl, bool instant) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, ModdingAPI::Exposed::UILabel*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CE6E0))(this, lbl, instant);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetHighlightPosition() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CE910))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* UpdateTweenPosition() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CEB90))(this);
  }
  void OnItemHover(ModdingAPI::Exposed::UnityEngine::GameObject* go, bool isOver) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CECE0))(this, go, isOver);
  }
  void Select(ModdingAPI::Exposed::UILabel* lbl, bool instant) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, ModdingAPI::Exposed::UILabel*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CEDA0))(this, lbl, instant);
  }
  void OnItemPress(ModdingAPI::Exposed::UnityEngine::GameObject* go, bool isPressed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CEFC0))(this, go, isPressed);
  }
  void OnItemClick(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CF080))(this, go);
  }
  void OnKey(ModdingAPI::Exposed::UnityEngine::KeyCode key) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, ModdingAPI::Exposed::UnityEngine::KeyCode)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CF090))(this, key);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CF080))(this);
  }
  void OnSelect(bool isSelected) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CF3E0))(this, isSelected);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CF3F0))(this);
  }
  void AnimateColor(ModdingAPI::Exposed::UIWidget* widget) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, ModdingAPI::Exposed::UIWidget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CF820))(this, widget);
  }
  void AnimatePosition(ModdingAPI::Exposed::UIWidget* widget, bool placeAbove, float bottom) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, ModdingAPI::Exposed::UIWidget*, bool, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CF9D0))(this, widget, placeAbove, bottom);
  }
  void AnimateScale(ModdingAPI::Exposed::UIWidget* widget, bool placeAbove, float bottom) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, ModdingAPI::Exposed::UIWidget*, bool, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CFBB0))(this, widget, placeAbove, bottom);
  }
  void Animate(ModdingAPI::Exposed::UIWidget* widget, bool placeAbove, float bottom) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*, ModdingAPI::Exposed::UIWidget*, bool, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CFF10))(this, widget, placeAbove, bottom);
  }
  void OnClick() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24CFF70))(this);
  }
  void OnDoubleClick() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D0040))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* CloseIfUnselected() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D0060))(this);
  }
  void Show() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D01B0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIPopupList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D23A0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UIPopupList*> current = __CppStaticProperty<ModdingAPI::Exposed::UIPopupList*>(
   []() { return &GetStaticClassInstance()->pStaticFields->current; }
  );
};
}