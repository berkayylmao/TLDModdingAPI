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


namespace ModdingAPI::Exposed::System::Diagnostics {
struct __DefaultTraceListener_Il2CppStaticFields {
  bool OnWin32;
  System_String* MonoTracePrefix;
  System_String* MonoTraceFile;
};

struct __DefaultTraceListener_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CreateObjRef;
  VirtualInvokeData _5_InitializeLifetimeService;
  VirtualInvokeData _6_Dispose;
  VirtualInvokeData _7_get_IsThreadSafe;
  VirtualInvokeData _8_Dispose;
  VirtualInvokeData _9_Flush;
  VirtualInvokeData _10_Write;
  VirtualInvokeData _11_WriteIndent;
  VirtualInvokeData _12_WriteLine;
  VirtualInvokeData _13_TraceEvent;
};

struct __DefaultTraceListener_Il2CppClass {
  Il2CppClass_1 _1;
  __DefaultTraceListener_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DefaultTraceListener_Il2CppVtbl vtbl;
};

class DefaultTraceListener {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C789E0;
  static inline    __DefaultTraceListener_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __DefaultTraceListener_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DefaultTraceListener_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __DefaultTraceListener_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  Il2CppObject* MarshalByRefObject__identity;
  int32_t TraceListener_indentLevel;
  int32_t TraceListener_indentSize;
  int32_t TraceListener_traceOptions;
  bool TraceListener_needIndent;
  System_String* TraceListener_listenerName;
  ModdingAPI::Exposed::System::Diagnostics::TraceFilter* TraceListener_filter;
  System_String* logFileName;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::DefaultTraceListener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1CB60))(this);
  }
  System_String* get_LogFileName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::DefaultTraceListener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  void WriteDebugString(System_String* message) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::DefaultTraceListener*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1CC00))(this, message);
  }
  void WriteMonoTrace(System_String* message) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::DefaultTraceListener*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1CCF0))(this, message);
  }
  void WritePrefix() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::DefaultTraceListener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1CEE0))(this);
  }
  void WriteImpl(System_String* message) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::DefaultTraceListener*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1CFD0))(this, message);
  }
  void WriteLogFile(System_String* message, System_String* logFile) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::DefaultTraceListener*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1D230))(this, message, logFile);
  }
  void Write(System_String* message) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::DefaultTraceListener*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1D6E0))(this, message);
  }
  void WriteLine(System_String* message) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::DefaultTraceListener*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1D6F0))(this, message);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> OnWin32 = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnWin32; }
  );
  static inline __CppStaticProperty<System_String*> MonoTracePrefix = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->MonoTracePrefix; }
  );
  static inline __CppStaticProperty<System_String*> MonoTraceFile = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->MonoTraceFile; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1C920))();
  }
  static inline System_String* GetPrefix(System_String* var, System_String* target) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1CA90))(var, target);
  }
  static inline void WriteWindowsDebugString(System_String* message) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC1CBF0))(message);
  }
};
}