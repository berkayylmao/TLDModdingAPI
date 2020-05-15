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
struct __AkTriangleArray_Il2CppStaticFields {
};

struct __AkTriangleArray_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_Count;
  VirtualInvokeData _6_get_StructureSize;
  VirtualInvokeData _7_ClearAtIntPtr;
  VirtualInvokeData _8_CreateNewReferenceFromIntPtr;
  VirtualInvokeData _9_CloneIntoReferenceFromIntPtr;
};

struct __AkTriangleArray_Il2CppClass {
  Il2CppClass_1 _1;
  __AkTriangleArray_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AkTriangleArray_Il2CppVtbl vtbl;
};

class AkTriangleArray {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4D278;
  static inline    __AkTriangleArray_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AkTriangleArray_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AkTriangleArray_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AkTriangleArray_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t AkBaseArray_1__Capacity_k__BackingField;
  intptr_t AkBaseArray_1_m_Buffer;

  // Member methods:
  void ::ctor(int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkTriangleArray*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C821B0))(this, count);
  }
  int32_t get_StructureSize() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AkTriangleArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C82240))(this);
  }
  void ClearAtIntPtr(intptr_t address) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkTriangleArray*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C822D0))(this, address);
  }
  ModdingAPI::Exposed::AkTriangle* CreateNewReferenceFromIntPtr(intptr_t address) {
    return reinterpret_cast<ModdingAPI::Exposed::AkTriangle*(__fastcall*)(ModdingAPI::Exposed::AkTriangleArray*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C82370))(this, address);
  }
  void CloneIntoReferenceFromIntPtr(intptr_t address, ModdingAPI::Exposed::AkTriangle* other) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkTriangleArray*, intptr_t, ModdingAPI::Exposed::AkTriangle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C824C0))(this, address, other);
  }
};
}