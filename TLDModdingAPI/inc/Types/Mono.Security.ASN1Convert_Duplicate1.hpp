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
#include "ModdingAPI.Exposed.System.DateTime.hpp"


namespace ModdingAPI::Exposed::Mono::Security {
struct __ASN1Convert_Duplicate1_Il2CppStaticFields {
};

struct __ASN1Convert_Duplicate1_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ASN1Convert_Duplicate1_Il2CppClass {
  Il2CppClass_1 _1;
  __ASN1Convert_Duplicate1_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ASN1Convert_Duplicate1_Il2CppVtbl vtbl;
};

class ASN1Convert_Duplicate1 {
public:
  // Il2Cpp fields:
  __ASN1Convert_Duplicate1_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1* FromInt32(int32_t value) {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BA9C0))(value);
  }
  static inline ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1* FromOid(System_String* oid) {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BACC0))(oid);
  }
  static inline ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1* FromUnsignedBigInteger(ModdingAPI::Exposed::System::Byte_array* big) {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BAE50))(big);
  }
  static inline int32_t ToInt32(ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1* asn1) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BB030))(asn1);
  }
  static inline System_String* ToOid(ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1* asn1) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BB1A0))(asn1);
  }
  static inline ModdingAPI::Exposed::System::DateTime ToDateTime(ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1* time) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::Mono::Security::ASN1_Duplicate1*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11BB500))(time);
  }
};
}