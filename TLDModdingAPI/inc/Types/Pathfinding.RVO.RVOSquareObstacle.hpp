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
#include "ModdingAPI.Exposed.UnityEngine.Matrix4x4.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed::Pathfinding::RVO {
struct __RVOSquareObstacle_Il2CppStaticFields {
};

struct __RVOSquareObstacle_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CreateObstacles;
  VirtualInvokeData _5_get_ExecuteInEditor;
  VirtualInvokeData _6_get_LocalCoordinates;
  VirtualInvokeData _7_get_StaticObstacle;
  VirtualInvokeData _8_get_Height;
  VirtualInvokeData _9_AreGizmosDirty;
  VirtualInvokeData _10_GetMatrix;
};

struct __RVOSquareObstacle_Il2CppClass {
  Il2CppClass_1 _1;
  __RVOSquareObstacle_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RVOSquareObstacle_Il2CppVtbl vtbl;
};

class RVOSquareObstacle {
public:
  // Il2Cpp fields:
  __RVOSquareObstacle_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t obstacleMode;
  int32_t layer;
  ModdingAPI::Exposed::Pathfinding::RVO::Simulator* sim;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* RVOObstacle_addedObstacles;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* RVOObstacle_sourceObstacles;
  bool RVOObstacle_gizmoDrawing;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* RVOObstacle_gizmoVerts;
  int32_t RVOObstacle__obstacleMode;
  ModdingAPI::Exposed::UnityEngine::Matrix4x4 RVOObstacle_prevUpdateMatrix;
  float height;
  ModdingAPI::Exposed::UnityEngine::Vector2 size;
  ModdingAPI::Exposed::UnityEngine::Vector2 center;

  // Member methods:
  bool get_StaticObstacle() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOSquareObstacle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  bool get_ExecuteInEditor() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOSquareObstacle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this);
  }
  bool get_LocalCoordinates() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOSquareObstacle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this);
  }
  float get_Height() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOSquareObstacle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED7E80))(this);
  }
  bool AreGizmosDirty() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOSquareObstacle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  void CreateObstacles() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOSquareObstacle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B2E0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::RVOSquareObstacle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B660))(this);
  }
};
}