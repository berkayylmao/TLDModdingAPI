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
struct __CStreamReader_Il2CppStaticFields {
};

struct __CStreamReader_Il2CppVtbl {
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
  VirtualInvokeData _14_get_CurrentEncoding;
  VirtualInvokeData _15_get_BaseStream;
  VirtualInvokeData _16_ReadBuffer;
};

struct __CStreamReader_Il2CppClass {
  Il2CppClass_1 _1;
  __CStreamReader_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CStreamReader_Il2CppVtbl vtbl;
};

class CStreamReader {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8C8A8;
  static inline    __CStreamReader_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CStreamReader_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CStreamReader_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CStreamReader_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  Il2CppObject* MarshalByRefObject__identity;
  ModdingAPI::Exposed::System::IO::Stream* StreamReader_stream;
  ModdingAPI::Exposed::System::Text::Encoding* StreamReader_encoding;
  ModdingAPI::Exposed::System::Text::Decoder* StreamReader_decoder;
  ModdingAPI::Exposed::System::Byte_array* StreamReader_byteBuffer;
  ModdingAPI::Exposed::System::Char_array* StreamReader_charBuffer;
  ModdingAPI::Exposed::System::Byte_array* StreamReader__preamble;
  int32_t StreamReader_charPos;
  int32_t StreamReader_charLen;
  int32_t StreamReader_byteLen;
  int32_t StreamReader_bytePos;
  int32_t StreamReader__maxCharsPerBuffer;
  bool StreamReader__detectEncoding;
  bool StreamReader__checkPreamble;
  bool StreamReader__isBlocked;
  bool StreamReader__closable;
  ModdingAPI::Exposed::System::Threading::Tasks::Task* StreamReader__asyncReadTask;
  ModdingAPI::Exposed::System::TermInfoDriver* driver;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::IO::Stream* stream, ModdingAPI::Exposed::System::Text::Encoding* encoding) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::IO::CStreamReader*, ModdingAPI::Exposed::System::IO::Stream*, ModdingAPI::Exposed::System::Text::Encoding*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9A9B0))(this, stream, encoding);
  }
  int32_t Peek() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::IO::CStreamReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9AAF0))(this);
  }
  int32_t Read() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::IO::CStreamReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9AB90))(this);
  }
  int32_t Read(ModdingAPI::Exposed::System::Char_array* dest, int32_t index, int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::IO::CStreamReader*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9ACD0))(this, dest, index, count);
  }
  System_String* ReadLine() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::IO::CStreamReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9AEA0))(this);
  }
  System_String* ReadToEnd() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::IO::CStreamReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9AF50))(this);
  }
};
}