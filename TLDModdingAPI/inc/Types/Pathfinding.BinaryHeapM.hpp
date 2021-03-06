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


namespace ModdingAPI::Exposed::Pathfinding {
struct __BinaryHeapM_Il2CppStaticFields {
};

struct __BinaryHeapM_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __BinaryHeapM_Il2CppClass {
  Il2CppClass_1 _1;
  __BinaryHeapM_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __BinaryHeapM_Il2CppVtbl vtbl;
};

class BinaryHeapM {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C588A0;
  static inline    __BinaryHeapM_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __BinaryHeapM_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__BinaryHeapM_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __BinaryHeapM_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t numberOfItems;
  float growthFactor;
  ModdingAPI::Exposed::Pathfinding::BinaryHeapM::Tuple_array* binaryHeap;

  // Member methods:
  void ::ctor(int32_t numberOfElements) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::BinaryHeapM*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26A98C0))(this, numberOfElements);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::BinaryHeapM*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD880))(this);
  }
  ModdingAPI::Exposed::Pathfinding::PathNode* GetNode(int32_t i) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::PathNode*(__fastcall*)(ModdingAPI::Exposed::Pathfinding::BinaryHeapM*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26A9960))(this, i);
  }
  void SetF(int32_t i, uint32_t f) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::BinaryHeapM*, int32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26A99A0))(this, i, f);
  }
  void Add(ModdingAPI::Exposed::Pathfinding::PathNode* node) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::BinaryHeapM*, ModdingAPI::Exposed::Pathfinding::PathNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26A99E0))(this, node);
  }
  ModdingAPI::Exposed::Pathfinding::PathNode* Remove() {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::PathNode*(__fastcall*)(ModdingAPI::Exposed::Pathfinding::BinaryHeapM*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26A9D90))(this);
  }
  void Validate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::BinaryHeapM*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26AA210))(this);
  }
  void Rebuild() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::BinaryHeapM*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26AA5D0))(this);
  }
};
}