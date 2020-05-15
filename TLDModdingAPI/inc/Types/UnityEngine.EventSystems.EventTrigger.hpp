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


namespace ModdingAPI::Exposed::UnityEngine::EventSystems {
struct __EventTrigger_Il2CppStaticFields {
};

struct __EventTrigger_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _21_OnPointerEnter;
  VirtualInvokeData _22_OnPointerExit;
  VirtualInvokeData _23_OnDrag;
  VirtualInvokeData _24_OnDrop;
  VirtualInvokeData _25_OnPointerDown;
  VirtualInvokeData _26_OnPointerUp;
  VirtualInvokeData _27_OnPointerClick;
  VirtualInvokeData _28_OnSelect;
  VirtualInvokeData _29_OnDeselect;
  VirtualInvokeData _30_OnScroll;
  VirtualInvokeData _31_OnMove;
  VirtualInvokeData _32_OnUpdateSelected;
  VirtualInvokeData _33_OnInitializePotentialDrag;
  VirtualInvokeData _34_OnBeginDrag;
  VirtualInvokeData _35_OnEndDrag;
  VirtualInvokeData _36_OnSubmit;
  VirtualInvokeData _37_OnCancel;
};

struct __EventTrigger_Il2CppClass {
  Il2CppClass_1 _1;
  __EventTrigger_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __EventTrigger_Il2CppVtbl vtbl;
};

class EventTrigger {
public:
  // Il2Cpp fields:
  __EventTrigger_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Delegates;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* delegates;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* get_triggers() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD5FE0))(this);
  }
  void set_triggers(ModdingAPI::Exposed::System::Collections::Generic::List_T_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, value);
  }
  void Execute(int32_t id, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, int32_t, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD6140))(this, id, eventData);
  }
  void OnPointerEnter(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD6280))(this, eventData);
  }
  void OnPointerExit(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD6290))(this, eventData);
  }
  void OnDrag(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD62A0))(this, eventData);
  }
  void OnDrop(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD62B0))(this, eventData);
  }
  void OnPointerDown(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD62C0))(this, eventData);
  }
  void OnPointerUp(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD62D0))(this, eventData);
  }
  void OnPointerClick(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD62E0))(this, eventData);
  }
  void OnSelect(ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD62F0))(this, eventData);
  }
  void OnDeselect(ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD6300))(this, eventData);
  }
  void OnScroll(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD6310))(this, eventData);
  }
  void OnMove(ModdingAPI::Exposed::UnityEngine::EventSystems::AxisEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::AxisEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD6320))(this, eventData);
  }
  void OnUpdateSelected(ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD6330))(this, eventData);
  }
  void OnInitializePotentialDrag(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD6340))(this, eventData);
  }
  void OnBeginDrag(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD6350))(this, eventData);
  }
  void OnEndDrag(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD6360))(this, eventData);
  }
  void OnSubmit(ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD6370))(this, eventData);
  }
  void OnCancel(ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::EventSystems::EventTrigger*, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD6380))(this, eventData);
  }
};
}