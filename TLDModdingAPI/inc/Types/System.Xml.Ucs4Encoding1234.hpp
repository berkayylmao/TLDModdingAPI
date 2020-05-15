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


namespace ModdingAPI::Exposed::System::Xml {
struct __Ucs4Encoding1234_Il2CppStaticFields {
};

struct __Ucs4Encoding1234_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_SetDefaultFallbacks;
  VirtualInvokeData _6_GetPreamble;
  VirtualInvokeData _7_get_EncodingName;
  VirtualInvokeData _8_get_HeaderName;
  VirtualInvokeData _9_get_WebName;
  VirtualInvokeData _10_Clone;
  VirtualInvokeData _11_GetByteCount;
  VirtualInvokeData _12_GetByteCount;
  VirtualInvokeData _13_GetByteCount;
  VirtualInvokeData _14_GetByteCount;
  VirtualInvokeData _15_GetBytes;
  VirtualInvokeData _16_GetBytes;
  VirtualInvokeData _17_GetBytes;
  VirtualInvokeData _18_GetBytes;
  VirtualInvokeData _19_GetBytes;
  VirtualInvokeData _20_GetBytes;
  VirtualInvokeData _21_GetCharCount;
  VirtualInvokeData _22_GetCharCount;
  VirtualInvokeData _23_GetCharCount;
  VirtualInvokeData _24_GetChars;
  VirtualInvokeData _25_GetChars;
  VirtualInvokeData _26_GetChars;
  VirtualInvokeData _27_GetChars;
  VirtualInvokeData _28_get_CodePage;
  VirtualInvokeData _29_GetDecoder;
  VirtualInvokeData _30_GetEncoder;
  VirtualInvokeData _31_GetMaxByteCount;
  VirtualInvokeData _32_GetMaxCharCount;
  VirtualInvokeData _33_GetString;
  VirtualInvokeData _34_GetString;
  VirtualInvokeData _35_GetBestFitUnicodeToBytesData;
  VirtualInvokeData _36_GetBestFitBytesToUnicodeData;
};

struct __Ucs4Encoding1234_Il2CppClass {
  Il2CppClass_1 _1;
  __Ucs4Encoding1234_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Ucs4Encoding1234_Il2CppVtbl vtbl;
};

class Ucs4Encoding1234 {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C64C08;
  static inline    __Ucs4Encoding1234_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Ucs4Encoding1234_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Ucs4Encoding1234_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Ucs4Encoding1234_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t m_codePage;
  ModdingAPI::Exposed::System::Globalization::CodePageDataItem* dataItem;
  bool m_deserializedFromEverett;
  bool Encoding_m_isReadOnly;
  ModdingAPI::Exposed::System::Text::EncoderFallback* encoderFallback;
  ModdingAPI::Exposed::System::Text::DecoderFallback* decoderFallback;
  ModdingAPI::Exposed::System::Xml::Ucs4Decoder* ucs4Decoder;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Ucs4Encoding1234*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B60C0))(this);
  }
  System_String* get_EncodingName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Ucs4Encoding1234*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B6280))(this);
  }
  ModdingAPI::Exposed::System::Byte_array* GetPreamble() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Ucs4Encoding1234*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B6300))(this);
  }
};
}