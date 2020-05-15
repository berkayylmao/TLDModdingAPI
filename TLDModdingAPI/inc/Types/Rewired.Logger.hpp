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


namespace ModdingAPI::Exposed::Rewired {
struct __Logger_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* __screenLog;
  ModdingAPI::Exposed::Rewired::Internal::GUIText* _guiText;
  bool _logToScreen;
};

struct __Logger_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Logger_Il2CppClass {
  Il2CppClass_1 _1;
  __Logger_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Logger_Il2CppVtbl vtbl;
};

class Logger {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5D5A8;
  static inline    __Logger_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Logger_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Logger_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Logger_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> __screenLog = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->__screenLog; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Rewired::Internal::GUIText*> _guiText = __CppStaticProperty<ModdingAPI::Exposed::Rewired::Internal::GUIText*>(
   []() { return &GetStaticClassInstance()->pStaticFields->_guiText; }
  );
  static inline __CppStaticProperty<bool> _logToScreen = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->_logToScreen; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* get_screenLog() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x759B20))();
  }
  static inline int32_t get_logLevel() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x759C90))();
  }
  static inline bool get_logToScreen() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x759D90))();
  }
  static inline void set_logToScreen(bool value) {
    reinterpret_cast<void(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x759E10))(value);
  }
  static inline void LogEditor(Il2CppObject* msg) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A0E0))(msg);
  }
  static inline void LogEditor(Il2CppObject* msg, bool requiredThreadSafety) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A150))(msg, requiredThreadSafety);
  }
  static inline void LogWarningEditor(Il2CppObject* msg) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A240))(msg);
  }
  static inline void LogWarningEditor(Il2CppObject* msg, bool requiredThreadSafety) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A2B0))(msg, requiredThreadSafety);
  }
  static inline void LogErrorEditor(Il2CppObject* msg) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A3A0))(msg);
  }
  static inline void LogErrorEditor(Il2CppObject* msg, bool requiredThreadSafety) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A410))(msg, requiredThreadSafety);
  }
  static inline void Log(Il2CppObject* msg) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A520))(msg);
  }
  static inline void Log(Il2CppObject* msg, bool requiredThreadSafety) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A530))(msg, requiredThreadSafety);
  }
  static inline void LogWarning(Il2CppObject* msg) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A680))(msg);
  }
  static inline void LogWarning(Il2CppObject* msg, bool requiredThreadSafety) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A690))(msg, requiredThreadSafety);
  }
  static inline void LogError(Il2CppObject* msg) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A980))(msg);
  }
  static inline void LogError(Il2CppObject* msg, bool requiredThreadSafety) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A990))(msg, requiredThreadSafety);
  }
  static inline void LogNow(Il2CppObject* msg, bool requireThreadSafety) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75B670))(msg, requireThreadSafety);
  }
  static inline void LogWarningNow(Il2CppObject* msg, bool requireThreadSafety) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75B820))(msg, requireThreadSafety);
  }
  static inline void LogErrorNow(Il2CppObject* msg, bool requireThreadSafety) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75B990))(msg, requireThreadSafety);
  }
  static inline bool IsLoggingAllowed(int32_t logLevel) {
    return reinterpret_cast<bool(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75BBC0))(logLevel);
  }
  static inline void LogToScreen(Il2CppObject* msg) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75BD10))(msg);
  }
  static inline void LogInit(Il2CppObject* o) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75C2E0))(o);
  }
  static inline void LogInitError(Il2CppObject* o) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75C2F0))(o);
  }
  static inline void LogInitWarning(Il2CppObject* o) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75C300))(o);
  }
  static inline void Log_VCTest(Il2CppObject* o) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75A520))(o);
  }
  static inline void LogUpdate(Il2CppObject* o) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x75C2E0))(o);
  }
};
}