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
#include "ModdingAPI.Exposed.Unity.Mathematics.float4.hpp"
#include "ModdingAPI.Exposed.Unity.Collections.NativeArray_T_.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Bounds.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed {
struct __RenderObjectInstance_Il2CppStaticFields {
};

struct __RenderObjectInstance_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __RenderObjectInstance_Il2CppClass {
  Il2CppClass_1 _1;
  __RenderObjectInstance_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RenderObjectInstance_Il2CppVtbl vtbl;
};

class RenderObjectInstance {
public:
  // Il2Cpp fields:
  __RenderObjectInstance_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ObjectParents;
  ModdingAPI::Exposed::UnityEngine::Transform* m_Camera;
  float m_Lod1Distances;
  float m_Lod2Distances;
  float m_Lod3Distances;
  ModdingAPI::Exposed::MinMax* m_CullMultiplier;
  ModdingAPI::Exposed::MinMax* m_HeightAdjust;
  bool m_ForceOnlyLod0Shadow;
  bool m_ForceNoLod0Cull;
  int32_t m_JobBatchSize;
  int32_t m_VisBatchSize;
  int32_t m_ObjectSortingType;
  int32_t m_InstancePackingType;
  int32_t m_FrustumType;
  int32_t m_SectorDensity;
  ModdingAPI::Exposed::UnityEngine::Camera* m_CameraComponent;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_BatchList;
  bool m_IsInitialized;
  ModdingAPI::Exposed::Unity::Mathematics::float4 m_CameraPosition;
  ModdingAPI::Exposed::Unity::Mathematics::float4 m_CameraDirection;
  ModdingAPI::Exposed::Unity::Collections::NativeArray_T_ m_SectorVisLod;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_SectorVisPos;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_SectorBound;
  ModdingAPI::Exposed::UnityEngine::Plane_array* m_CameraPlanes;
  ModdingAPI::Exposed::MinMax* m_BoundsX;
  ModdingAPI::Exposed::MinMax* m_BoundsZ;
  float m_Lod1DistSqr;
  float m_Lod2DistSqr;
  float m_Lod3DistSqr;
  int32_t m_ObjectCount;
  ModdingAPI::Exposed::UnityEngine::Matrix4x4_array* m_BufferArray;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B61F60))(this);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B62000))(this);
  }
  int32_t ContainsMesh(ModdingAPI::Exposed::UnityEngine::Mesh* mesh, ModdingAPI::Exposed::System::Collections::Generic::List_T_* objList) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*, ModdingAPI::Exposed::UnityEngine::Mesh*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B641A0))(this, mesh, objList);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B642E0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B64A90))(this);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B65980))(this);
  }
  void NativeToManaged(ModdingAPI::Exposed::Unity::Collections::NativeArray_T_ nativeArr, ModdingAPI::Exposed::UnityEngine::Matrix4x4_array* managedArr, int32_t length) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*, ModdingAPI::Exposed::Unity::Collections::NativeArray_T_, ModdingAPI::Exposed::UnityEngine::Matrix4x4_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B66050))(this, nativeArr, managedArr, length);
  }
  void UpdateLODs(ModdingAPI::Exposed::Unity::Mathematics::float4 camPos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*, ModdingAPI::Exposed::Unity::Mathematics::float4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B660C0))(this, camPos);
  }
  void UpdateSectorLods(ModdingAPI::Exposed::Unity::Mathematics::float4 camPos, ModdingAPI::Exposed::Unity::Mathematics::float4 camDir) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*, ModdingAPI::Exposed::Unity::Mathematics::float4, ModdingAPI::Exposed::Unity::Mathematics::float4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B66210))(this, camPos, camDir);
  }
  bool FrustumCamera(ModdingAPI::Exposed::UnityEngine::Bounds sectorBounds) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*, ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B66500))(this, sectorBounds);
  }
  bool FrustumDotFast(ModdingAPI::Exposed::Unity::Mathematics::float4 pointPos, ModdingAPI::Exposed::Unity::Mathematics::float4 camPos, ModdingAPI::Exposed::Unity::Mathematics::float4 camDir) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*, ModdingAPI::Exposed::Unity::Mathematics::float4, ModdingAPI::Exposed::Unity::Mathematics::float4, ModdingAPI::Exposed::Unity::Mathematics::float4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B66590))(this, pointPos, camPos, camDir);
  }
  float FastSqrDist2D(ModdingAPI::Exposed::UnityEngine::Vector2 a, ModdingAPI::Exposed::Unity::Mathematics::float4 b) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::Unity::Mathematics::float4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B666E0))(this, a, b);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::RenderObjectInstance*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B66720))(this);
  }
};
}