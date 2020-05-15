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


namespace ModdingAPI::Exposed::System::Threading {
struct __CancellationCallbackInfo_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Threading::ContextCallback* s_executionContextCallback;
};

struct __CancellationCallbackInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CancellationCallbackInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __CancellationCallbackInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CancellationCallbackInfo_Il2CppVtbl vtbl;
};

class CancellationCallbackInfo {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C416B0;
  static inline    __CancellationCallbackInfo_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CancellationCallbackInfo_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CancellationCallbackInfo_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CancellationCallbackInfo_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Action_T_* Callback;
  Il2CppObject* StateForCallback;
  ModdingAPI::Exposed::System::Threading::SynchronizationContext* TargetSyncContext;
  ModdingAPI::Exposed::System::Threading::ExecutionContext* TargetExecutionContext;
  ModdingAPI::Exposed::System::Threading::CancellationTokenSource* CancellationTokenSource;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Action_T_* callback, Il2CppObject* stateForCallback, ModdingAPI::Exposed::System::Threading::SynchronizationContext* targetSyncContext, ModdingAPI::Exposed::System::Threading::ExecutionContext* targetExecutionContext, ModdingAPI::Exposed::System::Threading::CancellationTokenSource* cancellationTokenSource) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationCallbackInfo*, ModdingAPI::Exposed::System::Action_T_*, Il2CppObject*, ModdingAPI::Exposed::System::Threading::SynchronizationContext*, ModdingAPI::Exposed::System::Threading::ExecutionContext*, ModdingAPI::Exposed::System::Threading::CancellationTokenSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x108E3F0))(this, callback, stateForCallback, targetSyncContext, targetExecutionContext, cancellationTokenSource);
  }
  void ExecuteCallback() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationCallbackInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x108E410))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Threading::ContextCallback*> s_executionContextCallback = __CppStaticProperty<ModdingAPI::Exposed::System::Threading::ContextCallback*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_executionContextCallback; }
  );

  // Static methods:
  static inline void ExecutionContextCallback(Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x108E6A0))(obj);
  }
};
}