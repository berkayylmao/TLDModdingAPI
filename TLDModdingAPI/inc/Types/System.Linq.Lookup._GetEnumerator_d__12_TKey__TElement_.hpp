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


namespace ModdingAPI::Exposed::System::Linq::Lookup {
struct ___GetEnumerator_d__12_TKey__TElement__Il2CppStaticFields {
};

struct ___GetEnumerator_d__12_TKey__TElement__Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey_TElement___get_Current;
  VirtualInvokeData _5_System_IDisposable_Dispose;
  VirtualInvokeData _6_MoveNext;
  VirtualInvokeData _7_System_Collections_IEnumerator_get_Current;
  VirtualInvokeData _8_System_Collections_IEnumerator_Reset;
};

struct ___GetEnumerator_d__12_TKey__TElement__Il2CppClass {
  Il2CppClass_1 _1;
  ___GetEnumerator_d__12_TKey__TElement__Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  ___GetEnumerator_d__12_TKey__TElement__Il2CppVtbl vtbl;
};

class _GetEnumerator_d__12_TKey__TElement_ {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C881F0;
  static inline    _GetEnumerator_d__12_TKey__TElement_* _pStaticObjectInstance = nullptr;

public:
// Singleton object getter:
  static inline _GetEnumerator_d__12_TKey__TElement_* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (_GetEnumerator_d__12_TKey__TElement_**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Il2Cpp fields:
  ___GetEnumerator_d__12_TKey__TElement__Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t __1__state;
  ModdingAPI::Exposed::System::Linq::IGrouping_TKey__TElement_* __2__current;
  ModdingAPI::Exposed::System::Linq::Lookup_TKey__TElement_* __4__this;
  ModdingAPI::Exposed::System::Linq::Lookup::Grouping_TKey__TElement_* _g_5__1;
};
}