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


namespace ModdingAPI::Exposed::Newtonsoft::Json::Bson {
struct __BsonWriter_Il2CppStaticFields {
};

struct __BsonWriter_Il2CppVtbl {
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

struct __BsonWriter_Il2CppClass {
  Il2CppClass_1 _1;
  __BsonWriter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __BsonWriter_Il2CppVtbl vtbl;
};

class BsonWriter {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6D648;
  static inline    __BsonWriter_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __BsonWriter_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__BsonWriter_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __BsonWriter_Il2CppClass* __pClassInstance;
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
  ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonBinaryWriter* _writer;
  ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonToken* _root;
  ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonToken* _parent;
  System_String* _propertyName;

  // Member methods:
  void WriteEnd(int32_t token) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1510))(this, token);
  }
  void WriteComment(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1580))(this, text);
  }
  void WriteStartConstructor(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D15D0))(this, name);
  }
  void WriteRaw(System_String* json) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1620))(this, json);
  }
  void WriteRawValue(System_String* json) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1670))(this, json);
  }
  void WriteStartArray() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D16C0))(this);
  }
  void WriteStartObject() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1960))(this);
  }
  void WritePropertyName(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1C00))(this, name);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1C30))(this);
  }
  void AddParent(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonToken* container) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonToken*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1CB0))(this, container);
  }
  void RemoveParent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1CE0))(this);
  }
  void AddValue(Il2CppObject* value, char type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, Il2CppObject*, char)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1D00))(this, value, type);
  }
  void AddToken(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonToken* token) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonToken*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1E60))(this, token);
  }
  void WriteValue(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x858DE0))(this, value);
  }
  void WriteNull() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D2110))(this);
  }
  void WriteUndefined() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D2150))(this);
  }
  void WriteValue(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D2190))(this, value);
  }
  void WriteValue(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D2330))(this, value);
  }
  void WriteValue(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D23F0))(this, value);
  }
  void WriteValue(int64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D24E0))(this, value);
  }
  void WriteValue(uint64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D25A0))(this, value);
  }
  void WriteValue(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D26A0))(this, value);
  }
  void WriteValue(double value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D2760))(this, value);
  }
  void WriteValue(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D2820))(this, value);
  }
  void WriteValue(int16_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, int16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D28E0))(this, value);
  }
  void WriteValue(uint16_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D29A0))(this, value);
  }
  void WriteValue(wchar_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D2A60))(this, value);
  }
  void WriteValue(uint8_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D2C10))(this, value);
  }
  void WriteValue(char value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, char)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D2CD0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Decimal value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, ModdingAPI::Exposed::System::Decimal)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D2D90))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::DateTime value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D2E50))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::DateTimeOffset value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, ModdingAPI::Exposed::System::DateTimeOffset)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D2F40))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Byte_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D3000))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Guid value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D3190))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::TimeSpan value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D3310))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Uri* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, ModdingAPI::Exposed::System::Uri*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D3490))(this, value);
  }
  void WriteObjectId(ModdingAPI::Exposed::System::Byte_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D3620))(this, value);
  }
  void WriteRegex(System_String* pattern, System_String* options) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D3710))(this, pattern, options);
  }
};
}