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


namespace ModdingAPI::Exposed::Microsoft::Win32 {
struct __UnixRegistryApi_Il2CppStaticFields {
};

struct __UnixRegistryApi_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_OpenSubKey;
  VirtualInvokeData _5_Flush;
  VirtualInvokeData _6_Close;
  VirtualInvokeData _7_GetValue;
  VirtualInvokeData _8_GetSubKeyNames;
  VirtualInvokeData _9_ToString;
  VirtualInvokeData _10_GetHandle;
};

struct __UnixRegistryApi_Il2CppClass {
  Il2CppClass_1 _1;
  __UnixRegistryApi_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UnixRegistryApi_Il2CppVtbl vtbl;
};

class UnixRegistryApi {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C63D00;
  static inline    __UnixRegistryApi_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __UnixRegistryApi_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__UnixRegistryApi_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __UnixRegistryApi_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* OpenSubKey(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey, System_String* keyname, bool writable) {
    return reinterpret_cast<ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::UnixRegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDAEE70))(this, rkey, keyname, writable);
  }
  void Flush(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::UnixRegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDAF0E0))(this, rkey);
  }
  void Close(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::UnixRegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDAF190))(this, rkey);
  }
  Il2CppObject* GetValue(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey, System_String* name, Il2CppObject* default_value, int32_t options) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::UnixRegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*, System_String*, Il2CppObject*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDAF230))(this, rkey, name, default_value, options);
  }
  ModdingAPI::Exposed::System::String_array* GetSubKeyNames(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::UnixRegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDAF320))(this, rkey);
  }
  System_String* ToString(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::UnixRegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x875720))(this, rkey);
  }
  ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* CreateSubKey(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey, System_String* keyname, bool writable) {
    return reinterpret_cast<ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::UnixRegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDAF3D0))(this, rkey, keyname, writable);
  }
  ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* CreateSubKey(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey, System_String* keyname, bool writable, bool is_volatile) {
    return reinterpret_cast<ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::UnixRegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*, System_String*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDAF550))(this, rkey, keyname, writable, is_volatile);
  }
  intptr_t GetHandle(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* key) {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::UnixRegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDAF6F0))(this, key);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::UnixRegistryApi*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static methods:
  static inline System_String* ToUnix(System_String* keyname) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDAEC50))(keyname);
  }
  static inline bool IsWellKnownKey(System_String* parentKeyName, System_String* keyname) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDAECC0))(parentKeyName, keyname);
  }
};
}