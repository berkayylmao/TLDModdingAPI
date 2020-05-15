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


namespace ModdingAPI::Exposed::NodeCanvas::Framework {
struct __ConditionList_Il2CppStaticFields {
};

struct __ConditionList_Il2CppVtbl {
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
  VirtualInvokeData _13_OnEnable;
  VirtualInvokeData _14_OnDisable;
  VirtualInvokeData _15_OnCheck;
  VirtualInvokeData _16_NodeCanvas_Framework_ISubTasksContainer_GetSubTasks;
};

struct __ConditionList_Il2CppClass {
  Il2CppClass_1 _1;
  __ConditionList_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ConditionList_Il2CppVtbl vtbl;
};

class ConditionList {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C2C480;
  static inline    ConditionList* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C85B60;
  static inline    __ConditionList_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline ConditionList* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (ConditionList**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __ConditionList_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ConditionList_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ConditionList_Il2CppClass* __pClassInstance;
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
  bool ConditionTask__invert;
  int32_t ConditionTask_yieldReturn;
  int32_t ConditionTask_yields;
  int32_t checkMode;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* conditions;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* initialActiveConditions;

  // Member methods:
  bool get_allTrueRequired() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229D980))(this);
  }
  System_String* get_info() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229D990))(this);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Task_array* NodeCanvas::Framework::ISubTasksContainer::GetSubTasks() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Task_array*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229DBD0))(this);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Task* Duplicate(ModdingAPI::Exposed::NodeCanvas::Framework::ITaskSystem* newOwnerSystem) {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Task*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionList*, ModdingAPI::Exposed::NodeCanvas::Framework::ITaskSystem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229DC60))(this, newOwnerSystem);
  }
  System_String* OnInit() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229DEF0))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229E100))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229E230))(this);
  }
  bool OnCheck() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229E330))(this);
  }
  void OnDrawGizmos() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229E490))(this);
  }
  void OnDrawGizmosSelected() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229E590))(this);
  }
  void AddCondition(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionTask* condition) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionList*, ModdingAPI::Exposed::NodeCanvas::Framework::ConditionTask*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229E690))(this, condition);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::ConditionList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229E8C0))(this);
  }
};
}