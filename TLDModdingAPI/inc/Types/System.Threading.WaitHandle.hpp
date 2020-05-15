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
#include "ModdingAPI.Exposed.System.TimeSpan.hpp"
#include "ModdingAPI::Exposed::System::TimeSpan.hpp"


namespace ModdingAPI::Exposed::System::Threading {
struct __WaitHandle_Il2CppStaticFields {
  intptr_t InvalidHandle;
};

struct __WaitHandle_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CreateObjRef;
  VirtualInvokeData _5_InitializeLifetimeService;
  VirtualInvokeData _6_Dispose;
  VirtualInvokeData _7_get_Handle;
  VirtualInvokeData _8_set_Handle;
  VirtualInvokeData _9_WaitOne;
  VirtualInvokeData _10_WaitOne;
  VirtualInvokeData _11_WaitOne;
  VirtualInvokeData _12_WaitOne;
  VirtualInvokeData _13_WaitOne;
  VirtualInvokeData _14_Close;
  VirtualInvokeData _15_Dispose;
};

struct __WaitHandle_Il2CppClass {
  Il2CppClass_1 _1;
  __WaitHandle_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __WaitHandle_Il2CppVtbl vtbl;
};

class WaitHandle {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C794A0;
  static inline    __WaitHandle_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __WaitHandle_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__WaitHandle_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __WaitHandle_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  Il2CppObject* MarshalByRefObject__identity;
  intptr_t waitHandle;
  ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeWaitHandle* safeWaitHandle;
  bool hasThreadAffinity;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA2B50))(this);
  }
  void Init() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA2B50))(this);
  }
  intptr_t get_Handle() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA2C10))(this);
  }
  void set_Handle(intptr_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA2CE0))(this, value);
  }
  ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeWaitHandle* get_SafeWaitHandle() {
    return reinterpret_cast<ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeWaitHandle*(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA2EC0))(this);
  }
  void set_SafeWaitHandle(ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeWaitHandle* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*, ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeWaitHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3070))(this, value);
  }
  void SetHandleInternal(ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*, ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeWaitHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3180))(this, handle);
  }
  bool WaitOne(int32_t millisecondsTimeout, bool exitContext) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA31B0))(this, millisecondsTimeout, exitContext);
  }
  bool WaitOne(ModdingAPI::Exposed::System::TimeSpan timeout, bool exitContext) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*, ModdingAPI::Exposed::System::TimeSpan, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA32A0))(this, timeout, exitContext);
  }
  bool WaitOne() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA33C0))(this);
  }
  bool WaitOne(int32_t millisecondsTimeout) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA33E0))(this, millisecondsTimeout);
  }
  bool WaitOne(ModdingAPI::Exposed::System::TimeSpan timeout) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3400))(this, timeout);
  }
  bool WaitOne(int64_t timeout, bool exitContext) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*, int64_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3420))(this, timeout, exitContext);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3D00))(this);
  }
  void Dispose(bool explicitDisposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3DB0))(this, explicitDisposing);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3E00))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<intptr_t> InvalidHandle = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->InvalidHandle; }
  );

  // Static methods:
  static inline bool InternalWaitOne(ModdingAPI::Exposed::System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, int64_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Runtime::InteropServices::SafeHandle*, int64_t, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3610))(waitableSafeHandle, millisecondsTimeout, hasThreadAffinity, exitContext);
  }
  static inline int32_t WaitAny(ModdingAPI::Exposed::System::Threading::WaitHandle_array* waitHandles, int32_t millisecondsTimeout, bool exitContext) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle_array*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3770))(waitHandles, millisecondsTimeout, exitContext);
  }
  static inline int32_t WaitAny(ModdingAPI::Exposed::System::Threading::WaitHandle_array* waitHandles, ModdingAPI::Exposed::System::TimeSpan timeout, bool exitContext) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle_array*, ModdingAPI::Exposed::System::TimeSpan, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3B10))(waitHandles, timeout, exitContext);
  }
  static inline void ThrowAbandonedMutexException() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3C50))();
  }
  static inline void ThrowAbandonedMutexException(int32_t location, ModdingAPI::Exposed::System::Threading::WaitHandle* handle) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::System::Threading::WaitHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3CA0))(location, handle);
  }
  static inline int32_t WaitMultiple(ModdingAPI::Exposed::System::Threading::WaitHandle_array* waitHandles, int32_t millisecondsTimeout, bool exitContext, bool WaitAll) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Threading::WaitHandle_array*, int32_t, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA3EB0))(waitHandles, millisecondsTimeout, exitContext, WaitAll);
  }
  static inline int32_t WaitOneNative(ModdingAPI::Exposed::System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, uint32_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Runtime::InteropServices::SafeHandle*, uint32_t, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA41D0))(waitableSafeHandle, millisecondsTimeout, hasThreadAffinity, exitContext);
  }
  static inline int32_t Wait_internal(intptr_t* handles, int32_t numHandles, bool waitAll, int32_t ms) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t*, int32_t, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA4360))(handles, numHandles, waitAll, ms);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xDA4370))();
  }
};
}