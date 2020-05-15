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


namespace ModdingAPI::Exposed::Rewired::ComponentControls {
struct __ComponentController_Il2CppStaticFields {
};

struct __ComponentController_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Rewired_Utils_Interfaces_IRegistrar_Rewired_ComponentControls_IComponentControl__Register;
  VirtualInvokeData _5_Rewired_Utils_Interfaces_IRegistrar_Rewired_ComponentControls_IComponentControl__Deregister;
  VirtualInvokeData _7_Awake;
  VirtualInvokeData _8_Update;
  VirtualInvokeData _9_OnEnable;
  VirtualInvokeData _10_OnDisable;
  VirtualInvokeData _11_OnValidate;
  VirtualInvokeData _12_OnDestroy;
  VirtualInvokeData _13_OnInitialize;
  VirtualInvokeData _14_OnSubscribeEvents;
  VirtualInvokeData _15_OnUnsubscribeEvents;
  VirtualInvokeData _16_ClearControlValues;
};

struct __ComponentController_Il2CppClass {
  Il2CppClass_1 _1;
  __ComponentController_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ComponentController_Il2CppVtbl vtbl;
};

class ComponentController {
public:
  // Il2Cpp fields:
  __ComponentController_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool esYehwKhrldtApGnRVqbmuVUkFZ;
  bool PoetrkNntCfZfEAGrHRwgvcHgnLh;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _controls;

  // Member methods:
  bool get_initialized() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x318510))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9F8C40))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9F8DD0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9F8DE0))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9F9000))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9F9240))(this);
  }
  void OnValidate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9F9260))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9F9290))(this);
  }
  bool OnInitialize() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this);
  }
  void OnSubscribeEvents() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x940AB0))(this);
  }
  void OnUnsubscribeEvents() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void Rewired::Utils::Interfaces::IRegistrar_Rewired::ComponentControls::IComponentControl_::Register(ModdingAPI::Exposed::Rewired::ComponentControls::IComponentControl* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*, ModdingAPI::Exposed::Rewired::ComponentControls::IComponentControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9F9340))(this, );
  }
  void Rewired::Utils::Interfaces::IRegistrar_Rewired::ComponentControls::IComponentControl_::Deregister(ModdingAPI::Exposed::Rewired::ComponentControls::IComponentControl* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*, ModdingAPI::Exposed::Rewired::ComponentControls::IComponentControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9F93E0))(this, );
  }
  void ClearControlValues() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9F9490))(this);
  }
  void eLFlGXLOKHpWeJUUlihpqcYggDt() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9F9670))(this);
  }
  void PvdPUQDXNMdWgjgPyaHetBdjfAt() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* rjTqfzCRHtttJoHGjsuappbgsFQ() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::ComponentController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9F96C0))(this);
  }
};
}