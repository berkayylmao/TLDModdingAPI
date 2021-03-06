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


namespace ModdingAPI::Exposed::UnityEngine::UI {
struct __ToggleGroup_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Predicate_T_* __f__am_cache0;
  ModdingAPI::Exposed::System::Func_T__TResult_* __f__am_cache1;
};

struct __ToggleGroup_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Awake;
  VirtualInvokeData _5_OnEnable;
  VirtualInvokeData _6_Start;
  VirtualInvokeData _7_OnDisable;
  VirtualInvokeData _8_OnDestroy;
  VirtualInvokeData _9_IsActive;
  VirtualInvokeData _10_OnRectTransformDimensionsChange;
  VirtualInvokeData _11_OnBeforeTransformParentChanged;
  VirtualInvokeData _12_OnTransformParentChanged;
  VirtualInvokeData _13_OnDidApplyAnimationProperties;
  VirtualInvokeData _14_OnCanvasGroupChanged;
  VirtualInvokeData _15_OnCanvasHierarchyChanged;
  VirtualInvokeData _16_IsDestroyed;
};

struct __ToggleGroup_Il2CppClass {
  Il2CppClass_1 _1;
  __ToggleGroup_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ToggleGroup_Il2CppVtbl vtbl;
};

class ToggleGroup {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C85DC0;
  static inline    __ToggleGroup_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ToggleGroup_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ToggleGroup_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ToggleGroup_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool m_AllowSwitchOff;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Toggles;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ToggleGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1002D50))(this);
  }
  bool get_allowSwitchOff() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ToggleGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE2FF70))(this);
  }
  void set_allowSwitchOff(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ToggleGroup*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5161B0))(this, value);
  }
  void ValidateToggleIsInGroup(ModdingAPI::Exposed::UnityEngine::UI::Toggle* toggle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ToggleGroup*, ModdingAPI::Exposed::UnityEngine::UI::Toggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1002EB0))(this, toggle);
  }
  void NotifyToggleOn(ModdingAPI::Exposed::UnityEngine::UI::Toggle* toggle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ToggleGroup*, ModdingAPI::Exposed::UnityEngine::UI::Toggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1003020))(this, toggle);
  }
  void UnregisterToggle(ModdingAPI::Exposed::UnityEngine::UI::Toggle* toggle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ToggleGroup*, ModdingAPI::Exposed::UnityEngine::UI::Toggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10032F0))(this, toggle);
  }
  void RegisterToggle(ModdingAPI::Exposed::UnityEngine::UI::Toggle* toggle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ToggleGroup*, ModdingAPI::Exposed::UnityEngine::UI::Toggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10033B0))(this, toggle);
  }
  bool AnyTogglesOn() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ToggleGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1003470))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* ActiveToggles() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ToggleGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1003650))(this);
  }
  void SetAllTogglesOff() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::ToggleGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10037F0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Predicate_T_*> __f__am_cache0 = __CppStaticProperty<ModdingAPI::Exposed::System::Predicate_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->__f__am_cache0; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Func_T__TResult_*> __f__am_cache1 = __CppStaticProperty<ModdingAPI::Exposed::System::Func_T__TResult_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->__f__am_cache1; }
  );

  // Static methods:
  static inline bool _AnyTogglesOn_m__0(ModdingAPI::Exposed::UnityEngine::UI::Toggle* x) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Toggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1003900))(x);
  }
  static inline bool _ActiveToggles_m__1(ModdingAPI::Exposed::UnityEngine::UI::Toggle* x) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Toggle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1003900))(x);
  }
};
}