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
#include "ModdingAPI::Exposed::UnityEngine::Bounds.hpp"
#include "ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Quaternion.hpp"


namespace ModdingAPI::Exposed::UnityEngine::AI {
struct __NavMeshBuilder_Il2CppStaticFields {
};

struct __NavMeshBuilder_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __NavMeshBuilder_Il2CppClass {
  Il2CppClass_1 _1;
  __NavMeshBuilder_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NavMeshBuilder_Il2CppVtbl vtbl;
};

class NavMeshBuilder {
public:
  // Il2Cpp fields:
  __NavMeshBuilder_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline void CollectSources(ModdingAPI::Exposed::UnityEngine::Bounds includedWorldBounds, int32_t includedLayerMask, int32_t geometry, int32_t defaultArea, ModdingAPI::Exposed::System::Collections::Generic::List_T_* markups, ModdingAPI::Exposed::System::Collections::Generic::List_T_* results) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds, int32_t, int32_t, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156DD30))(includedWorldBounds, includedLayerMask, geometry, defaultArea, markups, results);
  }
  static inline void CollectSources(ModdingAPI::Exposed::UnityEngine::Transform* root, int32_t includedLayerMask, int32_t geometry, int32_t defaultArea, ModdingAPI::Exposed::System::Collections::Generic::List_T_* markups, ModdingAPI::Exposed::System::Collections::Generic::List_T_* results) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*, int32_t, int32_t, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156E0B0))(root, includedLayerMask, geometry, defaultArea, markups, results);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSource_array* CollectSourcesInternal(int32_t includedLayerMask, ModdingAPI::Exposed::UnityEngine::Bounds includedWorldBounds, ModdingAPI::Exposed::UnityEngine::Transform* root, bool useBounds, int32_t geometry, int32_t defaultArea, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildMarkup_array* markups) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSource_array*(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Bounds, ModdingAPI::Exposed::UnityEngine::Transform*, bool, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildMarkup_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156E310))(includedLayerMask, includedWorldBounds, root, useBounds, geometry, defaultArea, markups);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AI::NavMeshData* BuildNavMeshData(ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings buildSettings, ModdingAPI::Exposed::System::Collections::Generic::List_T_* sources, ModdingAPI::Exposed::UnityEngine::Bounds localBounds, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Quaternion rotation) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AI::NavMeshData*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::UnityEngine::Bounds, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156E3B0))(buildSettings, sources, localBounds, position, rotation);
  }
  static inline bool UpdateNavMeshDataListInternal(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData* data, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings buildSettings, Il2CppObject* sources, ModdingAPI::Exposed::UnityEngine::Bounds localBounds) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData*, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings, Il2CppObject*, ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156E760))(data, buildSettings, sources, localBounds);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AsyncOperation* UpdateNavMeshDataAsync(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData* data, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings buildSettings, ModdingAPI::Exposed::System::Collections::Generic::List_T_* sources, ModdingAPI::Exposed::UnityEngine::Bounds localBounds) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AsyncOperation*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData*, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156E7E0))(data, buildSettings, sources, localBounds);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AsyncOperation* UpdateNavMeshDataAsyncListInternal(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData* data, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings buildSettings, Il2CppObject* sources, ModdingAPI::Exposed::UnityEngine::Bounds localBounds) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AsyncOperation*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData*, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings, Il2CppObject*, ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156E9B0))(data, buildSettings, sources, localBounds);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSource_array* CollectSourcesInternal_Injected(int32_t includedLayerMask, ModdingAPI::Exposed::UnityEngine::Bounds includedWorldBounds, ModdingAPI::Exposed::UnityEngine::Transform* root, bool useBounds, int32_t geometry, int32_t defaultArea, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildMarkup_array* markups) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSource_array*(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Bounds, ModdingAPI::Exposed::UnityEngine::Transform*, bool, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildMarkup_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156EA30))(includedLayerMask, includedWorldBounds, root, useBounds, geometry, defaultArea, markups);
  }
  static inline bool UpdateNavMeshDataListInternal_Injected(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData* data, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings buildSettings, Il2CppObject* sources, ModdingAPI::Exposed::UnityEngine::Bounds localBounds) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData*, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings, Il2CppObject*, ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156EAC0))(data, buildSettings, sources, localBounds);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AsyncOperation* UpdateNavMeshDataAsyncListInternal_Injected(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData* data, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings buildSettings, Il2CppObject* sources, ModdingAPI::Exposed::UnityEngine::Bounds localBounds) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AsyncOperation*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AI::NavMeshData*, ModdingAPI::Exposed::UnityEngine::AI::NavMeshBuildSettings, Il2CppObject*, ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x156EB40))(data, buildSettings, sources, localBounds);
  }
};
}