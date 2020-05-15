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
#include "ModdingAPI.Exposed.UnityEngine.Bounds.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Quaternion.hpp"


namespace ModdingAPI::Exposed {
struct __CameraPath_Il2CppStaticFields {
  float CURRENT_VERSION_NUMBER;
};

struct __CameraPath_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CameraPath_Il2CppClass {
  Il2CppClass_1 _1;
  __CameraPath_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CameraPath_Il2CppVtbl vtbl;
};

class CameraPath {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C60BB0;
  static inline    __CameraPath_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CameraPath_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CameraPath_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CameraPath_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float version;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _points;
  int32_t _interpolation;
  bool initialised;
  float _storedTotalArcLength;
  ModdingAPI::Exposed::System::Single_array* _storedArcLengths;
  ModdingAPI::Exposed::System::Single_array* _storedArcLengthsFull;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* _storedPoints;
  ModdingAPI::Exposed::System::Single_array* _normalisedPercentages;
  float _storedPointResolution;
  int32_t _storedValueArraySize;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* _storedPathDirections;
  float _directionWidth;
  ModdingAPI::Exposed::CameraPathControlPoint_array* _pointALink;
  ModdingAPI::Exposed::CameraPathControlPoint_array* _pointBLink;
  ModdingAPI::Exposed::CameraPathOrientationList* _orientationList;
  ModdingAPI::Exposed::CameraPathFOVList* _fovList;
  ModdingAPI::Exposed::CameraPathTiltList* _tiltList;
  ModdingAPI::Exposed::CameraPathSpeedList* _speedList;
  ModdingAPI::Exposed::CameraPathEventList* _eventList;
  ModdingAPI::Exposed::CameraPathDelayList* _delayList;
  bool _addOrientationsWithPoints;
  bool _looped;
  bool _normalised;
  ModdingAPI::Exposed::UnityEngine::Bounds _pathBounds;
  float hermiteTension;
  float hermiteBias;
  ModdingAPI::Exposed::UnityEngine::GameObject* editorPreview;
  int32_t selectedPoint;
  int32_t pointMode;
  float addPointAtPercent;
  float _aspect;
  int32_t _previewResolution;
  float drawDistance;
  int32_t _displayHeight;
  ModdingAPI::Exposed::CameraPath* _nextPath;
  bool _interpolateNextPath;
  bool showGizmos;
  ModdingAPI::Exposed::UnityEngine::Color selectedPathColour;
  ModdingAPI::Exposed::UnityEngine::Color unselectedPathColour;
  ModdingAPI::Exposed::UnityEngine::Color selectedPointColour;
  ModdingAPI::Exposed::UnityEngine::Color unselectedPointColour;
  bool showOrientationIndicators;
  float orientationIndicatorUnitLength;
  ModdingAPI::Exposed::UnityEngine::Color orientationIndicatorColours;
  bool autoSetStoedPointRes;
  bool enableUndo;
  bool showPreview;
  bool enablePreviews;
  ModdingAPI::Exposed::CameraPath::RecalculateCurvesHandler* RecalculateCurvesEvent;
  ModdingAPI::Exposed::CameraPath::PathPointAddedHandler* PathPointAddedEvent;
  ModdingAPI::Exposed::CameraPath::PathPointRemovedHandler* PathPointRemovedEvent;
  ModdingAPI::Exposed::CameraPath::CheckStartPointCullHandler* CheckStartPointCullEvent;
  ModdingAPI::Exposed::CameraPath::CheckEndPointCullHandler* CheckEndPointCullEvent;
  ModdingAPI::Exposed::CameraPath::CleanUpListsHandler* CleanUpListsEvent;

  // Member methods:
  void add_RecalculateCurvesEvent(ModdingAPI::Exposed::CameraPath::RecalculateCurvesHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath::RecalculateCurvesHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECE4F0))(this, value);
  }
  void remove_RecalculateCurvesEvent(ModdingAPI::Exposed::CameraPath::RecalculateCurvesHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath::RecalculateCurvesHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECE5E0))(this, value);
  }
  void add_PathPointAddedEvent(ModdingAPI::Exposed::CameraPath::PathPointAddedHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath::PathPointAddedHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECE6D0))(this, value);
  }
  void remove_PathPointAddedEvent(ModdingAPI::Exposed::CameraPath::PathPointAddedHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath::PathPointAddedHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECE7C0))(this, value);
  }
  void add_PathPointRemovedEvent(ModdingAPI::Exposed::CameraPath::PathPointRemovedHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath::PathPointRemovedHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECE8B0))(this, value);
  }
  void remove_PathPointRemovedEvent(ModdingAPI::Exposed::CameraPath::PathPointRemovedHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath::PathPointRemovedHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECE9A0))(this, value);
  }
  void add_CheckStartPointCullEvent(ModdingAPI::Exposed::CameraPath::CheckStartPointCullHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath::CheckStartPointCullHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECEA90))(this, value);
  }
  void remove_CheckStartPointCullEvent(ModdingAPI::Exposed::CameraPath::CheckStartPointCullHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath::CheckStartPointCullHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECEB80))(this, value);
  }
  void add_CheckEndPointCullEvent(ModdingAPI::Exposed::CameraPath::CheckEndPointCullHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath::CheckEndPointCullHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECEC70))(this, value);
  }
  void remove_CheckEndPointCullEvent(ModdingAPI::Exposed::CameraPath::CheckEndPointCullHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath::CheckEndPointCullHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECED60))(this, value);
  }
  void add_CleanUpListsEvent(ModdingAPI::Exposed::CameraPath::CleanUpListsHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath::CleanUpListsHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECEE50))(this, value);
  }
  void remove_CleanUpListsEvent(ModdingAPI::Exposed::CameraPath::CleanUpListsHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath::CleanUpListsHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECEF40))(this, value);
  }
  ModdingAPI::Exposed::CameraPathControlPoint* get_Item(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathControlPoint*(__fastcall*)(ModdingAPI::Exposed::CameraPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF030))(this, index);
  }
  int32_t get_numberOfPoints() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF240))(this);
  }
  int32_t get_realNumberOfPoints() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF320))(this);
  }
  int32_t get_numberOfCurves() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF3B0))(this);
  }
  bool get_loop() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF4E0))(this);
  }
  void set_loop(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF4F0))(this, value);
  }
  float get_pathLength() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x581030))(this);
  }
  ModdingAPI::Exposed::CameraPathOrientationList* get_orientationList() {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathOrientationList*(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x321390))(this);
  }
  ModdingAPI::Exposed::CameraPathFOVList* get_fovList() {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathFOVList*(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307640))(this);
  }
  ModdingAPI::Exposed::CameraPathTiltList* get_tiltList() {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathTiltList*(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BC530))(this);
  }
  ModdingAPI::Exposed::CameraPathSpeedList* get_speedList() {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathSpeedList*(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319850))(this);
  }
  ModdingAPI::Exposed::CameraPathEventList* get_eventList() {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathEventList*(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BC850))(this);
  }
  ModdingAPI::Exposed::CameraPathDelayList* get_delayList() {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathDelayList*(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F140))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Bounds get_bounds() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Bounds(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF510))(this);
  }
  float StoredArcLength(int32_t curve) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF530))(this, curve);
  }
  int32_t get_storedValueArraySize() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5F11E0))(this);
  }
  ModdingAPI::Exposed::CameraPathControlPoint_array* get_pointALink() {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathControlPoint_array*(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319940))(this);
  }
  ModdingAPI::Exposed::CameraPathControlPoint_array* get_pointBLink() {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathControlPoint_array*(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319950))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3_array* get_storedPoints() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319980))(this);
  }
  bool get_normalised() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF690))(this);
  }
  void set_normalised(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF6A0))(this, value);
  }
  int32_t get_interpolation() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F810))(this);
  }
  void set_interpolation(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF6B0))(this, value);
  }
  ModdingAPI::Exposed::CameraPath* get_nextPath() {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPath*(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E0A0))(this);
  }
  void set_nextPath(ModdingAPI::Exposed::CameraPath* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF6C0))(this, value);
  }
  bool get_interpolateNextPath() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16F59D0))(this);
  }
  void set_interpolateNextPath(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF830))(this, value);
  }
  bool get_shouldInterpolateNextPath() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF850))(this);
  }
  float get_storedPointResolution() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x56EFD0))(this);
  }
  void set_storedPointResolution(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECF920))(this, value);
  }
  float get_directionWidth() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x56F0E0))(this);
  }
  void set_directionWidth(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECFA20))(this, value);
  }
  int32_t get_displayHeight() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECFA30))(this);
  }
  void set_displayHeight(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECFA40))(this, value);
  }
  float get_aspect() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F22D0))(this);
  }
  void set_aspect(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECFB20))(this, value);
  }
  int32_t get_previewResolution() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9321A0))(this);
  }
  void set_previewResolution(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECFC00))(this, value);
  }
  int32_t StoredValueIndex(float percentage) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECFCE0))(this, percentage);
  }
  ModdingAPI::Exposed::CameraPathControlPoint* AddPoint(ModdingAPI::Exposed::UnityEngine::Vector3 position) {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathControlPoint*(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECFDC0))(this, position);
  }
  void AddPoint(ModdingAPI::Exposed::CameraPathControlPoint* point) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPathControlPoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ECFFA0))(this, point);
  }
  void InsertPoint(ModdingAPI::Exposed::CameraPathControlPoint* point, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPathControlPoint*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED0070))(this, point, index);
  }
  ModdingAPI::Exposed::CameraPathControlPoint* InsertPoint(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathControlPoint*(__fastcall*)(ModdingAPI::Exposed::CameraPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED0140))(this, index);
  }
  void RemovePoint(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED02D0))(this, index);
  }
  bool RemovePoint(System_String* pointName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CameraPath*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED0300))(this, pointName);
  }
  void RemovePoint(ModdingAPI::Exposed::UnityEngine::Vector3 pointPosition) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED0570))(this, pointPosition);
  }
  void RemovePoint(ModdingAPI::Exposed::CameraPathControlPoint* point) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPathControlPoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED07F0))(this, point);
  }
  float ParsePercentage(float percentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED0A00))(this, percentage);
  }
  float CalculateNormalisedPercentage(float percentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED0C80))(this, percentage);
  }
  float DeNormalisePercentage(float normalisedPercent) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED0E60))(this, normalisedPercent);
  }
  int32_t GetPointNumber(float percentage) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED1010))(this, percentage);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetPathPosition(float percentage) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED1130))(this, percentage);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetPathPosition(float percentage, bool ignoreNormalisation) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED1170))(this, percentage, ignoreNormalisation);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion GetPathRotation(float percentage, bool ignoreNormalisation) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED1B10))(this, percentage, ignoreNormalisation);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetPathDirection(float percentage) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED1B70))(this, percentage);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetPathDirection(float percentage, bool normalisePercent) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED1BB0))(this, percentage, normalisePercent);
  }
  float GetPathTilt(float percentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED1ED0))(this, percentage);
  }
  float GetPathFOV(float percentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED1F10))(this, percentage);
  }
  float GetPathOrthographicSize(float percentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED1F50))(this, percentage);
  }
  float GetPathSpeed(float percentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED1F90))(this, percentage);
  }
  float GetPathEase(float percentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2000))(this, percentage);
  }
  void CheckEvents(float percentage) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2040))(this, percentage);
  }
  float GetPathPercentage(ModdingAPI::Exposed::CameraPathControlPoint* point) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPathControlPoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED20A0))(this, point);
  }
  float GetPathPercentage(int32_t pointIndex) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2190))(this, pointIndex);
  }
  int32_t GetNearestPointIndex(float percentage) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED21C0))(this, percentage);
  }
  int32_t GetLastPointIndex(float percentage, bool isNormalised) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2290))(this, percentage, isNormalised);
  }
  int32_t GetNextPointIndex(float percentage, bool isNormalised) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2370))(this, percentage, isNormalised);
  }
  float GetCurvePercentage(ModdingAPI::Exposed::CameraPathControlPoint* pointA, ModdingAPI::Exposed::CameraPathControlPoint* pointB, float percentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPathControlPoint*, ModdingAPI::Exposed::CameraPathControlPoint*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2450))(this, pointA, pointB, percentage);
  }
  float GetCurvePercentage(ModdingAPI::Exposed::CameraPathPoint* pointA, ModdingAPI::Exposed::CameraPathPoint* pointB, float percentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPathPoint*, ModdingAPI::Exposed::CameraPathPoint*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2590))(this, pointA, pointB, percentage);
  }
  float GetCurvePercentage(ModdingAPI::Exposed::CameraPathPoint* point) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPathPoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2700))(this, point);
  }
  float GetOutroEasePercentage(ModdingAPI::Exposed::CameraPathDelay* point) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPathDelay*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2860))(this, point);
  }
  float GetIntroEasePercentage(ModdingAPI::Exposed::CameraPathDelay* point) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPathDelay*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED29E0))(this, point);
  }
  float GetPathPercentage(ModdingAPI::Exposed::CameraPathControlPoint* pointA, ModdingAPI::Exposed::CameraPathControlPoint* pointB, float curvePercentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::CameraPathControlPoint*, ModdingAPI::Exposed::CameraPathControlPoint*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2B50))(this, pointA, pointB, curvePercentage);
  }
  float GetPathPercentage(float pointA, float pointB, float curvePercentage) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2C50))(this, pointA, pointB, curvePercentage);
  }
  int32_t GetStoredPoint(float percentage) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2D20))(this, percentage);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2E20))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED2E30))(this);
  }
  void OnValidate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED3460))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED34D0))(this);
  }
  void RecalculateStoredValues() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED3590))(this);
  }
  float GetNearestPoint(ModdingAPI::Exposed::UnityEngine::Vector3 fromPostition) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED4E50))(this, fromPostition);
  }
  float GetNearestPoint(ModdingAPI::Exposed::UnityEngine::Vector3 fromPostition, bool ignoreNormalisation) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::UnityEngine::Vector3, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED4E90))(this, fromPostition, ignoreNormalisation);
  }
  float GetNearestPoint(ModdingAPI::Exposed::UnityEngine::Vector3 fromPostition, bool ignoreNormalisation, int32_t refinments) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::UnityEngine::Vector3, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED4ED0))(this, fromPostition, ignoreNormalisation, refinments);
  }
  float GetNearestPointNear(ModdingAPI::Exposed::UnityEngine::Vector3 fromPostition, float prevPercentage, ModdingAPI::Exposed::UnityEngine::Vector3 prevPosition, bool ignoreNormalisation, int32_t refinments) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraPath*, ModdingAPI::Exposed::UnityEngine::Vector3, float, ModdingAPI::Exposed::UnityEngine::Vector3, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED5260))(this, fromPostition, prevPercentage, prevPosition, ignoreNormalisation, refinments);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED55A0))(this);
  }
  ModdingAPI::Exposed::CameraPathControlPoint* GetPoint(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::CameraPathControlPoint*(__fastcall*)(ModdingAPI::Exposed::CameraPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED5650))(this, index);
  }
  int32_t GetPointIndex(int32_t index) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED5770))(this, index);
  }
  int32_t GetCurveIndex(int32_t startPointIndex) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::CameraPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED58B0))(this, startPointIndex);
  }
  void Init() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED59F0))(this);
  }
  void InitialiseLists() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED5F40))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED6480))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<float> CURRENT_VERSION_NUMBER = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->CURRENT_VERSION_NUMBER; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED6710))();
  }
};
}