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


namespace ModdingAPI::Exposed::Newtonsoft::Json::Serialization {
struct __TraceJsonReader_Il2CppStaticFields {
};

struct __TraceJsonReader_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_IDisposable_Dispose;
  VirtualInvokeData _5_get_TokenType;
  VirtualInvokeData _6_get_Value;
  VirtualInvokeData _7_get_ValueType;
  VirtualInvokeData _8_get_Depth;
  VirtualInvokeData _9_get_Path;
  VirtualInvokeData _10_Read;
  VirtualInvokeData _11_ReadAsInt32;
  VirtualInvokeData _12_ReadAsString;
  VirtualInvokeData _13_ReadAsBytes;
  VirtualInvokeData _14_ReadAsDouble;
  VirtualInvokeData _15_ReadAsBoolean;
  VirtualInvokeData _16_ReadAsDecimal;
  VirtualInvokeData _17_ReadAsDateTime;
  VirtualInvokeData _18_ReadAsDateTimeOffset;
  VirtualInvokeData _19_Dispose;
  VirtualInvokeData _20_Close;
  VirtualInvokeData _21_Newtonsoft_Json_IJsonLineInfo_HasLineInfo;
  VirtualInvokeData _22_Newtonsoft_Json_IJsonLineInfo_get_LineNumber;
  VirtualInvokeData _23_Newtonsoft_Json_IJsonLineInfo_get_LinePosition;
};

struct __TraceJsonReader_Il2CppClass {
  Il2CppClass_1 _1;
  __TraceJsonReader_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TraceJsonReader_Il2CppVtbl vtbl;
};

class TraceJsonReader {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6D9B0;
  static inline    __TraceJsonReader_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TraceJsonReader_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TraceJsonReader_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TraceJsonReader_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t JsonReader__tokenType;
  Il2CppObject* JsonReader__value;
  wchar_t _quoteChar;
  int32_t _currentState;
  ModdingAPI::Exposed::Newtonsoft::Json::JsonPosition JsonReader__currentPosition;
  ModdingAPI::Exposed::System::Globalization::CultureInfo* JsonReader__culture;
  int32_t JsonReader__dateTimeZoneHandling;
  ModdingAPI::Exposed::System::Nullable_T_ JsonReader__maxDepth;
  bool JsonReader__hasExceededMaxDepth;
  int32_t _dateParseHandling;
  int32_t _floatParseHandling;
  System_String* JsonReader__dateFormatString;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* JsonReader__stack;
  bool JsonReader__CloseInput_k__BackingField;
  bool JsonReader__SupportMultipleContent_k__BackingField;
  ModdingAPI::Exposed::Newtonsoft::Json::JsonReader* _innerReader;
  ModdingAPI::Exposed::Newtonsoft::Json::JsonTextWriter* _textWriter;
  ModdingAPI::Exposed::System::IO::StringWriter* _sw;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::Newtonsoft::Json::JsonReader* innerReader) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*, ModdingAPI::Exposed::Newtonsoft::Json::JsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77290))(this, innerReader);
  }
  System_String* GetDeserializedJsonMessage() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77550))(this);
  }
  bool Read() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77580))(this);
  }
  ModdingAPI::Exposed::System::Nullable_T_ ReadAsInt32() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Nullable_T_(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77600))(this);
  }
  System_String* ReadAsString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77680))(this);
  }
  ModdingAPI::Exposed::System::Byte_array* ReadAsBytes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77700))(this);
  }
  ModdingAPI::Exposed::System::Nullable_T_ ReadAsDecimal() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Nullable_T_(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77780))(this);
  }
  ModdingAPI::Exposed::System::Nullable_T_ ReadAsDouble() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Nullable_T_(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77810))(this);
  }
  ModdingAPI::Exposed::System::Nullable_T_ ReadAsBoolean() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Nullable_T_(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77890))(this);
  }
  ModdingAPI::Exposed::System::Nullable_T_ ReadAsDateTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Nullable_T_(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77910))(this);
  }
  ModdingAPI::Exposed::System::Nullable_T_ ReadAsDateTimeOffset() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Nullable_T_(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77990))(this);
  }
  int32_t get_Depth() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77A20))(this);
  }
  System_String* get_Path() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77A50))(this);
  }
  int32_t get_TokenType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77A80))(this);
  }
  Il2CppObject* get_Value() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77AB0))(this);
  }
  ModdingAPI::Exposed::System::Type* get_ValueType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77AE0))(this);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77B10))(this);
  }
  bool Newtonsoft::Json::IJsonLineInfo::HasLineInfo() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77B40))(this);
  }
  int32_t Newtonsoft::Json::IJsonLineInfo::get_LineNumber() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77BE0))(this);
  }
  int32_t Newtonsoft::Json::IJsonLineInfo::get_LinePosition() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::TraceJsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB77C80))(this);
  }
};
}