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


namespace ModdingAPI::Exposed::Mono::Security::Cryptography {
struct __MD4Managed_Il2CppStaticFields {
};

struct __MD4Managed_Il2CppVtbl {
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
};

struct __MD4Managed_Il2CppClass {
  Il2CppClass_1 _1;
  __MD4Managed_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MD4Managed_Il2CppVtbl vtbl;
};

class MD4Managed {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8F160;
  static inline    __MD4Managed_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MD4Managed_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MD4Managed_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MD4Managed_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t HashSizeValue;
  ModdingAPI::Exposed::System::Byte_array* HashValue;
  int32_t State;
  bool HashAlgorithm_m_bDisposed;
  ModdingAPI::Exposed::System::UInt32_array* state;
  ModdingAPI::Exposed::System::Byte_array* buffer;
  ModdingAPI::Exposed::System::UInt32_array* count;
  ModdingAPI::Exposed::System::UInt32_array* x;
  ModdingAPI::Exposed::System::Byte_array* digest;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78710))(this);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78810))(this);
  }
  void HashCore(ModdingAPI::Exposed::System::Byte_array* array, int32_t ibStart, int32_t cbSize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78980))(this, array, ibStart, cbSize);
  }
  ModdingAPI::Exposed::System::Byte_array* HashFinal() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78B70))(this);
  }
  ModdingAPI::Exposed::System::Byte_array* Padding(int32_t nLength) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78D80))(this, nLength);
  }
  uint32_t F(uint32_t x, uint32_t y, uint32_t z) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*, uint32_t, uint32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78E30))(this, x, y, z);
  }
  uint32_t G(uint32_t x, uint32_t y, uint32_t z) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*, uint32_t, uint32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78E40))(this, x, y, z);
  }
  uint32_t H(uint32_t x, uint32_t y, uint32_t z) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*, uint32_t, uint32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78E50))(this, x, y, z);
  }
  uint32_t ROL(uint32_t x, uint8_t n) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*, uint32_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78E60))(this, x, n);
  }
  void FF(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78E80))(this, a, b, c, d, x, s);
  }
  void GG(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78EC0))(this, a, b, c, d, x, s);
  }
  void HH(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78F10))(this, a, b, c, d, x, s);
  }
  void Encode(ModdingAPI::Exposed::System::Byte_array* output, ModdingAPI::Exposed::System::UInt32_array* input) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::UInt32_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE78F60))(this, output, input);
  }
  void Decode(ModdingAPI::Exposed::System::UInt32_array* output, ModdingAPI::Exposed::System::Byte_array* input, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*, ModdingAPI::Exposed::System::UInt32_array*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE790C0))(this, output, input, index);
  }
  void MD4Transform(ModdingAPI::Exposed::System::UInt32_array* state, ModdingAPI::Exposed::System::Byte_array* block, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::MD4Managed*, ModdingAPI::Exposed::System::UInt32_array*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE791D0))(this, state, block, index);
  }
};
}