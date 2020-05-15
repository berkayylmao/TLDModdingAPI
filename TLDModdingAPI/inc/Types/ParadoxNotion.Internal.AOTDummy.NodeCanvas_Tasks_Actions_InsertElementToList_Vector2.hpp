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


namespace ModdingAPI::Exposed::ParadoxNotion::Internal::AOTDummy {
struct __NodeCanvas_Tasks_Actions_InsertElementToList_Vector2_Il2CppStaticFields {
};

struct __NodeCanvas_Tasks_Actions_InsertElementToList_Vector2_Il2CppVtbl {
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
};

struct __NodeCanvas_Tasks_Actions_InsertElementToList_Vector2_Il2CppClass {
  Il2CppClass_1 _1;
  __NodeCanvas_Tasks_Actions_InsertElementToList_Vector2_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NodeCanvas_Tasks_Actions_InsertElementToList_Vector2_Il2CppVtbl vtbl;
};

class NodeCanvas_Tasks_Actions_InsertElementToList_Vector2 {
public:
  // Il2Cpp fields:
  __NodeCanvas_Tasks_Actions_InsertElementToList_Vector2_Il2CppClass* __pClassInstance;
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
  ModdingAPI::Exposed::NodeCanvas::Framework::BBParameter_T_* targetList;
  ModdingAPI::Exposed::NodeCanvas::Framework::BBParameter_T_* targetElement;
  ModdingAPI::Exposed::NodeCanvas::Framework::BBParameter_T_* targetIndex;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ParadoxNotion::Internal::AOTDummy::NodeCanvas_Tasks_Actions_InsertElementToList_Vector2*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19F93E0))(this);
  }
};
}