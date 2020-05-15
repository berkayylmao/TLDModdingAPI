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
struct __TokenizerStream_Il2CppStaticFields {
};

struct __TokenizerStream_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TokenizerStream_Il2CppClass {
  Il2CppClass_1 _1;
  __TokenizerStream_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TokenizerStream_Il2CppVtbl vtbl;
};

class TokenizerStream {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C48118;
  static inline    __TokenizerStream_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TokenizerStream_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TokenizerStream_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TokenizerStream_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t m_countTokens;
  ModdingAPI::Exposed::System::Security::Util::TokenizerShortBlock* m_headTokens;
  ModdingAPI::Exposed::System::Security::Util::TokenizerShortBlock* m_lastTokens;
  ModdingAPI::Exposed::System::Security::Util::TokenizerShortBlock* m_currentTokens;
  int32_t m_indexTokens;
  ModdingAPI::Exposed::System::Security::Util::TokenizerStringBlock* m_headStrings;
  ModdingAPI::Exposed::System::Security::Util::TokenizerStringBlock* m_currentStrings;
  int32_t m_indexStrings;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::TokenizerStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x950720))(this);
  }
  void AddToken(int16_t token) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::TokenizerStream*, int16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x950950))(this, token);
  }
  void AddString(System_String* str) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::TokenizerStream*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x950B50))(this, str);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::TokenizerStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x950D80))(this);
  }
  int16_t GetNextFullToken() {
    return reinterpret_cast<int16_t(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::TokenizerStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x950DA0))(this);
  }
  int16_t GetNextToken() {
    return reinterpret_cast<int16_t(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::TokenizerStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x950E30))(this);
  }
  System_String* GetNextString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::TokenizerStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x950E50))(this);
  }
  void ThrowAwayNextString() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::TokenizerStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x950EE0))(this);
  }
  void TagLastToken(int16_t tag) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::TokenizerStream*, int16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x950EF0))(this, tag);
  }
  int32_t GetTokenCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::TokenizerStream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311060))(this);
  }
  void GoToPosition(int32_t position) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Util::TokenizerStream*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x950FB0))(this, position);
  }
};
}