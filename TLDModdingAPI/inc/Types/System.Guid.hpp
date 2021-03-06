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
#include "ModdingAPI.Exposed.System.Guid.hpp"
#include "ModdingAPI.Exposed.System.Guid.GuidResult.hpp"

namespace ModdingAPI::Exposed::System {
struct __Guid_Il2CppObject {
  int32_t _a;
  int16_t _b;
  int16_t _c;
  uint8_t _d;
  uint8_t _e;
  uint8_t _f;
  uint8_t _g;
  uint8_t _h;
  uint8_t _i;
  uint8_t _j;
  uint8_t _k;
};
struct __Guid_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Guid Empty;
  Il2CppObject* _rngAccess;
  ModdingAPI::Exposed::System::Security::Cryptography::RandomNumberGenerator* _rng;
  ModdingAPI::Exposed::System::Security::Cryptography::RandomNumberGenerator* _fastRng;
};

struct __Guid_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_ToString;
  VirtualInvokeData _5_CompareTo;
  VirtualInvokeData _6_CompareTo;
  VirtualInvokeData _7_Equals;
};

struct __Guid_Il2CppClass {
  Il2CppClass_1 _1;
  __Guid_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Guid_Il2CppVtbl vtbl;
};

class Guid {
  static constexpr uint64_t _rvaObjectInstance     = 0x3C25238;
  static inline    Guid* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t _rvaClassInstance     = 0x3C6C670;
  static inline    __Guid_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Singleton object getter:
  static inline Guid* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (Guid**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Static class getter:
  static inline __Guid_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Guid_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  int32_t _a;
  int16_t _b;
  int16_t _c;
  uint8_t _d;
  uint8_t _e;
  uint8_t _f;
  uint8_t _g;
  uint8_t _h;
  uint8_t _i;
  uint8_t _j;
  uint8_t _k;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Byte_array* b) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26CC0))(this, b);
  }
  void ::ctor(uint32_t a, uint16_t b, uint16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Guid*, uint32_t, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26CD0))(this, a, b, c, d, e, f, g, h, i, j, k);
  }
  void ::ctor(int32_t a, int16_t b, int16_t c, ModdingAPI::Exposed::System::Byte_array* d) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Guid*, int32_t, int16_t, int16_t, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D20))(this, a, b, c, d);
  }
  void ::ctor(int32_t a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Guid*, int32_t, int16_t, int16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26CD0))(this, a, b, c, d, e, f, g, h, i, j, k);
  }
  void ::ctor(System_String* g) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Guid*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D30))(this, g);
  }
  ModdingAPI::Exposed::System::Byte_array* ToByteArray() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Guid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D40))(this);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Guid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D50))(this);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Guid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D60))(this);
  }
  bool Equals(Il2CppObject* o) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Guid*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26D90))(this, o);
  }
  bool Equals(ModdingAPI::Exposed::System::Guid g) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DA0))(this, g);
  }
  int32_t GetResult(uint32_t me, uint32_t them) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Guid*, uint32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DC0))(this, me, them);
  }
  int32_t CompareTo(Il2CppObject* value) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Guid*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DE0))(this, value);
  }
  int32_t CompareTo(ModdingAPI::Exposed::System::Guid value) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26DF0))(this, value);
  }
  System_String* ToString(System_String* format) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Guid*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E10))(this, format);
  }
  System_String* ToString(System_String* format, ModdingAPI::Exposed::System::IFormatProvider* provider) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Guid*, System_String*, ModdingAPI::Exposed::System::IFormatProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26E10))(this, format, provider);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Guid Parse(System_String* input) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA93180))(input);
  }
  static inline bool TryParse(System_String* input, ModdingAPI::Exposed::System::Guid result) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA932D0))(input, result);
  }
  static inline bool TryParseGuid(System_String* g, int32_t flags, ModdingAPI::Exposed::System::Guid::GuidResult result) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::Guid::GuidResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA93400))(g, flags, result);
  }
  static inline bool TryParseGuidWithHexPrefix(System_String* guidString, ModdingAPI::Exposed::System::Guid::GuidResult result) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid::GuidResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA93630))(guidString, result);
  }
  static inline bool TryParseGuidWithNoStyle(System_String* guidString, ModdingAPI::Exposed::System::Guid::GuidResult result) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid::GuidResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA93E00))(guidString, result);
  }
  static inline bool TryParseGuidWithDashes(System_String* guidString, ModdingAPI::Exposed::System::Guid::GuidResult result) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Guid::GuidResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA941A0))(guidString, result);
  }
  static inline bool StringToShort(System_String* str, int32_t requiredLength, int32_t flags, int16_t result, ModdingAPI::Exposed::System::Guid::GuidResult parseResult) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t, int32_t, int16_t, ModdingAPI::Exposed::System::Guid::GuidResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA94730))(str, requiredLength, flags, result, parseResult);
  }
  static inline bool StringToShort(System_String* str, int32_t* parsePos, int32_t requiredLength, int32_t flags, int16_t result, ModdingAPI::Exposed::System::Guid::GuidResult parseResult) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t*, int32_t, int32_t, int16_t, ModdingAPI::Exposed::System::Guid::GuidResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA948A0))(str, parsePos, requiredLength, flags, result, parseResult);
  }
  static inline bool StringToInt(System_String* str, int32_t requiredLength, int32_t flags, int32_t result, ModdingAPI::Exposed::System::Guid::GuidResult parseResult) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t, int32_t, int32_t, ModdingAPI::Exposed::System::Guid::GuidResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA949B0))(str, requiredLength, flags, result, parseResult);
  }
  static inline bool StringToInt(System_String* str, int32_t parsePos, int32_t requiredLength, int32_t flags, int32_t result, ModdingAPI::Exposed::System::Guid::GuidResult parseResult) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t, int32_t, int32_t, int32_t, ModdingAPI::Exposed::System::Guid::GuidResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA94AA0))(str, parsePos, requiredLength, flags, result, parseResult);
  }
  static inline bool StringToInt(System_String* str, int32_t* parsePos, int32_t requiredLength, int32_t flags, int32_t result, ModdingAPI::Exposed::System::Guid::GuidResult parseResult) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t*, int32_t, int32_t, int32_t, ModdingAPI::Exposed::System::Guid::GuidResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA94B80))(str, parsePos, requiredLength, flags, result, parseResult);
  }
  static inline bool StringToLong(System_String* str, int32_t parsePos, int32_t flags, int64_t result, ModdingAPI::Exposed::System::Guid::GuidResult parseResult) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t, int32_t, int64_t, ModdingAPI::Exposed::System::Guid::GuidResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA94D40))(str, parsePos, flags, result, parseResult);
  }
  static inline bool StringToLong(System_String* str, int32_t* parsePos, int32_t flags, int64_t result, ModdingAPI::Exposed::System::Guid::GuidResult parseResult) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t*, int32_t, int64_t, ModdingAPI::Exposed::System::Guid::GuidResult)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA94E20))(str, parsePos, flags, result, parseResult);
  }
  static inline System_String* EatAllWhitespace(System_String* str) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA94F80))(str);
  }
  static inline bool IsHexPrefix(System_String* str, int32_t i) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA950E0))(str, i);
  }
  static inline wchar_t HexToChar(int32_t a) {
    return reinterpret_cast<wchar_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA95FB0))(a);
  }
  static inline int32_t HexsToChars(wchar_t* guidChars, int32_t offset, int32_t a, int32_t b) {
    return reinterpret_cast<int32_t(__fastcall*)(wchar_t*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA95FD0))(guidChars, offset, a, b);
  }
  static inline int32_t HexsToChars(wchar_t* guidChars, int32_t offset, int32_t a, int32_t b, bool hex) {
    return reinterpret_cast<int32_t(__fastcall*)(wchar_t*, int32_t, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA960B0))(guidChars, offset, a, b, hex);
  }
  static inline ModdingAPI::Exposed::System::Guid NewGuid() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA96910))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA96BB0))();
  }

};
}