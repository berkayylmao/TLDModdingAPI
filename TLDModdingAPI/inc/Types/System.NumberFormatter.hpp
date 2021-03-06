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
#include "ModdingAPI.Exposed.System.Decimal.hpp"
#include "ModdingAPI::Exposed::System::Decimal.hpp"


namespace ModdingAPI::Exposed::System {
struct __NumberFormatter_Il2CppStaticFields {
  uint64_t* MantissaBitsTable;
  int32_t* TensExponentTable;
  wchar_t* DigitLowerTable;
  wchar_t* DigitUpperTable;
  int64_t* TenPowersList;
  int32_t* DecHexDigits;
  ModdingAPI::Exposed::System::NumberFormatter* threadNumberFormatter;
  ModdingAPI::Exposed::System::NumberFormatter* userFormatProvider;
};

struct __NumberFormatter_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __NumberFormatter_Il2CppClass {
  Il2CppClass_1 _1;
  __NumberFormatter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NumberFormatter_Il2CppVtbl vtbl;
};

class NumberFormatter {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2F920;
  static inline    __NumberFormatter_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __NumberFormatter_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__NumberFormatter_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __NumberFormatter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* _nfi;
  ModdingAPI::Exposed::System::Char_array* _cbuf;
  bool _NaN;
  bool _infinity;
  bool _isCustomFormat;
  bool _specifierIsUpper;
  bool _positive;
  wchar_t _specifier;
  int32_t _precision;
  int32_t _defPrecision;
  int32_t _digitsLen;
  int32_t _offset;
  int32_t _decPointPos;
  uint32_t _val1;
  uint32_t _val2;
  uint32_t _val3;
  uint32_t _val4;
  int32_t _ind;

  // Member methods:
  void InitDecHexDigits(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE3FF0))(this, value);
  }
  void InitDecHexDigits(uint64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE40F0))(this, value);
  }
  void InitDecHexDigits(uint32_t hi, uint64_t lo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, uint32_t, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE4270))(this, hi, lo);
  }
  int32_t DecHexLen() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE4810))(this);
  }
  int32_t InitialFloatingPrecision() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE4A60))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Threading::Thread* current) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, ModdingAPI::Exposed::System::Threading::Thread*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE4C00))(this, current);
  }
  void Init(System_String* format) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE4D00))(this, format);
  }
  void InitHex(uint64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE4E80))(this, value);
  }
  void Init(System_String* format, int32_t value, int32_t defPrecision) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE4ED0))(this, format, value, defPrecision);
  }
  void Init(System_String* format, uint32_t value, int32_t defPrecision) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, System_String*, uint32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE4F80))(this, format, value, defPrecision);
  }
  void Init(System_String* format, int64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, System_String*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5020))(this, format, value);
  }
  void Init(System_String* format, uint64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, System_String*, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE50C0))(this, format, value);
  }
  void Init(System_String* format, double value, int32_t defPrecision) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, System_String*, double, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5150))(this, format, value, defPrecision);
  }
  void Init(System_String* format, ModdingAPI::Exposed::System::Decimal value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, System_String*, ModdingAPI::Exposed::System::Decimal)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5600))(this, format, value);
  }
  void ResetCharBuf(int32_t size) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE57F0))(this, size);
  }
  void Resize(int32_t len) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE58A0))(this, len);
  }
  void Append(wchar_t c) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5A60))(this, c);
  }
  void Append(wchar_t c, int32_t cnt) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, wchar_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5AE0))(this, c, cnt);
  }
  void Append(System_String* s) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5B80))(this, s);
  }
  ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* GetNumberFormatInstance(ModdingAPI::Exposed::System::IFormatProvider* fp) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5C50))(this, fp);
  }
  void set_CurrentCulture(ModdingAPI::Exposed::System::Globalization::CultureInfo* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5C70))(this, value);
  }
  int32_t get_IntegerDigits() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5CC0))(this);
  }
  int32_t get_DecimalDigits() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5CD0))(this);
  }
  bool get_IsFloatingSource() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5CE0))(this);
  }
  bool get_IsZero() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5D00))(this);
  }
  bool get_IsZeroInteger() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5D10))(this);
  }
  void RoundPos(int32_t pos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5D30))(this, pos);
  }
  bool RoundDecimal(int32_t decimals) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5D40))(this, decimals);
  }
  bool RoundBits(int32_t shift) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE5D60))(this, shift);
  }
  void RemoveTrailingZeros() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE6080))(this);
  }
  void AddOneToDecHex() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE60B0))(this);
  }
  int32_t CountTrailingZeros() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE62C0))(this);
  }
  void Release() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE69C0))(this);
  }
  System_String* IntegerToString(System_String* format, ModdingAPI::Exposed::System::IFormatProvider* fp) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, System_String*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE7630))(this, format, fp);
  }
  System_String* NumberToString(System_String* format, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, System_String*, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE7880))(this, format, nfi);
  }
  System_String* FormatCurrency(int32_t precision, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE7A70))(this, precision, nfi);
  }
  System_String* FormatDecimal(int32_t precision, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE7F20))(this, precision, nfi);
  }
  System_String* FormatHexadecimal(int32_t precision) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE8020))(this, precision);
  }
  System_String* FormatFixedPoint(int32_t precision, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE81C0))(this, precision, nfi);
  }
  System_String* FormatRoundtrip(double origval, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, double, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE8370))(this, origval, nfi);
  }
  System_String* FormatRoundtrip(float origval, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, float, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE84A0))(this, origval, nfi);
  }
  System_String* FormatGeneral(int32_t precision, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE8550))(this, precision, nfi);
  }
  System_String* FormatNumber(int32_t precision, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE86C0))(this, precision, nfi);
  }
  System_String* FormatPercent(int32_t precision, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE8860))(this, precision, nfi);
  }
  System_String* FormatExponential(int32_t precision, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE8B30))(this, precision, nfi);
  }
  System_String* FormatExponential(int32_t precision, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi, int32_t expDigits) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE8B90))(this, precision, nfi, expDigits);
  }
  System_String* FormatCustom(System_String* format, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, System_String*, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE8D30))(this, format, nfi);
  }
  void AppendIntegerString(int32_t minLength, ModdingAPI::Exposed::System::Text::StringBuilder* sb) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t, ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE9B50))(this, minLength, sb);
  }
  void AppendIntegerString(int32_t minLength) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE9BE0))(this, minLength);
  }
  void AppendDecimalString(int32_t precision, ModdingAPI::Exposed::System::Text::StringBuilder* sb) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t, ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE9CB0))(this, precision, sb);
  }
  void AppendDecimalString(int32_t precision) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE9CE0))(this, precision);
  }
  void AppendIntegerStringWithGroupSeparator(ModdingAPI::Exposed::System::Int32_array* groups, System_String* groupSeparator) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, ModdingAPI::Exposed::System::Int32_array*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE9D00))(this, groups, groupSeparator);
  }
  void AppendExponent(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi, int32_t exponent, int32_t minDigits) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE9F70))(this, nfi, exponent, minDigits);
  }
  void AppendOneDigit(int32_t start) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCEA1A0))(this, start);
  }
  void AppendDigits(int32_t start, int32_t end) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCEA260))(this, start, end);
  }
  void AppendDigits(int32_t start, int32_t end, ModdingAPI::Exposed::System::Text::StringBuilder* sb) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t, int32_t, ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCEA5B0))(this, start, end, sb);
  }
  void Multiply10(int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCEA7E0))(this, count);
  }
  void Divide10(int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCEA7F0))(this, count);
  }
  ModdingAPI::Exposed::System::NumberFormatter* GetClone() {
    return reinterpret_cast<ModdingAPI::Exposed::System::NumberFormatter*(__fastcall*)(ModdingAPI::Exposed::System::NumberFormatter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCEA800))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<uint64_t*> MantissaBitsTable = __CppStaticProperty<uint64_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->MantissaBitsTable; }
  );
  static inline __CppStaticProperty<int32_t*> TensExponentTable = __CppStaticProperty<int32_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->TensExponentTable; }
  );
  static inline __CppStaticProperty<wchar_t*> DigitLowerTable = __CppStaticProperty<wchar_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->DigitLowerTable; }
  );
  static inline __CppStaticProperty<wchar_t*> DigitUpperTable = __CppStaticProperty<wchar_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->DigitUpperTable; }
  );
  static inline __CppStaticProperty<int64_t*> TenPowersList = __CppStaticProperty<int64_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->TenPowersList; }
  );
  static inline __CppStaticProperty<int32_t*> DecHexDigits = __CppStaticProperty<int32_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->DecHexDigits; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::NumberFormatter*> threadNumberFormatter = __CppStaticProperty<ModdingAPI::Exposed::System::NumberFormatter*>(
   []() { return &GetStaticClassInstance()->pStaticFields->threadNumberFormatter; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::NumberFormatter*> userFormatProvider = __CppStaticProperty<ModdingAPI::Exposed::System::NumberFormatter*>(
   []() { return &GetStaticClassInstance()->pStaticFields->userFormatProvider; }
  );

  // Static methods:
  static inline void GetFormatterTables(uint64_t* MantissaBitsTable, int32_t* TensExponentTable, wchar_t* DigitLowerTable, wchar_t* DigitUpperTable, int64_t* TenPowersList, int32_t* DecHexDigits) {
    reinterpret_cast<void(__fastcall*)(uint64_t*, int32_t*, wchar_t*, wchar_t*, int64_t*, int32_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE3E30))(MantissaBitsTable, TensExponentTable, DigitLowerTable, DigitUpperTable, TenPowersList, DecHexDigits);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE3E80))();
  }
  static inline int64_t GetTenPowerOf(int32_t i) {
    return reinterpret_cast<int64_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE3F40))(i);
  }
  static inline uint32_t FastToDecHex(int32_t val) {
    return reinterpret_cast<uint32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE44B0))(val);
  }
  static inline uint32_t ToDecHex(int32_t val) {
    return reinterpret_cast<uint32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE45C0))(val);
  }
  static inline int32_t FastDecHexLen(int32_t val) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE46C0))(val);
  }
  static inline int32_t DecHexLen(uint32_t val) {
    return reinterpret_cast<int32_t(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE46F0))(val);
  }
  static inline int32_t ScaleOrder(int64_t hi) {
    return reinterpret_cast<int32_t(__fastcall*)(int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE4990))(hi);
  }
  static inline int32_t ParsePrecision(System_String* format) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE4B80))(format);
  }
  static inline uint32_t AddOneToDecHex(uint32_t val) {
    return reinterpret_cast<uint32_t(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE6240))(val);
  }
  static inline int32_t CountTrailingZeros(uint32_t val) {
    return reinterpret_cast<int32_t(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE6520))(val);
  }
  static inline ModdingAPI::Exposed::System::NumberFormatter* GetInstance(ModdingAPI::Exposed::System::IFormatProvider* fp) {
    return reinterpret_cast<ModdingAPI::Exposed::System::NumberFormatter*(__fastcall*)(ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE6570))(fp);
  }
  static inline System_String* NumberToString(System_String* format, uint32_t value, ModdingAPI::Exposed::System::IFormatProvider* fp) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, uint32_t, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE6B00))(format, value, fp);
  }
  static inline System_String* NumberToString(System_String* format, int32_t value, ModdingAPI::Exposed::System::IFormatProvider* fp) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE6C60))(format, value, fp);
  }
  static inline System_String* NumberToString(System_String* format, uint64_t value, ModdingAPI::Exposed::System::IFormatProvider* fp) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, uint64_t, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE6DD0))(format, value, fp);
  }
  static inline System_String* NumberToString(System_String* format, int64_t value, ModdingAPI::Exposed::System::IFormatProvider* fp) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int64_t, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE6F30))(format, value, fp);
  }
  static inline System_String* NumberToString(System_String* format, float value, ModdingAPI::Exposed::System::IFormatProvider* fp) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, float, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE70A0))(format, value, fp);
  }
  static inline System_String* NumberToString(System_String* format, double value, ModdingAPI::Exposed::System::IFormatProvider* fp) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, double, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE7290))(format, value, fp);
  }
  static inline System_String* NumberToString(System_String* format, ModdingAPI::Exposed::System::Decimal value, ModdingAPI::Exposed::System::IFormatProvider* fp) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Decimal, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE7510))(format, value, fp);
  }
  static inline void ZeroTrimEnd(ModdingAPI::Exposed::System::Text::StringBuilder* sb, bool canEmpty) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE9700))(sb, canEmpty);
  }
  static inline bool IsZeroOnly(ModdingAPI::Exposed::System::Text::StringBuilder* sb) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE97A0))(sb);
  }
  static inline void AppendNonNegativeNumber(ModdingAPI::Exposed::System::Text::StringBuilder* sb, int32_t v) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCE98B0))(sb, v);
  }
};
}