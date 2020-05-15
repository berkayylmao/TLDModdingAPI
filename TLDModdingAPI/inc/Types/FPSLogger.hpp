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
#include "ModdingAPI.Exposed.FPSCounterEvent.hpp"


namespace ModdingAPI::Exposed {
struct __FPSLogger_Il2CppStaticFields {
  bool s_IsRecording;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* s_Logs;
  System_String* s_OutputFile;
};

struct __FPSLogger_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __FPSLogger_Il2CppClass {
  Il2CppClass_1 _1;
  __FPSLogger_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __FPSLogger_Il2CppVtbl vtbl;
};

class FPSLogger {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C319C8;
  static inline    __FPSLogger_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __FPSLogger_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__FPSLogger_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __FPSLogger_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::FPSCounter* m_Counter;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FPSLogger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191BB10))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FPSLogger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191BBA0))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FPSLogger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191BE00))(this);
  }
  void OnFPSChanged(ModdingAPI::Exposed::FPSCounterEvent eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FPSLogger*, ModdingAPI::Exposed::FPSCounterEvent)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191C0C0))(this, eventData);
  }
  System_String* GetCurrentLogKey() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::FPSLogger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191C3E0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::FPSLogger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> s_IsRecording = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_IsRecording; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*> s_Logs = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Logs; }
  );
  static inline __CppStaticProperty<System_String*> s_OutputFile = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_OutputFile; }
  );

  // Static methods:
  static inline bool IsRecording() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x191AF80))();
  }
  static inline void StartRecording() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x191B020))();
  }
  static inline void StopRecording() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x191B230))();
  }
  static inline void WriteToFile(System_String* outputPath) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x191B310))(outputPath);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x191C5A0))();
  }
};
}