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


namespace ModdingAPI::Exposed::Newtonsoft::Json::Bson {
struct __BsonReader_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Byte_array* SeqRange1;
  ModdingAPI::Exposed::System::Byte_array* SeqRange2;
  ModdingAPI::Exposed::System::Byte_array* SeqRange3;
  ModdingAPI::Exposed::System::Byte_array* SeqRange4;
};

struct __BsonReader_Il2CppVtbl {
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
};

struct __BsonReader_Il2CppClass {
  Il2CppClass_1 _1;
  __BsonReader_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __BsonReader_Il2CppVtbl vtbl;
};

class BsonReader {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6DC30;
  static inline    __BsonReader_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __BsonReader_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__BsonReader_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __BsonReader_Il2CppClass* __pClassInstance;
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
  ModdingAPI::Exposed::System::IO::BinaryReader* _reader;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _stack;
  ModdingAPI::Exposed::System::Byte_array* _byteBuffer;
  ModdingAPI::Exposed::System::Char_array* _charBuffer;
  char _currentElementType;
  int32_t _bsonReaderState;
  ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader::ContainerContext* _currentContext;
  bool _readRootValueAsArray;
  bool _jsonNet35BinaryCompatibility;
  ModdingAPI::Exposed::System::DateTimeKind _dateTimeKindHandling;

  // Member methods:
  ModdingAPI::Exposed::System::DateTimeKind get_DateTimeKindHandling() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTimeKind(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CEAD0))(this);
  }
  System_String* ReadElement() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CEAE0))(this);
  }
  bool Read() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CEB40))(this);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CECF0))(this);
  }
  bool ReadCodeWScope() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CED20))(this);
  }
  bool ReadReference() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CF060))(this);
  }
  bool ReadNormal() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CF300))(this);
  }
  void PopContext() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CF6E0))(this);
  }
  void PushContext(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader::ContainerContext* newContext) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*, ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader::ContainerContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CF7E0))(this, newContext);
  }
  uint8_t ReadByte() {
    return reinterpret_cast<uint8_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CF890))(this);
  }
  void ReadType(char type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*, char)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CF8D0))(this, type);
  }
  ModdingAPI::Exposed::System::Byte_array* ReadBinary(uint8_t binaryType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D00B0))(this, binaryType);
  }
  System_String* ReadString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D01D0))(this);
  }
  System_String* ReadLengthString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D0640))(this);
  }
  System_String* GetString(int32_t length) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D06E0))(this, length);
  }
  int32_t GetLastFullCharStop(int32_t start) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D0AC0))(this, start);
  }
  int32_t BytesInSequence(uint8_t b) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D0B50))(this, b);
  }
  void EnsureBuffers() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D0E60))(this);
  }
  double ReadDouble() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D0F40))(this);
  }
  int32_t ReadInt32() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D0F80))(this);
  }
  int64_t ReadInt64() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D0FC0))(this);
  }
  char ReadType() {
    return reinterpret_cast<char(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1000))(this);
  }
  void MovePosition(int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1040))(this, count);
  }
  ModdingAPI::Exposed::System::Byte_array* ReadBytes(int32_t count) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Bson::BsonReader*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D1060))(this, count);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> SeqRange1 = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->SeqRange1; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> SeqRange2 = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->SeqRange2; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> SeqRange3 = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->SeqRange3; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> SeqRange4 = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->SeqRange4; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D10A0))();
  }
};
}