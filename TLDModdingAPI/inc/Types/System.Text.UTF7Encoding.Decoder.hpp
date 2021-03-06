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
#include "ModdingAPI.Exposed.System.Runtime.Serialization.StreamingContext.hpp"


namespace ModdingAPI::Exposed::System::Text::UTF7Encoding {
struct __Decoder_Il2CppStaticFields {
};

struct __Decoder_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Reset;
  VirtualInvokeData _5_GetCharCount;
  VirtualInvokeData _6_GetCharCount;
  VirtualInvokeData _7_GetCharCount;
  VirtualInvokeData _8_GetChars;
  VirtualInvokeData _9_GetChars;
  VirtualInvokeData _10_GetChars;
  VirtualInvokeData _11_Convert;
  VirtualInvokeData _12_Convert;
  VirtualInvokeData _13_System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData _14_get_HasState;
};

struct __Decoder_Il2CppClass {
  Il2CppClass_1 _1;
  __Decoder_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Decoder_Il2CppVtbl vtbl;
};

class Decoder {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C42E28;
  static inline    __Decoder_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Decoder_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Decoder_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Decoder_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Text::DecoderFallback* m_fallback;
  ModdingAPI::Exposed::System::Text::DecoderFallbackBuffer* m_fallbackBuffer;
  ModdingAPI::Exposed::System::Text::Encoding* m_encoding;
  bool m_mustFlush;
  bool m_throwOnOverflow;
  int32_t m_bytesUsed;
  int32_t bits;
  int32_t bitCount;
  bool firstByte;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Text::UTF7Encoding* encoding) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF7Encoding::Decoder*, ModdingAPI::Exposed::System::Text::UTF7Encoding*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEA29F0))(this, encoding);
  }
  void ::ctor(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF7Encoding::Decoder*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10837F0))(this, info, context);
  }
  void System::Runtime::Serialization::ISerializable::GetObjectData(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF7Encoding::Decoder*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1083A80))(this, info, context);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF7Encoding::Decoder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1083B90))(this);
  }
  bool get_HasState() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF7Encoding::Decoder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1083BC0))(this);
  }
};
}