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
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __OQQOOODQDQ_Il2CppStaticFields {
};

struct __OQQOOODQDQ_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __OQQOOODQDQ_Il2CppClass {
  Il2CppClass_1 _1;
  __OQQOOODQDQ_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __OQQOOODQDQ_Il2CppVtbl vtbl;
};

class OQQOOODQDQ {
public:
  // Il2Cpp fields:
  __OQQOOODQDQ_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::OQQOOODQDQ*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static methods:
  static inline void OCDQODDQOC(int32_t startInt, float startOffset, ModdingAPI::Exposed::System::Collections::Generic::List_T_* markerInts, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecPositions, ModdingAPI::Exposed::System::Collections::Generic::List_T_* soSplinePointLeft, ModdingAPI::Exposed::System::Collections::Generic::List_T_* soSplinePointRight, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt* soMarker, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* roadScr, ModdingAPI::Exposed::System::Collections::Generic::List_T_* nodeList) {
    reinterpret_cast<void(__fastcall*)(int32_t, float, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5463E0))(startInt, startOffset, markerInts, vecPositions, soSplinePointLeft, soSplinePointRight, soMarker, roadScr, nodeList);
  }
  static inline void OOOCQOCCQQ(int32_t startInt, float endOffset, ModdingAPI::Exposed::System::Collections::Generic::List_T_* markerInts, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecPositions, ModdingAPI::Exposed::System::Collections::Generic::List_T_* soSplinePointLeft, ModdingAPI::Exposed::System::Collections::Generic::List_T_* soSplinePointRight, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt* soMarker, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* roadScr, ModdingAPI::Exposed::System::Collections::Generic::List_T_* nodeList) {
    reinterpret_cast<void(__fastcall*)(int32_t, float, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5476E0))(startInt, endOffset, markerInts, vecPositions, soSplinePointLeft, soSplinePointRight, soMarker, roadScr, nodeList);
  }
  static inline bool MoveDirection(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* road, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt* markerSO, ModdingAPI::Exposed::UnityEngine::Vector3 v) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x548830))(road, markerSO, v);
  }
  static inline void OCCODQOODQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* road, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt* markerSO, ModdingAPI::Exposed::UnityEngine::Vector3 v, ModdingAPI::Exposed::UnityEngine::Camera* cam, int32_t xDir, int32_t yDir) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Camera*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x548F00))(road, markerSO, v, cam, xDir, yDir);
  }
  static inline void OOCQDODDDQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* road, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt* markerSO, ModdingAPI::Exposed::UnityEngine::Vector3 v, ModdingAPI::Exposed::UnityEngine::Vector3 vOld, float movement) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x549450))(road, markerSO, v, vOld, movement);
  }
  static inline void ODQCCCQCDC(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* road, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt* markerSO, ModdingAPI::Exposed::UnityEngine::Vector3 v) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x549D90))(road, markerSO, v);
  }
  static inline void OOODQDDDOQ(int32_t startInt, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecPositions, ModdingAPI::Exposed::System::Collections::Generic::List_T_* markersInts, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt* soMarker, bool startFlag, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* roadScr) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::EasyRoads3Dv3::ERSOMarkerExt*, bool, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x54A6D0))(startInt, vecPositions, markersInts, soMarker, startFlag, roadScr);
  }
  static inline void SynchSoData(ModdingAPI::Exposed::EasyRoads3Dv3::ERSORoadExt* soData, bool flag) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERSORoadExt*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x54AE00))(soData, flag);
  }
  static inline void CopySoData(ModdingAPI::Exposed::EasyRoads3Dv3::ERSORoadExt* soData, ModdingAPI::Exposed::EasyRoads3Dv3::ERSORoadExt* source) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERSORoadExt*, ModdingAPI::Exposed::EasyRoads3Dv3::ERSORoadExt*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x54AFA0))(soData, source);
  }
  static inline void UnlockSORotation(ModdingAPI::Exposed::System::Collections::Generic::List_T_* soDataList) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x54B080))(soDataList);
  }
  static inline void CheckMarkerSOData(ModdingAPI::Exposed::EasyRoads3Dv3::SideObject* so, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* road) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::SideObject*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(so, road);
  }
  static inline void ResetMarkerSOData(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* road) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x54B1C0))(road);
  }
  static inline void OQCCQDQDQQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr, ModdingAPI::Exposed::EasyRoads3Dv3::SideObject* so, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::SideObject*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x54B6A0))(scr, so, go);
  }
};
}