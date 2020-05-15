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
#include "ModdingAPI.Exposed.EasyRoads3Dv3.ERRoadShape.hpp"
#include "ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadShape.hpp"


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __QDQDOOQQDQODD_Il2CppStaticFields {
};

struct __QDQDOOQQDQODD_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __QDQDOOQQDQODD_Il2CppClass {
  Il2CppClass_1 _1;
  __QDQDOOQQDQODD_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __QDQDOOQQDQODD_Il2CppVtbl vtbl;
};

class QDQDOOQQDQODD {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C783D8;
  static inline    __QDQDOOQQDQODD_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __QDQDOOQQDQODD_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__QDQDOOQQDQODD_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __QDQDOOQQDQODD_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* roadTypeName;
  double id;
  double timestamp;
  float roadWidth;
  float faceDistance;
  float angleTreshold;
  float uvTiling;
  int32_t uv4Type;
  float detailDistance;
  bool planarUVs;
  float outerIndent;
  bool roadShapeDataActive;
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadShape roadShapeData;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShape;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShapeExt;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* doConnectionTri;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShapeUVs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShapeExtUVs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShapeUVs2;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* hardEdge;
  System_String* roadShapeVecsString;
  double defaultSidewalk;
  bool sidewalks;
  float sidewalkHeight;
  float sidewalkWidth;
  ModdingAPI::Exposed::UnityEngine::Material* roadMaterial;
  ModdingAPI::Exposed::UnityEngine::Material_array* roadMaterials;
  ModdingAPI::Exposed::UnityEngine::Material* roadPhysicsMaterial;
  ModdingAPI::Exposed::UnityEngine::Material_array* roadPhysicsMaterials;
  ModdingAPI::Exposed::UnityEngine::Material* connectionMaterial;
  bool isSideObject;
  bool isCustomRoad;
  int32_t subSegments;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* soData;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* soDataExt;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* soDataLog;
  int32_t layer;
  System_String* tag;
  bool splatMapActive;
  int32_t splatIndex;
  int32_t expandLevel;
  int32_t smoothLevel;
  float splatOpacity;
  bool terrainDeformation;
  bool castShadow;
  bool randomnessFlag;
  float randomYPosition;
  float randomMinYPosition;
  float randomMaxYPosition;
  float minRandomYPositionDistance;
  float maxRandomYPositionDistance;
  float randomMinRotation;
  float randomMaxRotation;
  float minRandomRotationDistance;
  float maxRandomRotationDistance;
  float vegetationStudioGrassPerimeter;
  float vegetationStudioPlantPerimeter;
  float vegetationStudioTreePerimeter;
  float vegetationStudioObjectPerimeter;
  float vegetationStudioLargeObjectPerimeter;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* decalPresets;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* decalClassPresets;

  // Member methods:
  void ::ctor(int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x553520))(this, count);
  }
  void UpdateTimestamp() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5545B0))(this);
  }
  void OQOCCCQDCO(ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD* sourcePreset, ModdingAPI::Exposed::System::Collections::Generic::List_T_* sceneSideObjects, ModdingAPI::Exposed::System::Collections::Generic::List_T_* projectSideObjects) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*, ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5554E0))(this, sourcePreset, sceneSideObjects, projectSideObjects);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::String_array* RoadNames(ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadTypes) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x554710))(roadTypes);
  }
  static inline ModdingAPI::Exposed::System::String_array* Nodes(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadShape data) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadShape)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5549B0))(data);
  }
  static inline ModdingAPI::Exposed::System::String_array* LaneNodes(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadShape data) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadShape)>(Helpers::Memory::GetInstance().MakeAbsolute(0x554C10))(data);
  }
  static inline int32_t SetRoadType(ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadTypes, double roadType) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x554E70))(roadTypes, roadType);
  }
  static inline ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD* GetRoadTypeElByID(ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadTypes, double id) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x554F60))(roadTypes, id);
  }
  static inline int32_t GetRoadTypeByID(ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadTypes, double id) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x555060))(roadTypes, id);
  }
  static inline bool GetTerrainDeformationByID(ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadTypes, double id, int32_t element) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, double, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x555140))(roadTypes, id, element);
  }
  static inline void UpdateUVTiling(ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadTypes, double id, float tiling) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, double, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x555260))(roadTypes, id, tiling);
  }
  static inline void UpdateResolution(ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadTypes, double id, float resolution, float threshold) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, double, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5553A0))(roadTypes, id, resolution, threshold);
  }
  static inline void ODCQOCQDOO(ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD* sourcePreset, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* road, bool update) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x556150))(sourcePreset, road, update);
  }
  static inline void AssignSideObjects(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr, int32_t roadTypeInt, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* OCCCQDQOCQ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, int32_t, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x557520))(scr, roadTypeInt, OCCCQDQOCQ);
  }
  static inline void HasActiveSideObjects(ModdingAPI::Exposed::System::Collections::Generic::List_T_* sos1, ModdingAPI::Exposed::System::Collections::Generic::List_T_* sos2, bool flag1, bool flag2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x557EC0))(sos1, sos2, flag1, flag2);
  }
};
}