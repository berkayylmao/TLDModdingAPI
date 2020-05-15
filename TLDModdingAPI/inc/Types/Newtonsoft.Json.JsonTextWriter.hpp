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
#include "ModdingAPI.Exposed.Newtonsoft.Json.JsonPosition.hpp"
#include "ModdingAPI.Exposed.System.Nullable_T_.hpp"
#include "ModdingAPI.Exposed.System.Decimal.hpp"
#include "ModdingAPI.Exposed.System.DateTime.hpp"
#include "ModdingAPI.Exposed.System.DateTimeOffset.hpp"
#include "ModdingAPI.Exposed.System.Guid.hpp"
#include "ModdingAPI.Exposed.System.TimeSpan.hpp"


namespace ModdingAPI::Exposed::Newtonsoft::Json {
struct __JsonTextWriter_Il2CppStaticFields {
};

struct __JsonTextWriter_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_IDisposable_Dispose;
  VirtualInvokeData _5_OnStringEscapeHandlingChanged;
  VirtualInvokeData _6_Close;
  VirtualInvokeData _7_WriteStartObject;
  VirtualInvokeData _8_WriteEndObject;
  VirtualInvokeData _9_WriteStartArray;
  VirtualInvokeData _10_WriteEndArray;
  VirtualInvokeData _11_WriteStartConstructor;
  VirtualInvokeData _12_WriteEndConstructor;
  VirtualInvokeData _13_WritePropertyName;
  VirtualInvokeData _14_WritePropertyName;
  VirtualInvokeData _15_WriteEnd;
  VirtualInvokeData _16_WriteToken;
  VirtualInvokeData _17_WriteEnd;
  VirtualInvokeData _18_WriteIndent;
  VirtualInvokeData _19_WriteValueDelimiter;
  VirtualInvokeData _20_WriteIndentSpace;
  VirtualInvokeData _21_WriteNull;
  VirtualInvokeData _22_WriteUndefined;
  VirtualInvokeData _23_WriteRaw;
  VirtualInvokeData _24_WriteRawValue;
  VirtualInvokeData _25_WriteValue;
  VirtualInvokeData _26_WriteValue;
  VirtualInvokeData _27_WriteValue;
  VirtualInvokeData _28_WriteValue;
  VirtualInvokeData _29_WriteValue;
  VirtualInvokeData _30_WriteValue;
  VirtualInvokeData _31_WriteValue;
  VirtualInvokeData _32_WriteValue;
  VirtualInvokeData _33_WriteValue;
  VirtualInvokeData _34_WriteValue;
  VirtualInvokeData _35_WriteValue;
  VirtualInvokeData _36_WriteValue;
  VirtualInvokeData _37_WriteValue;
  VirtualInvokeData _38_WriteValue;
  VirtualInvokeData _39_WriteValue;
  VirtualInvokeData _40_WriteValue;
  VirtualInvokeData _41_WriteValue;
  VirtualInvokeData _42_WriteValue;
  VirtualInvokeData _43_WriteValue;
  VirtualInvokeData _44_WriteValue;
  VirtualInvokeData _45_WriteValue;
  VirtualInvokeData _46_WriteValue;
  VirtualInvokeData _47_WriteValue;
  VirtualInvokeData _48_WriteValue;
  VirtualInvokeData _49_WriteValue;
  VirtualInvokeData _50_WriteValue;
  VirtualInvokeData _51_WriteValue;
  VirtualInvokeData _52_WriteValue;
  VirtualInvokeData _53_WriteValue;
  VirtualInvokeData _54_WriteValue;
  VirtualInvokeData _55_WriteValue;
  VirtualInvokeData _56_WriteValue;
  VirtualInvokeData _57_WriteValue;
  VirtualInvokeData _58_WriteValue;
  VirtualInvokeData _59_WriteValue;
  VirtualInvokeData _60_WriteValue;
  VirtualInvokeData _61_WriteValue;
  VirtualInvokeData _62_WriteValue;
  VirtualInvokeData _63_WriteComment;
  VirtualInvokeData _64_Dispose;
};

struct __JsonTextWriter_Il2CppClass {
  Il2CppClass_1 _1;
  __JsonTextWriter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __JsonTextWriter_Il2CppVtbl vtbl;
};

class JsonTextWriter {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C51210;
  static inline    __JsonTextWriter_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __JsonTextWriter_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__JsonTextWriter_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __JsonTextWriter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* JsonWriter__stack;
  ModdingAPI::Exposed::Newtonsoft::Json::JsonPosition JsonWriter__currentPosition;
  int32_t JsonWriter__currentState;
  int32_t JsonWriter__formatting;
  bool JsonWriter__CloseOutput_k__BackingField;
  int32_t JsonWriter__dateFormatHandling;
  int32_t JsonWriter__dateTimeZoneHandling;
  int32_t JsonWriter__stringEscapeHandling;
  int32_t JsonWriter__floatFormatHandling;
  System_String* JsonWriter__dateFormatString;
  ModdingAPI::Exposed::System::Globalization::CultureInfo* JsonWriter__culture;
  ModdingAPI::Exposed::System::IO::TextWriter* _writer;
  ModdingAPI::Exposed::Newtonsoft::Json::Utilities::Base64Encoder* _base64Encoder;
  wchar_t _indentChar;
  int32_t _indentation;
  wchar_t _quoteChar;
  bool _quoteName;
  ModdingAPI::Exposed::System::Boolean_array* _charEscapeFlags;
  ModdingAPI::Exposed::System::Char_array* _writeBuffer;
  ModdingAPI::Exposed::Newtonsoft::Json::IArrayPool_T_* _arrayPool;
  ModdingAPI::Exposed::System::Char_array* _indentChars;

  // Member methods:
  ModdingAPI::Exposed::Newtonsoft::Json::Utilities::Base64Encoder* get_Base64Encoder() {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Utilities::Base64Encoder*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD00F90))(this);
  }
  wchar_t get_QuoteChar() {
    return reinterpret_cast<wchar_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01170))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::IO::TextWriter* textWriter) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, ModdingAPI::Exposed::System::IO::TextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01180))(this, textWriter);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD012A0))(this);
  }
  void WriteStartObject() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01340))(this);
  }
  void WriteStartArray() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD013A0))(this);
  }
  void WriteStartConstructor(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01400))(this, name);
  }
  void WriteEnd(int32_t token) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01520))(this, token);
  }
  void WritePropertyName(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01660))(this, name);
  }
  void WritePropertyName(System_String* name, bool escape) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD016D0))(this, name, escape);
  }
  void OnStringEscapeHandlingChanged() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD017D0))(this);
  }
  void UpdateCharEscapeFlags() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD017E0))(this);
  }
  void WriteIndent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD018A0))(this);
  }
  void WriteValueDelimiter() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD019F0))(this);
  }
  void WriteIndentSpace() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01A20))(this);
  }
  void WriteValueInternal(System_String* value, int32_t token) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01A50))(this, value, token);
  }
  void WriteValue(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x858DE0))(this, value);
  }
  void WriteNull() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01A80))(this);
  }
  void WriteUndefined() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01B60))(this);
  }
  void WriteRaw(System_String* json) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01A50))(this, json);
  }
  void WriteValue(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01C40))(this, value);
  }
  void WriteEscapedString(System_String* value, bool quote) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01D50))(this, value, quote);
  }
  void WriteValue(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01E80))(this, value);
  }
  void WriteValue(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01EC0))(this, value);
  }
  void WriteValue(int64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01F00))(this, value);
  }
  void WriteValue(uint64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01F40))(this, value);
  }
  void WriteValue(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD01F80))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD02090))(this, value);
  }
  void WriteValue(double value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD021C0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD022D0))(this, value);
  }
  void WriteValue(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD02400))(this, value);
  }
  void WriteValue(int16_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, int16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD025A0))(this, value);
  }
  void WriteValue(uint16_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD025E0))(this, value);
  }
  void WriteValue(wchar_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD02620))(this, value);
  }
  void WriteValue(uint8_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD027B0))(this, value);
  }
  void WriteValue(char value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, char)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD027F0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Decimal value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, ModdingAPI::Exposed::System::Decimal)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD02830))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::DateTime value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD02920))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Byte_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD02C10))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::DateTimeOffset value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, ModdingAPI::Exposed::System::DateTimeOffset)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD02DF0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Guid value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD030B0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::TimeSpan value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD031F0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Uri* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, ModdingAPI::Exposed::System::Uri*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD032A0))(this, value);
  }
  void WriteComment(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD033A0))(this, text);
  }
  void EnsureWriteBuffer() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD034A0))(this);
  }
  void WriteIntegerValue(int64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD034E0))(this, value);
  }
  void WriteIntegerValue(uint64_t uvalue) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter*, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD03580))(this, uvalue);
  }
};
}