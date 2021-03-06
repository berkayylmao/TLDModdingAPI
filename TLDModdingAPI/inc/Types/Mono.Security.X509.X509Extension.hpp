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


namespace ModdingAPI::Exposed::Mono::Security::X509 {
struct __X509Extension_Il2CppStaticFields {
};

struct __X509Extension_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Decode;
};

struct __X509Extension_Il2CppClass {
  Il2CppClass_1 _1;
  __X509Extension_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __X509Extension_Il2CppVtbl vtbl;
};

class X509Extension {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8D240;
  static inline    __X509Extension_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __X509Extension_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__X509Extension_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __X509Extension_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* extnOid;
  bool extnCritical;
  ModdingAPI::Exposed::Mono::Security::ASN1* extnValue;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::Mono::Security::ASN1* asn1) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::X509Extension*, ModdingAPI::Exposed::Mono::Security::ASN1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE8F2E0))(this, asn1);
  }
  void Decode() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::X509Extension*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  bool Equals(Il2CppObject* obj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::X509Extension*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE8F700))(this, obj);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::X509Extension*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA42660))(this);
  }
  void WriteLine(ModdingAPI::Exposed::System::Text::StringBuilder* sb, int32_t n, int32_t pos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::X509Extension*, ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE8F8F0))(this, sb, n, pos);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::X509::X509Extension*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE8FB70))(this);
  }
};
}