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
#include "ModdingAPI::Exposed::System::Diagnostics::Process::ProcInfo.hpp"


namespace ModdingAPI::Exposed::System::Diagnostics {
struct __Process_Il2CppStaticFields {
};

struct __Process_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CreateObjRef;
  VirtualInvokeData _5_InitializeLifetimeService;
  VirtualInvokeData _7_Dispose;
  VirtualInvokeData _8_get_CanRaiseEvents;
  VirtualInvokeData _9_get_Site;
  VirtualInvokeData _10_Dispose;
  VirtualInvokeData _11_GetService;
};

struct __Process_Il2CppClass {
  Il2CppClass_1 _1;
  __Process_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Process_Il2CppVtbl vtbl;
};

class Process {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C790B0;
  static inline    __Process_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Process_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Process_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Process_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  Il2CppObject* MarshalByRefObject__identity;
  ModdingAPI::Exposed::System::ComponentModel::ISite* Component_site;
  ModdingAPI::Exposed::System::ComponentModel::EventHandlerList* Component_events;
  bool haveProcessId;
  int32_t processId;
  bool haveProcessHandle;
  ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle* m_processHandle;
  bool isRemoteMachine;
  System_String* machineName;
  int32_t m_processAccess;
  ModdingAPI::Exposed::System::Diagnostics::ProcessThreadCollection* threads;
  ModdingAPI::Exposed::System::Diagnostics::ProcessModuleCollection* modules;
  bool haveWorkingSetLimits;
  bool havePriorityClass;
  ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo* startInfo;
  bool watchForExit;
  bool watchingForExit;
  ModdingAPI::Exposed::System::EventHandler* onExited;
  bool exited;
  int32_t exitCode;
  bool signaled;
  bool haveExitTime;
  bool raisedOnExited;
  ModdingAPI::Exposed::System::Threading::RegisteredWaitHandle* registeredWaitHandle;
  ModdingAPI::Exposed::System::Threading::WaitHandle* waitHandle;
  ModdingAPI::Exposed::System::ComponentModel::ISynchronizeInvoke* synchronizingObject;
  ModdingAPI::Exposed::System::IO::StreamReader* standardOutput;
  ModdingAPI::Exposed::System::IO::StreamWriter* standardInput;
  ModdingAPI::Exposed::System::IO::StreamReader* standardError;
  bool disposed;
  int32_t outputStreamReadMode;
  int32_t errorStreamReadMode;
  int32_t inputStreamReadMode;
  ModdingAPI::Exposed::System::Diagnostics::AsyncStreamReader* output;
  ModdingAPI::Exposed::System::Diagnostics::AsyncStreamReader* error;
  System_String* process_name;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1D850))(this);
  }
  void ::ctor(System_String* machineName, bool isRemoteMachine, int32_t processId, ModdingAPI::Exposed::System::Diagnostics::ProcessInfo* processInfo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, System_String*, bool, int32_t, ModdingAPI::Exposed::System::Diagnostics::ProcessInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1D910))(this, machineName, isRemoteMachine, processId, processInfo);
  }
  bool get_Associated() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1D9F0))(this);
  }
  bool get_HasExited() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1DA00))(this);
  }
  intptr_t get_Handle() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1DE10))(this);
  }
  int32_t get_Id() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1DF40))(this);
  }
  ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo* get_StartInfo() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1DF60))(this);
  }
  void set_StartInfo(ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1E1E0))(this, value);
  }
  ModdingAPI::Exposed::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject() {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::ISynchronizeInvoke*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1E2A0))(this);
  }
  void ReleaseProcessHandle(ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1E470))(this, handle);
  }
  void CompletionCallback(Il2CppObject* context, bool wasSignaled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1E4A0))(this, context, wasSignaled);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1E4C0))(this, disposing);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1E510))(this);
  }
  void EnsureState(int32_t state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1E700))(this, state);
  }
  void EnsureWatchingForExit() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1E960))(this);
  }
  void OnExited() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1EE70))(this);
  }
  ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(int32_t access, bool throwIfExited) {
    return reinterpret_cast<ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1F130))(this, access, throwIfExited);
  }
  ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(int32_t access) {
    return reinterpret_cast<ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1F640))(this, access);
  }
  ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle* OpenProcessHandle(int32_t access) {
    return reinterpret_cast<ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1F650))(this, access);
  }
  void Refresh() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1F760))(this);
  }
  void SetProcessHandle(ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1F780))(this, processHandle);
  }
  void SetProcessId(int32_t processId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1F7A0))(this, processId);
  }
  bool Start() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1F7B0))(this);
  }
  void StopWatchingForExit() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1FD90))(this);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1FEA0))(this);
  }
  System_String* get_ProcessName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC20350))(this);
  }
  bool StartWithShellExecuteEx(ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo* startInfo) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC205B0))(this, startInfo);
  }
  bool StartWithCreateProcess(ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo* startInfo) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*, ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC20D60))(this, startInfo);
  }
  void RaiseOnExited() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Process*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC22470))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Diagnostics::Process* GetCurrentProcess() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Diagnostics::Process*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1EC90))();
  }
  static inline ModdingAPI::Exposed::System::Diagnostics::Process* Start(System_String* fileName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Diagnostics::Process*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1F8C0))(fileName);
  }
  static inline ModdingAPI::Exposed::System::Diagnostics::Process* Start(ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo* startInfo) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Diagnostics::Process*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1FA30))(startInfo);
  }
  static inline System_String* ProcessName_internal(intptr_t handle) {
    return reinterpret_cast<System_String*(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC20000))(handle);
  }
  static inline System_String* ProcessName_internal(ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC20100))(handle);
  }
  static inline bool ShellExecuteEx_internal(ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo* startInfo, ModdingAPI::Exposed::System::Diagnostics::Process::ProcInfo procInfo) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo*, ModdingAPI::Exposed::System::Diagnostics::Process::ProcInfo)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(startInfo, procInfo);
  }
  static inline bool CreateProcess_internal(ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo* startInfo, intptr_t stdin, intptr_t stdout, intptr_t stderr, ModdingAPI::Exposed::System::Diagnostics::Process::ProcInfo procInfo) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo*, intptr_t, intptr_t, intptr_t, ModdingAPI::Exposed::System::Diagnostics::Process::ProcInfo)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(startInfo, stdin, stdout, stderr, procInfo);
  }
  static inline void CreatePipe(intptr_t read, intptr_t write, bool writeDirection) {
    reinterpret_cast<void(__fastcall*)(intptr_t, intptr_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC209A0))(read, write, writeDirection);
  }
  static inline bool get_IsWindows() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xC20D20))();
  }
  static inline void FillUserInfo(ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo* startInfo, ModdingAPI::Exposed::System::Diagnostics::Process::ProcInfo procInfo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::ProcessStartInfo*, ModdingAPI::Exposed::System::Diagnostics::Process::ProcInfo)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC222F0))(startInfo, procInfo);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))();
  }
};
}