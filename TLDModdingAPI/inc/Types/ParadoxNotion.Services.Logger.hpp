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


namespace ModdingAPI::Exposed::ParadoxNotion::Services {
struct __Logger_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* subscribers;
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
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C53980;
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
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> subscribers = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->subscribers; }
  );

  // Static methods:
  static inline void AddListener(ModdingAPI::Exposed::ParadoxNotion::Services::Logger::LogHandler* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ParadoxNotion::Services::Logger::LogHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20880B0))(callback);
  }
  static inline void RemoveListener(ModdingAPI::Exposed::ParadoxNotion::Services::Logger::LogHandler* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ParadoxNotion::Services::Logger::LogHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2088170))(callback);
  }
  static inline void Log(Il2CppObject* message, ModdingAPI::Exposed::System::Enum* tag, Il2CppObject* context) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, ModdingAPI::Exposed::System::Enum*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2088230))(message, tag, context);
  }
  static inline void Log(Il2CppObject* message, System_String* tag, Il2CppObject* context) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2088320))(message, tag, context);
  }
  static inline void LogWarning(Il2CppObject* message, ModdingAPI::Exposed::System::Enum* tag, Il2CppObject* context) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, ModdingAPI::Exposed::System::Enum*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20883F0))(message, tag, context);
  }
  static inline void LogWarning(Il2CppObject* message, System_String* tag, Il2CppObject* context) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20884E0))(message, tag, context);
  }
  static inline void LogError(Il2CppObject* message, ModdingAPI::Exposed::System::Enum* tag, Il2CppObject* context) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, ModdingAPI::Exposed::System::Enum*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20885B0))(message, tag, context);
  }
  static inline void LogError(Il2CppObject* message, System_String* tag, Il2CppObject* context) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20886A0))(message, tag, context);
  }
  static inline void LogException(ModdingAPI::Exposed::System::Exception* exception, ModdingAPI::Exposed::System::Enum* tag, Il2CppObject* context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*, ModdingAPI::Exposed::System::Enum*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2088770))(exception, tag, context);
  }
  static inline void LogException(ModdingAPI::Exposed::System::Exception* exception, System_String* tag, Il2CppObject* context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2088860))(exception, tag, context);
  }
  static inline void Internal_Log(int32_t type, Il2CppObject* message, System_String* tag, Il2CppObject* context) {
    reinterpret_cast<void(__fastcall*)(int32_t, Il2CppObject*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2088930))(type, message, tag, context);
  }
  static inline void ForwardToUnity(int32_t type, Il2CppObject* message, System_String* tag, Il2CppObject* context) {
    reinterpret_cast<void(__fastcall*)(int32_t, Il2CppObject*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2088DF0))(type, message, tag, context);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2089080))();
  }
};
}