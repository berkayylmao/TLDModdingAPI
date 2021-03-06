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


namespace ModdingAPI::Exposed::NodeCanvas::Tasks::Actions {
struct __ExecuteFunction_Il2CppStaticFields {
};

struct __ExecuteFunction_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_NodeCanvas_Framework_ISubParametersContainer_GetSubParameters;
  VirtualInvokeData _5_Duplicate;
  VirtualInvokeData _6_OnCreate;
  VirtualInvokeData _7_OnValidate;
  VirtualInvokeData _8_get_agentType;
  VirtualInvokeData _9_get_info;
  VirtualInvokeData _10_OnInit;
  VirtualInvokeData _11_OnDrawGizmos;
  VirtualInvokeData _12_OnDrawGizmosSelected;
  VirtualInvokeData _13_OnExecute;
  VirtualInvokeData _14_OnUpdate;
  VirtualInvokeData _15_OnStop;
  VirtualInvokeData _16_OnStop;
  VirtualInvokeData _17_OnPause;
  VirtualInvokeData _18_NodeCanvas_Framework_IReflectedWrapper_GetMemberInfo;
};

struct __ExecuteFunction_Il2CppClass {
  Il2CppClass_1 _1;
  __ExecuteFunction_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ExecuteFunction_Il2CppVtbl vtbl;
};

class ExecuteFunction {
public:
  // Il2Cpp fields:
  __ExecuteFunction_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool Task__isDisabled;
  ModdingAPI::Exposed::NodeCanvas::Framework::Internal::TaskAgentParameter* Task_overrideAgent;
  ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard* Task__blackboard;
  ModdingAPI::Exposed::NodeCanvas::Framework::ITaskSystem* Task__ownerSystem;
  ModdingAPI::Exposed::UnityEngine::Component* Task_current;
  System_String* Task__taskName;
  System_String* Task__taskDescription;
  System_String* Task__obsoleteInfo;
  System_String* Task__firstWarningMessage_k__BackingField;
  int32_t ActionTask_status;
  float ActionTask_startedTime;
  float ActionTask_pausedTime;
  bool ActionTask_latch;
  bool ActionTask__isPaused;
  bool _ignoreSaveCheck;
  ModdingAPI::Exposed::NodeCanvas::Framework::Internal::ReflectedWrapper* functionWrapper;
  bool routineRunning;

  // Member methods:
  ModdingAPI::Exposed::System::Reflection::MemberInfo* NodeCanvas::Framework::IReflectedWrapper::GetMemberInfo() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MemberInfo*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::ExecuteFunction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0E2A0))(this);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::BBParameter_array* NodeCanvas::Framework::ISubParametersContainer::GetSubParameters() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::BBParameter_array*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::ExecuteFunction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0E280))(this);
  }
  ModdingAPI::Exposed::System::Reflection::MethodInfo* get_targetMethod() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MethodInfo*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::ExecuteFunction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D0E2A0))(this);
  }
  ModdingAPI::Exposed::System::Type* get_agentType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::ExecuteFunction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F19FE0))(this);
  }
  System_String* get_info() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::ExecuteFunction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F1A1B0))(this);
  }
  void OnValidate(ModdingAPI::Exposed::NodeCanvas::Framework::ITaskSystem* ownerSystem) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::ExecuteFunction*, ModdingAPI::Exposed::NodeCanvas::Framework::ITaskSystem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F1A890))(this, ownerSystem);
  }
  System_String* OnInit() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::ExecuteFunction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F1AA50))(this);
  }
  void OnExecute() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::ExecuteFunction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F1AC40))(this);
  }
  void OnStop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::ExecuteFunction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F1B120))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* InternalCoroutine(ModdingAPI::Exposed::System::Collections::IEnumerator* routine) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::ExecuteFunction*, ModdingAPI::Exposed::System::Collections::IEnumerator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F1B130))(this, routine);
  }
  void SetMethod(ModdingAPI::Exposed::System::Reflection::MethodInfo* method) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::ExecuteFunction*, ModdingAPI::Exposed::System::Reflection::MethodInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F1B290))(this, method);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::ExecuteFunction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5C3470))(this);
  }
};
}