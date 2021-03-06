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


namespace ModdingAPI::Exposed::Mono::Security::X509::PKCS12 {
struct __DeriveBytes_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Byte_array* keyDiversifier;
  ModdingAPI::Exposed::System::Byte_array* ivDiversifier;
  ModdingAPI::Exposed::System::Byte_array* macDiversifier;
};

struct __DeriveBytes_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __DeriveBytes_Il2CppClass {
  Il2CppClass_1 _1;
  __DeriveBytes_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DeriveBytes_Il2CppVtbl vtbl;
};

class DeriveBytes {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8D6F8;
  static inline    __DeriveBytes_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __DeriveBytes_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DeriveBytes_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __DeriveBytes_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* _hashName;
  int32_t _iterations;
  ModdingAPI::Exposed::System::Byte_array* _password;
  ModdingAPI::Exposed::System::Byte_array* _salt;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12::DeriveBytes*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void set_HashName(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12::DeriveBytes*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, value);
  }
  void set_IterationCount(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12::DeriveBytes*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311090))(this, value);
  }
  void set_Password(ModdingAPI::Exposed::System::Byte_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12::DeriveBytes*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE8AEC0))(this, value);
  }
  void set_Salt(ModdingAPI::Exposed::System::Byte_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12::DeriveBytes*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE8B020))(this, value);
  }
  void Adjust(ModdingAPI::Exposed::System::Byte_array* a, int32_t aOff, ModdingAPI::Exposed::System::Byte_array* b) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12::DeriveBytes*, ModdingAPI::Exposed::System::Byte_array*, int32_t, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE8B170))(this, a, aOff, b);
  }
  ModdingAPI::Exposed::System::Byte_array* Derive(ModdingAPI::Exposed::System::Byte_array* diversifier, int32_t n) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12::DeriveBytes*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE8B270))(this, diversifier, n);
  }
  ModdingAPI::Exposed::System::Byte_array* DeriveKey(int32_t size) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12::DeriveBytes*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE8B7A0))(this, size);
  }
  ModdingAPI::Exposed::System::Byte_array* DeriveIV(int32_t size) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12::DeriveBytes*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE8B860))(this, size);
  }
  ModdingAPI::Exposed::System::Byte_array* DeriveMAC(int32_t size) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::PKCS12::DeriveBytes*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE8B920))(this, size);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> keyDiversifier = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->keyDiversifier; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> ivDiversifier = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->ivDiversifier; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> macDiversifier = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->macDiversifier; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xE8B9E0))();
  }
};
}