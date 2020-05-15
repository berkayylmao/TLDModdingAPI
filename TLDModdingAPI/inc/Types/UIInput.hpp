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
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed {
struct __UIInput_Il2CppStaticFields {
  ModdingAPI::Exposed::UIInput* current;
  ModdingAPI::Exposed::UIInput* selection;
  int32_t mDrawStart;
  System_String* mLastIME;
};

struct __UIInput_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_OnSelect;
  VirtualInvokeData _5_Update;
  VirtualInvokeData _6_ProcessEvent;
  VirtualInvokeData _7_Insert;
  VirtualInvokeData _8_OnPress;
  VirtualInvokeData _9_OnDrag;
  VirtualInvokeData _10_Cleanup;
};

struct __UIInput_Il2CppClass {
  Il2CppClass_1 _1;
  __UIInput_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UIInput_Il2CppVtbl vtbl;
};

class UIInput {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C7BE38;
  static inline    UIInput* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C892E0;
  static inline    __UIInput_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline UIInput* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (UIInput**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __UIInput_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__UIInput_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __UIInput_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UILabel* label;
  int32_t inputType;
  int32_t onReturnKey;
  int32_t keyboardType;
  bool hideInput;
  bool selectAllTextOnFocus;
  int32_t validation;
  int32_t characterLimit;
  System_String* savedAs;
  ModdingAPI::Exposed::UnityEngine::GameObject* selectOnTab;
  ModdingAPI::Exposed::UnityEngine::Color activeTextColor;
  ModdingAPI::Exposed::UnityEngine::Color caretColor;
  ModdingAPI::Exposed::UnityEngine::Color selectionColor;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* onSubmit;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* onChange;
  ModdingAPI::Exposed::UIInput::OnValidate* onValidate;
  System_String* mValue;
  System_String* mDefaultText;
  ModdingAPI::Exposed::UnityEngine::Color mDefaultColor;
  float mPosition;
  bool mDoInit;
  int32_t mPivot;
  bool mLoadSavedValue;
  int32_t mSelectionStart;
  int32_t mSelectionEnd;
  ModdingAPI::Exposed::UITexture* mHighlight;
  ModdingAPI::Exposed::UITexture* mCaret;
  ModdingAPI::Exposed::UnityEngine::Texture2D* mBlankTex;
  float mNextBlink;
  float mLastAlpha;
  System_String* mCached;
  int32_t mSelectMe;
  ModdingAPI::Exposed::UIInputOnGUI* mOnGUI;

  // Member methods:
  System_String* get_defaultText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25811E0))(this);
  }
  void set_defaultText(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581220))(this, value);
  }
  bool get_inputShouldBeHidden() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581260))(this);
  }
  System_String* get_text() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581340))(this);
  }
  void set_text(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581380))(this, value);
  }
  System_String* get_value() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581340))(this);
  }
  void set_value(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581390))(this, value);
  }
  bool get_selected() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581500))(this);
  }
  void set_selected(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581510))(this, value);
  }
  bool get_isSelected() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581520))(this);
  }
  void set_isSelected(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581600))(this, value);
  }
  int32_t get_cursorPosition() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581740))(this);
  }
  void set_cursorPosition(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581790))(this, value);
  }
  int32_t get_selectionStart() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25817D0))(this);
  }
  void set_selectionStart(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581820))(this, value);
  }
  int32_t get_selectionEnd() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581740))(this);
  }
  void set_selectionEnd(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581790))(this, value);
  }
  ModdingAPI::Exposed::UITexture* get_caret() {
    return reinterpret_cast<ModdingAPI::Exposed::UITexture*(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F11D0))(this);
  }
  System_String* Validate(System_String* val) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UIInput*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581860))(this, val);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581B20))(this);
  }
  void Init() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2581E20))(this);
  }
  void SaveToPlayerPrefs(System_String* val) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2582090))(this, val);
  }
  void OnSelect(bool isSelected) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2582110))(this, isSelected);
  }
  void OnSelectEvent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25823F0))(this);
  }
  void OnDeselectEvent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2582560))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2582850))(this);
  }
  void DoBackspace() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25835B0))(this);
  }
  bool ProcessEvent(ModdingAPI::Exposed::UnityEngine::Event* ev) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIInput*, ModdingAPI::Exposed::UnityEngine::Event*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2583680))(this, ev);
  }
  void Insert(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2583F60))(this, text);
  }
  System_String* GetLeftText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25844E0))(this);
  }
  System_String* GetRightText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25845F0))(this);
  }
  System_String* GetSelection() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2584700))(this);
  }
  int32_t GetCharUnderMouse() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2584820))(this);
  }
  void OnPress(bool isPressed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2584A80))(this, isPressed);
  }
  void OnDrag(ModdingAPI::Exposed::UnityEngine::Vector2 delta) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2584C20))(this, delta);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF0190))(this);
  }
  void Cleanup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2584D50))(this);
  }
  void Submit() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2584F60))(this);
  }
  void UpdateLabel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2585110))(this);
  }
  void SetPivotToLeft() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2586290))(this);
  }
  void SetPivotToRight() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25862F0))(this);
  }
  void RestoreLabelPivot() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2586360))(this);
  }
  wchar_t Validate(System_String* text, int32_t pos, wchar_t ch) {
    return reinterpret_cast<wchar_t(__fastcall*)(ModdingAPI::Exposed::UIInput*, System_String*, int32_t, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2586440))(this, text, pos, ch);
  }
  void ExecuteOnChange() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2586800))(this);
  }
  void RemoveFocus() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2586990))(this);
  }
  void SaveValue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25869A0))(this);
  }
  void LoadValue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25869B0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2586AF0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UIInput*> current = __CppStaticProperty<ModdingAPI::Exposed::UIInput*>(
   []() { return &GetStaticClassInstance()->pStaticFields->current; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UIInput*> selection = __CppStaticProperty<ModdingAPI::Exposed::UIInput*>(
   []() { return &GetStaticClassInstance()->pStaticFields->selection; }
  );
  static inline __CppStaticProperty<int32_t> mDrawStart = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->mDrawStart; }
  );
  static inline __CppStaticProperty<System_String*> mLastIME = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->mLastIME; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2586D80))();
  }
};
}