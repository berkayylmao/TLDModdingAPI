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


namespace ModdingAPI::Exposed::System::IO {
struct __StringReader_Il2CppStaticFields {
};

struct __StringReader_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CreateObjRef;
  VirtualInvokeData _5_InitializeLifetimeService;
  VirtualInvokeData _6_Dispose;
  VirtualInvokeData _7_Close;
  VirtualInvokeData _8_Dispose;
  VirtualInvokeData _9_Peek;
  VirtualInvokeData _10_Read;
  VirtualInvokeData _11_Read;
  VirtualInvokeData _12_ReadToEnd;
  VirtualInvokeData _13_ReadLine;
};

struct __StringReader_Il2CppClass {
  Il2CppClass_1 _1;
  __StringReader_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StringReader_Il2CppVtbl vtbl;
};

class StringReader {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C327D8;
  static inline    __StringReader_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __StringReader_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__StringReader_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __StringReader_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  Il2CppObject* MarshalByRefObject__identity;
  System_String* _s;
  int32_t _pos;
  int32_t _length;

  // Member methods:
  void ::ctor(System_String* s) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::IO::StringReader*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCA9850))(this, s);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::IO::StringReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCA63E0))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::IO::StringReader*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCA9930))(this, disposing);
  }
  int32_t Peek() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::IO::StringReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCA9940))(this);
  }
  int32_t Read() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::IO::StringReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCA9980))(this);
  }
  int32_t Read(ModdingAPI::Exposed::System::Char_array* buffer, int32_t index, int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::IO::StringReader*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCA99C0))(this, buffer, index, count);
  }
  System_String* ReadToEnd() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::IO::StringReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCA9BD0))(this);
  }
  System_String* ReadLine() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::IO::StringReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCA9C10))(this);
  }
};
}