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


namespace ModdingAPI::Exposed::NodeCanvas::DialogueTrees {
struct __ConditionNode_Il2CppStaticFields {
};

struct __ConditionNode_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_graph;
  VirtualInvokeData _5_get_tag;
  VirtualInvokeData _6_get_name;
  VirtualInvokeData _7_set_name;
  VirtualInvokeData _8_get_description;
  VirtualInvokeData _9_get_priority;
  VirtualInvokeData _10_get_maxInConnections;
  VirtualInvokeData _11_get_maxOutConnections;
  VirtualInvokeData _12_get_outConnectionType;
  VirtualInvokeData _13_get_allowAsPrime;
  VirtualInvokeData _14_get_commentsAlignment;
  VirtualInvokeData _15_get_iconAlignment;
  VirtualInvokeData _16_OnCreate;
  VirtualInvokeData _17_OnValidate;
  VirtualInvokeData _18_OnDestroy;
  VirtualInvokeData _19_CanConnectToTarget;
  VirtualInvokeData _20_CanConnectFromSource;
  VirtualInvokeData _21_GetAdditionalState;
  VirtualInvokeData _22_OnExecute;
  VirtualInvokeData _23_OnReset;
  VirtualInvokeData _24_OnParentConnected;
  VirtualInvokeData _25_OnParentDisconnected;
  VirtualInvokeData _26_OnChildConnected;
  VirtualInvokeData _27_OnChildDisconnected;
  VirtualInvokeData _28_OnGraphStarted;
  VirtualInvokeData _29_OnGraphStoped;
  VirtualInvokeData _30_OnGraphPaused;
  VirtualInvokeData _31_OnGraphUnpaused;
  VirtualInvokeData _32_OnDrawGizmos;
  VirtualInvokeData _33_OnDrawGizmosSelected;
  VirtualInvokeData _34_get_requireActorSelection;
  VirtualInvokeData _35_get_task;
  VirtualInvokeData _36_set_task;
};

struct __ConditionNode_Il2CppClass {
  Il2CppClass_1 _1;
  __ConditionNode_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ConditionNode_Il2CppVtbl vtbl;
};

class ConditionNode {
public:
  // Il2Cpp fields:
  __ConditionNode_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Vector2 Node__position;
  System_String* Node__UID;
  System_String* Node__name;
  System_String* Node__tag;
  System_String* Node__comment;
  bool Node__isBreakpoint;
  ModdingAPI::Exposed::NodeCanvas::Framework::Graph* Node__graph;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* Node__inConnections;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* Node__outConnections;
  int32_t Node__ID;
  int32_t Node__status;
  System_String* Node__nameCache;
  System_String* Node__descriptionCache;
  int32_t Node__priorityCache;
  bool Node__isChecked_k__BackingField;
  bool Node__breakPointReached_k__BackingField;
  System_String* DTNode__actorName;
  System_String* DTNode__actorParameterID;
  ModdingAPI::Exposed::NodeCanvas::Framework::ConditionTask* _condition;

  // Member methods:
  ModdingAPI::Exposed::NodeCanvas::Framework::ConditionTask* get_condition() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::ConditionTask*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::ConditionNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307640))(this);
  }
  void set_condition(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionTask* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::ConditionNode*, ModdingAPI::Exposed::NodeCanvas::Framework::ConditionTask*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E95A0))(this, value);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Task* get_task() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Task*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::ConditionNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307640))(this);
  }
  void set_task(ModdingAPI::Exposed::NodeCanvas::Framework::Task* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::ConditionNode*, ModdingAPI::Exposed::NodeCanvas::Framework::Task*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E99C00))(this, value);
  }
  int32_t get_maxOutConnections() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::ConditionNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3201C0))(this);
  }
  bool get_requireActorSelection() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::ConditionNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this);
  }
  int32_t OnExecute(ModdingAPI::Exposed::UnityEngine::Component* agent, ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard* bb) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::ConditionNode*, ModdingAPI::Exposed::UnityEngine::Component*, ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E99CE0))(this, agent, bb);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::DialogueTrees::ConditionNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E99120))(this);
  }
};
}