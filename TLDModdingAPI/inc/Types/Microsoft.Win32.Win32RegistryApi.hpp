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
struct __Win32RegistryApi_Il2CppStaticFields {
};

struct __Win32RegistryApi_Il2CppVtbl {
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
  VirtualInvokeData _11_SubKeyCount;
};

struct __Win32RegistryApi_Il2CppClass {
  Il2CppClass_1 _1;
  __Win32RegistryApi_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Win32RegistryApi_Il2CppVtbl vtbl;
};

class Win32RegistryApi {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C62EC0;
  static inline    __Win32RegistryApi_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Win32RegistryApi_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Win32RegistryApi_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Win32RegistryApi_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t NativeBytesPerCharacter;

  // Member methods:
  intptr_t GetHandle(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* key) {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::Win32RegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB0F80))(this, key);
  }
  Il2CppObject* GetValue(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey, System_String* name, Il2CppObject* defaultValue, int32_t options) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::Win32RegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*, System_String*, Il2CppObject*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB1050))(this, rkey, name, defaultValue, options);
  }
  int32_t GetBinaryValue(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey, System_String* name, int32_t type, ModdingAPI::Exposed::System::Byte_array* data, int32_t size) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::Win32RegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*, System_String*, int32_t, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB1590))(this, rkey, name, type, data, size);
  }
  int32_t SubKeyCount(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::Win32RegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB1780))(this, rkey);
  }
  ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* OpenSubKey(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey, System_String* keyName, bool writable) {
    return reinterpret_cast<ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::Win32RegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB1920))(this, rkey, keyName, writable);
  }
  void Flush(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::Win32RegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB1C10))(this, rkey);
  }
  void Close(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::Win32RegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB1CD0))(this, rkey);
  }
  ModdingAPI::Exposed::System::String_array* GetSubKeyNames(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::Win32RegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB1DD0))(this, rkey);
  }
  void GenerateException(int32_t errorCode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::Win32RegistryApi*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB2150))(this, errorCode);
  }
  System_String* ToString(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::Win32RegistryApi*, ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x875720))(this, rkey);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::Win32RegistryApi*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB23E0))(this);
  }

  // Static methods:
  static inline int32_t RegCloseKey(intptr_t keyHandle) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB0680))(keyHandle);
  }
  static inline int32_t RegFlushKey(intptr_t keyHandle) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB0720))(keyHandle);
  }
  static inline int32_t RegOpenKeyEx(intptr_t keyBase, System_String* keyName, intptr_t reserved, int32_t access, intptr_t keyHandle) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t, System_String*, intptr_t, int32_t, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB07C0))(keyBase, keyName, reserved, access, keyHandle);
  }
  static inline int32_t RegEnumKeyEx(intptr_t keyHandle, int32_t dwIndex, wchar_t* lpName, int32_t lpcbName, ModdingAPI::Exposed::System::Int32_array* lpReserved, ModdingAPI::Exposed::System::Text::StringBuilder* lpClass, ModdingAPI::Exposed::System::Int32_array* lpcbClass, ModdingAPI::Exposed::System::Int64_array* lpftLastWriteTime) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t, int32_t, wchar_t*, int32_t, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Int64_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB08A0))(keyHandle, dwIndex, lpName, lpcbName, lpReserved, lpClass, lpcbClass, lpftLastWriteTime);
  }
  static inline int32_t RegQueryValueEx(intptr_t keyBase, System_String* valueName, intptr_t reserved, int32_t type, intptr_t zero, int32_t dataSize) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t, System_String*, intptr_t, int32_t, intptr_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB09D0))(keyBase, valueName, reserved, type, zero, dataSize);
  }
  static inline int32_t RegQueryValueEx(intptr_t keyBase, System_String* valueName, intptr_t reserved, int32_t type, ModdingAPI::Exposed::System::Byte_array* data, int32_t dataSize) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t, System_String*, intptr_t, int32_t, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB0AB0))(keyBase, valueName, reserved, type, data, dataSize);
  }
  static inline int32_t RegQueryValueEx(intptr_t keyBase, System_String* valueName, intptr_t reserved, int32_t type, int32_t data, int32_t dataSize) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t, System_String*, intptr_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB0C30))(keyBase, valueName, reserved, type, data, dataSize);
  }
  static inline int32_t RegQueryValueEx(intptr_t keyBase, System_String* valueName, intptr_t reserved, int32_t type, int64_t data, int32_t dataSize) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t, System_String*, intptr_t, int32_t, int64_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB0D10))(keyBase, valueName, reserved, type, data, dataSize);
  }
  static inline int32_t RegQueryInfoKey(intptr_t hKey, ModdingAPI::Exposed::System::Text::StringBuilder* lpClass, ModdingAPI::Exposed::System::Int32_array* lpcbClass, intptr_t lpReserved_MustBeZero, int32_t lpcSubKeys, ModdingAPI::Exposed::System::Int32_array* lpcbMaxSubKeyLen, ModdingAPI::Exposed::System::Int32_array* lpcbMaxClassLen, int32_t lpcValues, ModdingAPI::Exposed::System::Int32_array* lpcbMaxValueNameLen, ModdingAPI::Exposed::System::Int32_array* lpcbMaxValueLen, ModdingAPI::Exposed::System::Int32_array* lpcbSecurityDescriptor, ModdingAPI::Exposed::System::Int32_array* lpftLastWriteTime) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t, ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::Int32_array*, intptr_t, int32_t, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Int32_array*, int32_t, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Int32_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB0DF0))(hKey, lpClass, lpcbClass, lpReserved_MustBeZero, lpcSubKeys, lpcbMaxSubKeyLen, lpcbMaxClassLen, lpcValues, lpcbMaxValueNameLen, lpcbMaxValueLen, lpcbSecurityDescriptor, lpftLastWriteTime);
  }
  static inline bool IsHandleValid(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* key) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB1030))(key);
  }
  static inline System_String* CombineName(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey* rkey, System_String* localName) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Microsoft::Win32::RegistryKey*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB2340))(rkey, localName);
  }
};
}