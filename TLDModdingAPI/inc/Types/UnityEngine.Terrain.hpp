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


namespace ModdingAPI::Exposed::UnityEngine {
struct __Terrain_Il2CppStaticFields {
};

struct __Terrain_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Terrain_Il2CppClass {
  Il2CppClass_1 _1;
  __Terrain_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Terrain_Il2CppVtbl vtbl;
};

class Terrain {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C88088;
  static inline    Terrain* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C45EA8;
  static inline    __Terrain_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline Terrain* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (Terrain**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __Terrain_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Terrain_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Terrain_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }
  ModdingAPI::Exposed::UnityEngine::TerrainData* get_terrainData() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::TerrainData*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1568190))(this);
  }
  void set_treeDistance(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15681E0))(this, value);
  }
  void set_treeBillboardDistance(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1568240))(this, value);
  }
  void set_detailObjectDistance(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15682A0))(this, value);
  }
  void set_detailObjectDensity(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1568300))(this, value);
  }
  void set_heightmapPixelError(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1568360))(this, value);
  }
  void set_materialType(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15683C0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Material* get_materialTemplate() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1568420))(this);
  }
  void set_materialTemplate(ModdingAPI::Exposed::UnityEngine::Material* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1568470))(this, value);
  }
  bool get_allowAutoConnect() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15684D0))(this);
  }
  int32_t get_groupingID() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1568520))(this);
  }
  void set_drawInstanced(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1568570))(this, value);
  }
  float SampleHeight(ModdingAPI::Exposed::UnityEngine::Vector3 worldPosition) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15685D0))(this, worldPosition);
  }
  void SetNeighbors(ModdingAPI::Exposed::UnityEngine::Terrain* left, ModdingAPI::Exposed::UnityEngine::Terrain* top, ModdingAPI::Exposed::UnityEngine::Terrain* right, ModdingAPI::Exposed::UnityEngine::Terrain* bottom) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, ModdingAPI::Exposed::UnityEngine::Terrain*, ModdingAPI::Exposed::UnityEngine::Terrain*, ModdingAPI::Exposed::UnityEngine::Terrain*, ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1568630))(this, left, top, right, bottom);
  }
  void set_collectDetailPatches(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15686C0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetPosition() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1568720))(this);
  }
  void Flush() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15687A0))(this);
  }
  float SampleHeight_Injected(ModdingAPI::Exposed::UnityEngine::Vector3 worldPosition) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1568890))(this, worldPosition);
  }
  void GetPosition_Injected(ModdingAPI::Exposed::UnityEngine::Vector3 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Terrain*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15688F0))(this, ret);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Terrain* get_activeTerrain() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Terrain*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15687F0))();
  }
  static inline ModdingAPI::Exposed::UnityEngine::Terrain_array* get_activeTerrains() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Terrain_array*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1568840))();
  }
};
}