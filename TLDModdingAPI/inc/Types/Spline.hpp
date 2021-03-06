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
#include "ModdingAPI.Exposed.UnityEngine.Quaternion.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Ray.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Plane.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Quaternion.hpp"


namespace ModdingAPI::Exposed {
struct __Spline_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Double_array* HermiteMatrix;
  ModdingAPI::Exposed::System::Double_array* BezierMatrix;
  ModdingAPI::Exposed::System::Double_array* BSplineMatrix;
  ModdingAPI::Exposed::System::Double_array* LinearMatrix;
};

struct __Spline_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Spline_Il2CppClass {
  Il2CppClass_1 _1;
  __Spline_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Spline_Il2CppVtbl vtbl;
};

class Spline {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C673F8;
  static inline    Spline* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C301B8;
  static inline    __Spline_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline Spline* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (Spline**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __Spline_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Spline_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Spline_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* splineNodesArray;
  int32_t interpolationMode;
  int32_t rotationMode;
  int32_t tangentMode;
  ModdingAPI::Exposed::SplineUtilities::AutomaticUpdater* autoUpdate;
  ModdingAPI::Exposed::UnityEngine::Vector3 tanUpVector;
  float tension;
  bool autoClose;
  int32_t interpolationAccuracy;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* splineNodesInternal;
  ModdingAPI::Exposed::Spline::LengthData* lengthData;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154A8D0))(this);
  }
  float get_Length() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154AE30))(this);
  }
  bool get_AutoClose() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154AE60))(this);
  }
  int32_t get_Step() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154AE80))(this);
  }
  int32_t get_SegmentCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154AEA0))(this);
  }
  int32_t get_ControlNodeCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154AED0))(this);
  }
  double get_InvertedAccuracy() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154AF80))(this);
  }
  bool get_IsBezier() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x90DF10))(this);
  }
  bool get_HasNodes() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154AFA0))(this);
  }
  ModdingAPI::Exposed::SplineNode_array* get_SplineNodes() {
    return reinterpret_cast<ModdingAPI::Exposed::SplineNode_array*(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154B040))(this);
  }
  ModdingAPI::Exposed::SplineSegment_array* get_SplineSegments() {
    return reinterpret_cast<ModdingAPI::Exposed::SplineSegment_array*(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154B1C0))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154B4B0))(this);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154B4C0))(this);
  }
  void UpdateSpline() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154B500))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetPositionOnSpline(float param) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Spline*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154B970))(this, param);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetTangentToSpline(float param) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Spline*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154BA70))(this, param);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion GetOrientationOnSpline(float param) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::Spline*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154BB70))(this, param);
  }
  float GetCustomValueOnSpline(float param) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Spline*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154BDB0))(this, param);
  }
  ModdingAPI::Exposed::SplineSegment* GetSplineSegment(float param) {
    return reinterpret_cast<ModdingAPI::Exposed::SplineSegment*(__fastcall*)(ModdingAPI::Exposed::Spline*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154BE10))(this, param);
  }
  float ConvertNormalizedParameterToDistance(float param) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Spline*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154C160))(this, param);
  }
  float ConvertDistanceToNormalizedParameter(float param) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Spline*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154C190))(this, param);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* AddSplineNode() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154C1E0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* AddSplineNode(float normalizedParam) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::Spline*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154C2B0))(this, normalizedParam);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* AddSplineNode(ModdingAPI::Exposed::SplineNode* precedingNode) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::SplineNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154C4C0))(this, precedingNode);
  }
  void RemoveSplineNode(ModdingAPI::Exposed::UnityEngine::GameObject* gObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154C740))(this, gObject);
  }
  void RemoveSplineNode(ModdingAPI::Exposed::SplineNode* splineNode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::SplineNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154C8A0))(this, splineNode);
  }
  ModdingAPI::Exposed::Spline::SegmentParameter* RecalculateParameter(double param) {
    return reinterpret_cast<ModdingAPI::Exposed::Spline::SegmentParameter*(__fastcall*)(ModdingAPI::Exposed::Spline*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154C950))(this, param);
  }
  ModdingAPI::Exposed::SplineNode* GetNode(int32_t idxNode, int32_t idxOffset) {
    return reinterpret_cast<ModdingAPI::Exposed::SplineNode*(__fastcall*)(ModdingAPI::Exposed::Spline*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154CEC0))(this, idxNode, idxOffset);
  }
  void ReparameterizeCurve() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154D000))(this);
  }
  int32_t MaxNodeIndex() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154D170))(this);
  }
  int32_t GetRelevantNodeCount(int32_t nodeCount) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Spline*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154D1A0))(this, nodeCount);
  }
  bool EnoughNodes(int32_t nodeCount) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Spline*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154D1F0))(this, nodeCount);
  }
  float GetClosestPointParam(ModdingAPI::Exposed::UnityEngine::Vector3 point, int32_t iterations, float start, float end, float step) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::UnityEngine::Vector3, int32_t, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154D210))(this, point, iterations, start, end, step);
  }
  float GetClosestPointParamToRay(ModdingAPI::Exposed::UnityEngine::Ray ray, int32_t iterations, float start, float end, float step) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::UnityEngine::Ray, int32_t, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154D480))(this, ray, iterations, start, end, step);
  }
  float GetClosestPointParamToPlane(ModdingAPI::Exposed::UnityEngine::Plane plane, int32_t iterations, float start, float end, float step) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::UnityEngine::Plane, int32_t, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154D700))(this, plane, iterations, start, end, step);
  }
  float GetClosestPointParamIntern(ModdingAPI::Exposed::Spline::DistanceFunction* distFnc, int32_t iterations, float start, float end, float step) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::Spline::DistanceFunction*, int32_t, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154D970))(this, distFnc, iterations, start, end, step);
  }
  float GetClosestPointParamOnSegmentIntern(ModdingAPI::Exposed::Spline::DistanceFunction* distFnc, float start, float end, float step) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::Spline::DistanceFunction*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154DBA0))(this, distFnc, start, end, step);
  }
  void OnDrawGizmos() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154DC80))(this);
  }
  void OnDrawGizmosSelected() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154E160))(this);
  }
  void DrawSplineGizmo(ModdingAPI::Exposed::UnityEngine::Color curveColor) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154E4E0))(this, curveColor);
  }
  float GetSizeMultiplier(ModdingAPI::Exposed::SplineNode* node) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::SplineNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154EBB0))(this, node);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetPositionInternal(ModdingAPI::Exposed::Spline::SegmentParameter* sParam) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::Spline::SegmentParameter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154F190))(this, sParam);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetTangentInternal(ModdingAPI::Exposed::Spline::SegmentParameter* sParam) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::Spline::SegmentParameter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154F440))(this, sParam);
  }
  double GetValueInternal(ModdingAPI::Exposed::Spline::SegmentParameter* sParam) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::Spline::SegmentParameter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154F6F0))(this, sParam);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion GetRotationInternal(ModdingAPI::Exposed::Spline::SegmentParameter* sParam) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::Spline::SegmentParameter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154F8B0))(this, sParam);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 InterpolatePosition(double t, ModdingAPI::Exposed::UnityEngine::Vector3 v0, ModdingAPI::Exposed::UnityEngine::Vector3 v1, ModdingAPI::Exposed::UnityEngine::Vector3 v2, ModdingAPI::Exposed::UnityEngine::Vector3 v3) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Spline*, double, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x154FBF0))(this, t, v0, v1, v2, v3);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion InterpolateRotation(double t, ModdingAPI::Exposed::UnityEngine::Quaternion q0, ModdingAPI::Exposed::UnityEngine::Quaternion q1, ModdingAPI::Exposed::UnityEngine::Quaternion q2, ModdingAPI::Exposed::UnityEngine::Quaternion q3) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::Spline*, double, ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1550050))(this, t, q0, q1, q2, q3);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 InterpolateTangent(double t, ModdingAPI::Exposed::UnityEngine::Vector3 v0, ModdingAPI::Exposed::UnityEngine::Vector3 v1, ModdingAPI::Exposed::UnityEngine::Vector3 v2, ModdingAPI::Exposed::UnityEngine::Vector3 v3) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Spline*, double, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15506E0))(this, t, v0, v1, v2, v3);
  }
  double InterpolateValue(double t, double v0, double v1, double v2, double v3) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::Spline*, double, double, double, double, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1550A90))(this, t, v0, v1, v2, v3);
  }
  void GetAdjacentNodes(ModdingAPI::Exposed::Spline::SegmentParameter* sParam, ModdingAPI::Exposed::SplineNode* node0, ModdingAPI::Exposed::SplineNode* node1, ModdingAPI::Exposed::SplineNode* node2, ModdingAPI::Exposed::SplineNode* node3) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::Spline::SegmentParameter*, ModdingAPI::Exposed::SplineNode*, ModdingAPI::Exposed::SplineNode*, ModdingAPI::Exposed::SplineNode*, ModdingAPI::Exposed::SplineNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1550E60))(this, sParam, node0, node1, node2, node3);
  }
  void RecalcVectors(ModdingAPI::Exposed::SplineNode* node0, ModdingAPI::Exposed::SplineNode* node1, ModdingAPI::Exposed::UnityEngine::Vector3 P2, ModdingAPI::Exposed::UnityEngine::Vector3 P3) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::SplineNode*, ModdingAPI::Exposed::SplineNode*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1550FB0))(this, node0, node1, P2, P3);
  }
  void RecalcScalars(ModdingAPI::Exposed::SplineNode* node0, ModdingAPI::Exposed::SplineNode* node1, double P2, double P3) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Spline*, ModdingAPI::Exposed::SplineNode*, ModdingAPI::Exposed::SplineNode*, double, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15513B0))(this, node0, node1, P2, P3);
  }
  double GetSegmentLengthInternal(int32_t idxFirstPoint, double startValue, double endValue, double step) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::Spline*, int32_t, double, double, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1551430))(this, idxFirstPoint, startValue, endValue, step);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Double_array*> HermiteMatrix = __CppStaticProperty<ModdingAPI::Exposed::System::Double_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->HermiteMatrix; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Double_array*> BezierMatrix = __CppStaticProperty<ModdingAPI::Exposed::System::Double_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->BezierMatrix; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Double_array*> BSplineMatrix = __CppStaticProperty<ModdingAPI::Exposed::System::Double_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->BSplineMatrix; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Double_array*> LinearMatrix = __CppStaticProperty<ModdingAPI::Exposed::System::Double_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->LinearMatrix; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x154ACE0))();
  }
  static inline ModdingAPI::Exposed::System::Double_array* GetMatrix(int32_t iMode) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Double_array*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1551800))(iMode);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion GetSquadIntermediate(ModdingAPI::Exposed::UnityEngine::Quaternion q0, ModdingAPI::Exposed::UnityEngine::Quaternion q1, ModdingAPI::Exposed::UnityEngine::Quaternion q2) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1551950))(q0, q1, q2);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion GetQuatLog(ModdingAPI::Exposed::UnityEngine::Quaternion q) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1551EF0))(q);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion GetQuatExp(ModdingAPI::Exposed::UnityEngine::Quaternion q) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1552060))(q);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion GetQuatConjugate(ModdingAPI::Exposed::UnityEngine::Quaternion q) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1552200))(q);
  }
};
}