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
struct __OQDDODCOQQ_Il2CppStaticFields {
};

struct __OQDDODCOQQ_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __OQDDODCOQQ_Il2CppClass {
  Il2CppClass_1 _1;
  __OQDDODCOQQ_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __OQDDODCOQQ_Il2CppVtbl vtbl;
};

class OQDDODCOQQ {
public:
  // Il2Cpp fields:
  __OQDDODCOQQ_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::OQDDODCOQQ*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static methods:
  static inline void OQDDCOCCOD(ModdingAPI::Exposed::EasyRoads3Dv3::ERBend* scr, ModdingAPI::Exposed::System::Collections::Generic::List_T_* leftOuterSegments, ModdingAPI::Exposed::System::Collections::Generic::List_T_* leftInnerSegments, ModdingAPI::Exposed::System::Collections::Generic::List_T_* rightOuterSegments, ModdingAPI::Exposed::System::Collections::Generic::List_T_* rightInnerSegments) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERBend*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x114B710))(scr, leftOuterSegments, leftInnerSegments, rightOuterSegments, rightInnerSegments);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* OQOODOQQDC(ModdingAPI::Exposed::UnityEngine::Vector3 prefabCenterpos, ModdingAPI::Exposed::UnityEngine::Vector3 cpCenterposV3, ModdingAPI::Exposed::UnityEngine::Vector3 v1, ModdingAPI::Exposed::UnityEngine::Vector3 cp, float totalDistance, ModdingAPI::Exposed::System::Collections::Generic::List_T_* controlPoints) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, float, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x114C160))(prefabCenterpos, cpCenterposV3, v1, cp, totalDistance, controlPoints);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* OCDCQDQOOQ(ModdingAPI::Exposed::UnityEngine::Vector3 prefabCenterpos, ModdingAPI::Exposed::UnityEngine::Vector3 cpCenterposV3, ModdingAPI::Exposed::UnityEngine::Vector3 v1, ModdingAPI::Exposed::UnityEngine::Vector3 cp, float totalDistance, ModdingAPI::Exposed::System::Collections::Generic::List_T_* controlPoints, float angle, float multiplyFactor) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, float, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x114CCC0))(prefabCenterpos, cpCenterposV3, v1, cp, totalDistance, controlPoints, angle, multiplyFactor);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* OCCDOOCDOC(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* scr, int32_t connection, ModdingAPI::Exposed::System::Collections::Generic::List_T_* controlPoints, float segmentDistance, float defaultDistance, ModdingAPI::Exposed::UnityEngine::Vector3_array* meshVecs, ModdingAPI::Exposed::UnityEngine::Vector3_array* tCrossingTmpFullMeshVecs, float multiplyFactor, float angle, float curveStrength) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float, float, ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::UnityEngine::Vector3_array*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x114DCB0))(scr, connection, controlPoints, segmentDistance, defaultDistance, meshVecs, tCrossingTmpFullMeshVecs, multiplyFactor, angle, curveStrength);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* OODCQDOCQQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* scr, int32_t connection, ModdingAPI::Exposed::System::Collections::Generic::List_T_* controlPoints, float segmentDistance, float defaultDistance, ModdingAPI::Exposed::UnityEngine::Vector3_array* meshVecs, ModdingAPI::Exposed::UnityEngine::Vector3_array* tmpSurfaceVecsTCrossings, float multiplyFactor, float angle, float curveStrength) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float, float, ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::UnityEngine::Vector3_array*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x114EB70))(scr, connection, controlPoints, segmentDistance, defaultDistance, meshVecs, tmpSurfaceVecsTCrossings, multiplyFactor, angle, curveStrength);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* OCQQOQQCDO(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* scr, int32_t connection, ModdingAPI::Exposed::System::Collections::Generic::List_T_* controlPoints, float segmentDistance, ModdingAPI::Exposed::UnityEngine::Vector3_array* meshVecs, float multiplyFactor, float angle, ModdingAPI::Exposed::UnityEngine::Vector3 cpCenterPoint) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float, ModdingAPI::Exposed::UnityEngine::Vector3_array*, float, float, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x114F620))(scr, connection, controlPoints, segmentDistance, meshVecs, multiplyFactor, angle, cpCenterPoint);
  }
  static inline float GetZAdjust(ModdingAPI::Exposed::UnityEngine::Vector3 vec, float angle) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x114FFE0))(vec, angle);
  }
  static inline void OOQCQOQOQO(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr, int32_t connection, int32_t x, int32_t y, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecArray) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*, int32_t, int32_t, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1150170))(scr, connection, x, y, vecArray);
  }
  static inline void OOCQCQDQDO(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr, int32_t connection, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecArray, int32_t leftright) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11512A0))(scr, connection, vecArray, leftright);
  }
};
}