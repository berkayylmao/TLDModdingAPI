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


namespace ModdingAPI::Exposed::System::Text::RegularExpressions {
struct __RegexInterpreter_Il2CppStaticFields {
};

struct __RegexInterpreter_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Go;
  VirtualInvokeData _5_FindFirstChar;
  VirtualInvokeData _6_InitTrackCount;
};

struct __RegexInterpreter_Il2CppClass {
  Il2CppClass_1 _1;
  __RegexInterpreter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RegexInterpreter_Il2CppVtbl vtbl;
};

class RegexInterpreter {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5CD10;
  static inline    __RegexInterpreter_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RegexInterpreter_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RegexInterpreter_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RegexInterpreter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t runtextbeg;
  int32_t runtextend;
  int32_t runtextstart;
  System_String* runtext;
  int32_t runtextpos;
  ModdingAPI::Exposed::System::Int32_array* runtrack;
  int32_t runtrackpos;
  ModdingAPI::Exposed::System::Int32_array* runstack;
  int32_t runstackpos;
  ModdingAPI::Exposed::System::Int32_array* runcrawl;
  int32_t runcrawlpos;
  int32_t runtrackcount;
  ModdingAPI::Exposed::System::Text::RegularExpressions::Match* runmatch;
  ModdingAPI::Exposed::System::Text::RegularExpressions::Regex* runregex;
  int32_t RegexRunner_timeout;
  bool RegexRunner_ignoreTimeout;
  int32_t RegexRunner_timeoutOccursAt;
  int32_t RegexRunner_timeoutChecksToSkip;
  int32_t runoperator;
  ModdingAPI::Exposed::System::Int32_array* runcodes;
  int32_t runcodepos;
  ModdingAPI::Exposed::System::String_array* runstrings;
  ModdingAPI::Exposed::System::Text::RegularExpressions::RegexCode* runcode;
  ModdingAPI::Exposed::System::Text::RegularExpressions::RegexPrefix* runfcPrefix;
  ModdingAPI::Exposed::System::Text::RegularExpressions::RegexBoyerMoore* runbmPrefix;
  int32_t runanchors;
  bool runrtl;
  bool runci;
  ModdingAPI::Exposed::System::Globalization::CultureInfo* runculture;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexCode* code, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, ModdingAPI::Exposed::System::Text::RegularExpressions::RegexCode*, ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF49BE0))(this, code, culture);
  }
  void InitTrackCount() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF49C40))(this);
  }
  void Advance() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF49C70))(this);
  }
  void Advance(int32_t i) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF49C80))(this, i);
  }
  void Goto(int32_t newpos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF49D00))(this, newpos);
  }
  void Textto(int32_t newpos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31DD50))(this, newpos);
  }
  void Trackto(int32_t newpos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF49D90))(this, newpos);
  }
  int32_t Textstart() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FED20))(this);
  }
  int32_t Textpos() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F810))(this);
  }
  int32_t Trackpos() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF49DB0))(this);
  }
  void TrackPush() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF49DD0))(this);
  }
  void TrackPush(int32_t I1) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF49E20))(this, I1);
  }
  void TrackPush(int32_t I1, int32_t I2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF49EB0))(this, I1, I2);
  }
  void TrackPush(int32_t I1, int32_t I2, int32_t I3) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF49F70))(this, I1, I2, I3);
  }
  void TrackPush2(int32_t I1) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A080))(this, I1);
  }
  void TrackPush2(int32_t I1, int32_t I2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A110))(this, I1, I2);
  }
  void Backtrack() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A1E0))(this);
  }
  void SetOperator(int32_t op) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A2F0))(this, op);
  }
  void TrackPop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A320))(this);
  }
  void TrackPop(int32_t framesize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A330))(this, framesize);
  }
  int32_t TrackPeek() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A340))(this);
  }
  int32_t TrackPeek(int32_t i) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A380))(this, i);
  }
  void StackPush(int32_t I1) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A3C0))(this, I1);
  }
  void StackPush(int32_t I1, int32_t I2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A410))(this, I1, I2);
  }
  void StackPop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A490))(this);
  }
  void StackPop(int32_t framesize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A4A0))(this, framesize);
  }
  int32_t StackPeek() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A4B0))(this);
  }
  int32_t StackPeek(int32_t i) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A4F0))(this, i);
  }
  int32_t Operator() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307620))(this);
  }
  int32_t Operand(int32_t i) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A530))(this, i);
  }
  int32_t Leftchars() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A580))(this);
  }
  int32_t Rightchars() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A590))(this);
  }
  int32_t Bump() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A5A0))(this);
  }
  int32_t Forwardchars() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A5C0))(this);
  }
  wchar_t Forwardcharnext() {
    return reinterpret_cast<wchar_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A5E0))(this);
  }
  bool Stringmatch(System_String* str) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A6F0))(this, str);
  }
  bool Refmatch(int32_t index, int32_t len) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4A8E0))(this, index, len);
  }
  void Backwardnext() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4AAE0))(this);
  }
  wchar_t CharAt(int32_t j) {
    return reinterpret_cast<wchar_t(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4AB00))(this, j);
  }
  bool FindFirstChar() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4AB20))(this);
  }
  void Go() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::RegularExpressions::RegexInterpreter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF4AF00))(this);
  }
};
}