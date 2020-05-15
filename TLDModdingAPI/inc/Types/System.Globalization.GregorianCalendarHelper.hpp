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


namespace ModdingAPI::Exposed::System::Globalization {
struct __GregorianCalendarHelper_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Int32_array* DaysToMonth365;
  ModdingAPI::Exposed::System::Int32_array* DaysToMonth366;
};

struct __GregorianCalendarHelper_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_GetDatePart;
};

struct __GregorianCalendarHelper_Il2CppClass {
  Il2CppClass_1 _1;
  __GregorianCalendarHelper_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __GregorianCalendarHelper_Il2CppVtbl vtbl;
};

class GregorianCalendarHelper {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C95B50;
  static inline    __GregorianCalendarHelper_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __GregorianCalendarHelper_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__GregorianCalendarHelper_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __GregorianCalendarHelper_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t m_maxYear;
  int32_t m_minYear;
  ModdingAPI::Exposed::System::Globalization::Calendar* m_Cal;
  ModdingAPI::Exposed::System::Globalization::EraInfo_array* m_EraInfo;
  ModdingAPI::Exposed::System::Int32_array* m_eras;
  ModdingAPI::Exposed::System::DateTime m_minDate;

  // Member methods:
  int32_t get_MaxYear() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311060))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Globalization::Calendar* cal, ModdingAPI::Exposed::System::Globalization::EraInfo_array* eraInfo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, ModdingAPI::Exposed::System::Globalization::Calendar*, ModdingAPI::Exposed::System::Globalization::EraInfo_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9AD10))(this, cal, eraInfo);
  }
  int32_t GetGregorianYear(int32_t year, int32_t era) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9ADD0))(this, year, era);
  }
  bool IsValidYear(int32_t year, int32_t era) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9B110))(this, year, era);
  }
  int32_t GetDatePart(int64_t ticks, int32_t part) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, int64_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9B200))(this, ticks, part);
  }
  void CheckTicksRange(int64_t ticks) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9B960))(this, ticks);
  }
  int32_t GetDayOfMonth(ModdingAPI::Exposed::System::DateTime time) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9BB50))(this, time);
  }
  int32_t GetDayOfWeek(ModdingAPI::Exposed::System::DateTime time) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9BB80))(this, time);
  }
  int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9BBF0))(this, year, month, era);
  }
  int32_t GetEra(ModdingAPI::Exposed::System::DateTime time) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9BDF0))(this, time);
  }
  ModdingAPI::Exposed::System::Int32_array* get_Eras() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9BF40))(this);
  }
  int32_t GetMonth(ModdingAPI::Exposed::System::DateTime time) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9C1B0))(this, time);
  }
  int32_t GetMonthsInYear(int32_t year, int32_t era) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9C1E0))(this, year, era);
  }
  int32_t GetYear(ModdingAPI::Exposed::System::DateTime time) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9C200))(this, time);
  }
  bool IsLeapYear(int32_t year, int32_t era) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9C370))(this, year, era);
  }
  ModdingAPI::Exposed::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::Globalization::GregorianCalendarHelper*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9C3F0))(this, year, month, day, hour, minute, second, millisecond, era);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> DaysToMonth365 = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->DaysToMonth365; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> DaysToMonth366 = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->DaysToMonth366; }
  );

  // Static methods:
  static inline int64_t GetAbsoluteDate(int32_t year, int32_t month, int32_t day) {
    return reinterpret_cast<int64_t(__fastcall*)(int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9B460))(year, month, day);
  }
  static inline int64_t DateToTicks(int32_t year, int32_t month, int32_t day) {
    return reinterpret_cast<int64_t(__fastcall*)(int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9B6B0))(year, month, day);
  }
  static inline int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second, int32_t millisecond) {
    return reinterpret_cast<int64_t(__fastcall*)(int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9B770))(hour, minute, second, millisecond);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xF9C5C0))();
  }
};
}