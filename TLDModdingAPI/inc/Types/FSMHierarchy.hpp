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
struct __FSMHierarchy_Il2CppStaticFields {
};

struct __FSMHierarchy_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __FSMHierarchy_Il2CppClass {
  Il2CppClass_1 _1;
  __FSMHierarchy_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __FSMHierarchy_Il2CppVtbl vtbl;
};

class FSMHierarchy {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4C368;
  static inline    __FSMHierarchy_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __FSMHierarchy_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__FSMHierarchy_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __FSMHierarchy_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::String_array* m_RankIds;
  ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM_array* m_FSMs;
  ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner_array* m_ChildGraphs;

  // Member methods:
  System_String* get_Episode() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D170))(this);
  }
  void set_Episode(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D1B0))(this, value);
  }
  System_String* get_Stage() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D220))(this);
  }
  void set_Stage(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D260))(this, value);
  }
  System_String* get_SubStage() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D2D0))(this);
  }
  void set_SubStage(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D310))(this, value);
  }
  System_String* get_Worker1() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D380))(this);
  }
  void set_Worker1(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D3C0))(this, value);
  }
  System_String* get_Worker2() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D430))(this);
  }
  void set_Worker2(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D470))(this, value);
  }
  System_String* get_Worker3() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D4E0))(this);
  }
  void set_Worker3(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D520))(this, value);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D590))(this);
  }
  void ValidateTag(ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM* fsm) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*, ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, fsm);
  }
  void SetFSMForRank(int32_t rank, ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM* fsm) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*, int32_t, ModdingAPI::Exposed::NodeCanvas::StateMachines::FSM*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D630))(this, rank, fsm);
  }
  void SetChildGraphForRank(int32_t rank, ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner* graphOwner) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*, int32_t, ModdingAPI::Exposed::NodeCanvas::Framework::GraphOwner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D750))(this, rank, graphOwner);
  }
  System_String* GetJumpString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D8A0))(this);
  }
  void RefreshIds() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191D9A0))(this);
  }
  void Stop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191DBF0))(this);
  }
  void SendEvent(ModdingAPI::Exposed::ParadoxNotion::EventData* ev) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*, ModdingAPI::Exposed::ParadoxNotion::EventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191DD60))(this, ev);
  }
  void SendEvent(System_String* eventString) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191DEB0))(this, eventString);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FSMHierarchy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191E000))(this);
  }
};
}