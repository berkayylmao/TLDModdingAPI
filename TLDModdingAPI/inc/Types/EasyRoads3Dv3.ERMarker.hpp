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


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __ERMarker_Il2CppStaticFields {
};

struct __ERMarker_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ERMarker_Il2CppClass {
  Il2CppClass_1 _1;
  __ERMarker_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ERMarker_Il2CppVtbl vtbl;
};

class ERMarker {
public:
  // Il2Cpp fields:
  __ERMarker_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool activeSplineNode;
  float leftIndent;
  int32_t leftIndentAlignment;
  float rightIndent;
  int32_t rightIndentAlignment;
  float leftSurrounding;
  float rightSurrounding;
  bool bridgeObject;
  float bridgeStartLevelDistance;
  float bridgeEndLevelDistance;
  float rotation;
  ModdingAPI::Exposed::UnityEngine::Vector3 position;
  int32_t controlType;
  int32_t rotations;
  float circularRadius;
  float circularAngle;
  int32_t circularSegments;
  float splineStrength;
  ModdingAPI::Exposed::UnityEngine::Vector3 direction;
  ModdingAPI::Exposed::UnityEngine::Vector3 direction1;
  bool followTerrainContours;
  int32_t startSplinePoint;
  float startDistance;
  float startUVY;
  float totalDistance;
  System_String* totalDistanceString;
  System_String* angleString;
  float rotationCenter;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* soData;
  int32_t controllerType;
  bool attachExit;
  int32_t exitType;
  int32_t exitGeometryType;
  int32_t startExitInt;
  int32_t endExitInt;
  float startExitOffset;
  float extrusionDistance;
  int32_t extrusionType;
  float fixedDistance;
  float connectionAngle;
  float connectionRadius;
  ModdingAPI::Exposed::UnityEngine::Material* exitMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* connectionMaterial;
  int32_t exitRoadType;
  int32_t connectionRoadType;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* exitOuterVerticesExtrusion;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* exitOuterVerticesFixed;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* exitOuterVerticesCurve;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* exitInnerVertices;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShape;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShapeVecsGlobal;
  ModdingAPI::Exposed::UnityEngine::Vector3 perpDir;
  ModdingAPI::Exposed::UnityEngine::Vector3 perpDirRotated;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Vector3 pos, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* scr, int32_t element) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERMarker*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x412110))(this, pos, scr, element);
  }
  void SetControlType(int32_t type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERMarker*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x413090))(this, type);
  }
};
}