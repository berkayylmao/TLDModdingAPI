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
#include "ModdingAPI.Exposed.System.Decimal.hpp"
#include "ModdingAPI.Exposed.System.DateTime.hpp"
#include "ModdingAPI.Exposed.System.DateTimeOffset.hpp"
#include "ModdingAPI.Exposed.System.Guid.hpp"
#include "ModdingAPI.Exposed.System.TimeSpan.hpp"
#include "ModdingAPI.Exposed.System.Nullable_T_.hpp"


namespace ModdingAPI::Exposed::Newtonsoft::Json {
struct __JsonWriter_Il2CppStaticFields {
  ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter::State_array_array* StateArray;
  ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter::State_array_array* StateArrayTempate;
};

struct __JsonWriter_Il2CppVtbl {
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

struct __JsonWriter_Il2CppClass {
  Il2CppClass_1 _1;
  __JsonWriter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __JsonWriter_Il2CppVtbl vtbl;
};

class JsonWriter {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C91BD8;
  static inline    __JsonWriter_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __JsonWriter_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__JsonWriter_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __JsonWriter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _stack;
  ModdingAPI::Exposed::Newtonsoft::Json::JsonPosition _currentPosition;
  int32_t _currentState;
  int32_t _formatting;
  bool _CloseOutput_k__BackingField;
  int32_t _dateFormatHandling;
  int32_t _dateTimeZoneHandling;
  int32_t _stringEscapeHandling;
  int32_t _floatFormatHandling;
  System_String* _dateFormatString;
  ModdingAPI::Exposed::System::Globalization::CultureInfo* _culture;

  // Member methods:
  bool get_CloseOutput() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5F6810))(this);
  }
  void set_CloseOutput(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CE3F0))(this, value);
  }
  int32_t get_Top() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD048F0))(this);
  }
  int32_t get_WriteState() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD04980))(this);
  }
  System_String* get_ContainerPath() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD04AD0))(this);
  }
  System_String* get_Path() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD04BC0))(this);
  }
  int32_t get_Formatting() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D880))(this);
  }
  void set_Formatting(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD04D20))(this, value);
  }
  int32_t get_DateFormatHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8C0))(this);
  }
  void set_DateFormatHandling(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD04DE0))(this, value);
  }
  int32_t get_DateTimeZoneHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8E0))(this);
  }
  void set_DateTimeZoneHandling(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD04EA0))(this, value);
  }
  int32_t get_StringEscapeHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D900))(this);
  }
  void set_StringEscapeHandling(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD04F60))(this, value);
  }
  void OnStringEscapeHandlingChanged() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  int32_t get_FloatFormatHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383900))(this);
  }
  void set_FloatFormatHandling(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD05030))(this, value);
  }
  System_String* get_DateFormatString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A440))(this);
  }
  void set_DateFormatString(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A450))(this, value);
  }
  ModdingAPI::Exposed::System::Globalization::CultureInfo* get_Culture() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::CultureInfo*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD050F0))(this);
  }
  void set_Culture(ModdingAPI::Exposed::System::Globalization::CultureInfo* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383970))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD051A0))(this);
  }
  void UpdateScopeWithFinishedValue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD051C0))(this);
  }
  void Push(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD051D0))(this, value);
  }
  int32_t Pop() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD05450))(this);
  }
  int32_t Peek() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FED20))(this);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x858300))(this);
  }
  void WriteStartObject() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD055B0))(this);
  }
  void WriteEndObject() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD055F0))(this);
  }
  void WriteStartArray() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD05600))(this);
  }
  void WriteEndArray() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD05640))(this);
  }
  void WriteStartConstructor(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD05650))(this, name);
  }
  void WriteEndConstructor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD05690))(this);
  }
  void WritePropertyName(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD056A0))(this, name);
  }
  void WritePropertyName(System_String* name, bool escape) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD056B0))(this, name, escape);
  }
  void WriteEnd() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD056D0))(this);
  }
  void WriteToken(ModdingAPI::Exposed::Newtonsoft::Json::JsonReader* reader) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::Newtonsoft::Json::JsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD05800))(this, reader);
  }
  void WriteToken(ModdingAPI::Exposed::Newtonsoft::Json::JsonReader* reader, bool writeChildren) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::Newtonsoft::Json::JsonReader*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD058C0))(this, reader, writeChildren);
  }
  void WriteToken(int32_t token, Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD05990))(this, token, value);
  }
  void WriteToken(ModdingAPI::Exposed::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::Newtonsoft::Json::JsonReader*, bool, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD060C0))(this, reader, writeChildren, writeDateConstructorAsDate, writeComments);
  }
  void WriteConstructorDate(ModdingAPI::Exposed::Newtonsoft::Json::JsonReader* reader) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::Newtonsoft::Json::JsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD063C0))(this, reader);
  }
  void WriteEnd(int32_t type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06650))(this, type);
  }
  void AutoCompleteAll() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x858300))(this);
  }
  int32_t GetCloseTokenForType(int32_t type) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06780))(this, type);
  }
  void AutoCompleteClose(int32_t type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06880))(this, type);
  }
  void WriteEnd(int32_t token) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, token);
  }
  void WriteIndent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void WriteValueDelimiter() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void WriteIndentSpace() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void AutoComplete(int32_t tokenBeingWritten) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06CB0))(this, tokenBeingWritten);
  }
  void WriteNull() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06F40))(this);
  }
  void WriteUndefined() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06F60))(this);
  }
  void WriteRaw(System_String* json) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, json);
  }
  void WriteRawValue(System_String* json) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06F80))(this, json);
  }
  void WriteValue(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06FD0))(this, value);
  }
  void WriteValue(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06FF0))(this, value);
  }
  void WriteValue(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06FF0))(this, value);
  }
  void WriteValue(int64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06FF0))(this, value);
  }
  void WriteValue(uint64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06FF0))(this, value);
  }
  void WriteValue(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07010))(this, value);
  }
  void WriteValue(double value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07010))(this, value);
  }
  void WriteValue(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07030))(this, value);
  }
  void WriteValue(int16_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06FF0))(this, value);
  }
  void WriteValue(uint16_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06FF0))(this, value);
  }
  void WriteValue(wchar_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06FD0))(this, value);
  }
  void WriteValue(uint8_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06FF0))(this, value);
  }
  void WriteValue(char value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, char)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06FF0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Decimal value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Decimal)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07010))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::DateTime value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07050))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::DateTimeOffset value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::DateTimeOffset)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07050))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Guid value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06FD0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::TimeSpan value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD06FD0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07070))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07130))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD071F0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD072B0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07370))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07420))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD074E0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD075A0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07660))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07720))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD077E0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD078A0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07960))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07A20))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07AE0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07BA0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Nullable_T_ value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Nullable_T_)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07C60))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Byte_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07D20))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Uri* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, ModdingAPI::Exposed::System::Uri*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07D50))(this, value);
  }
  void WriteValue(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07E30))(this, value);
  }
  void WriteComment(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07F50))(this, text);
  }
  void System::IDisposable::Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07F60))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD08010))(this, disposing);
  }
  void InternalWriteEnd(int32_t container) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD09300))(this, container);
  }
  void InternalWritePropertyName(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD056A0))(this, name);
  }
  void InternalWriteRaw() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void InternalWriteStart(int32_t token, int32_t container) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD09310))(this, token, container);
  }
  void InternalWriteValue(int32_t token) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD09350))(this, token);
  }
  void InternalWriteComment() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD07F50))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter::State_array_array*> StateArray = __CppStaticProperty<ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter::State_array_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->StateArray; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter::State_array_array*> StateArrayTempate = __CppStaticProperty<ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter::State_array_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->StateArrayTempate; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter::State_array_array* BuildStateArray() {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter::State_array_array*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xD036C0))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xD03A90))();
  }
  static inline void WriteValue(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter* writer, int32_t typeCode, Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, int32_t, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD08040))(writer, typeCode, value);
  }
  static inline ModdingAPI::Exposed::Newtonsoft::Json::JsonWriterException* CreateUnsupportedTypeException(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter* writer, Il2CppObject* value) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::JsonWriterException*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD09200))(writer, value);
  }
};
}