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
struct __MD5CryptoServiceProvider_Il2CppStaticFields {
  ModdingAPI::Exposed::System::UInt32_array* K;
};

struct __MD5CryptoServiceProvider_Il2CppVtbl {
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

struct __MD5CryptoServiceProvider_Il2CppClass {
  Il2CppClass_1 _1;
  __MD5CryptoServiceProvider_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MD5CryptoServiceProvider_Il2CppVtbl vtbl;
};

class MD5CryptoServiceProvider {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C68C60;
  static inline    __MD5CryptoServiceProvider_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MD5CryptoServiceProvider_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MD5CryptoServiceProvider_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MD5CryptoServiceProvider_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t HashSizeValue;
  ModdingAPI::Exposed::System::Byte_array* HashValue;
  int32_t State;
  bool HashAlgorithm_m_bDisposed;
  ModdingAPI::Exposed::System::UInt32_array* _H;
  ModdingAPI::Exposed::System::UInt32_array* buff;
  uint64_t count;
  ModdingAPI::Exposed::System::Byte_array* _ProcessingBuffer;
  int32_t _ProcessingBufferCount;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::MD5CryptoServiceProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD8B20))(this);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::MD5CryptoServiceProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD8BF0))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::MD5CryptoServiceProvider*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD8C70))(this, disposing);
  }
  void HashCore(ModdingAPI::Exposed::System::Byte_array* rgb, int32_t ibStart, int32_t cbSize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::MD5CryptoServiceProvider*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD8D00))(this, rgb, ibStart, cbSize);
  }
  ModdingAPI::Exposed::System::Byte_array* HashFinal() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::MD5CryptoServiceProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD8E20))(this);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::MD5CryptoServiceProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD8F70))(this);
  }
  void ProcessBlock(ModdingAPI::Exposed::System::Byte_array* inputBuffer, int32_t inputOffset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::MD5CryptoServiceProvider*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDD9040))(this, inputBuffer, inputOffset);
  }
  void ProcessFinalBlock(ModdingAPI::Exposed::System::Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::MD5CryptoServiceProvider*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDDA970))(this, inputBuffer, inputOffset, inputCount);
  }
  void AddLength(uint64_t length, ModdingAPI::Exposed::System::Byte_array* buffer, int32_t position) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Security::Cryptography::MD5CryptoServiceProvider*, uint64_t, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDDAB70))(this, length, buffer, position);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::UInt32_array*> K = __CppStaticProperty<ModdingAPI::Exposed::System::UInt32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->K; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xDDACE0))();
  }
};
}