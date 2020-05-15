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


namespace ModdingAPI::Exposed::System::Security::Cryptography {
struct __RSACryptoServiceProvider_Il2CppStaticFields {
  int32_t s_UseMachineKeyStore;
};

struct __RSACryptoServiceProvider_Il2CppVtbl {
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

struct __RSACryptoServiceProvider_Il2CppClass {
  Il2CppClass_1 _1;
  __RSACryptoServiceProvider_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RSACryptoServiceProvider_Il2CppVtbl vtbl;
};

class RSACryptoServiceProvider {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C35B00;
  static inline    __RSACryptoServiceProvider_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RSACryptoServiceProvider_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RSACryptoServiceProvider_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RSACryptoServiceProvider_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t KeySizeValue;
  ModdingAPI::Exposed::System::Security::Cryptography::KeySizes_array* LegalKeySizesValue;
  ModdingAPI::Exposed::Mono::Security::Cryptography::KeyPairPersistence* store;
  bool persistKey;
  bool persisted;
  bool privateKeyExportable;
  bool m_disposed;
  ModdingAPI::Exposed::Mono::Security::Cryptography::RSAManaged* rsa;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDE1B70))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Security::Cryptography::CspParameters* parameters) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*, ModdingAPI::Exposed::System::Security::Cryptography::CspParameters*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDE1B90))(this, parameters);
  }
  void ::ctor(int32_t dwKeySize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDE1BE0))(this, dwKeySize);
  }
  void ::ctor(int32_t dwKeySize, ModdingAPI::Exposed::System::Security::Cryptography::CspParameters* parameters) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*, int32_t, ModdingAPI::Exposed::System::Security::Cryptography::CspParameters*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDE1BF0))(this, dwKeySize, parameters);
  }
  void Common(int32_t dwKeySize, bool parameters) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDE1C40))(this, dwKeySize, parameters);
  }
  void Common(ModdingAPI::Exposed::System::Security::Cryptography::CspParameters* p) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*, ModdingAPI::Exposed::System::Security::Cryptography::CspParameters*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDE2330))(this, p);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDE2530))(this);
  }
  int32_t get_KeySize() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDE25B0))(this);
  }
  bool get_PublicOnly() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDE25E0))(this);
  }
  ModdingAPI::Exposed::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::RSAParameters(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDE2600))(this, includePrivateParameters);
  }
  void ImportParameters(ModdingAPI::Exposed::System::Security::Cryptography::RSAParameters parameters) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*, ModdingAPI::Exposed::System::Security::Cryptography::RSAParameters)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD4E40))(this, parameters);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD4E90))(this, disposing);
  }
  void OnKeyGenerated(Il2CppObject* sender, ModdingAPI::Exposed::System::EventArgs* e) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSACryptoServiceProvider*, Il2CppObject*, ModdingAPI::Exposed::System::EventArgs*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDE27F0))(this, sender, e);
  }

  // Static fields:
  static inline __CppStaticProperty<int32_t> s_UseMachineKeyStore = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_UseMachineKeyStore; }
  );

  // Static methods:
  static inline bool get_UseMachineKeyStore() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xDE1AC0))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))();
  }
};
}