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
#include "ModdingAPI.Exposed.System.Nullable_T_.hpp"


namespace ModdingAPI::Exposed::Newtonsoft::Json::Utilities {
struct __StringUtils_Il2CppStaticFields {
};

struct __StringUtils_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __StringUtils_Il2CppClass {
  Il2CppClass_1 _1;
  __StringUtils_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StringUtils_Il2CppVtbl vtbl;
};

class StringUtils {
public:
  // Il2Cpp fields:
  __StringUtils_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline System_String* FormatWith(System_String* format, ModdingAPI::Exposed::System::IFormatProvider* provider, Il2CppObject* arg0) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::IFormatProvider*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142EF20))(format, provider, arg0);
  }
  static inline System_String* FormatWith(System_String* format, ModdingAPI::Exposed::System::IFormatProvider* provider, Il2CppObject* arg0, Il2CppObject* arg1) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::IFormatProvider*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142F030))(format, provider, arg0, arg1);
  }
  static inline System_String* FormatWith(System_String* format, ModdingAPI::Exposed::System::IFormatProvider* provider, Il2CppObject* arg0, Il2CppObject* arg1, Il2CppObject* arg2) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::IFormatProvider*, Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142F190))(format, provider, arg0, arg1, arg2);
  }
  static inline System_String* FormatWith(System_String* format, ModdingAPI::Exposed::System::IFormatProvider* provider, Il2CppObject* arg0, Il2CppObject* arg1, Il2CppObject* arg2, Il2CppObject* arg3) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::IFormatProvider*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142F350))(format, provider, arg0, arg1, arg2, arg3);
  }
  static inline System_String* FormatWith(System_String* format, ModdingAPI::Exposed::System::IFormatProvider* provider, ModdingAPI::Exposed::System::Object_array* args) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::IFormatProvider*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142F560))(format, provider, args);
  }
  static inline ModdingAPI::Exposed::System::IO::StringWriter* CreateStringWriter(int32_t capacity) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IO::StringWriter*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142F610))(capacity);
  }
  static inline ModdingAPI::Exposed::System::Nullable_T_ GetLength(System_String* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Nullable_T_(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142F860))(value);
  }
  static inline void ToCharAsUnicode(wchar_t c, ModdingAPI::Exposed::System::Char_array* buffer) {
    reinterpret_cast<void(__fastcall*)(wchar_t, ModdingAPI::Exposed::System::Char_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142F910))(c, buffer);
  }
  static inline System_String* ToCamelCase(System_String* s) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142FA50))(s);
  }
  static inline bool IsHighSurrogate(wchar_t c) {
    return reinterpret_cast<bool(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142FCE0))(c);
  }
  static inline bool IsLowSurrogate(wchar_t c) {
    return reinterpret_cast<bool(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142FD90))(c);
  }
  static inline bool StartsWith(System_String* source, wchar_t value) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142FE40))(source, value);
  }
  static inline bool EndsWith(System_String* source, wchar_t value) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x142FE80))(source, value);
  }
};
}