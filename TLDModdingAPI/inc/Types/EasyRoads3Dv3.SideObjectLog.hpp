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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __SideObjectLog_Il2CppStaticFields {
};

struct __SideObjectLog_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SideObjectLog_Il2CppClass {
  Il2CppClass_1 _1;
  __SideObjectLog_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SideObjectLog_Il2CppVtbl vtbl;
};

class SideObjectLog {
public:
  // Il2Cpp fields:
  __SideObjectLog_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* version;
  System_String* name;
  double id;
  double timestamp;
  int32_t objectType;
  System_String* gameobjectGUID;
  System_String* textureGUID;
  float m_distance;
  float uvx;
  float uvy;
  int32_t position;
  float splinePosition;
  int32_t selectedRotation;
  float randomYAxisMinRotation;
  float randomYAxisMaxRotation;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* nodeList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* uvs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* uvDistances;
  bool clampUVs;
  bool clampUVY;
  float clampUVYValue;
  bool terrainUVs;
  bool reverseUVs;
  float totalDistance;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* snapList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* snapWeightList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* colorList;
  System_String* gameobjectStartGUID;
  System_String* gameobjectEndGUID;
  int32_t align;
  int32_t alignPoint;
  bool weld;
  bool combine;
  bool combineInstantiated;
  bool markerActive;
  int32_t uvType;
  float uv;
  bool randomObjects;
  float forwardStartOffset;
  float sidewaysOffset;
  float density;
  System_String* goPath;
  System_String* startPath;
  System_String* endPath;
  System_String* texturePath;
  int32_t terrainTree;
  float minScale;
  float maxScale;
  bool childOrderActive;
  int32_t childOrder;
  bool meshBoundsAlignment;
  float xPosition;
  int32_t relativeTo;
  float yPosition;
  float yRotation;
  float oldSidwaysDistance;
  int32_t sidewaysDistanceUpdate;
  float uvYRound;
  bool adjustUV;
  bool collider;
  bool boxcollider;
  bool tangents;
  ModdingAPI::Exposed::UnityEngine::GameObject* sourceObject;
  bool flipMesh;
  ModdingAPI::Exposed::UnityEngine::GameObject* startObject;
  ModdingAPI::Exposed::UnityEngine::GameObject* endObject;
  ModdingAPI::Exposed::UnityEngine::GameObject* connectionObject;
  ModdingAPI::Exposed::UnityEngine::Material* material;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* meshObjects;
  ModdingAPI::Exposed::UnityEngine::Vector2 boxSize;
  ModdingAPI::Exposed::UnityEngine::Vector2 boxOffset;
  bool includeStartSegment;
  float startSegmentOffset;
  bool includeStartEdgeTris;
  bool includeEndSegment;
  float endSegmentOffset;
  bool includeEndEdgeTris;
  bool adjustToRoadWidth;
  float xOffset;
  float startOffset;
  float endOffset;
  float defaultStartOffset;
  float defaultEndOffset;
  float totalZDistance;
  float middleZDistance;
  float startZDistance;
  float endZDistance;
  float minStartZ;
  float maxStartZ;
  float minMiddleZ;
  float maxMiddleZ;
  float minEndZ;
  float maxEndZ;
  bool smoothStart;
  bool smoothMiddle;
  bool smoothEnd;
  ModdingAPI::Exposed::UnityEngine::GameObject* targetObject;
  bool bridgeObject;
  bool snapToTerrain;
  int32_t layer;
  bool deformationObject;
  bool isStatic;
  bool castShadows;
  bool scaleToRoad;
  bool splitInBatches;
  ModdingAPI::Exposed::UnityEngine::Vector3 randomRotation;
  float randomMinRotation;
  float randomMaxRotation;
  float minRandomRotationDistance;
  float maxRandomRotationDistance;
  float randomXPosition;
  float randomMinXPosition;
  float randomMaxXPosition;
  float minRandomXPositionDistance;
  float maxRandomXPositionDistance;
  ModdingAPI::Exposed::UnityEngine::Vector3 boxColliderScale;
  float randomYPosition;
  float randomMinYPosition;
  float randomMaxYPosition;
  float minRandomYPositionDistance;
  float maxRandomYPositionDistance;
  float bridgeHeight;
  int32_t markerSplineController;
  float bridgeLength;
  float deformationOffset;
  float markerIndent;
  float markerSurrounding;
  bool indentController;
  bool excludeTerrainSplats;
  ModdingAPI::Exposed::UnityEngine::Vector3 scale;
  float indentExt;
  int32_t category;

  // Member methods:
  void OQODQCOCDD(ModdingAPI::Exposed::EasyRoads3Dv3::SideObject* so) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::SideObjectLog*, ModdingAPI::Exposed::EasyRoads3Dv3::SideObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x157B9E0))(this, so);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::SideObjectLog*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x157C5D0))(this);
  }
};
}