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
#include "ModdingAPI.Exposed.Pathfinding.Util.Guid.hpp"
#include "ModdingAPI.Exposed.Pathfinding.NNInfo.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"


namespace ModdingAPI::Exposed::Pathfinding {
struct __NavGraph_Il2CppStaticFields {
};

struct __NavGraph_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CountNodes;
  VirtualInvokeData _6_RelocateNodes;
  VirtualInvokeData _7_GetNearest;
  VirtualInvokeData _8_GetNearestForce;
  VirtualInvokeData _9_Awake;
  VirtualInvokeData _10_OnDestroy;
  VirtualInvokeData _12_NodeColor;
  VirtualInvokeData _13_SerializeExtraInfo;
  VirtualInvokeData _14_DeserializeExtraInfo;
  VirtualInvokeData _15_PostDeserialization;
  VirtualInvokeData _16_SerializeSettings;
  VirtualInvokeData _17_DeserializeSettings;
  VirtualInvokeData _18_OnDrawGizmos;
  VirtualInvokeData _19_UnloadGizmoMeshes;
  VirtualInvokeData _65535__ctor;
};

struct __NavGraph_Il2CppClass {
  Il2CppClass_1 _1;
  __NavGraph_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NavGraph_Il2CppVtbl vtbl;
};

class NavGraph {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C6D978;
  static inline    NavGraph* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2BA58;
  static inline    __NavGraph_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline NavGraph* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (NavGraph**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __NavGraph_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__NavGraph_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __NavGraph_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Byte_array* _sguid;
  ModdingAPI::Exposed::AstarPath* active;
  uint32_t initialPenalty;
  bool open;
  uint32_t graphIndex;
  System_String* name;
  bool drawGizmos;
  bool infoScreenOpen;
  ModdingAPI::Exposed::UnityEngine::Matrix4x4 matrix;
  ModdingAPI::Exposed::UnityEngine::Matrix4x4 inverseMatrix;

  // Member methods:
  ModdingAPI::Exposed::Pathfinding::Util::Guid get_guid() {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::Util::Guid(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C9D90))(this);
  }
  void set_guid(ModdingAPI::Exposed::Pathfinding::Util::Guid value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, ModdingAPI::Exposed::Pathfinding::Util::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C9E80))(this, value);
  }
  int32_t CountNodes() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C9EA0))(this);
  }
  void SetMatrix(ModdingAPI::Exposed::UnityEngine::Matrix4x4 m) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, ModdingAPI::Exposed::UnityEngine::Matrix4x4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CA0E0))(this, m);
  }
  void RelocateNodes(ModdingAPI::Exposed::UnityEngine::Matrix4x4 oldMatrix, ModdingAPI::Exposed::UnityEngine::Matrix4x4 newMatrix) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, ModdingAPI::Exposed::UnityEngine::Matrix4x4, ModdingAPI::Exposed::UnityEngine::Matrix4x4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CA140))(this, oldMatrix, newMatrix);
  }
  ModdingAPI::Exposed::Pathfinding::NNInfo GetNearest(ModdingAPI::Exposed::UnityEngine::Vector3 position) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::NNInfo(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CA4F0))(this, position);
  }
  ModdingAPI::Exposed::Pathfinding::NNInfo GetNearest(ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::Pathfinding::NNConstraint* constraint) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::NNInfo(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::Pathfinding::NNConstraint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CA580))(this, position, constraint);
  }
  ModdingAPI::Exposed::Pathfinding::NNInfo GetNearest(ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::Pathfinding::NNConstraint* constraint, ModdingAPI::Exposed::Pathfinding::GraphNode* hint) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::NNInfo(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::Pathfinding::NNConstraint*, ModdingAPI::Exposed::Pathfinding::GraphNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CA5F0))(this, position, constraint, hint);
  }
  ModdingAPI::Exposed::Pathfinding::NNInfo GetNearestForce(ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::Pathfinding::NNConstraint* constraint) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::NNInfo(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::Pathfinding::NNConstraint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CA580))(this, position, constraint);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CA9B0))(this);
  }
  void ScanGraph() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CABA0))(this);
  }
  void Scan() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CAE10))(this);
  }
  void ScanInternal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED5060))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Color NodeColor(ModdingAPI::Exposed::Pathfinding::GraphNode* node, ModdingAPI::Exposed::Pathfinding::PathHandler* data) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, ModdingAPI::Exposed::Pathfinding::GraphNode*, ModdingAPI::Exposed::Pathfinding::PathHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CAE70))(this, node, data);
  }
  void SerializeExtraInfo(ModdingAPI::Exposed::Pathfinding::Serialization::GraphSerializationContext* ctx) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, ModdingAPI::Exposed::Pathfinding::Serialization::GraphSerializationContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, ctx);
  }
  void DeserializeExtraInfo(ModdingAPI::Exposed::Pathfinding::Serialization::GraphSerializationContext* ctx) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, ModdingAPI::Exposed::Pathfinding::Serialization::GraphSerializationContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, ctx);
  }
  void PostDeserialization() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void SerializeSettings(ModdingAPI::Exposed::Pathfinding::Serialization::GraphSerializationContext* ctx) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, ModdingAPI::Exposed::Pathfinding::Serialization::GraphSerializationContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CB490))(this, ctx);
  }
  void DeserializeSettings(ModdingAPI::Exposed::Pathfinding::Serialization::GraphSerializationContext* ctx) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, ModdingAPI::Exposed::Pathfinding::Serialization::GraphSerializationContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CB6D0))(this, ctx);
  }
  void OnDrawGizmos(bool drawNodes) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CB9D0))(this, drawNodes);
  }
  void UnloadGizmoMeshes() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavGraph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CBD50))(this);
  }

  // Static methods:
  static inline bool InSearchTree(ModdingAPI::Exposed::Pathfinding::GraphNode* node, ModdingAPI::Exposed::Pathfinding::Path* path) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::GraphNode*, ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25CB980))(node, path);
  }
};
}