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
#include "ModdingAPI.Exposed.UnityEngine.Bounds.hpp"


namespace ModdingAPI::Exposed::Pathfinding {
struct __GraphUpdateScene_Il2CppStaticFields {
};

struct __GraphUpdateScene_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_OnEnable;
  VirtualInvokeData _5_OnDisable;
  VirtualInvokeData _6_OnPostScan;
  VirtualInvokeData _7_OnPreScan;
  VirtualInvokeData _8_OnLatePostScan;
  VirtualInvokeData _9_OnPostCacheLoad;
  VirtualInvokeData _10_OnGraphsPreUpdate;
  VirtualInvokeData _11_OnGraphsPostUpdate;
  VirtualInvokeData _12_InvertSettings;
};

struct __GraphUpdateScene_Il2CppClass {
  Il2CppClass_1 _1;
  __GraphUpdateScene_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __GraphUpdateScene_Il2CppVtbl vtbl;
};

class GraphUpdateScene {
public:
  // Il2Cpp fields:
  __GraphUpdateScene_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::Pathfinding::GraphModifier* GraphModifier_prev;
  ModdingAPI::Exposed::Pathfinding::GraphModifier* GraphModifier_next;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* points;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* convexPoints;
  bool convex;
  float minBoundsHeight;
  int32_t penaltyDelta;
  bool modifyWalkability;
  bool setWalkability;
  bool applyOnStart;
  bool applyOnScan;
  bool useWorldSpace;
  bool updatePhysics;
  bool resetPenaltyOnPhysics;
  bool updateErosion;
  bool lockToY;
  float lockToYValue;
  bool modifyTag;
  int32_t setTag;
  int32_t setTagInvert;
  bool firstApplied;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26B7BE0))(this);
  }
  void OnPostScan() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26B7C00))(this);
  }
  void InvertSettings() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26B7C10))(this);
  }
  void RecalcConvex() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26B7C40))(this);
  }
  void ToggleUseWorldSpace() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26B7C80))(this);
  }
  void LockToY() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26B7FC0))(this);
  }
  void Apply(ModdingAPI::Exposed::AstarPath* active) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*, ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26B7C00))(this, active);
  }
  ModdingAPI::Exposed::UnityEngine::Bounds GetBounds() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Bounds(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26B8040))(this);
  }
  void Apply() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26B8B60))(this);
  }
  void OnDrawGizmos() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26B9700))(this);
  }
  void OnDrawGizmosSelected() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26B9710))(this);
  }
  void OnDrawGizmos(bool selected) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26B9720))(this, selected);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphUpdateScene*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26BA110))(this);
  }
};
}