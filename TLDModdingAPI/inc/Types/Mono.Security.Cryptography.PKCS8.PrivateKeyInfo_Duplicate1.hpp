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
#include "ModdingAPI::Exposed::System::Security::Cryptography::DSAParameters.hpp"


namespace ModdingAPI::Exposed::Mono::Security::Cryptography::PKCS8 {
struct __PrivateKeyInfo_Duplicate1_Il2CppStaticFields {
};

struct __PrivateKeyInfo_Duplicate1_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __PrivateKeyInfo_Duplicate1_Il2CppClass {
  Il2CppClass_1 _1;
  __PrivateKeyInfo_Duplicate1_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PrivateKeyInfo_Duplicate1_Il2CppVtbl vtbl;
};

class PrivateKeyInfo_Duplicate1 {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C95248;
  static inline    __PrivateKeyInfo_Duplicate1_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __PrivateKeyInfo_Duplicate1_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PrivateKeyInfo_Duplicate1_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PrivateKeyInfo_Duplicate1_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t _version;
  System_String* _algorithm;
  ModdingAPI::Exposed::System::Byte_array* _key;
  ModdingAPI::Exposed::System::Collections::ArrayList* _list;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::PKCS8::PrivateKeyInfo_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BE460))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Byte_array* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::PKCS8::PrivateKeyInfo_Duplicate1*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BE5B0))(this, data);
  }
  ModdingAPI::Exposed::System::Byte_array* get_PrivateKey() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::PKCS8::PrivateKeyInfo_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BE710))(this);
  }
  void Decode(ModdingAPI::Exposed::System::Byte_array* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::PKCS8::PrivateKeyInfo_Duplicate1*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BE860))(this, data);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Byte_array* RemoveLeadingZero(ModdingAPI::Exposed::System::Byte_array* bigInt) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BEC20))(bigInt);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* Normalize(ModdingAPI::Exposed::System::Byte_array* bigInt, int32_t length) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BED20))(bigInt, length);
  }
  static inline ModdingAPI::Exposed::System::Security::Cryptography::RSA* DecodeRSA(ModdingAPI::Exposed::System::Byte_array* keypair) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::RSA*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BEE10))(keypair);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* Encode(ModdingAPI::Exposed::System::Security::Cryptography::RSA* rsa) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::RSA*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BF4C0))(rsa);
  }
  static inline ModdingAPI::Exposed::System::Security::Cryptography::DSA* DecodeDSA(ModdingAPI::Exposed::System::Byte_array* privateKey, ModdingAPI::Exposed::System::Security::Cryptography::DSAParameters dsaParameters) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::DSA*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::Security::Cryptography::DSAParameters)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BF830))(privateKey, dsaParameters);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* Encode(ModdingAPI::Exposed::System::Security::Cryptography::DSA* dsa) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::DSA*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BFA50))(dsa);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* Encode(ModdingAPI::Exposed::System::Security::Cryptography::AsymmetricAlgorithm* aa) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::AsymmetricAlgorithm*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BFAC0))(aa);
  }
};
}