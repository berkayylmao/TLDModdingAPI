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
#include "ModdingAPI::Exposed::Mono::Net::CFRange.hpp"


namespace ModdingAPI::Exposed::Mono::Net {
struct __CFString_Il2CppStaticFields {
};

struct __CFString_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_get_Handle;
  VirtualInvokeData _6_Dispose;
};

struct __CFString_Il2CppClass {
  Il2CppClass_1 _1;
  __CFString_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CFString_Il2CppVtbl vtbl;
};

class CFString {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C806E8;
  static inline    __CFString_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CFString_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CFString_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CFString_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t CFObject__Handle_k__BackingField;
  System_String* str;

  // Member methods:
  void ::ctor(intptr_t handle, bool own) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::CFString*, intptr_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC34CD0))(this, handle, own);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::CFString*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3C340))(this);
  }

  // Static methods:
  static inline intptr_t CFStringCreateWithCharacters(intptr_t alloc, intptr_t chars, intptr_t length) {
    return reinterpret_cast<intptr_t(__fastcall*)(intptr_t, intptr_t, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3BBA0))(alloc, chars, length);
  }
  static inline ModdingAPI::Exposed::Mono::Net::CFString* Create(System_String* value) {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Net::CFString*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3BC50))(value);
  }
  static inline intptr_t CFStringGetLength(intptr_t handle) {
    return reinterpret_cast<intptr_t(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3BE70))(handle);
  }
  static inline intptr_t CFStringGetCharactersPtr(intptr_t handle) {
    return reinterpret_cast<intptr_t(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3BF10))(handle);
  }
  static inline intptr_t CFStringGetCharacters(intptr_t handle, ModdingAPI::Exposed::Mono::Net::CFRange range, intptr_t buffer) {
    return reinterpret_cast<intptr_t(__fastcall*)(intptr_t, ModdingAPI::Exposed::Mono::Net::CFRange, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3BFB0))(handle, range, buffer);
  }
  static inline System_String* AsString(intptr_t handle) {
    return reinterpret_cast<System_String*(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3C070))(handle);
  }
};
}