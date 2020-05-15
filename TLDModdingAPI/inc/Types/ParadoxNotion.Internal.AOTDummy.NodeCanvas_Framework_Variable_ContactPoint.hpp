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
#include "ModdingAPI.Exposed.UnityEngine.ContactPoint.hpp"


namespace ModdingAPI::Exposed::ParadoxNotion::Internal::AOTDummy {
struct __NodeCanvas_Framework_Variable_ContactPoint_Il2CppStaticFields {
};

struct __NodeCanvas_Framework_Variable_ContactPoint_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_objectValue;
  VirtualInvokeData _5_set_objectValue;
  VirtualInvokeData _6_get_varType;
  VirtualInvokeData _7_get_hasBinding;
  VirtualInvokeData _8_get_propertyPath;
  VirtualInvokeData _9_set_propertyPath;
  VirtualInvokeData _10_BindProperty;
  VirtualInvokeData _11_UnBindProperty;
  VirtualInvokeData _12_InitializePropertyBinding;
};

struct __NodeCanvas_Framework_Variable_ContactPoint_Il2CppClass {
  Il2CppClass_1 _1;
  __NodeCanvas_Framework_Variable_ContactPoint_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NodeCanvas_Framework_Variable_ContactPoint_Il2CppVtbl vtbl;
};

class NodeCanvas_Framework_Variable_ContactPoint {
public:
  // Il2Cpp fields:
  __NodeCanvas_Framework_Variable_ContactPoint_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* Variable__name;
  System_String* Variable__id;
  bool Variable__protected;
  ModdingAPI::Exposed::System::Action_T_* Variable_onNameChanged;
  ModdingAPI::Exposed::System::Action_T1__T2_* Variable_onValueChanged;
  ModdingAPI::Exposed::UnityEngine::ContactPoint Variable_1__value;
  System_String* Variable_1__propertyPath;
  ModdingAPI::Exposed::System::Func_TResult_* Variable_1_getter;
  ModdingAPI::Exposed::System::Action_T_* Variable_1_setter;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ParadoxNotion::Internal::AOTDummy::NodeCanvas_Framework_Variable_ContactPoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19F46C0))(this);
  }
};
}