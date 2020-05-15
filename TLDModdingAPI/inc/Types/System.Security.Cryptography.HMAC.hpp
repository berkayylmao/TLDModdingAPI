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


namespace ModdingAPI::Exposed::System::Security::Cryptography {
struct __HMAC_Il2CppStaticFields {
};

struct __HMAC_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _8_TransformBlock;
  VirtualInvokeData _9_TransformFinalBlock;
  VirtualInvokeData _10_get_HashSize;
  VirtualInvokeData _11_get_Hash;
  VirtualInvokeData _12_get_InputBlockSize;
  VirtualInvokeData _13_get_OutputBlockSize;
  VirtualInvokeData _14_get_CanTransformMultipleBlocks;
  VirtualInvokeData _15_Dispose;
  VirtualInvokeData _16_Initialize;
  VirtualInvokeData _17_HashCore;
  VirtualInvokeData _18_HashFinal;
  VirtualInvokeData _19_get_Key;
  VirtualInvokeData _20_set_Key;
};

struct __HMAC_Il2CppClass {
  Il2CppClass_1 _1;
  __HMAC_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __HMAC_Il2CppVtbl vtbl;
};

class HMAC {
public:
  // Il2Cpp fields:
  __HMAC_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t HashSizeValue;
  ModdingAPI::Exposed::System::Byte_array* HashValue;
  int32_t State;
  bool HashAlgorithm_m_bDisposed;
  ModdingAPI::Exposed::System::Byte_array* KeyValue;
  int32_t blockSizeValue;
  System_String* m_hashName;
  ModdingAPI::Exposed::System::Security::Cryptography::HashAlgorithm* m_hash1;
  ModdingAPI::Exposed::System::Security::Cryptography::HashAlgorithm* m_hash2;
  ModdingAPI::Exposed::System::Byte_array* m_inner;
  ModdingAPI::Exposed::System::Byte_array* m_outer;
  bool m_hashing;

  // Member methods:
  int32_t get_BlockSizeValue() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::HMAC*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D870))(this);
  }
  void set_BlockSizeValue(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::HMAC*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31DD70))(this, value);
  }
  void UpdateIOPadBuffers() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::HMAC*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD5160))(this);
  }
  void InitializeKey(ModdingAPI::Exposed::System::Byte_array* key) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::HMAC*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD5380))(this, key);
  }
  ModdingAPI::Exposed::System::Byte_array* get_Key() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::HMAC*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD5510))(this);
  }
  void set_Key(ModdingAPI::Exposed::System::Byte_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::HMAC*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD5650))(this, value);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::HMAC*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD5860))(this);
  }
  void HashCore(ModdingAPI::Exposed::System::Byte_array* rgb, int32_t ib, int32_t cb) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::HMAC*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD58C0))(this, rgb, ib, cb);
  }
  ModdingAPI::Exposed::System::Byte_array* HashFinal() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::HMAC*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD5970))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::HMAC*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD5B70))(this, disposing);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::HMAC*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD5CA0))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Security::Cryptography::HMAC* Create() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::HMAC*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD5720))();
  }
};
}