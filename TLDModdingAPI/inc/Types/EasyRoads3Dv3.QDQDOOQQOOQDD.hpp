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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::RaycastHit.hpp"


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __QDQDOOQQOOQDD_Il2CppStaticFields {
  float minx;
  float minz;
  float maxx;
  float maxz;
  ModdingAPI::Exposed::UnityEngine::Vector2 splatMapScale;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* surfaceObjects;
  int32_t crossingSurfacesStart;
  int32_t sideObjectSurfacesStart;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* treeObjects;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* detailObjects;
};

struct __QDQDOOQQOOQDD_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __QDQDOOQQOOQDD_Il2CppClass {
  Il2CppClass_1 _1;
  __QDQDOOQQOOQDD_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __QDQDOOQQOOQDD_Il2CppVtbl vtbl;
};

class QDQDOOQQOOQDD {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2CF08;
  static inline    __QDQDOOQQOOQDD_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __QDQDOOQQOOQDD_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__QDQDOOQQOOQDD_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __QDQDOOQQOOQDD_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _;
  ModdingAPI::Exposed::System::Single_array* QDQDOOQQOOQDD__;
  ModdingAPI::Exposed::System::Single_array* QDQDOOQQOOQDD__;
  ModdingAPI::Exposed::UnityEngine::TerrainData* QDQDOOQQOOQDD__;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQOOQDD*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<float> minx = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->minx; }
  );
  static inline __CppStaticProperty<float> minz = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->minz; }
  );
  static inline __CppStaticProperty<float> maxx = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->maxx; }
  );
  static inline __CppStaticProperty<float> maxz = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->maxz; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector2> splatMapScale = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector2>(
   []() { return &GetStaticClassInstance()->pStaticFields->splatMapScale; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> surfaceObjects = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->surfaceObjects; }
  );
  static inline __CppStaticProperty<int32_t> crossingSurfacesStart = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->crossingSurfacesStart; }
  );
  static inline __CppStaticProperty<int32_t> sideObjectSurfacesStart = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->sideObjectSurfacesStart; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> treeObjects = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->treeObjects; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> detailObjects = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->detailObjects; }
  );

  // Static methods:
  static inline void OQOCCDODCO(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr, ModdingAPI::Exposed::UnityEngine::Terrain* terrain) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5582E0))(scr, terrain);
  }
  static inline void ODOCOOOQDQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr, ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrainScr, ModdingAPI::Exposed::UnityEngine::Terrain* terrain, float m_minx, float m_maxx, float m_minz, float m_maxz) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, ModdingAPI::Exposed::UnityEngine::Terrain*, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x558810))(scr, terrainScr, terrain, m_minx, m_maxx, m_minz, m_maxz);
  }
  static inline void OCDOCDDODC(int32_t triangleIndex, ModdingAPI::Exposed::UnityEngine::Collider* collider, ModdingAPI::Exposed::UnityEngine::Vector3 hitPos, float perc, bool critical, float outerHeight, ModdingAPI::Exposed::UnityEngine::Vector3 outerPoint, ModdingAPI::Exposed::UnityEngine::RaycastHit hit) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Collider*, ModdingAPI::Exposed::UnityEngine::Vector3, float, bool, float, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::RaycastHit)>(Helpers::Memory::GetInstance().MakeAbsolute(0x55AA80))(triangleIndex, collider, hitPos, perc, critical, outerHeight, outerPoint, hit);
  }
  static inline void GetHitPointInfoOld(int32_t triangleIndex, ModdingAPI::Exposed::UnityEngine::Collider* collider, ModdingAPI::Exposed::UnityEngine::Vector3 hitPos, float perc, bool critical, float outerHeight, ModdingAPI::Exposed::UnityEngine::Vector3 outerPoint) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Collider*, ModdingAPI::Exposed::UnityEngine::Vector3, float, bool, float, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x55B820))(triangleIndex, collider, hitPos, perc, critical, outerHeight, outerPoint);
  }
  static inline void OQCOCOCOQO(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr, float minx, float minz, float maxx, float maxz, float splatmapScale) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, float, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x55C580))(scr, minx, minz, maxx, maxz, splatmapScale);
  }
  static inline void ODDCOOOQOQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr, ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrainScr, ModdingAPI::Exposed::UnityEngine::Terrain* terrain, float minx, float maxx, float minz, float maxz) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, ModdingAPI::Exposed::UnityEngine::Terrain*, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x55F660))(scr, terrainScr, terrain, minx, maxx, minz, maxz);
  }
  static inline void OQCOCQDOCD(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr, ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrainScr, ModdingAPI::Exposed::UnityEngine::Terrain* terrain, float minx, float maxx, float minz, float maxz) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, ModdingAPI::Exposed::UnityEngine::Terrain*, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x560610))(scr, terrainScr, terrain, minx, maxx, minz, maxz);
  }
  static inline void OQDDDCDOOO(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr, ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrainScr, ModdingAPI::Exposed::UnityEngine::Terrain* terrain, float minx, float maxx, float minz, float maxz) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, ModdingAPI::Exposed::UnityEngine::Terrain*, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x560FF0))(scr, terrainScr, terrain, minx, maxx, minz, maxz);
  }
  static inline ModdingAPI::Exposed::System::Single_array* ODCODODDDO(ModdingAPI::Exposed::System::Collections::Generic::List_T_* mapData, ModdingAPI::Exposed::System::Single_array* trmap, int32_t layers) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Single_array*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Single_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x562510))(mapData, trmap, layers);
  }
  static inline void OQDQDDDOOQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr, ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrainScr, ModdingAPI::Exposed::UnityEngine::Terrain* terrain) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x562AF0))(scr, terrainScr, terrain);
  }
  static inline void OQOQQDQDQQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrainScr, ModdingAPI::Exposed::UnityEngine::Terrain* terrain) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5634E0))(terrainScr, terrain);
  }
  static inline void OCODOQCDQD(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrainScr, ModdingAPI::Exposed::UnityEngine::Terrain* terrain) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5639E0))(terrainScr, terrain);
  }
  static inline void ODCOCCDDCO(ModdingAPI::Exposed::UnityEngine::TerrainData* terrainInfo, int32_t layer, ModdingAPI::Exposed::System::Collections::Generic::List_T_* points) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::TerrainData*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x563F40))(terrainInfo, layer, points);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* OQCQCQDOOO(ModdingAPI::Exposed::UnityEngine::Terrain* terrain, ModdingAPI::Exposed::UnityEngine::TerrainData* terrainInfo, float minx, float maxx, float minz, float maxz) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, ModdingAPI::Exposed::UnityEngine::TerrainData*, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5641B0))(terrain, terrainInfo, minx, maxx, minz, maxz);
  }
  static inline void OODDOOQCQQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* tr, ModdingAPI::Exposed::UnityEngine::Terrain* terrain) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x564DA0))(tr, terrain);
  }
  static inline void OQOCQQDOOQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* tr, ModdingAPI::Exposed::UnityEngine::Terrain* terrain, float perc) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, ModdingAPI::Exposed::UnityEngine::Terrain*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5651C0))(tr, terrain, perc);
  }
  static inline void OOCCOOCCCO(ModdingAPI::Exposed::UnityEngine::GameObject* go, int32_t x, int32_t y, ModdingAPI::Exposed::System::Collections::Generic::List_T_* instances, ModdingAPI::Exposed::System::Single_array* trmap, int32_t layers) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, int32_t, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Single_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5657B0))(go, x, y, instances, trmap, layers);
  }
  static inline void ODCCOCCQDD(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* baseScript, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* scr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x565D60))(baseScript, scr);
  }
  static inline ModdingAPI::Exposed::UnityEngine::GameObject* CreateMesh(ModdingAPI::Exposed::UnityEngine::Transform* parent, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* tris, int32_t layer, System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x566860))(parent, vecs, tris, layer, name);
  }
  static inline void OQDDDDQQCO(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrain, System_String* folder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x566E00))(terrain, folder);
  }
  static inline void OOQDOQCDDD(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrain, System_String* folder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x567310))(terrain, folder);
  }
  static inline void OCDQQQDOCD(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrain, System_String* folder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x567820))(terrain, folder);
  }
  static inline void OQCCDOCCCO(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrain, System_String* folder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x567E60))(terrain, folder);
  }
  static inline void OCCQQQQOQC(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrain, System_String* folder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x568590))(terrain, folder);
  }
  static inline void OCDCQOOQDD(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrain, System_String* folder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5689C0))(terrain, folder);
  }
  static inline void OODQQQDOQD(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrain, System_String* folder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x568F50))(terrain, folder);
  }
  static inline void OQDOQDOQOD(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain* terrain, System_String* folder) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERTerrain*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x569480))(terrain, folder);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x569BC0))();
  }
};
}