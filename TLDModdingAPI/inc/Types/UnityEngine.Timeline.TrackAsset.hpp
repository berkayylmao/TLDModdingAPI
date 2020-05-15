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
#include "ModdingAPI.Exposed.UnityEngine.Timeline.DiscreteTime.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Playables.Playable.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Playables.PlayableGraph.hpp"


namespace ModdingAPI::Exposed::UnityEngine::Timeline {
struct __TrackAsset_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset_array* s_EmptyCache;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* s_TrackBindingTypeAttributeCache;
  ModdingAPI::Exposed::System::Action_T1__T2__T3_* OnPlayableCreate;
  ModdingAPI::Exposed::System::Comparison_T_* __f__am_cache0;
};

struct __TrackAsset_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _6_CreatePlayable;
  VirtualInvokeData _7_get_duration;
  VirtualInvokeData _8_get_outputs;
  VirtualInvokeData _10_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData _11_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
  VirtualInvokeData _12_get_isEmpty;
  VirtualInvokeData _13_get_compilable;
  VirtualInvokeData _14_CreateTrackMixer;
  VirtualInvokeData _15_OnCreatePlayableGraph;
  VirtualInvokeData _16_GetEvaluationTime;
  VirtualInvokeData _17_GetSequenceTime;
  VirtualInvokeData _18_GatherProperties;
  VirtualInvokeData _19_OnCreateClip;
  VirtualInvokeData _20_UpdateDuration;
  VirtualInvokeData _21_CreatePlayable;
  VirtualInvokeData _22_Hash;
  VirtualInvokeData _23_OnBeforeTrackSerialize;
  VirtualInvokeData _24_OnAfterTrackDeserialize;
  VirtualInvokeData _25_OnUpgradeFromVersion;
};

struct __TrackAsset_Il2CppClass {
  Il2CppClass_1 _1;
  __TrackAsset_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TrackAsset_Il2CppVtbl vtbl;
};

class TrackAsset {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C737D8;
  static inline    TrackAsset* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C74C78;
  static inline    __TrackAsset_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline TrackAsset* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (TrackAsset**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __TrackAsset_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TrackAsset_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TrackAsset_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool m_Locked;
  bool m_Muted;
  System_String* m_CustomPlayableFullTypename;
  ModdingAPI::Exposed::UnityEngine::AnimationClip* m_AnimClip;
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableAsset* m_Parent;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Children;
  int32_t m_ItemsHash;
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip_array* m_ClipsCache;
  ModdingAPI::Exposed::UnityEngine::Timeline::DiscreteTime m_Start;
  ModdingAPI::Exposed::UnityEngine::Timeline::DiscreteTime m_End;
  bool m_CacheSorted;
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* m_ChildTrackCache;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Clips;
  int32_t m_Version;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBE160))(this);
  }
  double get_start() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBE2D0))(this);
  }
  double get_end() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBE380))(this);
  }
  double get_duration() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBE430))(this);
  }
  bool get_muted() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBE4F0))(this);
  }
  void set_muted(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x580F80))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineAsset* get_timelineAsset() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Timeline::TimelineAsset*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBE500))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableAsset* get_parent() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::PlayableAsset*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADAFF0))(this);
  }
  void set_parent(ModdingAPI::Exposed::UnityEngine::Playables::PlayableAsset* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A410))(this, value);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* GetClips() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBE660))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip_array* get_clips() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBE670))(this);
  }
  bool get_isEmpty() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBE800))(this);
  }
  bool get_hasClips() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBE8A0))(this);
  }
  bool get_isSubTrack() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBE940))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* get_outputs() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBEA70))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* GetChildTracks() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBEBD0))(this);
  }
  System_String* get_customPlayableTypename() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD4220))(this);
  }
  void set_customPlayableTypename(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310F00))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::AnimationClip* get_animClip() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AnimationClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD25E0))(this);
  }
  void set_animClip(ModdingAPI::Exposed::UnityEngine::AnimationClip* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::AnimationClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110C0))(this, value);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* get_subTracksObjects() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAD25D0))(this);
  }
  bool get_locked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE2FF70))(this);
  }
  void set_locked(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5161B0))(this, value);
  }
  bool get_lockedInHierarchy() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBEBF0))(this);
  }
  bool get_parentLocked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBED10))(this);
  }
  bool get_compilable() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBEE20))(this);
  }
  void __internalAwake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBEE50))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::Playable CreateTrackMixer(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::GameObject* go, int32_t inputCount) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::GameObject*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBF0A0))(this, graph, go, inputCount);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::Playable CreatePlayable(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBF170))(this, graph, go);
  }
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* CreateDefaultClip() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBF220))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* CreateClip(ModdingAPI::Exposed::System::Type* requestedType) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBF4E0))(this, requestedType);
  }
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* CreateAndAddNewClipOfType(ModdingAPI::Exposed::System::Type* requestedType) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBF690))(this, requestedType);
  }
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* CreateClipOfType(ModdingAPI::Exposed::System::Type* requestedType) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBF6D0))(this, requestedType);
  }
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* CreateClipFromPlayableAsset(ModdingAPI::Exposed::UnityEngine::Playables::IPlayableAsset* asset) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Playables::IPlayableAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBF9B0))(this, asset);
  }
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* CreateClipFromAsset(ModdingAPI::Exposed::UnityEngine::ScriptableObject* playableAsset) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::ScriptableObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBFC60))(this, playableAsset);
  }
  void AddClip(ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* newClip) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBFED0))(this, newClip);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::Playable CreatePlayableGraph(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::GameObject* go, ModdingAPI::Exposed::UnityEngine::IntervalTree_T_* tree) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::IntervalTree_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBFFA0))(this, graph, go, tree);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::Playable OnCreatePlayableGraph(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::GameObject* go, ModdingAPI::Exposed::UnityEngine::IntervalTree_T_* tree) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::IntervalTree_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC0030))(this, graph, go, tree);
  }
  void SortClips() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC05E0))(this);
  }
  void ClearClipsInternal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC0810))(this);
  }
  void ClearSubTracksInternal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC0960))(this);
  }
  void OnClipMove() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC0AC0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* CreateNewClipContainerInternal() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC0AD0))(this);
  }
  void AddChild(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset* child) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC10D0))(this, child);
  }
  bool AddChildAfter(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset* child, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset* other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC11C0))(this, child, other);
  }
  bool RemoveSubTrack(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset* child) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC1350))(this, child);
  }
  void RemoveClip(ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* clip) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC1430))(this, clip);
  }
  void GetEvaluationTime(double outStart, double outDuration) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, double, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC14E0))(this, outStart, outDuration);
  }
  void GetSequenceTime(double outStart, double outDuration) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, double, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC1790))(this, outStart, outDuration);
  }
  void GatherProperties(ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector* director, ModdingAPI::Exposed::UnityEngine::Timeline::IPropertyCollector* driver) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector*, ModdingAPI::Exposed::UnityEngine::Timeline::IPropertyCollector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC17B0))(this, director, driver);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* GetGameObjectBinding(ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector* director) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC1BD0))(this, director);
  }
  bool ValidateClipType(ModdingAPI::Exposed::System::Type* clipType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC1DA0))(this, clipType);
  }
  void OnCreateClip(ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* clip) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, clip);
  }
  void UpdateDuration() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC20A0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::Playable CreatePlayable(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::GameObject* gameObject, ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* clip) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC25E0))(this, graph, gameObject, clip);
  }
  void Invalidate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC2950))(this);
  }
  void UpdateChildTrackCache() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC2A30))(this);
  }
  int32_t Hash() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC2CB0))(this);
  }
  int32_t GetClipsHash() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC2CD0))(this);
  }
  void OnBeforeTrackSerialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnAfterTrackDeserialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnUpgradeFromVersion(int32_t oldVersion) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, oldVersion);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC2F10))(this);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC30F0))(this);
  }
  void UpgradeToLatestVersion() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset_array*> s_EmptyCache = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_EmptyCache; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*> s_TrackBindingTypeAttributeCache = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_TrackBindingTypeAttributeCache; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Action_T1__T2__T3_*> OnPlayableCreate = __CppStaticProperty<ModdingAPI::Exposed::System::Action_T1__T2__T3_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnPlayableCreate; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Comparison_T_*> __f__am_cache0 = __CppStaticProperty<ModdingAPI::Exposed::System::Comparison_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->__f__am_cache0; }
  );

  // Static methods:
  static inline void add_OnPlayableCreate(ModdingAPI::Exposed::System::Action_T1__T2__T3_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Action_T1__T2__T3_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC2360))(value);
  }
  static inline void remove_OnPlayableCreate(ModdingAPI::Exposed::System::Action_T1__T2__T3_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Action_T1__T2__T3_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC24A0))(value);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC3140))();
  }
  static inline int32_t _SortClips_m__0(ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* clip1, ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* clip2) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*, ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB2090))(clip1, clip2);
  }
};
}