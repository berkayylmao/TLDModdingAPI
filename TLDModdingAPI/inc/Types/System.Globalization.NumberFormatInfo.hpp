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


namespace ModdingAPI::Exposed::System::Globalization {
struct __NumberFormatInfo_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* invariantInfo;
};

struct __NumberFormatInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Clone;
  VirtualInvokeData _5_GetFormat;
};

struct __NumberFormatInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __NumberFormatInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NumberFormatInfo_Il2CppVtbl vtbl;
};

class NumberFormatInfo {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C95708;
  static inline    NumberFormatInfo* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C958C8;
  static inline    __NumberFormatInfo_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline NumberFormatInfo* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (NumberFormatInfo**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __NumberFormatInfo_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__NumberFormatInfo_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __NumberFormatInfo_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Int32_array* numberGroupSizes;
  ModdingAPI::Exposed::System::Int32_array* currencyGroupSizes;
  ModdingAPI::Exposed::System::Int32_array* percentGroupSizes;
  System_String* positiveSign;
  System_String* negativeSign;
  System_String* numberDecimalSeparator;
  System_String* numberGroupSeparator;
  System_String* currencyGroupSeparator;
  System_String* currencyDecimalSeparator;
  System_String* currencySymbol;
  System_String* ansiCurrencySymbol;
  System_String* nanSymbol;
  System_String* positiveInfinitySymbol;
  System_String* negativeInfinitySymbol;
  System_String* percentDecimalSeparator;
  System_String* percentGroupSeparator;
  System_String* percentSymbol;
  System_String* perMilleSymbol;
  ModdingAPI::Exposed::System::String_array* nativeDigits;
  int32_t m_dataItem;
  int32_t numberDecimalDigits;
  int32_t currencyDecimalDigits;
  int32_t currencyPositivePattern;
  int32_t currencyNegativePattern;
  int32_t numberNegativePattern;
  int32_t percentPositivePattern;
  int32_t percentNegativePattern;
  int32_t percentDecimalDigits;
  int32_t digitSubstitution;
  bool isReadOnly;
  bool m_useUserOverride;
  bool m_isInvariant;
  bool validForParseAsNumber;
  bool validForParseAsCurrency;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA83F10))(this);
  }
  void OnSerializing(ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext ctx) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA83F20))(this, ctx);
  }
  void OnDeserializing(ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext ctx) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, ctx);
  }
  void OnDeserialized(ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext ctx) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, ctx);
  }
  void ::ctor(ModdingAPI::Exposed::System::Globalization::CultureData* cultureData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*, ModdingAPI::Exposed::System::Globalization::CultureData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA84040))(this, cultureData);
  }
  Il2CppObject* Clone() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA849D0))(this);
  }
  int32_t get_CurrencyDecimalDigits() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA84B10))(this);
  }
  System_String* get_CurrencyDecimalSeparator() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A440))(this);
  }
  bool get_IsReadOnly() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA84B20))(this);
  }
  ModdingAPI::Exposed::System::Int32_array* get_CurrencyGroupSizes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA84B30))(this);
  }
  ModdingAPI::Exposed::System::Int32_array* get_NumberGroupSizes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA84C70))(this);
  }
  ModdingAPI::Exposed::System::Int32_array* get_PercentGroupSizes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA84DB0))(this);
  }
  System_String* get_CurrencyGroupSeparator() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319980))(this);
  }
  System_String* get_CurrencySymbol() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383960))(this);
  }
  System_String* get_NaNSymbol() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319930))(this);
  }
  int32_t get_CurrencyNegativePattern() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307720))(this);
  }
  int32_t get_NumberNegativePattern() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307730))(this);
  }
  int32_t get_PercentPositivePattern() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307740))(this);
  }
  int32_t get_PercentNegativePattern() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85020))(this);
  }
  System_String* get_NegativeInfinitySymbol() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319950))(this);
  }
  System_String* get_NegativeSign() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  int32_t get_NumberDecimalDigits() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CEAD0))(this);
  }
  System_String* get_NumberDecimalSeparator() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  System_String* get_NumberGroupSeparator() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319960))(this);
  }
  int32_t get_CurrencyPositivePattern() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85030))(this);
  }
  System_String* get_PositiveInfinitySymbol() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319940))(this);
  }
  System_String* get_PositiveSign() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  int32_t get_PercentDecimalDigits() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F150))(this);
  }
  System_String* get_PercentDecimalSeparator() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x321390))(this);
  }
  System_String* get_PercentGroupSeparator() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307640))(this);
  }
  System_String* get_PercentSymbol() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BC530))(this);
  }
  System_String* get_PerMilleSymbol() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319850))(this);
  }
  Il2CppObject* GetFormat(ModdingAPI::Exposed::System::Type* formatType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85040))(this, formatType);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*> invariantInfo = __CppStaticProperty<ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->invariantInfo; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* get_InvariantInfo() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA84690))();
  }
  static inline ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* GetInstance(ModdingAPI::Exposed::System::IFormatProvider* formatProvider) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*(__fastcall*)(ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA84840))(formatProvider);
  }
  static inline ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* get_CurrentInfo() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA84EF0))();
  }
  static inline ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* ReadOnly(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo* nfi) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::NumberFormatInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85110))(nfi);
  }
  static inline void ValidateParseStyleInteger(int32_t style) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA852A0))(style);
  }
  static inline void ValidateParseStyleFloatingPoint(int32_t style) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA853C0))(style);
  }
};
}