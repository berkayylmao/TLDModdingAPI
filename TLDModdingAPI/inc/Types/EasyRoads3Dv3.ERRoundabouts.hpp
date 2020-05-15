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
#include "ModdingAPI::Exposed::UnityEngine::Quaternion.hpp"


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __ERRoundabouts_Il2CppStaticFields {
};

struct __ERRoundabouts_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ERRoundabouts_Il2CppClass {
  Il2CppClass_1 _1;
  __ERRoundabouts_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ERRoundabouts_Il2CppVtbl vtbl;
};

class ERRoundabouts {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C88A50;
  static inline    ERRoundabouts* _pStaticObjectInstance = nullptr;

public:
// Singleton object getter:
  static inline ERRoundabouts* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (ERRoundabouts**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Il2Cpp fields:
  __ERRoundabouts_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float roundAboutRadius;
  float prevRoundAboutRadius;
  float roundAboutResolution;
  float prevRoundAboutResolution;
  float rDist;
  ModdingAPI::Exposed::UnityEngine::Vector3 raStartPos;
  float roundaboutWidth;
  float prevRoundaboutWidth;
  int32_t roadTypeInt;
  int32_t prevRoadTypeInt;
  float roadWidth;
  float prevRoadWidth;
  bool lockLeftRightRoundingRadius;
  float leftRoundingRadius;
  float prevLeftRoundingRadius;
  float rightRoundingRadius;
  float prevRightRoundingRadius;
  int32_t roundingSegments;
  float connectionLength;
  float maxRoadWidth;
  float maxRoundingRadius;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* meshVecs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* mainRightPoints;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* mainCenterPoints;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* mainLeftPoints;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* OQCDCOQDQQ;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* mainRightPointsUVs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* mainCenterPointsUVs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* mainLeftPointsUVs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* OQCDCOQDQQUVs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* innerRoundaboutSidewalkV3;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* innerRoundaboutSidewalUV;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* innerRoundaboutSidewalTris;
  ModdingAPI::Exposed::UnityEngine::Material* innerRoundaboutSidewalkMaterial;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* innerRoundaboutSidewalkIntsStart;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* innerRoundaboutSidewalkIntsEnd;
  int32_t innerSidewalkSegments;
  ModdingAPI::Exposed::UnityEngine::Vector3 leftPoint;
  ModdingAPI::Exposed::UnityEngine::Vector3 leftPoint1;
  ModdingAPI::Exposed::UnityEngine::Vector3 rightPoint;
  ModdingAPI::Exposed::UnityEngine::Vector3 rightPoint1;
  ModdingAPI::Exposed::UnityEngine::Vector3 centerOnLine;
  ModdingAPI::Exposed::UnityEngine::Vector3 leftOuterPoint;
  ModdingAPI::Exposed::UnityEngine::Vector3 rightOuterPoint;
  ModdingAPI::Exposed::UnityEngine::Vector3 pl;
  ModdingAPI::Exposed::UnityEngine::Vector3 pr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* edgePoints;
  int32_t newSegmentInt;
  int32_t prevNewSegmentInt;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* connections;
  ModdingAPI::Exposed::System::String_array* QDOOOQOOQQQQD;
  int32_t selectedConnection;
  int32_t activeConnection;
  int32_t tmpSelectedConnection;
  int32_t minStartInt;
  int32_t maxEndInt;
  int32_t centerInt;
  int32_t leftOuterInt;
  int32_t rightOuterInt;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* leftOuterSegments;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* leftInnerSegments;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* rightOuterSegments;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* rightInnerSegments;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* leftOuterSegmentsUVs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* leftInnerSegmentsUVs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* rightOuterSegmentsUVs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* rightInnerSegmentsUVs;
  ModdingAPI::Exposed::UnityEngine::Vector3 outerCenterPoint;
  bool blendFlag;
  ModdingAPI::Exposed::UnityEngine::Material* mainRoadMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* roadMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* connectionMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* defaultConnectionMaterial;
  double roadType;
  double roadTypeTimestamp;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* innerRoundaboutPoints;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* innerRoundaboutUVs;
  float innerSegmentDistance;
  float innerSidewalkWidth1;
  float innerSidewalkWidth2;
  float innerCurbHeight;
  float innerCurbDepth;
  bool innerBeveledCurb;
  float innerBeveledHeight;
  float innerBeveledDepth;
  bool innerOuterCurb;
  bool innerRoadSideCurbUVControl;
  bool innerOuterSideCurbUVControl;
  ModdingAPI::Exposed::UnityEngine::Material* innerSidewalkMaterial;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* innerSidewalkUVs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* innerCurbUVs;
  int32_t selectedCorner;
  int32_t selectedCornerPreset;
  int32_t selectedSidewalkPreset;
  System_String* sidewalkPresetName;
  int32_t innerRoundaboutPreset;
  bool leftFlag;
  bool rightFlag;
  bool _;
  ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* prefabScript;
  ModdingAPI::Exposed::EasyRoads3Dv3::QDOODOQQDQODD* connectionElement;
  ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* baseScript;
  bool isSceneObject;
  bool guiChanged;
  System_String* crossingName;
  bool activeSidewalks;
  ModdingAPI::Exposed::UnityEngine::Vector3 testIndentMiddlePoint;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadTypesDynamic;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  bool UpdateToRoadType(ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD* sourcePreset) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A7710))(this, sourcePreset);
  }
  void ResetData() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A8290))(this);
  }
  void ODCQQCCDCC() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A85F0))(this);
  }
  void OQCDOOOQDQ() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A8FC0))(this);
  }
  void GetConnectionData() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A9550))(this);
  }
  void UpdateMinMaxInts() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A9B50))(this);
  }
  void ChecknewSegmentInt() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A9DA0))(this);
  }
  int32_t GetRoadPresetInt(double id) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A9F20))(this, id);
  }
  void OQQOCQQOOD() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5AA0B0))(this);
  }
  void OQOOOCDQQO(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr, int32_t el) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5AA1F0))(this, scr, el);
  }
  void OCCQCOQODO() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5AAD20))(this);
  }
  void OOCDCDDOQQ() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5AC320))(this);
  }
  void OQOQQCDODO(int32_t currentIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5AC790))(this, currentIndex);
  }
  void ODDDQDOCOD(ModdingAPI::Exposed::System::Collections::Generic::List_T_* OQCDCOQDQQ, ModdingAPI::Exposed::System::Collections::Generic::List_T_* innerSegmentPoints, int32_t leftRight, int32_t startElement, ModdingAPI::Exposed::UnityEngine::Vector3 leftPoint, ModdingAPI::Exposed::UnityEngine::Vector3 rightPoint, ModdingAPI::Exposed::UnityEngine::Vector3 forward, int32_t currentIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5AE800))(this, OQCDCOQDQQ, innerSegmentPoints, leftRight, startElement, leftPoint, rightPoint, forward, currentIndex);
  }
  void ODDDODDCQC(int32_t currentIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5AFF00))(this, currentIndex);
  }
  void OODOQQQCDD() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5B10A0))(this);
  }
  void ODQDCQOQQC(int32_t el, ModdingAPI::Exposed::System::Collections::Generic::List_T_* trIntArray, ModdingAPI::Exposed::System::Collections::Generic::List_T_* uvArray, ModdingAPI::Exposed::System::Collections::Generic::List_T_* leftSidewalkIntArray, ModdingAPI::Exposed::System::Collections::Generic::List_T_* rightSidewalkIntArray, int32_t startend) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5B30D0))(this, el, trIntArray, uvArray, leftSidewalkIntArray, rightSidewalkIntArray, startend);
  }
  void OQDQDQOQDO(ModdingAPI::Exposed::System::Collections::Generic::List_T_* meshVecs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* connectionVecInts, ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShapeVecs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecArrays, ModdingAPI::Exposed::System::Collections::Generic::List_T_* leftSidewalkArray, ModdingAPI::Exposed::System::Collections::Generic::List_T_* rightSidewalkArray, int32_t connectionElement, int32_t startend) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5B3CA0))(this, meshVecs, connectionVecInts, roadShapeVecs, vecArrays, leftSidewalkArray, rightSidewalkArray, connectionElement, startend);
  }
  void OQCQCQDDCD(int32_t el, ModdingAPI::Exposed::UnityEngine::Material* roadMaterial, int32_t leftVecCount, int32_t rightVecCount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, int32_t, ModdingAPI::Exposed::UnityEngine::Material*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5B4AA0))(this, el, roadMaterial, leftVecCount, rightVecCount);
  }
  void OQQCQCQOCC() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OOCCQDOQQC(int32_t el) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5B55D0))(this, el);
  }
  void OCQCQCOODC(float minSurrounding, ModdingAPI::Exposed::UnityEngine::Vector3 middleVec, ModdingAPI::Exposed::UnityEngine::Vector3 origVec, bool boolCheck, ModdingAPI::Exposed::UnityEngine::Vector3 vec) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, float, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, bool, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5B74F0))(this, minSurrounding, middleVec, origVec, boolCheck, vec);
  }
  void CheckAgainstFirstSurroundingVec(ModdingAPI::Exposed::UnityEngine::Vector3 firstIndent, ModdingAPI::Exposed::UnityEngine::Vector3 firstSurrounding, bool boolCheck, ModdingAPI::Exposed::UnityEngine::Vector3 vec) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, bool, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5B7C40))(this, firstIndent, firstSurrounding, boolCheck, vec);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5B8020))(this);
  }

  // Static methods:
  static inline bool OOOCCOQDCO(int32_t el, float roundaboutIndent, ModdingAPI::Exposed::UnityEngine::Vector3 prevVec, bool boolCheck, ModdingAPI::Exposed::UnityEngine::Vector3 vec, int32_t indentBorderInt) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, float, ModdingAPI::Exposed::UnityEngine::Vector3, bool, ModdingAPI::Exposed::UnityEngine::Vector3, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5B71C0))(el, roundaboutIndent, prevVec, boolCheck, vec, indentBorderInt);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 OCDCDCDCQD(ModdingAPI::Exposed::UnityEngine::Vector3 p1, ModdingAPI::Exposed::UnityEngine::Vector3 p2, ModdingAPI::Exposed::UnityEngine::Vector3 p3, ModdingAPI::Exposed::UnityEngine::Vector3 p4) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5B7CD0))(p1, p2, p3, p4);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 OCQDOQQQOD(ModdingAPI::Exposed::UnityEngine::Vector3 point, ModdingAPI::Exposed::UnityEngine::Vector3 pivot, ModdingAPI::Exposed::UnityEngine::Quaternion angle) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5B7E70))(point, pivot, angle);
  }
};
}