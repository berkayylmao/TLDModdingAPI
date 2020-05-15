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


namespace ModdingAPI::Exposed {
struct __BitmaskTexture_Il2CppStaticFields {
};

struct __BitmaskTexture_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __BitmaskTexture_Il2CppClass {
  Il2CppClass_1 _1;
  __BitmaskTexture_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __BitmaskTexture_Il2CppVtbl vtbl;
};

class BitmaskTexture {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C39F78;
  static inline    __BitmaskTexture_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __BitmaskTexture_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__BitmaskTexture_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __BitmaskTexture_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Texture2D* m_Texture;
  ModdingAPI::Exposed::System::Byte_array* m_RawData;
  int32_t m_BytesPerEntry;
  int32_t m_ArrayStride;
  bool m_Dirty;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Texture2D* get_Texture() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture2D*(__fastcall*)(ModdingAPI::Exposed::BitmaskTexture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void ::ctor(int32_t width, int32_t height, int32_t bitCount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BitmaskTexture*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE72B0))(this, width, height, bitCount);
  }
  void ApplyChanges() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BitmaskTexture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE74D0))(this);
  }
  void ClearBit(int32_t x, int32_t y, int32_t bit) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BitmaskTexture*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE7690))(this, x, y, bit);
  }
  int32_t IndexOf(int32_t x, int32_t y) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::BitmaskTexture*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE7770))(this, x, y);
  }
  bool IsBitSet(int32_t x, int32_t y, int32_t bit) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BitmaskTexture*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE7780))(this, x, y, bit);
  }
  void SetBit(int32_t x, int32_t y, int32_t bit) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BitmaskTexture*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BE7820))(this, x, y, bit);
  }

  // Static methods:
  static inline int32_t RoundUpAndDivide(int32_t x, int32_t d) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEFC670))(x, d);
  }
};
}