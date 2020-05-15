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


namespace ModdingAPI::Exposed::AK::SWITCHES::CUTTINGTOOL {
struct __SWITCH_Il2CppStaticFields {
  uint32_t HACKSAW;
  uint32_t HAMMER;
  uint32_t HANDS;
  uint32_t HATCHET;
  uint32_t KNIFE;
};

struct __SWITCH_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SWITCH_Il2CppClass {
  Il2CppClass_1 _1;
  __SWITCH_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SWITCH_Il2CppVtbl vtbl;
};

class SWITCH {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C76588;
  static inline    __SWITCH_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SWITCH_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SWITCH_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SWITCH_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AK::SWITCHES::CUTTINGTOOL::SWITCH*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<uint32_t> HACKSAW = __CppStaticProperty<uint32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->HACKSAW; }
  );
  static inline __CppStaticProperty<uint32_t> HAMMER = __CppStaticProperty<uint32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->HAMMER; }
  );
  static inline __CppStaticProperty<uint32_t> HANDS = __CppStaticProperty<uint32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->HANDS; }
  );
  static inline __CppStaticProperty<uint32_t> HATCHET = __CppStaticProperty<uint32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->HATCHET; }
  );
  static inline __CppStaticProperty<uint32_t> KNIFE = __CppStaticProperty<uint32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->KNIFE; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x16EF5C0))();
  }
};
}