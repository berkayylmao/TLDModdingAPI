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


namespace ModdingAPI::Exposed::System::Threading::Tasks {
struct __AwaitTaskContinuation_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Threading::ContextCallback* s_invokeActionCallback;
};

struct __AwaitTaskContinuation_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Run;
  VirtualInvokeData _5_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData _6_System_Threading_IThreadPoolWorkItem_MarkAborted;
};

struct __AwaitTaskContinuation_Il2CppClass {
  Il2CppClass_1 _1;
  __AwaitTaskContinuation_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AwaitTaskContinuation_Il2CppVtbl vtbl;
};

class AwaitTaskContinuation {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5C130;
  static inline    __AwaitTaskContinuation_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AwaitTaskContinuation_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AwaitTaskContinuation_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AwaitTaskContinuation_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Threading::ExecutionContext* m_capturedContext;
  ModdingAPI::Exposed::System::Action* m_action;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Action* action, bool flowExecutionContext, int32_t stackMark) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::Tasks::AwaitTaskContinuation*, ModdingAPI::Exposed::System::Action*, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD87EF0))(this, action, flowExecutionContext, stackMark);
  }
  void ::ctor(ModdingAPI::Exposed::System::Action* action, bool flowExecutionContext) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::Tasks::AwaitTaskContinuation*, ModdingAPI::Exposed::System::Action*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD87FC0))(this, action, flowExecutionContext);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task* CreateTask(ModdingAPI::Exposed::System::Action_T_* action, Il2CppObject* state, ModdingAPI::Exposed::System::Threading::Tasks::TaskScheduler* scheduler) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task*(__fastcall*)(ModdingAPI::Exposed::System::Threading::Tasks::AwaitTaskContinuation*, ModdingAPI::Exposed::System::Action_T_*, Il2CppObject*, ModdingAPI::Exposed::System::Threading::Tasks::TaskScheduler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD88080))(this, action, state, scheduler);
  }
  void Run(ModdingAPI::Exposed::System::Threading::Tasks::Task* task, bool canInlineContinuationTask) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::Tasks::AwaitTaskContinuation*, ModdingAPI::Exposed::System::Threading::Tasks::Task*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD88260))(this, task, canInlineContinuationTask);
  }
  void ExecuteWorkItemHelper() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::Tasks::AwaitTaskContinuation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD88500))(this);
  }
  void System::Threading::IThreadPoolWorkItem::ExecuteWorkItem() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::Tasks::AwaitTaskContinuation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD88660))(this);
  }
  void System::Threading::IThreadPoolWorkItem::MarkAborted(ModdingAPI::Exposed::System::Threading::ThreadAbortException* tae) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::Tasks::AwaitTaskContinuation*, ModdingAPI::Exposed::System::Threading::ThreadAbortException*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, tae);
  }
  void RunCallback(ModdingAPI::Exposed::System::Threading::ContextCallback* callback, Il2CppObject* state, ModdingAPI::Exposed::System::Threading::Tasks::Task* currentTask) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::Tasks::AwaitTaskContinuation*, ModdingAPI::Exposed::System::Threading::ContextCallback*, Il2CppObject*, ModdingAPI::Exposed::System::Threading::Tasks::Task*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD888C0))(this, callback, state, currentTask);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Threading::ContextCallback*> s_invokeActionCallback = __CppStaticProperty<ModdingAPI::Exposed::System::Threading::ContextCallback*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_invokeActionCallback; }
  );

  // Static methods:
  static inline bool get_IsValidLocationForInlining() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xD883A0))();
  }
  static inline void InvokeAction(Il2CppObject* state) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD88690))(state);
  }
  static inline ModdingAPI::Exposed::System::Threading::ContextCallback* GetInvokeActionCallback() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::ContextCallback*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xD88740))();
  }
  static inline void RunOrScheduleAction(ModdingAPI::Exposed::System::Action* action, bool allowInlining, ModdingAPI::Exposed::System::Threading::Tasks::Task* currentTask) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Action*, bool, ModdingAPI::Exposed::System::Threading::Tasks::Task*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD88A80))(action, allowInlining, currentTask);
  }
  static inline void UnsafeScheduleAction(ModdingAPI::Exposed::System::Action* action, ModdingAPI::Exposed::System::Threading::Tasks::Task* task) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Action*, ModdingAPI::Exposed::System::Threading::Tasks::Task*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD88C20))(action, task);
  }
  static inline void ThrowAsyncIfNecessary(ModdingAPI::Exposed::System::Exception* exc) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD88DC0))(exc);
  }
};
}