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
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::AI::NavMeshHit.hpp"
#include "ModdingAPI.Exposed.UnityEngine.AI.NavMeshDataInstance.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Quaternion.hpp"
#include "ModdingAPI.Exposed.UnityEngine.AI.NavMeshLinkInstance.hpp"
#include "ModdingAPI::Exposed::UnityEngine::AI::NavMeshLinkData.hpp"
#include "ModdingAPI.Exposed.UnityEngine.AI.NavMeshBuildSettings.hpp"
#include "ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings.hpp"


namespace ModdingAPI::Exposed::UnityEngine::AI {
struct __NavMesh_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::AI::NavMesh::OnNavMeshPreUpdate* onPreUpdate;
};

struct __NavMesh_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __NavMesh_Il2CppClass {
  Il2CppClass_1 _1;
  __NavMesh_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NavMesh_Il2CppVtbl vtbl;
};

class NavMesh {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C80120;
  static inline    __NavMesh_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __NavMesh_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__NavMesh_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __NavMesh_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::AI::NavMesh::OnNavMeshPreUpdate*> onPreUpdate = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::AI::NavMesh::OnNavMeshPreUpdate*>(
   []() { return &GetStaticClassInstance()->pStaticFields->onPreUpdate; }
  );

  // Static methods:
  static inline void Internal_CallOnNavMeshPreUpdate() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x156AC30))();
  }
  static inline bool CalculatePath(ModdingAPI::Exposed::UnityEngine::Vector3 sourcePosition, ModdingAPI::Exposed::UnityEngine::Vector3 targetPosition, int32_t areaMask, ModdingAPI::Exposed::UnityEngine::AI::NavMeshPath* path) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, int32_t, ModdingAPI::Exposed::UnityEngine::AI::NavMeshPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156ACC0))(sourcePosition, targetPosition, areaMask, path);
  }
  static inline bool CalculatePathInternal(ModdingAPI::Exposed::UnityEngine::Vector3 sourcePosition, ModdingAPI::Exposed::UnityEngine::Vector3 targetPosition, int32_t areaMask, ModdingAPI::Exposed::UnityEngine::AI::NavMeshPath* path) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, int32_t, ModdingAPI::Exposed::UnityEngine::AI::NavMeshPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156ADD0))(sourcePosition, targetPosition, areaMask, path);
  }
  static inline bool INTERNAL_CALL_CalculatePathInternal(ModdingAPI::Exposed::UnityEngine::Vector3 sourcePosition, ModdingAPI::Exposed::UnityEngine::Vector3 targetPosition, int32_t areaMask, ModdingAPI::Exposed::UnityEngine::AI::NavMeshPath* path) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, int32_t, ModdingAPI::Exposed::UnityEngine::AI::NavMeshPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156AE50))(sourcePosition, targetPosition, areaMask, path);
  }
  static inline bool FindClosestEdge(ModdingAPI::Exposed::UnityEngine::Vector3 sourcePosition, ModdingAPI::Exposed::UnityEngine::AI::NavMeshHit hit, int32_t areaMask) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::AI::NavMeshHit, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156AED0))(sourcePosition, hit, areaMask);
  }
  static inline bool INTERNAL_CALL_FindClosestEdge(ModdingAPI::Exposed::UnityEngine::Vector3 sourcePosition, ModdingAPI::Exposed::UnityEngine::AI::NavMeshHit hit, int32_t areaMask) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::AI::NavMeshHit, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156AF40))(sourcePosition, hit, areaMask);
  }
  static inline bool SamplePosition(ModdingAPI::Exposed::UnityEngine::Vector3 sourcePosition, ModdingAPI::Exposed::UnityEngine::AI::NavMeshHit hit, float maxDistance, int32_t areaMask) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::AI::NavMeshHit, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156AFB0))(sourcePosition, hit, maxDistance, areaMask);
  }
  static inline bool INTERNAL_CALL_SamplePosition(ModdingAPI::Exposed::UnityEngine::Vector3 sourcePosition, ModdingAPI::Exposed::UnityEngine::AI::NavMeshHit hit, float maxDistance, int32_t areaMask) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::AI::NavMeshHit, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B030))(sourcePosition, hit, maxDistance, areaMask);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AI::NavMeshDataInstance AddNavMeshData(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData* navMeshData, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Quaternion rotation) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AI::NavMeshDataInstance(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B0B0))(navMeshData, position, rotation);
  }
  static inline bool IsValidNavMeshDataHandle(int32_t handle) {
    return reinterpret_cast<bool(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B200))(handle);
  }
  static inline bool IsValidLinkHandle(int32_t handle) {
    return reinterpret_cast<bool(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B250))(handle);
  }
  static inline bool InternalSetOwner(int32_t dataID, int32_t ownerID) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B2A0))(dataID, ownerID);
  }
  static inline bool InternalSetLinkOwner(int32_t linkID, int32_t ownerID) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B300))(linkID, ownerID);
  }
  static inline int32_t AddNavMeshDataTransformedInternal(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData* navMeshData, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Quaternion rotation) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B360))(navMeshData, position, rotation);
  }
  static inline int32_t INTERNAL_CALL_AddNavMeshDataTransformedInternal(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData* navMeshData, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Quaternion rotation) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B3D0))(navMeshData, position, rotation);
  }
  static inline void RemoveNavMeshDataInternal(int32_t handle) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B440))(handle);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AI::NavMeshLinkInstance AddLink(ModdingAPI::Exposed::UnityEngine::AI::NavMeshLinkData link, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Quaternion rotation) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AI::NavMeshLinkInstance(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AI::NavMeshLinkData, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B490))(link, position, rotation);
  }
  static inline int32_t AddLinkInternal(ModdingAPI::Exposed::UnityEngine::AI::NavMeshLinkData link, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Quaternion rotation) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AI::NavMeshLinkData, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B530))(link, position, rotation);
  }
  static inline int32_t INTERNAL_CALL_AddLinkInternal(ModdingAPI::Exposed::UnityEngine::AI::NavMeshLinkData link, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Quaternion rotation) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AI::NavMeshLinkData, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B5A0))(link, position, rotation);
  }
  static inline void RemoveLinkInternal(int32_t handle) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B610))(handle);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings GetSettingsByID(int32_t agentTypeID) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B660))(agentTypeID);
  }
  static inline void INTERNAL_CALL_GetSettingsByID(int32_t agentTypeID, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings value) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156B710))(agentTypeID, value);
  }
};
}