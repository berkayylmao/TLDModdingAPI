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


namespace ModdingAPI::Exposed::System::Text {
struct __UTF8Encoding_Il2CppStaticFields {
};

struct __UTF8Encoding_Il2CppVtbl {
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

struct __UTF8Encoding_Il2CppClass {
  Il2CppClass_1 _1;
  __UTF8Encoding_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UTF8Encoding_Il2CppVtbl vtbl;
};

class UTF8Encoding {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C55FE0;
  static inline    __UTF8Encoding_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __UTF8Encoding_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__UTF8Encoding_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __UTF8Encoding_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t m_codePage;
  ModdingAPI::Exposed::System::Globalization::CodePageDataItem* dataItem;
  bool m_deserializedFromEverett;
  bool Encoding_m_isReadOnly;
  ModdingAPI::Exposed::System::Text::EncoderFallback* encoderFallback;
  ModdingAPI::Exposed::System::Text::DecoderFallback* decoderFallback;
  bool emitUTF8Identifier;
  bool isThrowException;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10842A0))(this);
  }
  void ::ctor(bool encoderShouldEmitUTF8Identifier) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10842B0))(this, encoderShouldEmitUTF8Identifier);
  }
  void ::ctor(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10842C0))(this, encoderShouldEmitUTF8Identifier, throwOnInvalidBytes);
  }
  void SetDefaultFallbacks() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1084390))(this);
  }
  int32_t GetByteCount(ModdingAPI::Exposed::System::Char_array* chars, int32_t index, int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10845E0))(this, chars, index, count);
  }
  int32_t GetByteCount(System_String* chars) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10847B0))(this, chars);
  }
  int32_t GetByteCount(wchar_t* chars, int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, wchar_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1084890))(this, chars, count);
  }
  int32_t GetBytes(System_String* s, int32_t charIndex, int32_t charCount, ModdingAPI::Exposed::System::Byte_array* bytes, int32_t byteIndex) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, System_String*, int32_t, int32_t, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10849D0))(this, s, charIndex, charCount, bytes, byteIndex);
  }
  int32_t GetBytes(ModdingAPI::Exposed::System::Char_array* chars, int32_t charIndex, int32_t charCount, ModdingAPI::Exposed::System::Byte_array* bytes, int32_t byteIndex) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1084C60))(this, chars, charIndex, charCount, bytes, byteIndex);
  }
  int32_t GetBytes(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, wchar_t*, int32_t, uint8_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1084F00))(this, chars, charCount, bytes, byteCount);
  }
  int32_t GetCharCount(ModdingAPI::Exposed::System::Byte_array* bytes, int32_t index, int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1085080))(this, bytes, index, count);
  }
  int32_t GetCharCount(uint8_t* bytes, int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, uint8_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1085250))(this, bytes, count);
  }
  int32_t GetChars(ModdingAPI::Exposed::System::Byte_array* bytes, int32_t byteIndex, int32_t byteCount, ModdingAPI::Exposed::System::Char_array* chars, int32_t charIndex) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, ModdingAPI::Exposed::System::Char_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1085390))(this, bytes, byteIndex, byteCount, chars, charIndex);
  }
  int32_t GetChars(uint8_t* bytes, int32_t byteCount, wchar_t* chars, int32_t charCount) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, uint8_t*, int32_t, wchar_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1085630))(this, bytes, byteCount, chars, charCount);
  }
  System_String* GetString(ModdingAPI::Exposed::System::Byte_array* bytes, int32_t index, int32_t count) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10857B0))(this, bytes, index, count);
  }
  int32_t GetByteCount(wchar_t* chars, int32_t count, ModdingAPI::Exposed::System::Text::EncoderNLS* baseEncoder) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, wchar_t*, int32_t, ModdingAPI::Exposed::System::Text::EncoderNLS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1085980))(this, chars, count, baseEncoder);
  }
  int32_t GetBytes(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, ModdingAPI::Exposed::System::Text::EncoderNLS* baseEncoder) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, wchar_t*, int32_t, uint8_t*, int32_t, ModdingAPI::Exposed::System::Text::EncoderNLS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10860C0))(this, chars, charCount, bytes, byteCount, baseEncoder);
  }
  int32_t GetCharCount(uint8_t* bytes, int32_t count, ModdingAPI::Exposed::System::Text::DecoderNLS* baseDecoder) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, uint8_t*, int32_t, ModdingAPI::Exposed::System::Text::DecoderNLS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10869E0))(this, bytes, count, baseDecoder);
  }
  int32_t GetChars(uint8_t* bytes, int32_t byteCount, wchar_t* chars, int32_t charCount, ModdingAPI::Exposed::System::Text::DecoderNLS* baseDecoder) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, uint8_t*, int32_t, wchar_t*, int32_t, ModdingAPI::Exposed::System::Text::DecoderNLS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1086F60))(this, bytes, byteCount, chars, charCount, baseDecoder);
  }
  bool FallbackInvalidByteSequence(uint8_t* pSrc, int32_t ch, ModdingAPI::Exposed::System::Text::DecoderFallbackBuffer* fallback, wchar_t* pTarget) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, uint8_t*, int32_t, ModdingAPI::Exposed::System::Text::DecoderFallbackBuffer*, wchar_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10879D0))(this, pSrc, ch, fallback, pTarget);
  }
  int32_t FallbackInvalidByteSequence(uint8_t* pSrc, int32_t ch, ModdingAPI::Exposed::System::Text::DecoderFallbackBuffer* fallback) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, uint8_t*, int32_t, ModdingAPI::Exposed::System::Text::DecoderFallbackBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1087A50))(this, pSrc, ch, fallback);
  }
  ModdingAPI::Exposed::System::Byte_array* GetBytesUnknown(uint8_t* pSrc, int32_t ch) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, uint8_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1087AA0))(this, pSrc, ch);
  }
  ModdingAPI::Exposed::System::Text::Decoder* GetDecoder() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::Decoder*(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1087E20))(this);
  }
  ModdingAPI::Exposed::System::Text::Encoder* GetEncoder() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::Encoder*(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1087F90))(this);
  }
  int32_t GetMaxByteCount(int32_t charCount) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1088100))(this, charCount);
  }
  int32_t GetMaxCharCount(int32_t byteCount) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1088270))(this, byteCount);
  }
  ModdingAPI::Exposed::System::Byte_array* GetPreamble() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10883E0))(this);
  }
  bool Equals(Il2CppObject* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10884C0))(this, value);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::UTF8Encoding*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10885F0))(this);
  }

  // Static methods:
  static inline int32_t PtrDiff(wchar_t* a, wchar_t* b) {
    return reinterpret_cast<int32_t(__fastcall*)(wchar_t*, wchar_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10860A0))(a, b);
  }
  static inline int32_t PtrDiff(uint8_t* a, uint8_t* b) {
    return reinterpret_cast<int32_t(__fastcall*)(uint8_t*, uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10860B0))(a, b);
  }
  static inline bool InRange(int32_t ch, int32_t start, int32_t end) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9C2670))(ch, start, end);
  }
};
}