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
#include "ModdingAPI.Exposed.System.Security.Cryptography.RSAParameters.hpp"


namespace ModdingAPI::Exposed::Mono::Security::Cryptography {
struct __RSAManaged_Il2CppStaticFields {
};

struct __RSAManaged_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_Dispose;
  VirtualInvokeData _6_get_KeySize;
  VirtualInvokeData _7_set_KeySize;
  VirtualInvokeData _8_FromXmlString;
  VirtualInvokeData _9_ToXmlString;
  VirtualInvokeData _10_ExportParameters;
  VirtualInvokeData _11_ImportParameters;
};

struct __RSAManaged_Il2CppClass {
  Il2CppClass_1 _1;
  __RSAManaged_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RSAManaged_Il2CppVtbl vtbl;
};

class RSAManaged {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C67FE8;
  static inline    __RSAManaged_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RSAManaged_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RSAManaged_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RSAManaged_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t KeySizeValue;
  ModdingAPI::Exposed::System::Security::Cryptography::KeySizes_array* LegalKeySizesValue;
  bool isCRTpossible;
  bool keyBlinding;
  bool keypairGenerated;
  bool m_disposed;
  ModdingAPI::Exposed::Mono::Math::BigInteger* d;
  ModdingAPI::Exposed::Mono::Math::BigInteger* p;
  ModdingAPI::Exposed::Mono::Math::BigInteger* q;
  ModdingAPI::Exposed::Mono::Math::BigInteger* dp;
  ModdingAPI::Exposed::Mono::Math::BigInteger* dq;
  ModdingAPI::Exposed::Mono::Math::BigInteger* qInv;
  ModdingAPI::Exposed::Mono::Math::BigInteger* n;
  ModdingAPI::Exposed::Mono::Math::BigInteger* e;
  ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler* KeyGenerated;

  // Member methods:
  void ::ctor(int32_t keySize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE7C400))(this, keySize);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE7C5E0))(this);
  }
  void GenerateKeyPair() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE7C660))(this);
  }
  int32_t get_KeySize() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE7CB00))(this);
  }
  bool get_PublicOnly() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE7CC00))(this);
  }
  ModdingAPI::Exposed::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::RSAParameters(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE7CD00))(this, includePrivateParameters);
  }
  void ImportParameters(ModdingAPI::Exposed::System::Security::Cryptography::RSAParameters parameters) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged*, ModdingAPI::Exposed::System::Security::Cryptography::RSAParameters)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE7D120))(this, parameters);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE7DD90))(this, disposing);
  }
  void add_KeyGenerated(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged*, ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE7E0C0))(this, value);
  }
  void remove_KeyGenerated(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged*, ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged::KeyGeneratedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE7E1B0))(this, value);
  }
  System_String* ToXmlString(bool includePrivateParameters) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE7E2A0))(this, includePrivateParameters);
  }
  ModdingAPI::Exposed::System::Byte_array* GetPaddedValue(ModdingAPI::Exposed::Mono::Math::BigInteger* value, int32_t length) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged*, ModdingAPI::Exposed::Mono::Math::BigInteger*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE7E880))(this, value, length);
  }
};
}