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

namespace ModdingAPI::Exposed::System::Runtime::CompilerServices {
struct __AsyncMethodBuilderCore_Il2CppObject {
  ModdingAPI::Exposed::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine;
  ModdingAPI::Exposed::System::Action* m_defaultContextAction;
};
struct __AsyncMethodBuilderCore_Il2CppStaticFields {
};

struct __AsyncMethodBuilderCore_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AsyncMethodBuilderCore_Il2CppClass {
  Il2CppClass_1 _1;
  __AsyncMethodBuilderCore_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AsyncMethodBuilderCore_Il2CppVtbl vtbl;
};

class AsyncMethodBuilderCore {
public:
  // Member fields:
  ModdingAPI::Exposed::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine;
  ModdingAPI::Exposed::System::Action* m_defaultContextAction;

  // Member methods:
  void SetStateMachine(ModdingAPI::Exposed::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::CompilerServices::AsyncMethodBuilderCore*, ModdingAPI::Exposed::System::Runtime::CompilerServices::IAsyncStateMachine*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18790))(this, stateMachine);
  }
  ModdingAPI::Exposed::System::Action* GetCompletionAction(ModdingAPI::Exposed::System::Threading::Tasks::Task* taskForTracing, ModdingAPI::Exposed::System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner* runnerToInitialize) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Action*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::CompilerServices::AsyncMethodBuilderCore*, ModdingAPI::Exposed::System::Threading::Tasks::Task*, ModdingAPI::Exposed::System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187A0))(this, taskForTracing, runnerToInitialize);
  }
  ModdingAPI::Exposed::System::Action* OutputAsyncCausalityEvents(ModdingAPI::Exposed::System::Threading::Tasks::Task* innerTask, ModdingAPI::Exposed::System::Action* continuation) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Action*(__fastcall*)(ModdingAPI::Exposed::System::Runtime::CompilerServices::AsyncMethodBuilderCore*, ModdingAPI::Exposed::System::Threading::Tasks::Task*, ModdingAPI::Exposed::System::Action*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187B0))(this, innerTask, continuation);
  }
  void PostBoxInitialization(ModdingAPI::Exposed::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine, ModdingAPI::Exposed::System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner* runner, ModdingAPI::Exposed::System::Threading::Tasks::Task* builtTask) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::CompilerServices::AsyncMethodBuilderCore*, ModdingAPI::Exposed::System::Runtime::CompilerServices::IAsyncStateMachine*, ModdingAPI::Exposed::System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner*, ModdingAPI::Exposed::System::Threading::Tasks::Task*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187C0))(this, stateMachine, runner, builtTask);
  }

  // Static methods:
  static inline void ThrowAsync(ModdingAPI::Exposed::System::Exception* exception, ModdingAPI::Exposed::System::Threading::SynchronizationContext* targetContext) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*, ModdingAPI::Exposed::System::Threading::SynchronizationContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7345A0))(exception, targetContext);
  }
  static inline ModdingAPI::Exposed::System::Action* CreateContinuationWrapper(ModdingAPI::Exposed::System::Action* continuation, ModdingAPI::Exposed::System::Action* invokeAction, ModdingAPI::Exposed::System::Threading::Tasks::Task* innerTask) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Action*(__fastcall*)(ModdingAPI::Exposed::System::Action*, ModdingAPI::Exposed::System::Action*, ModdingAPI::Exposed::System::Threading::Tasks::Task*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x734A50))(continuation, invokeAction, innerTask);
  }
  static inline ModdingAPI::Exposed::System::Threading::Tasks::Task* TryGetContinuationTask(ModdingAPI::Exposed::System::Action* action) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task*(__fastcall*)(ModdingAPI::Exposed::System::Action*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x734D40))(action);
  }

};
}