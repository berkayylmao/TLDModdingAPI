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


namespace ModdingAPI::Exposed::System {
struct __UriHelper_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Char_array* HexUpperChars;
};

struct __UriHelper_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __UriHelper_Il2CppClass {
  Il2CppClass_1 _1;
  __UriHelper_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UriHelper_Il2CppVtbl vtbl;
};

class UriHelper {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C79668;
  static inline    __UriHelper_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __UriHelper_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__UriHelper_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __UriHelper_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> HexUpperChars = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->HexUpperChars; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Char_array* EscapeString(System_String* input, int32_t start, int32_t end, ModdingAPI::Exposed::System::Char_array* dest, int32_t destPos, bool isUriString, wchar_t force1, wchar_t force2, wchar_t rsvd) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Char_array*(__fastcall*)(System_String*, int32_t, int32_t, ModdingAPI::Exposed::System::Char_array*, int32_t, bool, wchar_t, wchar_t, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x122C890))(input, start, end, dest, destPos, isUriString, force1, force2, rsvd);
  }
  static inline ModdingAPI::Exposed::System::Char_array* EnsureDestinationSize(wchar_t* pStr, ModdingAPI::Exposed::System::Char_array* dest, int32_t currentInputPos, int16_t charsToAdd, int16_t minReallocateChars, int32_t destPos, int32_t prevInputPos) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Char_array*(__fastcall*)(wchar_t*, ModdingAPI::Exposed::System::Char_array*, int32_t, int16_t, int16_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x122D040))(pStr, dest, currentInputPos, charsToAdd, minReallocateChars, destPos, prevInputPos);
  }
  static inline ModdingAPI::Exposed::System::Char_array* UnescapeString(System_String* input, int32_t start, int32_t end, ModdingAPI::Exposed::System::Char_array* dest, int32_t destPosition, wchar_t rsvd1, wchar_t rsvd2, wchar_t rsvd3, int32_t unescapeMode, ModdingAPI::Exposed::System::UriParser* syntax, bool isQuery) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Char_array*(__fastcall*)(System_String*, int32_t, int32_t, ModdingAPI::Exposed::System::Char_array*, int32_t, wchar_t, wchar_t, wchar_t, int32_t, ModdingAPI::Exposed::System::UriParser*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x122D1B0))(input, start, end, dest, destPosition, rsvd1, rsvd2, rsvd3, unescapeMode, syntax, isQuery);
  }
  static inline ModdingAPI::Exposed::System::Char_array* UnescapeString(wchar_t* pStr, int32_t start, int32_t end, ModdingAPI::Exposed::System::Char_array* dest, int32_t destPosition, wchar_t rsvd1, wchar_t rsvd2, wchar_t rsvd3, int32_t unescapeMode, ModdingAPI::Exposed::System::UriParser* syntax, bool isQuery) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Char_array*(__fastcall*)(wchar_t*, int32_t, int32_t, ModdingAPI::Exposed::System::Char_array*, int32_t, wchar_t, wchar_t, wchar_t, int32_t, ModdingAPI::Exposed::System::UriParser*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x122D2E0))(pStr, start, end, dest, destPosition, rsvd1, rsvd2, rsvd3, unescapeMode, syntax, isQuery);
  }
  static inline void MatchUTF8Sequence(wchar_t* pDest, ModdingAPI::Exposed::System::Char_array* dest, int32_t destOffset, ModdingAPI::Exposed::System::Char_array* unescapedChars, int32_t charCount, ModdingAPI::Exposed::System::Byte_array* bytes, int32_t byteCount, bool isQuery, bool iriParsing) {
    reinterpret_cast<void(__fastcall*)(wchar_t*, ModdingAPI::Exposed::System::Char_array*, int32_t, ModdingAPI::Exposed::System::Char_array*, int32_t, ModdingAPI::Exposed::System::Byte_array*, int32_t, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x122DEE0))(pDest, dest, destOffset, unescapedChars, charCount, bytes, byteCount, isQuery, iriParsing);
  }
  static inline void EscapeAsciiChar(wchar_t ch, ModdingAPI::Exposed::System::Char_array* to, int32_t pos) {
    reinterpret_cast<void(__fastcall*)(wchar_t, ModdingAPI::Exposed::System::Char_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x122E4A0))(ch, to, pos);
  }
  static inline wchar_t EscapedAscii(wchar_t digit, wchar_t next) {
    return reinterpret_cast<wchar_t(__fastcall*)(wchar_t, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x122E670))(digit, next);
  }
  static inline bool IsNotSafeForUnescape(wchar_t ch) {
    return reinterpret_cast<bool(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x122E710))(ch);
  }
  static inline bool IsReservedUnreservedOrHash(wchar_t c) {
    return reinterpret_cast<bool(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x122E760))(c);
  }
  static inline bool IsUnreserved(wchar_t c) {
    return reinterpret_cast<bool(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x122E8B0))(c);
  }
  static inline bool Is3986Unreserved(wchar_t c) {
    return reinterpret_cast<bool(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x122E9D0))(c);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x122EAB0))();
  }
};
}