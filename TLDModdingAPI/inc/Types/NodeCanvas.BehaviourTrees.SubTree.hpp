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


namespace ModdingAPI::Exposed::NodeCanvas::BehaviourTrees {
struct __SubTree_Il2CppStaticFields {
};

struct __SubTree_Il2CppVtbl {
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
  VirtualInvokeData _34_NodeCanvas_Framework_IGraphAssignable_get_nestedGraph;
  VirtualInvokeData _35_NodeCanvas_Framework_IGraphAssignable_set_nestedGraph;
  VirtualInvokeData _36_NodeCanvas_Framework_IGraphAssignable_GetInstances;
};

struct __SubTree_Il2CppClass {
  Il2CppClass_1 _1;
  __SubTree_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SubTree_Il2CppVtbl vtbl;
};

class SubTree {
public:
  // Il2Cpp fields:
  __SubTree_Il2CppClass* __pClassInstance;
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
  ModdingAPI::Exposed::NodeCanvas::Framework::BBParameter_T_* _subTree;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* instances;
  ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::BehaviourTree* currentInstance;

  // Member methods:
  System_String* get_name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::SubTree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E68520))(this);
  }
  ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::BehaviourTree* get_subTree() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::BehaviourTree*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::SubTree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E96DB0))(this);
  }
  void set_subTree(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::BehaviourTree* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::SubTree*, ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::BehaviourTree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E96E40))(this, value);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Graph* NodeCanvas::Framework::IGraphAssignable::get_nestedGraph() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Graph*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::SubTree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E96EE0))(this);
  }
  void NodeCanvas::Framework::IGraphAssignable::set_nestedGraph(ModdingAPI::Exposed::NodeCanvas::Framework::Graph* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::SubTree*, ModdingAPI::Exposed::NodeCanvas::Framework::Graph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E96EF0))(this, value);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Graph_array* NodeCanvas::Framework::IGraphAssignable::GetInstances() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Graph_array*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::SubTree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E96FD0))(this);
  }
  int32_t OnExecute(ModdingAPI::Exposed::UnityEngine::Component* agent, ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard* blackboard) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::SubTree*, ModdingAPI::Exposed::UnityEngine::Component*, ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E97070))(this, agent, blackboard);
  }
  void OnReset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::SubTree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E97220))(this);
  }
  void OnGraphPaused() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::SubTree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E972F0))(this);
  }
  void OnGraphStoped() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::SubTree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E973C0))(this);
  }
  ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::BehaviourTree* CheckInstance() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::BehaviourTree*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::SubTree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E97490))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::BehaviourTrees::SubTree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E97690))(this);
  }
};
}