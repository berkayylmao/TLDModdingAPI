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


namespace ModdingAPI::Exposed::UnityEngine {
struct __StackTraceUtility_Il2CppStaticFields {
  System_String* projectFolder;
};

struct __StackTraceUtility_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __StackTraceUtility_Il2CppClass {
  Il2CppClass_1 _1;
  __StackTraceUtility_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StackTraceUtility_Il2CppVtbl vtbl;
};

class StackTraceUtility {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4DA20;
  static inline    __StackTraceUtility_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __StackTraceUtility_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__StackTraceUtility_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __StackTraceUtility_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<System_String*> projectFolder = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->projectFolder; }
  );

  // Static methods:
  static inline void SetProjectFolder(System_String* folder) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AF380))(folder);
  }
  static inline System_String* ExtractStackTrace() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AF4A0))();
  }
  static inline bool IsSystemStacktraceType(Il2CppObject* name) {
    return reinterpret_cast<bool(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AF630))(name);
  }
  static inline void ExtractStringFromExceptionInternal(Il2CppObject* exceptiono, System_String* message, System_String* stackTrace) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AF750))(exceptiono, message, stackTrace);
  }
  static inline System_String* PostprocessStacktrace(System_String* oldString, bool stripEngineInternalInformation) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AFCD0))(oldString, stripEngineInternalInformation);
  }
  static inline System_String* ExtractFormattedStackTrace(ModdingAPI::Exposed::System::Diagnostics::StackTrace* stackTrace) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::StackTrace*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10B0430))(stackTrace);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x10B0CB0))();
  }
};
}