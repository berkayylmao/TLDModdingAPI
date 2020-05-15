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
struct __ARC4Managed_Il2CppStaticFields {
};

struct __ARC4Managed_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_Dispose;
  VirtualInvokeData _6_get_BlockSize;
  VirtualInvokeData _7_set_BlockSize;
  VirtualInvokeData _8_get_FeedbackSize;
  VirtualInvokeData _9_get_IV;
  VirtualInvokeData _10_set_IV;
  VirtualInvokeData _11_get_Key;
  VirtualInvokeData _12_set_Key;
  VirtualInvokeData _13_get_LegalKeySizes;
  VirtualInvokeData _14_get_KeySize;
  VirtualInvokeData _15_set_KeySize;
  VirtualInvokeData _16_get_Mode;
  VirtualInvokeData _17_set_Mode;
  VirtualInvokeData _18_get_Padding;
  VirtualInvokeData _19_set_Padding;
  VirtualInvokeData _20_CreateEncryptor;
  VirtualInvokeData _21_CreateEncryptor;
  VirtualInvokeData _22_CreateDecryptor;
  VirtualInvokeData _23_CreateDecryptor;
  VirtualInvokeData _24_GenerateKey;
  VirtualInvokeData _25_GenerateIV;
  VirtualInvokeData _26_get_InputBlockSize;
  VirtualInvokeData _27_get_OutputBlockSize;
  VirtualInvokeData _28_get_CanTransformMultipleBlocks;
  VirtualInvokeData _29_TransformBlock;
  VirtualInvokeData _30_TransformFinalBlock;
};

struct __ARC4Managed_Il2CppClass {
  Il2CppClass_1 _1;
  __ARC4Managed_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ARC4Managed_Il2CppVtbl vtbl;
};

class ARC4Managed {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8E000;
  static inline    __ARC4Managed_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ARC4Managed_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ARC4Managed_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ARC4Managed_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t BlockSizeValue;
  int32_t FeedbackSizeValue;
  ModdingAPI::Exposed::System::Byte_array* IVValue;
  ModdingAPI::Exposed::System::Byte_array* KeyValue;
  ModdingAPI::Exposed::System::Security::Cryptography::KeySizes_array* LegalBlockSizesValue;
  ModdingAPI::Exposed::System::Security::Cryptography::KeySizes_array* LegalKeySizesValue;
  int32_t KeySizeValue;
  int32_t ModeValue;
  int32_t PaddingValue;
  ModdingAPI::Exposed::System::Byte_array* key;
  ModdingAPI::Exposed::System::Byte_array* state;
  uint8_t x;
  uint8_t y;
  bool m_disposed;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE72250))(this);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE723D0))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE72450))(this, disposing);
  }
  ModdingAPI::Exposed::System::Byte_array* get_Key() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE72540))(this);
  }
  void set_Key(ModdingAPI::Exposed::System::Byte_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE726A0))(this, value);
  }
  ModdingAPI::Exposed::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(ModdingAPI::Exposed::System::Byte_array* rgbKey, ModdingAPI::Exposed::System::Byte_array* rgvIV) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::ICryptoTransform*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE72830))(this, rgbKey, rgvIV);
  }
  ModdingAPI::Exposed::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(ModdingAPI::Exposed::System::Byte_array* rgbKey, ModdingAPI::Exposed::System::Byte_array* rgvIV) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::ICryptoTransform*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE72860))(this, rgbKey, rgvIV);
  }
  void GenerateIV() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE728A0))(this);
  }
  void GenerateKey() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE72940))(this);
  }
  bool get_CanTransformMultipleBlocks() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this);
  }
  int32_t get_InputBlockSize() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4114C0))(this);
  }
  int32_t get_OutputBlockSize() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4114C0))(this);
  }
  void KeySetup(ModdingAPI::Exposed::System::Byte_array* key) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE72960))(this, key);
  }
  void CheckInput(ModdingAPI::Exposed::System::Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE72AD0))(this, inputBuffer, inputOffset, inputCount);
  }
  int32_t TransformBlock(ModdingAPI::Exposed::System::Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, ModdingAPI::Exposed::System::Byte_array* outputBuffer, int32_t outputOffset) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE72C60))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
  }
  int32_t InternalTransformBlock(ModdingAPI::Exposed::System::Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, ModdingAPI::Exposed::System::Byte_array* outputBuffer, int32_t outputOffset) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE72E10))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
  }
  ModdingAPI::Exposed::System::Byte_array* TransformFinalBlock(ModdingAPI::Exposed::System::Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Mono::Security::Cryptography::ARC4Managed*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE73070))(this, inputBuffer, inputOffset, inputCount);
  }
};
}