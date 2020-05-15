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


namespace ModdingAPI::Exposed::UnityEngine {
struct __GUISkin_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::GUIStyle* ms_Error;
  ModdingAPI::Exposed::UnityEngine::GUISkin::SkinChangedDelegate* m_SkinChanged;
  ModdingAPI::Exposed::UnityEngine::GUISkin* current;
};

struct __GUISkin_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __GUISkin_Il2CppClass {
  Il2CppClass_1 _1;
  __GUISkin_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __GUISkin_Il2CppVtbl vtbl;
};

class GUISkin {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C42C78;
  static inline    __GUISkin_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __GUISkin_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__GUISkin_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __GUISkin_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::Font* m_Font;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_box;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_button;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_toggle;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_label;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_textField;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_textArea;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_window;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_horizontalSlider;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_horizontalSliderThumb;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_verticalSlider;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_verticalSliderThumb;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_horizontalScrollbar;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_horizontalScrollbarThumb;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_horizontalScrollbarLeftButton;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_horizontalScrollbarRightButton;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_verticalScrollbar;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_verticalScrollbarThumb;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_verticalScrollbarUpButton;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_verticalScrollbarDownButton;
  ModdingAPI::Exposed::UnityEngine::GUIStyle* m_ScrollView;
  ModdingAPI::Exposed::UnityEngine::GUIStyle_array* m_CustomStyles;
  ModdingAPI::Exposed::UnityEngine::GUISettings* m_Settings;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_Styles;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCA70))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCC00))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Font* get_font() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Font*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD890))(this);
  }
  void set_font(ModdingAPI::Exposed::UnityEngine::Font* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::Font*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCCA0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_box() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD4220))(this);
  }
  void set_box(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCDE0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_label() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD25D0))(this);
  }
  void set_label(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCDF0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_textField() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB000))(this);
  }
  void set_textField(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCE00))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_textArea() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4BE40))(this);
  }
  void set_textArea(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCE10))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_button() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD25E0))(this);
  }
  void set_button(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCE20))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_toggle() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADAFF0))(this);
  }
  void set_toggle(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCE30))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_window() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4CF20))(this);
  }
  void set_window(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCE40))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_horizontalSlider() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCE50))(this);
  }
  void set_horizontalSlider(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCE60))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_horizontalSliderThumb() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEF2C0))(this);
  }
  void set_horizontalSliderThumb(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCE70))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_verticalSlider() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCE80))(this);
  }
  void set_verticalSlider(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCE90))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_verticalSliderThumb() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCEA0))(this);
  }
  void set_verticalSliderThumb(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCEB0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_horizontalScrollbar() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAE13B0))(this);
  }
  void set_horizontalScrollbar(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCEC0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_horizontalScrollbarThumb() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB9810))(this);
  }
  void set_horizontalScrollbarThumb(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCED0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_horizontalScrollbarLeftButton() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEFC0))(this);
  }
  void set_horizontalScrollbarLeftButton(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCEE0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_horizontalScrollbarRightButton() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEFD0))(this);
  }
  void set_horizontalScrollbarRightButton(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCEF0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_verticalScrollbar() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEFE0))(this);
  }
  void set_verticalScrollbar(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCF00))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_verticalScrollbarThumb() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEFF0))(this);
  }
  void set_verticalScrollbarThumb(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCF10))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_verticalScrollbarUpButton() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB9800))(this);
  }
  void set_verticalScrollbarUpButton(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCF20))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_verticalScrollbarDownButton() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCF30))(this);
  }
  void set_verticalScrollbarDownButton(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCF40))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* get_scrollView() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE352F0))(this);
  }
  void set_scrollView(ModdingAPI::Exposed::UnityEngine::GUIStyle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCF50))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle_array* get_customStyles() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1000440))(this);
  }
  void set_customStyles(ModdingAPI::Exposed::UnityEngine::GUIStyle_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, ModdingAPI::Exposed::UnityEngine::GUIStyle_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCF60))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GUISettings* get_settings() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUISettings*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA7060))(this);
  }
  void Apply() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FD110))(this);
  }
  void BuildStyleCache() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FD1C0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* GetStyle(System_String* styleName) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FED80))(this, styleName);
  }
  ModdingAPI::Exposed::UnityEngine::GUIStyle* FindStyle(System_String* styleName) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FF130))(this, styleName);
  }
  void MakeCurrent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FF2B0))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* GetEnumerator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GUISkin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FF3C0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GUIStyle*> ms_Error = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GUIStyle*>(
   []() { return &GetStaticClassInstance()->pStaticFields->ms_Error; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GUISkin::SkinChangedDelegate*> m_SkinChanged = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GUISkin::SkinChangedDelegate*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_SkinChanged; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GUISkin*> current = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GUISkin*>(
   []() { return &GetStaticClassInstance()->pStaticFields->current; }
  );

  // Static methods:
  static inline void CleanupRoots() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCC10))();
  }
  static inline ModdingAPI::Exposed::UnityEngine::GUIStyle* get_error() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GUIStyle*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x13FCF70))();
  }
};
}