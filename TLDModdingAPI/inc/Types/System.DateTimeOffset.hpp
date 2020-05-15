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
#include "ModdingAPI.Exposed.System.DateTime.hpp"
#include "ModdingAPI.Exposed.System.DateTimeOffset.hpp"
#include "ModdingAPI.Exposed.System.TimeSpan.hpp"
#include "ModdingAPI.Exposed.System.Runtime.Serialization.StreamingContext.hpp"

namespace ModdingAPI::Exposed::System {
struct __DateTimeOffset_Il2CppObject {
  ModdingAPI::Exposed::System::DateTime m_dateTime;
  int16_t m_offsetMinutes;
};
struct __DateTimeOffset_Il2CppStaticFields {
  ModdingAPI::Exposed::System::DateTimeOffset MinValue;
  ModdingAPI::Exposed::System::DateTimeOffset MaxValue;
};

struct __DateTimeOffset_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_IComparable_CompareTo;
  VirtualInvokeData _5_ToString;
  VirtualInvokeData _6_System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData _7_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
  VirtualInvokeData _8_CompareTo;
  VirtualInvokeData _9_Equals;
};

struct __DateTimeOffset_Il2CppClass {
  Il2CppClass_1 _1;
  __DateTimeOffset_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DateTimeOffset_Il2CppVtbl vtbl;
};

class DateTimeOffset {
  static constexpr uint64_t _rvaObjectInstance     = 0x3C931E0;
  static inline    DateTimeOffset* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t _rvaClassInstance     = 0x3C92618;
  static inline    __DateTimeOffset_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Singleton object getter:
  static inline DateTimeOffset* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (DateTimeOffset**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Static class getter:
  static inline __DateTimeOffset_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DateTimeOffset_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  ModdingAPI::Exposed::System::DateTime m_dateTime;
  int16_t m_offsetMinutes;

  // Member methods:
  void ::ctor(int64_t ticks, ModdingAPI::Exposed::System::TimeSpan offset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, int64_t, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3D7B0))(this, ticks, offset);
  }
  void ::ctor(ModdingAPI::Exposed::System::DateTime dateTime) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3D7C0))(this, dateTime);
  }
  void ::ctor(ModdingAPI::Exposed::System::DateTime dateTime, ModdingAPI::Exposed::System::TimeSpan offset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, ModdingAPI::Exposed::System::DateTime, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3D7D0))(this, dateTime, offset);
  }
  void ::ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, ModdingAPI::Exposed::System::TimeSpan offset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3D7E0))(this, year, month, day, hour, minute, second, offset);
  }
  void ::ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ModdingAPI::Exposed::System::TimeSpan offset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3D910))(this, year, month, day, hour, minute, second, millisecond, offset);
  }
  void ::ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ModdingAPI::Exposed::System::Globalization::Calendar* calendar, ModdingAPI::Exposed::System::TimeSpan offset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ModdingAPI::Exposed::System::Globalization::Calendar*, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DA40))(this, year, month, day, hour, minute, second, millisecond, calendar, offset);
  }
  ModdingAPI::Exposed::System::DateTime get_DateTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DB80))(this);
  }
  ModdingAPI::Exposed::System::DateTime get_UtcDateTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DB90))(this);
  }
  ModdingAPI::Exposed::System::DateTime get_LocalDateTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DBA0))(this);
  }
  ModdingAPI::Exposed::System::DateTime get_ClockDateTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DB80))(this);
  }
  ModdingAPI::Exposed::System::DateTime get_Date() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DBD0))(this);
  }
  int32_t get_Day() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DC20))(this);
  }
  int32_t get_DayOfWeek() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DC50))(this);
  }
  int32_t get_DayOfYear() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DCB0))(this);
  }
  int32_t get_Hour() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DCE0))(this);
  }
  int32_t get_Millisecond() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DD40))(this);
  }
  int32_t get_Minute() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DDA0))(this);
  }
  int32_t get_Month() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DE00))(this);
  }
  ModdingAPI::Exposed::System::TimeSpan get_Offset() {
    return reinterpret_cast<ModdingAPI::Exposed::System::TimeSpan(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DE30))(this);
  }
  int32_t get_Second() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DE60))(this);
  }
  int64_t get_Ticks() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DEC0))(this);
  }
  int64_t get_UtcTicks() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DEE0))(this);
  }
  ModdingAPI::Exposed::System::TimeSpan get_TimeOfDay() {
    return reinterpret_cast<ModdingAPI::Exposed::System::TimeSpan(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DF00))(this);
  }
  int32_t get_Year() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DF40))(this);
  }
  int32_t System::IComparable::CompareTo(Il2CppObject* obj) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3DF70))(this, obj);
  }
  int32_t CompareTo(ModdingAPI::Exposed::System::DateTimeOffset other) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, ModdingAPI::Exposed::System::DateTimeOffset)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E100))(this, other);
  }
  bool Equals(Il2CppObject* obj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E120))(this, obj);
  }
  bool Equals(ModdingAPI::Exposed::System::DateTimeOffset other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, ModdingAPI::Exposed::System::DateTimeOffset)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E130))(this, other);
  }
  void System::Runtime::Serialization::IDeserializationCallback::OnDeserialization(Il2CppObject* sender) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E170))(this, sender);
  }
  void System::Runtime::Serialization::ISerializable::GetObjectData(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E180))(this, info, context);
  }
  void ::ctor(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E330))(this, info, context);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E4C0))(this);
  }
  int64_t ToFileTime() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E4F0))(this);
  }
  int64_t ToUnixTimeSeconds() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E530))(this);
  }
  int64_t ToUnixTimeMilliseconds() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E580))(this);
  }
  ModdingAPI::Exposed::System::DateTimeOffset ToLocalTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTimeOffset(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E5D0))(this);
  }
  ModdingAPI::Exposed::System::DateTimeOffset ToLocalTime(bool throwOnOverflow) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTimeOffset(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E620))(this, throwOnOverflow);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E680))(this);
  }
  System_String* ToString(ModdingAPI::Exposed::System::IFormatProvider* formatProvider) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E690))(this, formatProvider);
  }
  System_String* ToString(System_String* format, ModdingAPI::Exposed::System::IFormatProvider* formatProvider) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*, System_String*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E6A0))(this, format, formatProvider);
  }
  ModdingAPI::Exposed::System::DateTimeOffset ToUniversalTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTimeOffset(__fastcall*)(ModdingAPI::Exposed::System::DateTimeOffset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3E6B0))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::DateTimeOffset Parse(System_String* input, ModdingAPI::Exposed::System::IFormatProvider* formatProvider) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTimeOffset(__fastcall*)(System_String*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10264A0))(input, formatProvider);
  }
  static inline ModdingAPI::Exposed::System::DateTimeOffset Parse(System_String* input, ModdingAPI::Exposed::System::IFormatProvider* formatProvider, int32_t styles) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTimeOffset(__fastcall*)(System_String*, ModdingAPI::Exposed::System::IFormatProvider*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1026570))(input, formatProvider, styles);
  }
  static inline ModdingAPI::Exposed::System::DateTimeOffset ParseExact(System_String* input, System_String* format, ModdingAPI::Exposed::System::IFormatProvider* formatProvider, int32_t styles) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTimeOffset(__fastcall*)(System_String*, System_String*, ModdingAPI::Exposed::System::IFormatProvider*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10267E0))(input, format, formatProvider, styles);
  }
  static inline bool TryParse(System_String* input, ModdingAPI::Exposed::System::IFormatProvider* formatProvider, int32_t styles, ModdingAPI::Exposed::System::DateTimeOffset result) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, ModdingAPI::Exposed::System::IFormatProvider*, int32_t, ModdingAPI::Exposed::System::DateTimeOffset)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1026DE0))(input, formatProvider, styles, result);
  }
  static inline bool TryParseExact(System_String* input, System_String* format, ModdingAPI::Exposed::System::IFormatProvider* formatProvider, int32_t styles, ModdingAPI::Exposed::System::DateTimeOffset result) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, System_String*, ModdingAPI::Exposed::System::IFormatProvider*, int32_t, ModdingAPI::Exposed::System::DateTimeOffset)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10270B0))(input, format, formatProvider, styles, result);
  }
  static inline int16_t ValidateOffset(ModdingAPI::Exposed::System::TimeSpan offset) {
    return reinterpret_cast<int16_t(__fastcall*)(ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1027390))(offset);
  }
  static inline ModdingAPI::Exposed::System::DateTime ValidateDate(ModdingAPI::Exposed::System::DateTime dateTime, ModdingAPI::Exposed::System::TimeSpan offset) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::DateTime, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10274E0))(dateTime, offset);
  }
  static inline int32_t ValidateStyles(int32_t style, System_String* parameterName) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10275E0))(style, parameterName);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1027840))();
  }

};
}