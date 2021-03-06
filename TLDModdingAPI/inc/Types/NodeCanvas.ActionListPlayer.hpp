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


namespace ModdingAPI::Exposed::NodeCanvas {
struct __ActionListPlayer_Il2CppStaticFields {
};

struct __ActionListPlayer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_NodeCanvas_Framework_ITaskSystem_get_agent;
  VirtualInvokeData _5_get_blackboard;
  VirtualInvokeData _6_get_elapsedTime;
  VirtualInvokeData _7_NodeCanvas_Framework_ITaskSystem_get_contextObject;
  VirtualInvokeData _8_SendTaskOwnerDefaults;
  VirtualInvokeData _9_NodeCanvas_Framework_ITaskSystem_SendEvent;
  VirtualInvokeData _10_NodeCanvas_Framework_ITaskSystem_RecordUndo;
  VirtualInvokeData _11_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData _12_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
};

struct __ActionListPlayer_Il2CppClass {
  Il2CppClass_1 _1;
  __ActionListPlayer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ActionListPlayer_Il2CppVtbl vtbl;
};

class ActionListPlayer {
public:
  // Il2Cpp fields:
  __ActionListPlayer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool playOnAwake;
  System_String* _serializedList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _objectReferences;
  ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard* _blackboard;
  ModdingAPI::Exposed::NodeCanvas::Framework::ActionList* _actionList;

  // Member methods:
  void UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8EF60))(this);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::ActionList* get_actionList() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::ActionList*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Component* NodeCanvas::Framework::ITaskSystem::get_agent() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Component*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3201B0))(this);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard* get_blackboard() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  void set_blackboard(ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*, ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8F0C0))(this, value);
  }
  float get_elapsedTime() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8F1A0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Object* NodeCanvas::Framework::ITaskSystem::get_contextObject() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Object*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3201B0))(this);
  }
  void SendTaskOwnerDefaults() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8F320))(this);
  }
  void NodeCanvas::Framework::ITaskSystem::SendEvent(ModdingAPI::Exposed::ParadoxNotion::EventData* eventData, Il2CppObject* sender) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*, ModdingAPI::Exposed::ParadoxNotion::EventData*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8F490))(this, eventData, sender);
  }
  void NodeCanvas::Framework::ITaskSystem::RecordUndo(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, name);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8F530))(this);
  }
  void Play() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8F570))(this);
  }
  void Play(ModdingAPI::Exposed::System::Action_T_* OnFinish) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*, ModdingAPI::Exposed::System::Action_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8F5A0))(this, OnFinish);
  }
  void Play(ModdingAPI::Exposed::UnityEngine::Component* agent, ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard* blackboard, ModdingAPI::Exposed::System::Action_T_* OnFinish) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*, ModdingAPI::Exposed::UnityEngine::Component*, ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard*, ModdingAPI::Exposed::System::Action_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8F5D0))(this, agent, blackboard, OnFinish);
  }
  int32_t ExecuteAction() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8F670))(this);
  }
  int32_t ExecuteAction(ModdingAPI::Exposed::UnityEngine::Component* agent) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*, ModdingAPI::Exposed::UnityEngine::Component*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8F6A0))(this, agent);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::NodeCanvas::ActionListPlayer* Create() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::ActionListPlayer*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8F1C0))();
  }
};
}