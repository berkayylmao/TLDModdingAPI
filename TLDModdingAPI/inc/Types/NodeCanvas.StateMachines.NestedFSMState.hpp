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


namespace ModdingAPI::Exposed::NodeCanvas::StateMachines {
struct __NestedFSMState_Il2CppStaticFields {
};

struct __NestedFSMState_Il2CppVtbl {
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
  VirtualInvokeData _36_get_elapsedTime;
  VirtualInvokeData _37_get_FSM;
  VirtualInvokeData _38_GetTransitions;
  VirtualInvokeData _39_CheckTransitions;
  VirtualInvokeData _40_Finish;
  VirtualInvokeData _41_OnInit;
  VirtualInvokeData _42_OnEnter;
  VirtualInvokeData _43_OnUpdate;
  VirtualInvokeData _44_OnExit;
  VirtualInvokeData _45_OnPause;
  VirtualInvokeData _46_NodeCanvas_Framework_IGraphAssignable_get_nestedGraph;
  VirtualInvokeData _47_NodeCanvas_Framework_IGraphAssignable_set_nestedGraph;
  VirtualInvokeData _48_NodeCanvas_Framework_IGraphAssignable_GetInstances;
};

struct __NestedFSMState_Il2CppClass {
  Il2CppClass_1 _1;
  __NestedFSMState_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NestedFSMState_Il2CppVtbl vtbl;
};

class NestedFSMState {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C34930;
  static inline    __NestedFSMState_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __NestedFSMState_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__NestedFSMState_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __NestedFSMState_Il2CppClass* __pClassInstance;
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
  int32_t FSMState__transitionEvaluation;
  float FSMState__elapsedTime;
  bool FSMState__hasInit;
  ModdingAPI::Exposed::NodeCanvas::Framework::BBParameter_T_* _nestedFSM;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* instances;
  ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM* currentInstance;

  // Member methods:
  ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM* get_nestedFSM() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::StateMachines::NestedFSMState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E6E830))(this);
  }
  void set_nestedFSM(ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::StateMachines::NestedFSMState*, ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E6E8C0))(this, value);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Graph* NodeCanvas::Framework::IGraphAssignable::get_nestedGraph() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Graph*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::StateMachines::NestedFSMState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E6E960))(this);
  }
  void NodeCanvas::Framework::IGraphAssignable::set_nestedGraph(ModdingAPI::Exposed::NodeCanvas::Framework::Graph* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::StateMachines::NestedFSMState*, ModdingAPI::Exposed::NodeCanvas::Framework::Graph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E6E970))(this, value);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Graph_array* NodeCanvas::Framework::IGraphAssignable::GetInstances() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Graph_array*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::StateMachines::NestedFSMState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E6EA50))(this);
  }
  void OnEnter() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::StateMachines::NestedFSMState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E6EAF0))(this);
  }
  void OnUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::StateMachines::NestedFSMState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E6ED00))(this);
  }
  void OnExit() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::StateMachines::NestedFSMState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E6EDE0))(this);
  }
  void OnPause() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::StateMachines::NestedFSMState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E6EEE0))(this);
  }
  ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM* CheckInstance() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::StateMachines::NestedFSMState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E6EFB0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::StateMachines::NestedFSMState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E6F200))(this);
  }
};
}