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
#include "ModdingAPI.Exposed.Pathfinding.ClipperLib.Int128.hpp"

namespace ModdingAPI::Exposed::Pathfinding::ClipperLib {
struct __Int128_Il2CppObject {
  int64_t hi;
  uint64_t lo;
};
struct __Int128_Il2CppStaticFields {
};

struct __Int128_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Int128_Il2CppClass {
  Il2CppClass_1 _1;
  __Int128_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Int128_Il2CppVtbl vtbl;
};

class Int128 {
  static constexpr uint64_t _rvaClassInstance     = 0x3C2EC80;
  static inline    __Int128_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Static class getter:
  static inline __Int128_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Int128_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  int64_t hi;
  uint64_t lo;

  // Member methods:
  void ::ctor(int64_t _lo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::ClipperLib::Int128*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x51320))(this, _lo);
  }
  void ::ctor(int64_t _hi, uint64_t _lo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::ClipperLib::Int128*, int64_t, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x51330))(this, _hi, _lo);
  }
  bool Equals(Il2CppObject* obj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::ClipperLib::Int128*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x51340))(this, obj);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::ClipperLib::Int128*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x51430))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::Pathfinding::ClipperLib::Int128 Int128Mul(int64_t lhs, int64_t rhs) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::ClipperLib::Int128(__fastcall*)(int64_t, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14EA110))(lhs, rhs);
  }

};
}