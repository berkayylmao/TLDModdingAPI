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
#include "ModdingAPI::Exposed::UnityEngine::Matrix4x4.hpp"


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __ERMeshCombineUtility_Il2CppStaticFields {
};

struct __ERMeshCombineUtility_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ERMeshCombineUtility_Il2CppClass {
  Il2CppClass_1 _1;
  __ERMeshCombineUtility_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ERMeshCombineUtility_Il2CppVtbl vtbl;
};

class ERMeshCombineUtility {
public:
  // Il2Cpp fields:
  __ERMeshCombineUtility_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERMeshCombineUtility*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Mesh* Combine(ModdingAPI::Exposed::UnityEngine::Transform* container, ModdingAPI::Exposed::EasyRoads3Dv3::ERMeshCombineUtility::MeshInstance_array* combines, bool generateStrips) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Mesh*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*, ModdingAPI::Exposed::EasyRoads3Dv3::ERMeshCombineUtility::MeshInstance_array*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42AFB0))(container, combines, generateStrips);
  }
  static inline void _(int32_t _, ModdingAPI::Exposed::UnityEngine::Vector3_array* _1AAAA, ModdingAPI::Exposed::UnityEngine::Vector3_array* _, int32_t _3AAAA, ModdingAPI::Exposed::UnityEngine::Matrix4x4 _4AAAA) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::UnityEngine::Vector3_array*, int32_t, ModdingAPI::Exposed::UnityEngine::Matrix4x4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42C140))(_, _1AAAA, _, _3AAAA, _4AAAA);
  }
  static inline void _(int32_t _, ModdingAPI::Exposed::UnityEngine::Vector3_array* _1AAAA, ModdingAPI::Exposed::UnityEngine::Vector3_array* _, int32_t _3AAAA, ModdingAPI::Exposed::UnityEngine::Matrix4x4 _4AAAA) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::UnityEngine::Vector3_array*, int32_t, ModdingAPI::Exposed::UnityEngine::Matrix4x4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42C300))(_, _1AAAA, _, _3AAAA, _4AAAA);
  }
  static inline void _(int32_t _, ModdingAPI::Exposed::UnityEngine::Vector2_array* _1AAAA, ModdingAPI::Exposed::UnityEngine::Vector2_array* _, int32_t _3AAAA) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Vector2_array*, ModdingAPI::Exposed::UnityEngine::Vector2_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42C530))(_, _1AAAA, _, _3AAAA);
  }
  static inline void _4AAAA(int32_t _, ModdingAPI::Exposed::UnityEngine::Vector4_array* _1AAAA, ModdingAPI::Exposed::UnityEngine::Vector4_array* _, int32_t _3AAAA, ModdingAPI::Exposed::UnityEngine::Matrix4x4 _4AAAA) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Vector4_array*, ModdingAPI::Exposed::UnityEngine::Vector4_array*, int32_t, ModdingAPI::Exposed::UnityEngine::Matrix4x4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42C5C0))(_, _1AAAA, _, _3AAAA, _4AAAA);
  }
  static inline void CombineMesh(ModdingAPI::Exposed::UnityEngine::GameObject* go, ModdingAPI::Exposed::UnityEngine::Mesh* mesh, ModdingAPI::Exposed::UnityEngine::Transform* container, bool isSideObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Mesh*, ModdingAPI::Exposed::UnityEngine::Transform*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42C710))(go, mesh, container, isSideObject);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetCombinedInstances(ModdingAPI::Exposed::System::Collections::Generic::List_T_* mToMesh, ModdingAPI::Exposed::UnityEngine::Material* m) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x42DAB0))(mToMesh, m);
  }
};
}