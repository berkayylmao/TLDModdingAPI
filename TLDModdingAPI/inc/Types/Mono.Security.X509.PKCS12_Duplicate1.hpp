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
#include "ModdingAPI.Exposed.System.Security.Cryptography.DSAParameters.hpp"


namespace ModdingAPI::Exposed::Mono::Security::X509 {
struct __PKCS12_Duplicate1_Il2CppStaticFields {
  int32_t password_max_length;
};

struct __PKCS12_Duplicate1_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Clone;
};

struct __PKCS12_Duplicate1_Il2CppClass {
  Il2CppClass_1 _1;
  __PKCS12_Duplicate1_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PKCS12_Duplicate1_Il2CppVtbl vtbl;
};

class PKCS12_Duplicate1 {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C34678;
  static inline    __PKCS12_Duplicate1_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __PKCS12_Duplicate1_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PKCS12_Duplicate1_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PKCS12_Duplicate1_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Byte_array* _password;
  ModdingAPI::Exposed::System::Collections::ArrayList* _keyBags;
  ModdingAPI::Exposed::System::Collections::ArrayList* _secretBags;
  ModdingAPI::Exposed::Mono::Security::X509::X509CertificateCollection_Duplicate1* _certs;
  bool _keyBagsChanged;
  bool _secretBagsChanged;
  bool _certsChanged;
  int32_t _iterations;
  ModdingAPI::Exposed::System::Collections::ArrayList* _safeBags;
  ModdingAPI::Exposed::System::Security::Cryptography::RandomNumberGenerator* _rng;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C98D0))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Byte_array* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C9C80))(this, data);
  }
  void ::ctor(ModdingAPI::Exposed::System::Byte_array* data, System_String* password) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::System::Byte_array*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C9D40))(this, data, password);
  }
  void Decode(ModdingAPI::Exposed::System::Byte_array* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C9D90))(this, data);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CAB10))(this);
  }
  void set_Password(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CABB0))(this, value);
  }
  int32_t get_IterationCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D880))(this);
  }
  void set_IterationCount(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D890))(this, value);
  }
  ModdingAPI::Exposed::System::Collections::ArrayList* get_Keys() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::ArrayList*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CAD50))(this);
  }
  ModdingAPI::Exposed::Mono::Security::X509::X509CertificateCollection_Duplicate1* get_Certificates() {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::X509::X509CertificateCollection_Duplicate1*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CB640))(this);
  }
  ModdingAPI::Exposed::System::Security::Cryptography::RandomNumberGenerator* get_RNG() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::RandomNumberGenerator*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE83740))(this);
  }
  bool Compare(ModdingAPI::Exposed::System::Byte_array* expected, ModdingAPI::Exposed::System::Byte_array* actual) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE83770))(this, expected, actual);
  }
  ModdingAPI::Exposed::System::Security::Cryptography::SymmetricAlgorithm* GetSymmetricAlgorithm(System_String* algorithmOid, ModdingAPI::Exposed::System::Byte_array* salt, int32_t iterationCount) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::SymmetricAlgorithm*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, System_String*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CBB80))(this, algorithmOid, salt, iterationCount);
  }
  ModdingAPI::Exposed::System::Byte_array* Decrypt(System_String* algorithmOid, ModdingAPI::Exposed::System::Byte_array* salt, int32_t iterationCount, ModdingAPI::Exposed::System::Byte_array* encryptedData) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, System_String*, ModdingAPI::Exposed::System::Byte_array*, int32_t, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CC440))(this, algorithmOid, salt, iterationCount, encryptedData);
  }
  ModdingAPI::Exposed::System::Byte_array* Decrypt(ModdingAPI::Exposed::Mono::Security::PKCS7::EncryptedData_Duplicate1* ed) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::Mono::Security::PKCS7::EncryptedData_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CC5E0))(this, ed);
  }
  ModdingAPI::Exposed::System::Byte_array* Encrypt(System_String* algorithmOid, ModdingAPI::Exposed::System::Byte_array* salt, int32_t iterationCount, ModdingAPI::Exposed::System::Byte_array* data) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, System_String*, ModdingAPI::Exposed::System::Byte_array*, int32_t, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CC800))(this, algorithmOid, salt, iterationCount, data);
  }
  ModdingAPI::Exposed::System::Security::Cryptography::DSAParameters GetExistingParameters(bool found) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::DSAParameters(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CC9A0))(this, found);
  }
  void AddPrivateKey(ModdingAPI::Exposed::Mono::Security::Cryptography::PKCS8::PrivateKeyInfo_Duplicate1* pki) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::Mono::Security::Cryptography::PKCS8::PrivateKeyInfo_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CCC30))(this, pki);
  }
  void ReadSafeBag(ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1* safeBag) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CCE10))(this, safeBag);
  }
  ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1* CertificateSafeBag(ModdingAPI::Exposed::Mono::Security::X509::X509Certificate_Duplicate1* x509, ModdingAPI::Exposed::System::Collections::IDictionary* attributes) {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::Mono::Security::X509::X509Certificate_Duplicate1*, ModdingAPI::Exposed::System::Collections::IDictionary*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CDA90))(this, x509, attributes);
  }
  ModdingAPI::Exposed::System::Byte_array* MAC(ModdingAPI::Exposed::System::Byte_array* password, ModdingAPI::Exposed::System::Byte_array* salt, int32_t iterations, ModdingAPI::Exposed::System::Byte_array* data) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::Byte_array*, int32_t, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CE9C0))(this, password, salt, iterations, data);
  }
  ModdingAPI::Exposed::System::Byte_array* GetBytes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11CEC90))(this);
  }
  ModdingAPI::Exposed::Mono::Security::PKCS7::ContentInfo_Duplicate1* EncryptedContentInfo(ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1* safeBags, System_String* algorithmOid) {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::PKCS7::ContentInfo_Duplicate1*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11D1770))(this, safeBags, algorithmOid);
  }
  void AddCertificate(ModdingAPI::Exposed::Mono::Security::X509::X509Certificate_Duplicate1* cert) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::Mono::Security::X509::X509Certificate_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11D2060))(this, cert);
  }
  void AddCertificate(ModdingAPI::Exposed::Mono::Security::X509::X509Certificate_Duplicate1* cert, ModdingAPI::Exposed::System::Collections::IDictionary* attributes) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::Mono::Security::X509::X509Certificate_Duplicate1*, ModdingAPI::Exposed::System::Collections::IDictionary*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11D2070))(this, cert, attributes);
  }
  void RemoveCertificate(ModdingAPI::Exposed::Mono::Security::X509::X509Certificate_Duplicate1* cert) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::Mono::Security::X509::X509Certificate_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11D25E0))(this, cert);
  }
  void RemoveCertificate(ModdingAPI::Exposed::Mono::Security::X509::X509Certificate_Duplicate1* cert, ModdingAPI::Exposed::System::Collections::IDictionary* attrs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*, ModdingAPI::Exposed::Mono::Security::X509::X509Certificate_Duplicate1*, ModdingAPI::Exposed::System::Collections::IDictionary*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11D25F0))(this, cert, attrs);
  }
  Il2CppObject* Clone() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11D2C80))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<int32_t> password_max_length = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->password_max_length; }
  );

  // Static methods:
  static inline int32_t get_MaximumPasswordLength() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11D2F90))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11D3030))();
  }
};
}