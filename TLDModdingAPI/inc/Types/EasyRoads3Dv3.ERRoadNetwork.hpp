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
struct __ERRoadNetwork_Il2CppStaticFields {
};

struct __ERRoadNetwork_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ERRoadNetwork_Il2CppClass {
  Il2CppClass_1 _1;
  __ERRoadNetwork_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ERRoadNetwork_Il2CppVtbl vtbl;
};

class ERRoadNetwork {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3A070;
  static inline    __ERRoadNetwork_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ERRoadNetwork_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ERRoadNetwork_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ERRoadNetwork_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* roadNetwork;
  bool isInBuildMode;
  System_String* str;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59AD80))(this);
  }
  void GetTerrainData() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59B0F0))(this);
  }
  void Translate(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59B110))(this, pos);
  }
  void CenterPivotPoints() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59B6B0))(this);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad_array* GetRoads() {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59C410))(this);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* GetRoadByName(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59C7C0))(this, name);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* GetRoadByGameObject(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59CA40))(this, go);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* CreateRoad(System_String* roadName) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59CC10))(this, roadName);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* CreateRoad(System_String* roadName, ModdingAPI::Exposed::UnityEngine::Vector3_array* markers) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, System_String*, ModdingAPI::Exposed::UnityEngine::Vector3_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59CD90))(this, roadName, markers);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* CreateRoad(System_String* roadName, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType* roadType) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, System_String*, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59CF40))(this, roadName, roadType);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* CreateRoad(System_String* roadName, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType* roadType, ModdingAPI::Exposed::UnityEngine::Vector3_array* markers) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, System_String*, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType*, ModdingAPI::Exposed::UnityEngine::Vector3_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59D7A0))(this, roadName, roadType, markers);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* InitRoad(System_String* roadName, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType* roadType, ModdingAPI::Exposed::UnityEngine::Material* roadMaterial) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, System_String*, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59E130))(this, roadName, roadType, roadMaterial);
  }
  void AddInititialMarkers(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* road, ModdingAPI::Exposed::UnityEngine::Vector3_array* markers) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*, ModdingAPI::Exposed::UnityEngine::Vector3_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59ECB0))(this, road, markers);
  }
  void AddIntersection(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* crossing, ModdingAPI::Exposed::UnityEngine::GameObject* crossingPrefab) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, crossing, crossingPrefab);
  }
  void BuildRoadNetwork(bool splatmaps, bool trees, bool detail, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad_array* roads) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, bool, bool, bool, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59EE10))(this, splatmaps, trees, detail, roads);
  }
  void BuildRoadNetwork(bool splatmaps, bool trees, bool detail) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, bool, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59F080))(this, splatmaps, trees, detail);
  }
  void BuildRoadNetwork() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59F0D0))(this);
  }
  void DoBuildRoadNetwork() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x59F130))(this);
  }
  void RestoreRoadNetwork() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A0400))(this);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType_array* GetRoadTypes() {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A0450))(this);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType* GetRoadTypeByName(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A0470))(this, name);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType* AddRoadType() {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadType*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  void HideWhiteSurfaces(bool flag) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A0490))(this, flag);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERConnection_array* GetConnections() {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERConnection_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A04D0))(this);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERConnection* GetConnectionByName(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERConnection*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A07C0))(this, name);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERConnection_array* LoadConnections() {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERConnection_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A0A20))(this);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERConnection* GetSourceConnectionByName(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERConnection*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A0E70))(this, name);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERConnection* InstantiateConnection(ModdingAPI::Exposed::EasyRoads3Dv3::ERConnection* sourceConnection, System_String* name, ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Vector3 euler) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERConnection*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, ModdingAPI::Exposed::EasyRoads3Dv3::ERConnection*, System_String*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A11D0))(this, sourceConnection, name, position, euler);
  }
  void SetRaiseOffset(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A1660))(this, value);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* OQODQCOCDD(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* road) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A1A00))(this, road);
  }
  float GetRaiseOffset() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A1B80))(this);
  }
  void ClampUVs(bool clamp) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A1BA0))(this, clamp);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* ConnectRoads(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* road1, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* road2) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A1BC0))(this, road1, road2);
  }
  ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* ConnectRoads(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* road1, int32_t marker1, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* road2, int32_t marker2) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*, int32_t, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A2480))(this, road1, marker1, road2, marker2);
  }
  bool CheckRoads(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* road1, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad* road2, System_String* str) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*, ModdingAPI::Exposed::EasyRoads3Dv3::ERRoad*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A29C0))(this, road1, road2, str);
  }
  void Refresh() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A2DD0))(this);
  }
  void FinalizeObjects() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERRoadNetwork*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A2DE0))(this);
  }

  // Static methods:
  static inline void SetTerrainNormals(ModdingAPI::Exposed::UnityEngine::Mesh* m, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Mesh*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A2B20))(m, go);
  }
};
}