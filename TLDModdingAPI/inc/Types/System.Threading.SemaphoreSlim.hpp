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
#include "ModdingAPI.Exposed.System.Threading.CancellationToken.hpp"


namespace ModdingAPI::Exposed::System::Threading {
struct __SemaphoreSlim_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_* s_trueTask;
  ModdingAPI::Exposed::System::Action_T_* s_cancellationTokenCanceledEventHandler;
};

struct __SemaphoreSlim_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_Dispose;
};

struct __SemaphoreSlim_Il2CppClass {
  Il2CppClass_1 _1;
  __SemaphoreSlim_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SemaphoreSlim_Il2CppVtbl vtbl;
};

class SemaphoreSlim {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3ED58;
  static inline    __SemaphoreSlim_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SemaphoreSlim_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SemaphoreSlim_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SemaphoreSlim_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t m_currentCount;
  int32_t m_maxCount;
  int32_t m_waitCount;
  Il2CppObject* m_lockObj;
  ModdingAPI::Exposed::System::Threading::ManualResetEvent* m_waitHandle;
  ModdingAPI::Exposed::System::Threading::SemaphoreSlim::TaskNode* m_asyncHead;
  ModdingAPI::Exposed::System::Threading::SemaphoreSlim::TaskNode* m_asyncTail;

  // Member methods:
  void ::ctor(int32_t initialCount, int32_t maxCount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD847D0))(this, initialCount, maxCount);
  }
  void Wait() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD84A50))(this);
  }
  bool Wait(int32_t millisecondsTimeout, ModdingAPI::Exposed::System::Threading::CancellationToken cancellationToken) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*, int32_t, ModdingAPI::Exposed::System::Threading::CancellationToken)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD84A60))(this, millisecondsTimeout, cancellationToken);
  }
  bool WaitUntilCountOrTimeout(int32_t millisecondsTimeout, uint32_t startTime, ModdingAPI::Exposed::System::Threading::CancellationToken cancellationToken) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*, int32_t, uint32_t, ModdingAPI::Exposed::System::Threading::CancellationToken)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD85060))(this, millisecondsTimeout, startTime, cancellationToken);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task* WaitAsync() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task*(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD85110))(this);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_* WaitAsync(int32_t millisecondsTimeout, ModdingAPI::Exposed::System::Threading::CancellationToken cancellationToken) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_*(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*, int32_t, ModdingAPI::Exposed::System::Threading::CancellationToken)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD85120))(this, millisecondsTimeout, cancellationToken);
  }
  ModdingAPI::Exposed::System::Threading::SemaphoreSlim::TaskNode* CreateAndAddAsyncWaiter() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::SemaphoreSlim::TaskNode*(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD85550))(this);
  }
  bool RemoveAsyncWaiter(ModdingAPI::Exposed::System::Threading::SemaphoreSlim::TaskNode* task) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*, ModdingAPI::Exposed::System::Threading::SemaphoreSlim::TaskNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD857C0))(this, task);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_* WaitUntilCountOrTimeoutAsync(ModdingAPI::Exposed::System::Threading::SemaphoreSlim::TaskNode* asyncWaiter, int32_t millisecondsTimeout, ModdingAPI::Exposed::System::Threading::CancellationToken cancellationToken) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_*(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*, ModdingAPI::Exposed::System::Threading::SemaphoreSlim::TaskNode*, int32_t, ModdingAPI::Exposed::System::Threading::CancellationToken)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD85850))(this, asyncWaiter, millisecondsTimeout, cancellationToken);
  }
  int32_t Release() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD85990))(this);
  }
  int32_t Release(int32_t releaseCount) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD859A0))(this, releaseCount);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD85CC0))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD85D70))(this, disposing);
  }
  void CheckDispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD85F70))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_*> s_trueTask = __CppStaticProperty<ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_trueTask; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Action_T_*> s_cancellationTokenCanceledEventHandler = __CppStaticProperty<ModdingAPI::Exposed::System::Action_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_cancellationTokenCanceledEventHandler; }
  );

  // Static methods:
  static inline void QueueWaiterTask(ModdingAPI::Exposed::System::Threading::SemaphoreSlim::TaskNode* waiterTask) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::SemaphoreSlim::TaskNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD85CB0))(waiterTask);
  }
  static inline void CancellationTokenCanceledEventHandler(Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD85DE0))(obj);
  }
  static inline System_String* GetResourceString(System_String* str) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3201B0))(str);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xD86050))();
  }
};
}