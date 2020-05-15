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


namespace ModdingAPI::Exposed::Mono::Security::Protocol::Ntlm {
struct __ChallengeResponse2_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Byte_array* magic;
  ModdingAPI::Exposed::System::Byte_array* nullEncMagic;
};

struct __ChallengeResponse2_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ChallengeResponse2_Il2CppClass {
  Il2CppClass_1 _1;
  __ChallengeResponse2_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ChallengeResponse2_Il2CppVtbl vtbl;
};

class ChallengeResponse2 {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C96718;
  static inline    __ChallengeResponse2_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ChallengeResponse2_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ChallengeResponse2_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ChallengeResponse2_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> magic = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->magic; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> nullEncMagic = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->nullEncMagic; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Byte_array* Compute_LM(System_String* password, ModdingAPI::Exposed::System::Byte_array* challenge) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C5440))(password, challenge);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* Compute_NTLM_Password(System_String* password) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C5760))(password);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* Compute_NTLM(System_String* password, ModdingAPI::Exposed::System::Byte_array* challenge) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C58C0))(password, challenge);
  }
  static inline void Compute_NTLMv2_Session(System_String* password, ModdingAPI::Exposed::System::Byte_array* challenge, ModdingAPI::Exposed::System::Byte_array* lm, ModdingAPI::Exposed::System::Byte_array* ntlm) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C5980))(password, challenge, lm, ntlm);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* Compute_NTLMv2(ModdingAPI::Exposed::Mono::Security::Protocol::Ntlm::Type2Message* type2, System_String* username, System_String* password, System_String* domain) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Protocol::Ntlm::Type2Message*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C5BC0))(type2, username, password, domain);
  }
  static inline void Compute(ModdingAPI::Exposed::Mono::Security::Protocol::Ntlm::Type2Message* type2, int32_t level, System_String* username, System_String* password, System_String* domain, ModdingAPI::Exposed::System::Byte_array* lm, ModdingAPI::Exposed::System::Byte_array* ntlm) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Protocol::Ntlm::Type2Message*, int32_t, System_String*, System_String*, System_String*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C6240))(type2, level, username, password, domain, lm, ntlm);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* GetResponse(ModdingAPI::Exposed::System::Byte_array* challenge, ModdingAPI::Exposed::System::Byte_array* pwd) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C64D0))(challenge, pwd);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* PrepareDESKey(ModdingAPI::Exposed::System::Byte_array* key56bits, int32_t position) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C6730))(key56bits, position);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* PasswordToKey(System_String* password, int32_t position) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C6B10))(password, position);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x11C6CE0))();
  }
};
}