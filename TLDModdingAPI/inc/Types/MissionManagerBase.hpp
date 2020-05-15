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


namespace ModdingAPI::Exposed {
struct __MissionManagerBase_Il2CppStaticFields {
  int32_t m_NextId;
  ModdingAPI::Exposed::MissionManagerSaveProxy* m_MissionManagerSaveProxy;
};

struct __MissionManagerBase_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __MissionManagerBase_Il2CppClass {
  Il2CppClass_1 _1;
  __MissionManagerBase_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MissionManagerBase_Il2CppVtbl vtbl;
};

class MissionManagerBase {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C842C8;
  static inline    __MissionManagerBase_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MissionManagerBase_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MissionManagerBase_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MissionManagerBase_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::NodeCanvas::StateMachines::FSMOwner* m_FSMOwner;
  System_String* m_MissionId;
  ModdingAPI::Exposed::FSMHierarchy* m_FSMHierarchy;
  ModdingAPI::Exposed::System::String_array* m_JumpToIds;
  bool m_IsActive;
  bool m_WasCompleted;
  int32_t m_NextIdIndex;
  int32_t m_NextFSMIndex;
  int32_t m_MyId;
  ModdingAPI::Exposed::MissionManagerSaveProxy* m_DeserializeData;

  // Member methods:
  void ::ctor(System_String* missionId, ModdingAPI::Exposed::NodeCanvas::StateMachines::FSMOwner* fsmOwner) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, System_String*, ModdingAPI::Exposed::NodeCanvas::StateMachines::FSMOwner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B01920))(this, missionId, fsmOwner);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B01B40))(this);
  }
  void Stop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B01B70))(this);
  }
  void InitiateJumpTo(ModdingAPI::Exposed::System::String_array* jumpToIds, int32_t firstRank, System_String* missionConfigData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, ModdingAPI::Exposed::System::String_array*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B01BC0))(this, jumpToIds, firstRank, missionConfigData);
  }
  System_String* GetNextJumpToId() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B01D90))(this);
  }
  int32_t AssignFSMRank() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B01E10))(this);
  }
  void PreRegisterGraphOwner(ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner* graphOwner) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B01E20))(this, graphOwner);
  }
  void RegisterFSM(int32_t rank, ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM* fsm, ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner* graphOwner) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, int32_t, ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM*, ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B01F50))(this, rank, fsm, graphOwner);
  }
  void UnregisterFSM(int32_t rank) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B01F70))(this, rank);
  }
  void PreRegisterChildGraph(int32_t rank, ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner* childGraph) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, int32_t, ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B02060))(this, rank, childGraph);
  }
  void RegisterChildGraph(int32_t rank, ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner* childGraph) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, int32_t, ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B02250))(this, rank, childGraph);
  }
  void UnregisterChildGraph(int32_t rank) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B023B0))(this, rank);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B024E0))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B02A30))(this, text);
  }
  void FlushDeserializeData() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B02AE0))(this);
  }
  void SendMissionEvent(System_String* eventString) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B02AF0))(this, eventString);
  }
  void SendMissionEvent(ModdingAPI::Exposed::ParadoxNotion::EventData* ev) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, ModdingAPI::Exposed::ParadoxNotion::EventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B02C70))(this, ev);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner* GetMissionGraphOwner(System_String* graphName) {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner*(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B02E00))(this, graphName);
  }
  bool TryGetBlackboardVarAsFloatFullSearch(System_String* varName, float result) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::MissionManagerBase*, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B031D0))(this, varName, result);
  }

  // Static fields:
  static inline __CppStaticProperty<int32_t> m_NextId = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_NextId; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::MissionManagerSaveProxy*> m_MissionManagerSaveProxy = __CppStaticProperty<ModdingAPI::Exposed::MissionManagerSaveProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_MissionManagerSaveProxy; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B03640))();
  }
};
}