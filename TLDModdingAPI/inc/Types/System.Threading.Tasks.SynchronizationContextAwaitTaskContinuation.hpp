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
struct __SynchronizationContextAwaitTaskContinuation_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Threading::SendOrPostCallback* s_postCallback;
  ModdingAPI::Exposed::System::Threading::ContextCallback* s_postActionCallback;
};

struct __SynchronizationContextAwaitTaskContinuation_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Run;
  VirtualInvokeData _5_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem;
  VirtualInvokeData _6_System_Threading_IThreadPoolWorkItem_MarkAborted;
};

struct __SynchronizationContextAwaitTaskContinuation_Il2CppClass {
  Il2CppClass_1 _1;
  __SynchronizationContextAwaitTaskContinuation_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SynchronizationContextAwaitTaskContinuation_Il2CppVtbl vtbl;
};

class SynchronizationContextAwaitTaskContinuation {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5B630;
  static inline    __SynchronizationContextAwaitTaskContinuation_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SynchronizationContextAwaitTaskContinuation_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SynchronizationContextAwaitTaskContinuation_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SynchronizationContextAwaitTaskContinuation_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Threading::ExecutionContext* AwaitTaskContinuation_m_capturedContext;
  ModdingAPI::Exposed::System::Action* m_action;
  ModdingAPI::Exposed::System::Threading::SynchronizationContext* m_syncContext;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Threading::SynchronizationContext* context, ModdingAPI::Exposed::System::Action* action, bool flowExecutionContext, int32_t stackMark) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*, ModdingAPI::Exposed::System::Threading::SynchronizationContext*, ModdingAPI::Exposed::System::Action*, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD89720))(this, context, action, flowExecutionContext, stackMark);
  }
  void Run(ModdingAPI::Exposed::System::Threading::Tasks::Task* task, bool canInlineContinuationTask) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*, ModdingAPI::Exposed::System::Threading::Tasks::Task*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD89760))(this, task, canInlineContinuationTask);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Threading::SendOrPostCallback*> s_postCallback = __CppStaticProperty<ModdingAPI::Exposed::System::Threading::SendOrPostCallback*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_postCallback; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Threading::ContextCallback*> s_postActionCallback = __CppStaticProperty<ModdingAPI::Exposed::System::Threading::ContextCallback*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_postActionCallback; }
  );

  // Static methods:
  static inline void PostAction(Il2CppObject* state) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD89920))(state);
  }
  static inline ModdingAPI::Exposed::System::Threading::ContextCallback* GetPostActionCallback() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::ContextCallback*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xD89A20))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xD89BE0))();
  }
};
}