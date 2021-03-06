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


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __ERRoadType_Il2CppStaticFields {
};

struct __ERRoadType_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ERRoadType_Il2CppClass {
  Il2CppClass_1 _1;
  __ERRoadType_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ERRoadType_Il2CppVtbl vtbl;
};

class ERRoadType {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2DFC8;
  static inline    __ERRoadType_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ERRoadType_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ERRoadType_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ERRoadType_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  double id;
  System_String* roadTypeName;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShape;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShapeExt;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* doConnectionTri;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShapeUVs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShapeExtUVs;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShapeUVs2;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* hardEdge;
  float roadWidth;
  float faceDistance;
  float angleTreshold;
  bool sidewalks;
  float sidewalkHeight;
  float sidewalkWidth;
  ModdingAPI::Exposed::UnityEngine::Material* roadMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* roadPhysicsMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* connectionMaterial;
  bool isSideObject;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* soData;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* soDataExt;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* soDataLog;
  int32_t layer;
  System_String* tag;
  bool hasMeshCollider;
  bool terrainDeformation;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A3370))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A41C0))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD* GetRoadType(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType* t, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* baseScript) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A47E0))(t, baseScript);
  }
};
}