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
#include "ModdingAPI.Exposed.UnityEngine.Rect.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed::Pathfinding::RVO {
struct __RVOQuadtree_Il2CppStaticFields {
};

struct __RVOQuadtree_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __RVOQuadtree_Il2CppClass {
  Il2CppClass_1 _1;
  __RVOQuadtree_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RVOQuadtree_Il2CppVtbl vtbl;
};

class RVOQuadtree {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4BC80;
  static inline    __RVOQuadtree_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RVOQuadtree_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RVOQuadtree_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RVOQuadtree_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  float maxRadius;
  ModdingAPI::Exposed::Pathfinding::RVO::RVOQuadtree::Node_array* nodes;
  int32_t filledNodes;
  ModdingAPI::Exposed::UnityEngine::Rect bounds;

  // Member methods:
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOQuadtree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2559A20))(this);
  }
  void SetBounds(ModdingAPI::Exposed::UnityEngine::Rect r) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOQuadtree*, ModdingAPI::Exposed::UnityEngine::Rect)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C98930))(this, r);
  }
  int32_t GetNodeIndex() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOQuadtree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2559A70))(this);
  }
  void Insert(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent* agent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOQuadtree*, ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2559C60))(this, agent);
  }
  void Query(ModdingAPI::Exposed::UnityEngine::Vector2 p, float radius, ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent* agent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOQuadtree*, ModdingAPI::Exposed::UnityEngine::Vector2, float, ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255A060))(this, p, radius, agent);
  }
  float QueryRec(int32_t i, ModdingAPI::Exposed::UnityEngine::Vector2 p, float radius, ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent* agent, ModdingAPI::Exposed::UnityEngine::Rect r) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOQuadtree*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector2, float, ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, ModdingAPI::Exposed::UnityEngine::Rect)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255A0A0))(this, i, p, radius, agent, r);
  }
  void DebugDraw() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOQuadtree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255A590))(this);
  }
  void DebugDrawRec(int32_t i, ModdingAPI::Exposed::UnityEngine::Rect r) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOQuadtree*, int32_t, ModdingAPI::Exposed::UnityEngine::Rect)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255A5C0))(this, i, r);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOQuadtree*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255AC90))(this);
  }
};
}