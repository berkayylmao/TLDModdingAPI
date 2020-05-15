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
#include "ModdingAPI.Exposed.UnityEngine.Playables.Playable.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Playables.PlayableGraph.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"


namespace ModdingAPI::Exposed::UnityEngine::Timeline {
struct __AnimationPlayableAsset_Il2CppStaticFields {
  int32_t k_LatestVersion;
};

struct __AnimationPlayableAsset_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _6_CreatePlayable;
  VirtualInvokeData _7_get_duration;
  VirtualInvokeData _8_get_outputs;
  VirtualInvokeData _9_get_clipCaps;
  VirtualInvokeData _10_GatherProperties;
  VirtualInvokeData _11_UnityEngine_Timeline_IClipInitializer_OnCreate;
  VirtualInvokeData _12_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData _13_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
};

struct __AnimationPlayableAsset_Il2CppClass {
  Il2CppClass_1 _1;
  __AnimationPlayableAsset_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AnimationPlayableAsset_Il2CppVtbl vtbl;
};

class AnimationPlayableAsset {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C559A8;
  static inline    AnimationPlayableAsset* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C740D8;
  static inline    __AnimationPlayableAsset_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline AnimationPlayableAsset* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (AnimationPlayableAsset**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __AnimationPlayableAsset_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AnimationPlayableAsset_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AnimationPlayableAsset_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::AnimationClip* m_Clip;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_Position;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_EulerAngles;
  bool m_UseTrackMatchFields;
  int32_t m_MatchTargetFields;
  bool m_RemoveStartOffset;
  bool m_ApplyFootIK;
  int32_t _appliedOffsetMode_k__BackingField;
  int32_t m_Version;
  ModdingAPI::Exposed::UnityEngine::Quaternion m_Rotation;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA4C00))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_position() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA4D40))(this);
  }
  void set_position(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA4D60))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion get_rotation() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA4D70))(this);
  }
  void set_rotation(ModdingAPI::Exposed::UnityEngine::Quaternion value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA4E50))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_eulerAngles() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA4E80))(this);
  }
  void set_eulerAngles(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA4EA0))(this, value);
  }
  bool get_useTrackMatchFields() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA4EB0))(this);
  }
  void set_useTrackMatchFields(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CE3F0))(this, value);
  }
  int32_t get_matchTargetFields() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA4EC0))(this);
  }
  void set_matchTargetFields(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8D0))(this, value);
  }
  bool get_removeStartOffset() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD4230))(this);
  }
  void set_removeStartOffset(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD5550))(this, value);
  }
  bool get_applyFootIK() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD43D0))(this);
  }
  void set_applyFootIK(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C28E0))(this, value);
  }
  bool get_hasRootTransforms() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA4ED0))(this);
  }
  int32_t get_appliedOffsetMode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA4FC0))(this);
  }
  void set_appliedOffsetMode(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D910))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::AnimationClip* get_clip() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AnimationClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD890))(this);
  }
  void set_clip(ModdingAPI::Exposed::UnityEngine::AnimationClip* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, ModdingAPI::Exposed::UnityEngine::AnimationClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA4FD0))(this, value);
  }
  double get_duration() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA50C0))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* get_outputs() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA5320))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::Playable CreatePlayable(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA5480))(this, graph, go);
  }
  int32_t get_clipCaps() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA5E80))(this);
  }
  void ResetOffsets() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA6030))(this);
  }
  void GatherProperties(ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector* director, ModdingAPI::Exposed::UnityEngine::Timeline::IPropertyCollector* driver) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector*, ModdingAPI::Exposed::UnityEngine::Timeline::IPropertyCollector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA6100))(this, director, driver);
  }
  void UnityEngine::Timeline::IClipInitializer::OnCreate(ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* newClip, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset* owner, ModdingAPI::Exposed::UnityEngine::IExposedPropertyTable* resolver) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::IExposedPropertyTable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA61A0))(this, newClip, owner, resolver);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA6530))(this);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA65E0))(this);
  }
  void OnUpgradeFromVersion(int32_t oldVersion) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::AnimationPlayableAsset*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA66C0))(this, oldVersion);
  }

  // Static fields:
  static inline __CppStaticProperty<int32_t> k_LatestVersion = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->k_LatestVersion; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Playables::Playable CreatePlayable(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::AnimationClip* clip, ModdingAPI::Exposed::UnityEngine::Vector3 positionOffset, ModdingAPI::Exposed::UnityEngine::Vector3 eulerOffset, bool removeStartOffset, int32_t mode, bool applyFootIK) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::AnimationClip*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, bool, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA55F0))(graph, clip, positionOffset, eulerOffset, removeStartOffset, mode, applyFootIK);
  }
  static inline bool ShouldApplyOffset(int32_t mode, ModdingAPI::Exposed::UnityEngine::AnimationClip* clip) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::AnimationClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA5DA0))(mode, clip);
  }
  static inline bool ShouldApplyScaleRemove(int32_t mode) {
    return reinterpret_cast<bool(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA5E60))(mode);
  }
  static inline bool HasRootTransforms(ModdingAPI::Exposed::UnityEngine::AnimationClip* clip) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AnimationClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA62E0))(clip);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xFA6700))();
  }
};
}