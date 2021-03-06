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
#include "ModdingAPI.Exposed.System.ConsoleKeyInfo.hpp"


namespace ModdingAPI::Exposed::System {
struct __ConsoleDriver_Il2CppStaticFields {
  ModdingAPI::Exposed::System::IConsoleDriver* driver;
  bool is_console;
  bool called_isatty;
};

struct __ConsoleDriver_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ConsoleDriver_Il2CppClass {
  Il2CppClass_1 _1;
  __ConsoleDriver_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ConsoleDriver_Il2CppVtbl vtbl;
};

class ConsoleDriver {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8DBD0;
  static inline    __ConsoleDriver_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ConsoleDriver_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ConsoleDriver_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ConsoleDriver_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::IConsoleDriver*> driver = __CppStaticProperty<ModdingAPI::Exposed::System::IConsoleDriver*>(
   []() { return &GetStaticClassInstance()->pStaticFields->driver; }
  );
  static inline __CppStaticProperty<bool> is_console = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->is_console; }
  );
  static inline __CppStaticProperty<bool> called_isatty = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->called_isatty; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA70D90))();
  }
  static inline ModdingAPI::Exposed::System::IConsoleDriver* CreateNullConsoleDriver() {
    return reinterpret_cast<ModdingAPI::Exposed::System::IConsoleDriver*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA70E30))();
  }
  static inline ModdingAPI::Exposed::System::IConsoleDriver* CreateWindowsConsoleDriver() {
    return reinterpret_cast<ModdingAPI::Exposed::System::IConsoleDriver*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA70F70))();
  }
  static inline ModdingAPI::Exposed::System::IConsoleDriver* CreateTermInfoDriver(System_String* term) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IConsoleDriver*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA711B0))(term);
  }
  static inline ModdingAPI::Exposed::System::ConsoleKeyInfo ReadKey(bool intercept) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ConsoleKeyInfo(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA71300))(intercept);
  }
  static inline bool get_IsConsole() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA71450))();
  }
  static inline bool Isatty(intptr_t handle) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA71640))(handle);
  }
  static inline int32_t InternalKeyAvailable(int32_t ms_timeout) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(ms_timeout);
  }
  static inline bool TtySetup(System_String* keypadXmit, System_String* teardown, ModdingAPI::Exposed::System::Byte_array* control_characters, int32_t* address) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, System_String*, ModdingAPI::Exposed::System::Byte_array*, int32_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA71660))(keypadXmit, teardown, control_characters, address);
  }
  static inline bool SetEcho(bool wantEcho) {
    return reinterpret_cast<bool(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(wantEcho);
  }
};
}