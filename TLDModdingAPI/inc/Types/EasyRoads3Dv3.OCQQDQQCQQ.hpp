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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __OCQQDQQCQQ_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::GameObject* rtg;
  ModdingAPI::Exposed::UnityEngine::GameObject* swgLeft;
  ModdingAPI::Exposed::UnityEngine::GameObject* swgRight;
  ModdingAPI::Exposed::UnityEngine::Vector3 camdir;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecs;
};

struct __OCQQDQQCQQ_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __OCQQDQQCQQ_Il2CppClass {
  Il2CppClass_1 _1;
  __OCQQDQQCQQ_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __OCQQDQQCQQ_Il2CppVtbl vtbl;
};

class OCQQDQQCQQ {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2DBF8;
  static inline    __OCQQDQQCQQ_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __OCQQDQQCQQ_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__OCQQDQQCQQ_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __OCQQDQQCQQ_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::OCQQDQQCQQ*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*> rtg = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->rtg; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*> swgLeft = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->swgLeft; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*> swgRight = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->swgRight; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3> camdir = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3>(
   []() { return &GetStaticClassInstance()->pStaticFields->camdir; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> vecs = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->vecs; }
  );

  // Static methods:
  static inline void ODDQDOODQD(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* baseScript, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* scr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x773C20))(baseScript, scr);
  }
  static inline void CleanMeshData(ModdingAPI::Exposed::UnityEngine::Mesh* m, ModdingAPI::Exposed::System::Collections::Generic::List_T_* mtris, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* uvs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* uvs2, ModdingAPI::Exposed::System::Collections::Generic::List_T_* normals, ModdingAPI::Exposed::System::Collections::Generic::List_T_* tangents, ModdingAPI::Exposed::System::Collections::Generic::List_T_* colors, ModdingAPI::Exposed::System::Collections::Generic::List_T_* tris) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Mesh*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x774330))(m, mtris, vecs, uvs, uvs2, normals, tangents, colors, tris);
  }
  static inline void OOCCQOQQQC(ModdingAPI::Exposed::UnityEngine::Mesh* mesh) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Mesh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x774EE0))(mesh);
  }
  static inline void OCOODOCCOQ(ModdingAPI::Exposed::UnityEngine::Mesh* mesh) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Mesh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x775930))(mesh);
  }
  static inline void GenerateWaypoints(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* scr, float distance) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x775B70))(scr, distance);
  }
  static inline void OCCOCQDDQQ(ModdingAPI::Exposed::System::Collections::Generic::List_T_* selectedObjects, int32_t alignType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7766D0))(selectedObjects, alignType);
  }
  static inline void ODCQQOQQDQ(ModdingAPI::Exposed::UnityEngine::GameObject* go, ModdingAPI::Exposed::EasyRoads3Dv3::SideObject* so, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* uvs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* uvs1, ModdingAPI::Exposed::System::Collections::Generic::List_T_* color, ModdingAPI::Exposed::System::Collections::Generic::List_T_* tangents, ModdingAPI::Exposed::System::Collections::Generic::List_T_* triangles, ModdingAPI::Exposed::System::Collections::Generic::List_T_* normals, ModdingAPI::Exposed::System::Collections::Generic::List_T_* normalArray1, ModdingAPI::Exposed::System::Collections::Generic::List_T_* normalArray2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::EasyRoads3Dv3::SideObject*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x777290))(go, so, vecs, uvs, uvs1, color, tangents, triangles, normals, normalArray1, normalArray2);
  }
  static inline void GetRoadShape(float width, int32_t subSegments, ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShape, ModdingAPI::Exposed::System::Collections::Generic::List_T_* uvs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* uvs1, float dir) {
    reinterpret_cast<void(__fastcall*)(float, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x777300))(width, subSegments, roadShape, uvs, uvs1, dir);
  }
  static inline void UpdateRoadType(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x777690))(scr, index);
  }
  static inline bool UpdateRoadTypeByRoad(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* road, int32_t index, ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD* type) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, int32_t, ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x777770))(scr, road, index, type);
  }
  static inline int32_t OQDDCCCQCC(ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShape) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x778E90))(roadShape);
  }
  static inline void OQCCQCOQQD(ModdingAPI::Exposed::System::Collections::Generic::List_T_* tmpMarkersExt) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x779010))(tmpMarkersExt);
  }
  static inline void VisualizeRoadType(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* baseScript, ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD* rt, ModdingAPI::Exposed::UnityEngine::Vector3 pos, ModdingAPI::Exposed::UnityEngine::Vector3 dir) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x779370))(baseScript, rt, pos, dir);
  }
  static inline void OOOCDQDODQ(ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD* rt) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x779E10))(rt);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x77B8E0))();
  }
};
}