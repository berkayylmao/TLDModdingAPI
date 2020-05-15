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
#include "ModdingAPI.Exposed.UnityEngine.LayerMask.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed::Pathfinding {
struct __StartEndModifier_Il2CppStaticFields {
};

struct __StartEndModifier_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _7_get_Order;
  VirtualInvokeData _8_PreProcess;
  VirtualInvokeData _9_Apply;
};

struct __StartEndModifier_Il2CppClass {
  Il2CppClass_1 _1;
  __StartEndModifier_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StartEndModifier_Il2CppVtbl vtbl;
};

class StartEndModifier {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3DBD8;
  static inline    __StartEndModifier_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __StartEndModifier_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__StartEndModifier_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __StartEndModifier_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Seeker* seeker;
  bool addPoints;
  int32_t exactStartPoint;
  int32_t exactEndPoint;
  ModdingAPI::Exposed::System::Func_TResult_* adjustStartPoint;
  bool useRaycasting;
  ModdingAPI::Exposed::UnityEngine::LayerMask mask;
  bool useGraphRaycasting;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* connectionBuffer;
  ModdingAPI::Exposed::Pathfinding::GraphNodeDelegate* connectionBufferAddDelegate;

  // Member methods:
  int32_t get_Order() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::StartEndModifier*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  void Apply(ModdingAPI::Exposed::Pathfinding::Path* _p) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::StartEndModifier*, ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x243EF10))(this, _p);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 Snap(ModdingAPI::Exposed::Pathfinding::ABPath* path, int32_t mode, bool start, bool forceAddPoint) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Pathfinding::StartEndModifier*, ModdingAPI::Exposed::Pathfinding::ABPath*, int32_t, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x243F220))(this, path, mode, start, forceAddPoint);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetClampedPoint(ModdingAPI::Exposed::UnityEngine::Vector3 from, ModdingAPI::Exposed::UnityEngine::Vector3 to, ModdingAPI::Exposed::Pathfinding::GraphNode* hint) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Pathfinding::StartEndModifier*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::Pathfinding::GraphNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x243FC50))(this, from, to, hint);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::StartEndModifier*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x243FE90))(this);
  }
};
}