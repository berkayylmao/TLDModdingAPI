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


namespace ModdingAPI::Exposed::NodeCanvas::Framework::Internal {
struct __MissingBBParameterType_Il2CppStaticFields {
};

struct __MissingBBParameterType_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_objectValue;
  VirtualInvokeData _5_set_objectValue;
  VirtualInvokeData _6_get_varType;
  VirtualInvokeData _7_Bind;
  VirtualInvokeData _8_ParadoxNotion_Serialization_IMissingRecoverable_get_missingType;
  VirtualInvokeData _9_ParadoxNotion_Serialization_IMissingRecoverable_set_missingType;
  VirtualInvokeData _10_ParadoxNotion_Serialization_IMissingRecoverable_get_recoveryState;
  VirtualInvokeData _11_ParadoxNotion_Serialization_IMissingRecoverable_set_recoveryState;
};

struct __MissingBBParameterType_Il2CppClass {
  Il2CppClass_1 _1;
  __MissingBBParameterType_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MissingBBParameterType_Il2CppVtbl vtbl;
};

class MissingBBParameterType {
public:
  // Il2Cpp fields:
  __MissingBBParameterType_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* BBParameter__name;
  System_String* BBParameter__targetVariableID;
  ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard* BBParameter__bb;
  ModdingAPI::Exposed::NodeCanvas::Framework::Variable* BBParameter__varRef;
  ModdingAPI::Exposed::System::Func_TResult_* BBParameter_1_getter;
  ModdingAPI::Exposed::System::Action_T_* BBParameter_1_setter;
  Il2CppObject* _value;
  System_String* _missingType;
  System_String* _recoveryState;

  // Member methods:
  System_String* ParadoxNotion::Serialization::IMissingRecoverable::get_missingType() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Internal::MissingBBParameterType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319980))(this);
  }
  void ParadoxNotion::Serialization::IMissingRecoverable::set_missingType(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Internal::MissingBBParameterType*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A430))(this, value);
  }
  System_String* ParadoxNotion::Serialization::IMissingRecoverable::get_recoveryState() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Internal::MissingBBParameterType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A440))(this);
  }
  void ParadoxNotion::Serialization::IMissingRecoverable::set_recoveryState(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Internal::MissingBBParameterType*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A450))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Internal::MissingBBParameterType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22ACDE0))(this);
  }
};
}