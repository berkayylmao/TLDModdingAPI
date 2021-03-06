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


namespace ModdingAPI::Exposed::TMPro {
struct __TMP_TextParsingUtilities_Il2CppStaticFields {
  ModdingAPI::Exposed::TMPro::TMP_TextParsingUtilities* s_Instance;
};

struct __TMP_TextParsingUtilities_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TMP_TextParsingUtilities_Il2CppClass {
  Il2CppClass_1 _1;
  __TMP_TextParsingUtilities_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TMP_TextParsingUtilities_Il2CppVtbl vtbl;
};

class TMP_TextParsingUtilities {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C579B0;
  static inline    __TMP_TextParsingUtilities_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TMP_TextParsingUtilities_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TMP_TextParsingUtilities_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TMP_TextParsingUtilities_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_TextParsingUtilities*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::TMPro::TMP_TextParsingUtilities*> s_Instance = __CppStaticProperty<ModdingAPI::Exposed::TMPro::TMP_TextParsingUtilities*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Instance; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA7A40))();
  }
  static inline ModdingAPI::Exposed::TMPro::TMP_TextParsingUtilities* get_instance() {
    return reinterpret_cast<ModdingAPI::Exposed::TMPro::TMP_TextParsingUtilities*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA7B80))();
  }
  static inline uint32_t GetHashCode(System_String* s) {
    return reinterpret_cast<uint32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA7C20))(s);
  }
  static inline int32_t GetHashCodeCaseSensitive(System_String* s) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA7D10))(s);
  }
  static inline wchar_t ToLowerASCIIFast(wchar_t c) {
    return reinterpret_cast<wchar_t(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA7E30))(c);
  }
  static inline wchar_t ToUpperASCIIFast(wchar_t c) {
    return reinterpret_cast<wchar_t(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA7ED0))(c);
  }
  static inline uint32_t ToUpperASCIIFast(uint32_t c) {
    return reinterpret_cast<uint32_t(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA7F70))(c);
  }
  static inline uint32_t ToLowerASCIIFast(uint32_t c) {
    return reinterpret_cast<uint32_t(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA8020))(c);
  }
  static inline bool IsHighSurrogate(uint32_t c) {
    return reinterpret_cast<bool(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA80D0))(c);
  }
  static inline bool IsLowSurrogate(uint32_t c) {
    return reinterpret_cast<bool(__fastcall*)(uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA80F0))(c);
  }
};
}