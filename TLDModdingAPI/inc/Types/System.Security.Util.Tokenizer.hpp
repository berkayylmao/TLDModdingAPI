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


namespace ModdingAPI::Exposed::System::Security::Util {
struct __Tokenizer_Il2CppStaticFields {
};

struct __Tokenizer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Tokenizer_Il2CppClass {
  Il2CppClass_1 _1;
  __Tokenizer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Tokenizer_Il2CppVtbl vtbl;
};

class Tokenizer {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C48540;
  static inline    __Tokenizer_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Tokenizer_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Tokenizer_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Tokenizer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t LineNo;
  int32_t _inProcessingTag;
  ModdingAPI::Exposed::System::Byte_array* _inBytes;
  ModdingAPI::Exposed::System::Char_array* _inChars;
  System_String* _inString;
  int32_t _inIndex;
  int32_t _inSize;
  int32_t _inSavedCharacter;
  int32_t _inTokenSource;
  ModdingAPI::Exposed::System::Security::Util::Tokenizer::ITokenReader* _inTokenReader;
  ModdingAPI::Exposed::System::Security::Util::Tokenizer::StringMaker* _maker;
  ModdingAPI::Exposed::System::String_array* _searchStrings;
  ModdingAPI::Exposed::System::String_array* _replaceStrings;
  int32_t _inNestedIndex;
  int32_t _inNestedSize;
  System_String* _inNestedString;

  // Member methods:
  void BasicInitialization() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::Tokenizer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x94EB50))(this);
  }
  void Recycle() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::Tokenizer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x94EC20))(this);
  }
  void ::ctor(System_String* input) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::Tokenizer*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x94ECC0))(this, input);
  }
  void ChangeFormat(ModdingAPI::Exposed::System::Text::Encoding* encoding) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::Tokenizer*, ModdingAPI::Exposed::System::Text::Encoding*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x94EDB0))(this, encoding);
  }
  void GetTokens(ModdingAPI::Exposed::System::Security::Util::TokenizerStream* stream, int32_t maxNum, bool endAfterKet) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::Tokenizer*, ModdingAPI::Exposed::System::Security::Util::TokenizerStream*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x94F210))(this, stream, maxNum, endAfterKet);
  }
  System_String* GetStringToken() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::Tokenizer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x94FF30))(this);
  }
};
}