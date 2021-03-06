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


namespace ModdingAPI::Exposed::System::Net {
struct __CookieTokenizer_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Net::CookieTokenizer::RecognizedAttribute_array* RecognizedAttributes;
  ModdingAPI::Exposed::System::Net::CookieTokenizer::RecognizedAttribute_array* RecognizedServerAttributes;
};

struct __CookieTokenizer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CookieTokenizer_Il2CppClass {
  Il2CppClass_1 _1;
  __CookieTokenizer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CookieTokenizer_Il2CppVtbl vtbl;
};

class CookieTokenizer {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3E360;
  static inline    __CookieTokenizer_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CookieTokenizer_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CookieTokenizer_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CookieTokenizer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool m_eofCookie;
  int32_t m_index;
  int32_t m_length;
  System_String* m_name;
  bool m_quoted;
  int32_t m_start;
  int32_t m_token;
  int32_t m_tokenLength;
  System_String* m_tokenStream;
  System_String* m_value;

  // Member methods:
  void ::ctor(System_String* tokenStream) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x916D20))(this, tokenStream);
  }
  bool get_EndOfCookie() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33C2C0))(this);
  }
  void set_EndOfCookie(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30CFB0))(this, value);
  }
  bool get_Eof() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x916D40))(this);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  void set_Name(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310F00))(this, value);
  }
  bool get_Quoted() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3F0))(this);
  }
  void set_Quoted(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A400))(this, value);
  }
  int32_t get_Token() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D870))(this);
  }
  void set_Token(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31DD70))(this, value);
  }
  System_String* get_Value() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319960))(this);
  }
  void set_Value(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31F420))(this, value);
  }
  System_String* Extract() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x916D50))(this);
  }
  int32_t FindNext(bool ignoreComma, bool ignoreEquals) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x916E20))(this, ignoreComma, ignoreEquals);
  }
  int32_t Next(bool first, bool parseResponseCookies) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x917100))(this, first, parseResponseCookies);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9172B0))(this);
  }
  int32_t TokenFromName(bool parseResponseCookies) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Net::CookieTokenizer*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x917370))(this, parseResponseCookies);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Net::CookieTokenizer::RecognizedAttribute_array*> RecognizedAttributes = __CppStaticProperty<ModdingAPI::Exposed::System::Net::CookieTokenizer::RecognizedAttribute_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->RecognizedAttributes; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Net::CookieTokenizer::RecognizedAttribute_array*> RecognizedServerAttributes = __CppStaticProperty<ModdingAPI::Exposed::System::Net::CookieTokenizer::RecognizedAttribute_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->RecognizedServerAttributes; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x917660))();
  }
};
}