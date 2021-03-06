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
struct __Utils_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Security::Cryptography::RNGCryptoServiceProvider* _rng;
};

struct __Utils_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Utils_Il2CppClass {
  Il2CppClass_1 _1;
  __Utils_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Utils_Il2CppVtbl vtbl;
};

class Utils {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4AB18;
  static inline    __Utils_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Utils_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Utils_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Utils_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Security::Cryptography::RNGCryptoServiceProvider*> _rng = __CppStaticProperty<ModdingAPI::Exposed::System::Security::Cryptography::RNGCryptoServiceProvider*>(
   []() { return &GetStaticClassInstance()->pStaticFields->_rng; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))();
  }
  static inline ModdingAPI::Exposed::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Security::Cryptography::RNGCryptoServiceProvider*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x9430B0))();
  }
  static inline ModdingAPI::Exposed::System::Byte_array* GenerateRandom(int32_t keySize) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9432A0))(keySize);
  }
  static inline bool HasAlgorithm(int32_t dwCalg, int32_t dwKeySize) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(dwCalg, dwKeySize);
  }
  static inline System_String* DiscardWhiteSpaces(System_String* inputBuffer) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x943370))(inputBuffer);
  }
  static inline System_String* DiscardWhiteSpaces(System_String* inputBuffer, int32_t inputOffset, int32_t inputCount) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x943430))(inputBuffer, inputOffset, inputCount);
  }
  static inline int32_t ConvertByteArrayToInt(ModdingAPI::Exposed::System::Byte_array* input) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x943600))(input);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* ConvertIntToByteArray(int32_t dwInput) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x943660))(dwInput);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* FixupKeyParity(ModdingAPI::Exposed::System::Byte_array* key) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x943800))(key);
  }
  static inline void DWORDFromLittleEndian(uint32_t* x, int32_t digits, uint8_t* block) {
    reinterpret_cast<void(__fastcall*)(uint32_t*, int32_t, uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x943950))(x, digits, block);
  }
  static inline void DWORDToLittleEndian(ModdingAPI::Exposed::System::Byte_array* block, ModdingAPI::Exposed::System::UInt32_array* x, int32_t digits) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::UInt32_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9439B0))(block, x, digits);
  }
  static inline void DWORDFromBigEndian(uint32_t* x, int32_t digits, uint8_t* block) {
    reinterpret_cast<void(__fastcall*)(uint32_t*, int32_t, uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x943B20))(x, digits, block);
  }
  static inline void DWORDToBigEndian(ModdingAPI::Exposed::System::Byte_array* block, ModdingAPI::Exposed::System::UInt32_array* x, int32_t digits) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::UInt32_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x943B80))(block, x, digits);
  }
  static inline void QuadWordFromBigEndian(uint64_t* x, int32_t digits, uint8_t* block) {
    reinterpret_cast<void(__fastcall*)(uint64_t*, int32_t, uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x943CF0))(x, digits, block);
  }
  static inline void QuadWordToBigEndian(ModdingAPI::Exposed::System::Byte_array* block, ModdingAPI::Exposed::System::UInt64_array* x, int32_t digits) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::UInt64_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x943D80))(block, x, digits);
  }
  static inline bool _ProduceLegacyHmacValues() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))();
  }
};
}