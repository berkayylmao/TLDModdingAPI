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
struct __ERSideWalkVecs_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::GameObject* sidewalk;
};

struct __ERSideWalkVecs_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ERSideWalkVecs_Il2CppClass {
  Il2CppClass_1 _1;
  __ERSideWalkVecs_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ERSideWalkVecs_Il2CppVtbl vtbl;
};

class ERSideWalkVecs {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C494B8;
  static inline    __ERSideWalkVecs_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ERSideWalkVecs_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ERSideWalkVecs_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ERSideWalkVecs_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERSideWalkVecs*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*> sidewalk = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->sidewalk; }
  );

  // Static methods:
  static inline void OCDDQODQDQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x706F70))(scr);
  }
  static inline void OCQQQQOQCO(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7078A0))(scr);
  }
  static inline void OQQOQOQODQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecArray, ModdingAPI::Exposed::UnityEngine::Vector3 firstOther, float sidewalkWidth, int32_t xorz, int32_t cornerInt) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::UnityEngine::Vector3, float, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x708330))(scr, vecArray, firstOther, sidewalkWidth, xorz, cornerInt);
  }
  static inline void OOQODDCCCC(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecArray, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecArrayOther, ModdingAPI::Exposed::EasyRoads3Dv3::QDOQDSQOOQDDD* corner, int32_t startEnd, int32_t mainOrConnected, int32_t outerCornerInt) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::EasyRoads3Dv3::QDOQDSQOOQDDD*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x708510))(scr, vecArray, vecArrayOther, corner, startEnd, mainOrConnected, outerCornerInt);
  }
  static inline void OQDCDDODOO(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70A0A0))(scr);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* OQQQDODQDO(ModdingAPI::Exposed::System::Collections::Generic::List_T_* outer, ModdingAPI::Exposed::System::Collections::Generic::List_T_* outerOther, float dist, float height, int32_t startend, int32_t leftright, int32_t outerCornerInt) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float, float, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70B2A0))(outer, outerOther, dist, height, startend, leftright, outerCornerInt);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* ODCOQOOOCO(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr, ModdingAPI::Exposed::System::Collections::Generic::List_T_* innerArray, ModdingAPI::Exposed::System::Collections::Generic::List_T_* outerOther, float dist, float height, float sidewalkWidth, int32_t startend, int32_t leftright, int32_t outerCornerInt) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float, float, float, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70B880))(scr, innerArray, outerOther, dist, height, sidewalkWidth, startend, leftright, outerCornerInt);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* ODCQODDDQD(ModdingAPI::Exposed::System::Collections::Generic::List_T_* outer, float height) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70C200))(outer, height);
  }
  static inline void OQQCODQQCO(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecArray, ModdingAPI::Exposed::System::Collections::Generic::List_T_* uvArray, ModdingAPI::Exposed::EasyRoads3Dv3::QDOQDSQOOQDDD* corner, bool reverse, float uvTiling) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::EasyRoads3Dv3::QDOQDSQOOQDDD*, bool, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70C510))(scr, vecArray, uvArray, corner, reverse, uvTiling);
  }
  static inline void ODQCQCDQQQ(ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecArray, ModdingAPI::Exposed::System::Collections::Generic::List_T_* sidewalkUVs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70CCA0))(vecArray, sidewalkUVs);
  }
  static inline void OODDCQQDCD(ModdingAPI::Exposed::System::Collections::Generic::List_T_* outer1, ModdingAPI::Exposed::System::Collections::Generic::List_T_* outer2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70D1E0))(outer1, outer2);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* OODOCDCQDC(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr, ModdingAPI::Exposed::UnityEngine::Vector3_array* normals) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*, ModdingAPI::Exposed::UnityEngine::Vector3_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70D6F0))(scr, normals);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector4_array* AdjustSidewalkTangents1(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr, ModdingAPI::Exposed::UnityEngine::Vector4_array* tangents) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector4_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*, ModdingAPI::Exposed::UnityEngine::Vector4_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70E320))(scr, tangents);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector4_array* AdjustSidewalkTangents(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr, ModdingAPI::Exposed::UnityEngine::Vector4_array* tangents) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector4_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*, ModdingAPI::Exposed::UnityEngine::Vector4_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70EF00))(scr, tangents);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* ODDODCQQCC(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts* scr, ModdingAPI::Exposed::UnityEngine::Vector3_array* normals) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoundabouts*, ModdingAPI::Exposed::UnityEngine::Vector3_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70EF60))(scr, normals);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* SnapSidewalkCornersVecs(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings* scr, ModdingAPI::Exposed::UnityEngine::Vector3_array* vecs) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossings*, ModdingAPI::Exposed::UnityEngine::Vector3_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70F600))(scr, vecs);
  }
  static inline void ODDQQCDDQD(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* baseScript, ModdingAPI::Exposed::EasyRoads3Dv3::ERSideWalk* sw, ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERSideWalk*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x70FEB0))(baseScript, sw, pos);
  }
  static inline void OCOCOQCDOQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* baseScript, ModdingAPI::Exposed::EasyRoads3Dv3::ERSideWalk* sw, ModdingAPI::Exposed::UnityEngine::GameObject* sidewalkGO, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecs, int32_t leftRight, float offsetX) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*, ModdingAPI::Exposed::EasyRoads3Dv3::ERSideWalk*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x710740))(baseScript, sw, sidewalkGO, vecs, leftRight, offsetX);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* OCCDOOOOOQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERSideWalk* sw, int32_t innerIndex, ModdingAPI::Exposed::System::Collections::Generic::List_T_* trisFlag) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERSideWalk*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x711030))(sw, innerIndex, trisFlag);
  }
  static inline void OODOQQQCDD(ModdingAPI::Exposed::EasyRoads3Dv3::ERSideWalk* sw, ModdingAPI::Exposed::System::Collections::Generic::List_T_* shape, ModdingAPI::Exposed::System::Collections::Generic::List_T_* trisFlag, ModdingAPI::Exposed::System::Collections::Generic::List_T_* uv, ModdingAPI::Exposed::System::Collections::Generic::List_T_* spline, int32_t leftright, ModdingAPI::Exposed::UnityEngine::GameObject* sidewalkGO, float offsetX) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERSideWalk*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, ModdingAPI::Exposed::UnityEngine::GameObject*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x712350))(sw, shape, trisFlag, uv, spline, leftright, sidewalkGO, offsetX);
  }
  static inline void OQCODQCOOO(ModdingAPI::Exposed::EasyRoads3Dv3::ERSideWalk* sw, ModdingAPI::Exposed::System::Collections::Generic::List_T_* sourceVecs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* sourceUVs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* uvs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* tris, int32_t leftrightroad) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERSideWalk*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7145E0))(sw, sourceVecs, sourceUVs, vecs, uvs, tris, leftrightroad);
  }
};
}