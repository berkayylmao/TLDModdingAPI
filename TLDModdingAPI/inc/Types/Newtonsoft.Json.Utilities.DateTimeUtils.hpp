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
#include "ModdingAPI.Exposed.System.TimeSpan.hpp"
#include "ModdingAPI::Exposed::System::DateTime.hpp"
#include "ModdingAPI.Exposed.System.DateTime.hpp"
#include "ModdingAPI::Exposed::System::TimeSpan.hpp"
#include "ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference.hpp"
#include "ModdingAPI::Exposed::System::DateTimeOffset.hpp"
#include "ModdingAPI::Exposed::Newtonsoft::Json::Utilities::DateTimeParser.hpp"
#include "ModdingAPI::Exposed::System::Nullable_T_.hpp"


namespace ModdingAPI::Exposed::Newtonsoft::Json::Utilities {
struct __DateTimeUtils_Il2CppStaticFields {
  int64_t InitialJavaScriptDateTicks;
  ModdingAPI::Exposed::System::Int32_array* DaysToMonth365;
  ModdingAPI::Exposed::System::Int32_array* DaysToMonth366;
};

struct __DateTimeUtils_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __DateTimeUtils_Il2CppClass {
  Il2CppClass_1 _1;
  __DateTimeUtils_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DateTimeUtils_Il2CppVtbl vtbl;
};

class DateTimeUtils {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C929B8;
  static inline    __DateTimeUtils_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __DateTimeUtils_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DateTimeUtils_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __DateTimeUtils_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<int64_t> InitialJavaScriptDateTicks = __CppStaticProperty<int64_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->InitialJavaScriptDateTicks; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> DaysToMonth365 = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->DaysToMonth365; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> DaysToMonth366 = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->DaysToMonth366; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x141DAA0))();
  }
  static inline ModdingAPI::Exposed::System::TimeSpan GetUtcOffset(ModdingAPI::Exposed::System::DateTime d) {
    return reinterpret_cast<ModdingAPI::Exposed::System::TimeSpan(__fastcall*)(ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141DBA0))(d);
  }
  static inline int32_t ToSerializationMode(ModdingAPI::Exposed::System::DateTimeKind kind) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::DateTimeKind)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141DC60))(kind);
  }
  static inline ModdingAPI::Exposed::System::DateTime EnsureDateTime(ModdingAPI::Exposed::System::DateTime value, int32_t timeZone) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::DateTime, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141DD40))(value, timeZone);
  }
  static inline ModdingAPI::Exposed::System::DateTime SwitchToLocalTime(ModdingAPI::Exposed::System::DateTime value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9C9E50))(value);
  }
  static inline ModdingAPI::Exposed::System::DateTime SwitchToUtcTime(ModdingAPI::Exposed::System::DateTime value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9C9EE0))(value);
  }
  static inline int64_t ToUniversalTicks(ModdingAPI::Exposed::System::DateTime dateTime) {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141DF80))(dateTime);
  }
  static inline int64_t ToUniversalTicks(ModdingAPI::Exposed::System::DateTime dateTime, ModdingAPI::Exposed::System::TimeSpan offset) {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::DateTime, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141E060))(dateTime, offset);
  }
  static inline int64_t ConvertDateTimeToJavaScriptTicks(ModdingAPI::Exposed::System::DateTime dateTime, ModdingAPI::Exposed::System::TimeSpan offset) {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::DateTime, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141E1D0))(dateTime, offset);
  }
  static inline int64_t ConvertDateTimeToJavaScriptTicks(ModdingAPI::Exposed::System::DateTime dateTime) {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141E290))(dateTime);
  }
  static inline int64_t ConvertDateTimeToJavaScriptTicks(ModdingAPI::Exposed::System::DateTime dateTime, bool convertToUtc) {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::DateTime, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141E330))(dateTime, convertToUtc);
  }
  static inline int64_t UniversialTicksToJavaScriptTicks(int64_t universialTicks) {
    return reinterpret_cast<int64_t(__fastcall*)(int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141E4D0))(universialTicks);
  }
  static inline ModdingAPI::Exposed::System::DateTime ConvertJavaScriptTicksToDateTime(int64_t javaScriptTicks) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141E590))(javaScriptTicks);
  }
  static inline bool TryParseDateTimeIso(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference text, int32_t dateTimeZoneHandling, ModdingAPI::Exposed::System::DateTime dt) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference, int32_t, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141E660))(text, dateTimeZoneHandling, dt);
  }
  static inline bool TryParseDateTimeOffsetIso(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference text, ModdingAPI::Exposed::System::DateTimeOffset dt) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference, ModdingAPI::Exposed::System::DateTimeOffset)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141EA60))(text, dt);
  }
  static inline ModdingAPI::Exposed::System::DateTime CreateDateTime(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::DateTimeParser dateTimeParser) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::DateTimeParser)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141EC50))(dateTimeParser);
  }
  static inline bool TryParseDateTime(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference s, int32_t dateTimeZoneHandling, System_String* dateFormatString, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, ModdingAPI::Exposed::System::DateTime dt) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference, int32_t, System_String*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141ED40))(s, dateTimeZoneHandling, dateFormatString, culture, dt);
  }
  static inline bool TryParseDateTime(System_String* s, int32_t dateTimeZoneHandling, System_String* dateFormatString, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, ModdingAPI::Exposed::System::DateTime dt) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t, System_String*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141F130))(s, dateTimeZoneHandling, dateFormatString, culture, dt);
  }
  static inline bool TryParseDateTimeOffset(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference s, System_String* dateFormatString, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, ModdingAPI::Exposed::System::DateTimeOffset dt) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference, System_String*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, ModdingAPI::Exposed::System::DateTimeOffset)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141F580))(s, dateFormatString, culture, dt);
  }
  static inline bool TryParseDateTimeOffset(System_String* s, System_String* dateFormatString, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, ModdingAPI::Exposed::System::DateTimeOffset dt) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, System_String*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, ModdingAPI::Exposed::System::DateTimeOffset)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141F930))(s, dateFormatString, culture, dt);
  }
  static inline bool TryParseMicrosoftDate(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference text, int64_t ticks, ModdingAPI::Exposed::System::TimeSpan offset, ModdingAPI::Exposed::System::DateTimeKind kind) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference, int64_t, ModdingAPI::Exposed::System::TimeSpan, ModdingAPI::Exposed::System::DateTimeKind)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141FD90))(text, ticks, offset, kind);
  }
  static inline bool TryParseDateTimeMicrosoft(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference text, int32_t dateTimeZoneHandling, ModdingAPI::Exposed::System::DateTime dt) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference, int32_t, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x141FF60))(text, dateTimeZoneHandling, dt);
  }
  static inline bool TryParseDateTimeExact(System_String* text, int32_t dateTimeZoneHandling, System_String* dateFormatString, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, ModdingAPI::Exposed::System::DateTime dt) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t, System_String*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1420140))(text, dateTimeZoneHandling, dateFormatString, culture, dt);
  }
  static inline bool TryParseDateTimeOffsetMicrosoft(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference text, ModdingAPI::Exposed::System::DateTimeOffset dt) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference, ModdingAPI::Exposed::System::DateTimeOffset)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1420270))(text, dt);
  }
  static inline bool TryParseDateTimeOffsetExact(System_String* text, System_String* dateFormatString, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, ModdingAPI::Exposed::System::DateTimeOffset dt) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, System_String*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, ModdingAPI::Exposed::System::DateTimeOffset)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14203F0))(text, dateFormatString, culture, dt);
  }
  static inline bool TryReadOffset(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference offsetText, int32_t startIndex, ModdingAPI::Exposed::System::TimeSpan offset) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Utilities::StringReference, int32_t, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1420500))(offsetText, startIndex, offset);
  }
  static inline void WriteDateTimeString(ModdingAPI::Exposed::System::IO::TextWriter* writer, ModdingAPI::Exposed::System::DateTime value, int32_t format, System_String* formatString, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::IO::TextWriter*, ModdingAPI::Exposed::System::DateTime, int32_t, System_String*, ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14206E0))(writer, value, format, formatString, culture);
  }
  static inline int32_t WriteDateTimeString(ModdingAPI::Exposed::System::Char_array* chars, int32_t start, ModdingAPI::Exposed::System::DateTime value, ModdingAPI::Exposed::System::Nullable_T_ offset, ModdingAPI::Exposed::System::DateTimeKind kind, int32_t format) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Char_array*, int32_t, ModdingAPI::Exposed::System::DateTime, ModdingAPI::Exposed::System::Nullable_T_, ModdingAPI::Exposed::System::DateTimeKind, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1420890))(chars, start, value, offset, kind, format);
  }
  static inline int32_t WriteDefaultIsoDate(ModdingAPI::Exposed::System::Char_array* chars, int32_t start, ModdingAPI::Exposed::System::DateTime dt) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Char_array*, int32_t, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1420C60))(chars, start, dt);
  }
  static inline void CopyIntToCharArray(ModdingAPI::Exposed::System::Char_array* chars, int32_t start, int32_t value, int32_t digits) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1421230))(chars, start, value, digits);
  }
  static inline int32_t WriteDateTimeOffset(ModdingAPI::Exposed::System::Char_array* chars, int32_t start, ModdingAPI::Exposed::System::TimeSpan offset, int32_t format) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Char_array*, int32_t, ModdingAPI::Exposed::System::TimeSpan, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14212B0))(chars, start, offset, format);
  }
  static inline void WriteDateTimeOffsetString(ModdingAPI::Exposed::System::IO::TextWriter* writer, ModdingAPI::Exposed::System::DateTimeOffset value, int32_t format, System_String* formatString, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::IO::TextWriter*, ModdingAPI::Exposed::System::DateTimeOffset, int32_t, System_String*, ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1421510))(writer, value, format, formatString, culture);
  }
  static inline void GetDateValues(ModdingAPI::Exposed::System::DateTime td, int32_t year, int32_t month, int32_t day) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DateTime, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14216E0))(td, year, month, day);
  }
};
}