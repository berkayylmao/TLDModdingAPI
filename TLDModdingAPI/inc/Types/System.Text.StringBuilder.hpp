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
#include "ModdingAPI.Exposed.System.ParamsArray.hpp"


namespace ModdingAPI::Exposed::System::Text {
struct __StringBuilder_Il2CppStaticFields {
};

struct __StringBuilder_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_Runtime_Serialization_ISerializable_GetObjectData;
};

struct __StringBuilder_Il2CppClass {
  Il2CppClass_1 _1;
  __StringBuilder_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StringBuilder_Il2CppVtbl vtbl;
};

class StringBuilder {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C31F68;
  static inline    StringBuilder* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C81A10;
  static inline    __StringBuilder_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline StringBuilder* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (StringBuilder**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __StringBuilder_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__StringBuilder_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __StringBuilder_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Char_array* m_ChunkChars;
  ModdingAPI::Exposed::System::Text::StringBuilder* m_ChunkPrevious;
  int32_t m_ChunkLength;
  int32_t m_ChunkOffset;
  int32_t m_MaxCapacity;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB4A20))(this);
  }
  void ::ctor(int32_t capacity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB4A30))(this, capacity);
  }
  void ::ctor(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB4B00))(this, value);
  }
  void ::ctor(System_String* value, int32_t capacity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB4B40))(this, value, capacity);
  }
  void ::ctor(System_String* value, int32_t startIndex, int32_t length, int32_t capacity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB4B80))(this, value, startIndex, length, capacity);
  }
  void ::ctor(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB4E50))(this, info, context);
  }
  void System::Runtime::Serialization::ISerializable::GetObjectData(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB51F0))(this, info, context);
  }
  int32_t get_Capacity() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB5330))(this);
  }
  int32_t get_MaxCapacity() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F810))(this);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB5350))(this);
  }
  System_String* ToString(int32_t startIndex, int32_t length) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB54E0))(this, startIndex, length);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Clear() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB57E0))(this);
  }
  int32_t get_Length() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA438C0))(this);
  }
  void set_Length(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB5800))(this, value);
  }
  wchar_t get_Chars(int32_t index) {
    return reinterpret_cast<wchar_t(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB59F0))(this, index);
  }
  void set_Chars(int32_t index, wchar_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB5B20))(this, index, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(wchar_t value, int32_t repeatCount) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, wchar_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB5C90))(this, value, repeatCount);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(ModdingAPI::Exposed::System::Char_array* value, int32_t startIndex, int32_t charCount) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB5DE0))(this, value, startIndex, charCount);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(System_String* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6020))(this, value);
  }
  void AppendHelper(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6140))(this, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(System_String* value, int32_t startIndex, int32_t count) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6170))(this, value, startIndex, count);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* AppendLine() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6390))(this);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* AppendLine(System_String* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB63C0))(this, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Insert(int32_t index, System_String* value, int32_t count) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB63F0))(this, index, value, count);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Remove(int32_t startIndex, int32_t length) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB65F0))(this, startIndex, length);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(bool value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB67C0))(this, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(uint8_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6860))(this, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(wchar_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6940))(this, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(int32_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB69C0))(this, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(int64_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6AA0))(this, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(double value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6B80))(this, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(uint16_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6C60))(this, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(uint32_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6D40))(this, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(Il2CppObject* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6E20))(this, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(ModdingAPI::Exposed::System::Char_array* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::Char_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6E60))(this, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Insert(int32_t index, System_String* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6EB0))(this, index, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Insert(int32_t index, wchar_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6FB0))(this, index, value);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* AppendFormat(System_String* format, Il2CppObject* arg0) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB6FE0))(this, format, arg0);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* AppendFormat(System_String* format, Il2CppObject* arg0, Il2CppObject* arg1) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB7050))(this, format, arg0, arg1);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* AppendFormat(System_String* format, Il2CppObject* arg0, Il2CppObject* arg1, Il2CppObject* arg2) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB70D0))(this, format, arg0, arg1, arg2);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* AppendFormat(System_String* format, ModdingAPI::Exposed::System::Object_array* args) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB7160))(this, format, args);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* AppendFormat(ModdingAPI::Exposed::System::IFormatProvider* provider, System_String* format, Il2CppObject* arg0) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::IFormatProvider*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB72F0))(this, provider, format, arg0);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* AppendFormat(ModdingAPI::Exposed::System::IFormatProvider* provider, System_String* format, Il2CppObject* arg0, Il2CppObject* arg1) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::IFormatProvider*, System_String*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB7370))(this, provider, format, arg0, arg1);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* AppendFormat(ModdingAPI::Exposed::System::IFormatProvider* provider, System_String* format, Il2CppObject* arg0, Il2CppObject* arg1, Il2CppObject* arg2) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::IFormatProvider*, System_String*, Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB7400))(this, provider, format, arg0, arg1, arg2);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* AppendFormat(ModdingAPI::Exposed::System::IFormatProvider* provider, System_String* format, ModdingAPI::Exposed::System::Object_array* args) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::IFormatProvider*, System_String*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB7490))(this, provider, format, args);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* AppendFormatHelper(ModdingAPI::Exposed::System::IFormatProvider* provider, System_String* format, ModdingAPI::Exposed::System::ParamsArray args) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::IFormatProvider*, System_String*, ModdingAPI::Exposed::System::ParamsArray)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB76A0))(this, provider, format, args);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Replace(System_String* oldValue, System_String* newValue) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB7DA0))(this, oldValue, newValue);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Replace(System_String* oldValue, System_String* newValue, int32_t startIndex, int32_t count) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB7DD0))(this, oldValue, newValue, startIndex, count);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Append(wchar_t* value, int32_t valueCount) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, wchar_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB8240))(this, value, valueCount);
  }
  void Insert(int32_t index, wchar_t* value, int32_t valueCount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, wchar_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB83D0))(this, index, value, valueCount);
  }
  void ReplaceAllInChunk(ModdingAPI::Exposed::System::Int32_array* replacements, int32_t replacementsCount, ModdingAPI::Exposed::System::Text::StringBuilder* sourceChunk, int32_t removeCount, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::Int32_array*, int32_t, ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB8520))(this, replacements, replacementsCount, sourceChunk, removeCount, value);
  }
  bool StartsWith(ModdingAPI::Exposed::System::Text::StringBuilder* chunk, int32_t indexInChunk, int32_t count, System_String* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB8780))(this, chunk, indexInChunk, count, value);
  }
  void ReplaceInPlaceAtChunk(ModdingAPI::Exposed::System::Text::StringBuilder* chunk, int32_t indexInChunk, wchar_t* value, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, wchar_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB8880))(this, chunk, indexInChunk, value, count);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* FindChunkForIndex(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB8C90))(this, index);
  }
  ModdingAPI::Exposed::System::Text::StringBuilder* Next(ModdingAPI::Exposed::System::Text::StringBuilder* chunk) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB8CD0))(this, chunk);
  }
  void ExpandByABlock(int32_t minBlockCharCount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB8D30))(this, minBlockCharCount);
  }
  void ::ctor(ModdingAPI::Exposed::System::Text::StringBuilder* from) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB8F80))(this, from);
  }
  void MakeRoom(int32_t index, int32_t count, ModdingAPI::Exposed::System::Text::StringBuilder* chunk, int32_t indexInChunk, bool doneMoveFollowingChars) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, int32_t, ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB8FC0))(this, index, count, chunk, indexInChunk, doneMoveFollowingChars);
  }
  void ::ctor(int32_t size, int32_t maxCapacity, ModdingAPI::Exposed::System::Text::StringBuilder* previousBlock) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, int32_t, ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB94E0))(this, size, maxCapacity, previousBlock);
  }
  void Remove(int32_t startIndex, int32_t count, ModdingAPI::Exposed::System::Text::StringBuilder* chunk, int32_t indexInChunk) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, int32_t, ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB95A0))(this, startIndex, count, chunk, indexInChunk);
  }

  // Static methods:
  static inline void FormatError() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB7630))();
  }
  static inline void ThreadSafeCopy(wchar_t* sourcePtr, ModdingAPI::Exposed::System::Char_array* destination, int32_t destinationIndex, int32_t count) {
    reinterpret_cast<void(__fastcall*)(wchar_t*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB8A20))(sourcePtr, destination, destinationIndex, count);
  }
  static inline void ThreadSafeCopy(ModdingAPI::Exposed::System::Char_array* source, int32_t sourceIndex, ModdingAPI::Exposed::System::Char_array* destination, int32_t destinationIndex, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Char_array*, int32_t, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB8B50))(source, sourceIndex, destination, destinationIndex, count);
  }
};
}