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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI.Exposed.BreakableIce.BrokenIce.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __BreakableIce_Il2CppStaticFields {
  ModdingAPI::Exposed::BreakableIceComponentSaveDataProxy* m_BreakableIceComponentSaveDataProxy;
  ModdingAPI::Exposed::BrokenIceSaveDataProxy* m_BrokenIceSaveDataProxy;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Instances;
};

struct __BreakableIce_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __BreakableIce_Il2CppClass {
  Il2CppClass_1 _1;
  __BreakableIce_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __BreakableIce_Il2CppVtbl vtbl;
};

class BreakableIce {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7A7E8;
  static inline    __BreakableIce_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __BreakableIce_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__BreakableIce_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __BreakableIce_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_RefreezeDays;
  float m_FallInDistance;
  System_String* m_BrokenIceAudioId;
  int32_t m_EmitterCount;
  float m_NavmeshCutScale;
  int32_t m_TileSize;
  float m_IceBreakScale;
  ModdingAPI::Exposed::VoronoiPointSet_array* m_VoronoiPointSets;
  ModdingAPI::Exposed::UnityEngine::Terrain* m_Terrain;
  int32_t m_BrokenIceTextureId;
  int32_t m_RenderTargetExtentsId;
  int32_t m_TileSizeId;
  int32_t m_VoronoiPointSetsId;
  ModdingAPI::Exposed::BreakableIce::BrokenIce_array* m_BrokenIceData;
  int32_t m_BrokenIceDataWriteIndex;
  int32_t m_BrokenIceDataRemoveIndex;
  ModdingAPI::Exposed::BitmaskTexture* m_BrokenIceTexture;
  ModdingAPI::Exposed::UnityEngine::Vector4_array* m_VoronoiPointsSetsForShader;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_AudioEmitters;
  ModdingAPI::Exposed::System::Single_array* m_NearestEmitterDistances;
  ModdingAPI::Exposed::UnityEngine::AI::NavMeshObstacle_array* m_NavMeshObstacles;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181A390))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181A440))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181AB40))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181AC40))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181AD40))(this);
  }
  void Deserialize(ModdingAPI::Exposed::BreakableIceComponentSaveDataProxy* proxy) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*, ModdingAPI::Exposed::BreakableIceComponentSaveDataProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181B180))(this, proxy);
  }
  void BreakIce(ModdingAPI::Exposed::UnityEngine::Vector3 pos, float radius) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181B920))(this, pos, radius);
  }
  bool IsIceBroken(ModdingAPI::Exposed::UnityEngine::Vector3 position) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BreakableIce*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181C050))(this, position);
  }
  bool IsIceBroken(ModdingAPI::Exposed::UnityEngine::Vector3 position, float radius) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BreakableIce*, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181C3F0))(this, position, radius);
  }
  bool IsInDangerOfFallingIn(ModdingAPI::Exposed::UnityEngine::Vector3 position) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BreakableIce*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181C690))(this, position);
  }
  void AddBrokenIceToNavmeshCuts(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181C940))(this, index);
  }
  void AddBrokenIceToTexture(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181CC10))(this, index);
  }
  void AddBrokenIceToTexture(ModdingAPI::Exposed::UnityEngine::Vector2 position) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181CF40))(this, position);
  }
  void RemoveBrokenIceFromTexture(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181D1A0))(this, index);
  }
  void RemoveBrokenIceFromTexture(ModdingAPI::Exposed::UnityEngine::Vector2 position) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181D4D0))(this, position);
  }
  ModdingAPI::Exposed::BreakableIce::BrokenIce GetOldestBrokenIce() {
    return reinterpret_cast<ModdingAPI::Exposed::BreakableIce::BrokenIce(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181D730))(this);
  }
  ModdingAPI::Exposed::VoronoiPointSet* GetVoronoiPointSet(ModdingAPI::Exposed::UnityEngine::Vector2 tile) {
    return reinterpret_cast<ModdingAPI::Exposed::VoronoiPointSet*(__fastcall*)(ModdingAPI::Exposed::BreakableIce*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181D780))(this, tile);
  }
  void InitializeAudioEmitters() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181D870))(this);
  }
  void InitializeBrokenIceTexture() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181DBA0))(this);
  }
  void InitializeNavmeshCuts() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181DFE0))(this);
  }
  void InitializeShaderProperties() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181E490))(this);
  }
  void RemoveExpiredBrokenIce() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181E650))(this);
  }
  void RemoveOldestBrokenIce() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181E7D0))(this);
  }
  void UpdateAudioEmitters(ModdingAPI::Exposed::UnityEngine::Vector3 listenerPosition) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181E8E0))(this, listenerPosition);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakableIce*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181F130))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::BreakableIceComponentSaveDataProxy*> m_BreakableIceComponentSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::BreakableIceComponentSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_BreakableIceComponentSaveDataProxy; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::BrokenIceSaveDataProxy*> m_BrokenIceSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::BrokenIceSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_BrokenIceSaveDataProxy; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_Instances = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Instances; }
  );

  // Static methods:
  static inline System_String* SerializeAll() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x181B3B0))();
  }
  static inline void DeserializeAll(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181B6D0))(text);
  }
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x181C860))();
  }
  static inline ModdingAPI::Exposed::BreakableIce* FindBreakableIceByPosition(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    return reinterpret_cast<ModdingAPI::Exposed::BreakableIce*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x181EEE0))(pos);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x181F240))();
  }
};
}