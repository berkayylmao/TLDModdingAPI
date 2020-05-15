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


namespace ModdingAPI::Exposed::System::Globalization {
struct __TextInfoToUpperData_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Char_array* range_00e0_0586;
  ModdingAPI::Exposed::System::Char_array* range_1e01_1ff3;
  ModdingAPI::Exposed::System::Char_array* range_2170_2184;
  ModdingAPI::Exposed::System::Char_array* range_24d0_24e9;
  ModdingAPI::Exposed::System::Char_array* range_2c30_2ce3;
  ModdingAPI::Exposed::System::Char_array* range_2d00_2d25;
  ModdingAPI::Exposed::System::Char_array* range_a641_a697;
  ModdingAPI::Exposed::System::Char_array* range_a723_a78c;
};

struct __TextInfoToUpperData_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TextInfoToUpperData_Il2CppClass {
  Il2CppClass_1 _1;
  __TextInfoToUpperData_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TextInfoToUpperData_Il2CppVtbl vtbl;
};

class TextInfoToUpperData {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C951F0;
  static inline    __TextInfoToUpperData_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TextInfoToUpperData_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TextInfoToUpperData_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TextInfoToUpperData_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> range_00e0_0586 = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->range_00e0_0586; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> range_1e01_1ff3 = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->range_1e01_1ff3; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> range_2170_2184 = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->range_2170_2184; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> range_24d0_24e9 = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->range_24d0_24e9; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> range_2c30_2ce3 = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->range_2c30_2ce3; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> range_2d00_2d25 = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->range_2d00_2d25; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> range_a641_a697 = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->range_a641_a697; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> range_a723_a78c = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->range_a723_a78c; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA89EB0))();
  }
};
}