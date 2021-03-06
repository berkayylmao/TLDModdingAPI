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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Quaternion.hpp"


namespace ModdingAPI::Exposed {
struct __TLD_AnimationTrack_Il2CppStaticFields {
};

struct __TLD_AnimationTrack_Il2CppVtbl {
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
  VirtualInvokeData _26_DoDynamicBinding;
  VirtualInvokeData _27_Play;
  VirtualInvokeData _28_Stop;
  VirtualInvokeData _29_UpdatePlay;
  VirtualInvokeData _30_LateUpdatePlay;
};

struct __TLD_AnimationTrack_Il2CppClass {
  Il2CppClass_1 _1;
  __TLD_AnimationTrack_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TLD_AnimationTrack_Il2CppVtbl vtbl;
};

class TLD_AnimationTrack {
public:
  // Il2Cpp fields:
  __TLD_AnimationTrack_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool TrackAsset_m_Locked;
  bool TrackAsset_m_Muted;
  System_String* TrackAsset_m_CustomPlayableFullTypename;
  ModdingAPI::Exposed::UnityEngine::AnimationClip* TrackAsset_m_AnimClip;
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableAsset* TrackAsset_m_Parent;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* TrackAsset_m_Children;
  int32_t TrackAsset_m_ItemsHash;
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip_array* TrackAsset_m_ClipsCache;
  ModdingAPI::Exposed::UnityEngine::Timeline::DiscreteTime TrackAsset_m_Start;
  ModdingAPI::Exposed::UnityEngine::Timeline::DiscreteTime TrackAsset_m_End;
  bool TrackAsset_m_CacheSorted;
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* TrackAsset_m_ChildTrackCache;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Clips;
  int32_t TrackAsset_m_Version;
  int32_t AnimationTrack_m_OpenClipPreExtrapolation;
  int32_t AnimationTrack_m_OpenClipPostExtrapolation;
  ModdingAPI::Exposed::UnityEngine::Vector3 AnimationTrack_m_OpenClipOffsetPosition;
  ModdingAPI::Exposed::UnityEngine::Vector3 AnimationTrack_m_OpenClipOffsetEulerAngles;
  double AnimationTrack_m_OpenClipTimeOffset;
  bool AnimationTrack_m_OpenClipRemoveOffset;
  bool AnimationTrack_m_InfiniteClipApplyFootIK;
  int32_t AnimationTrack_m_MatchTargetFields;
  ModdingAPI::Exposed::UnityEngine::Vector3 AnimationTrack_m_Position;
  ModdingAPI::Exposed::UnityEngine::Vector3 AnimationTrack_m_EulerAngles;
  ModdingAPI::Exposed::UnityEngine::AvatarMask* AnimationTrack_m_AvatarMask;
  bool AnimationTrack_m_ApplyAvatarMask;
  int32_t AnimationTrack_m_TrackOffset;
  ModdingAPI::Exposed::UnityEngine::Quaternion AnimationTrack_m_OpenClipOffsetRotation;
  ModdingAPI::Exposed::UnityEngine::Quaternion AnimationTrack_m_Rotation;
  bool AnimationTrack_m_ApplyOffsets;
  System_String* m_MissionObjectId;
  bool m_DisablePhysics;
  ModdingAPI::Exposed::UnityEngine::Collider_array* m_SavedColliders;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_SavedRigidBodyInfoList;

  // Member methods:
  void DoDynamicBinding(ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector* director) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_AnimationTrack*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBA820))(this, director);
  }
  void Play() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_AnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBA950))(this);
  }
  void Stop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_AnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBAA40))(this);
  }
  void UpdatePlay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_AnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void LateUpdatePlay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_AnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void EnableSavedPhysicColliders(ModdingAPI::Exposed::UnityEngine::GameObject* gameObject, bool isEnabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_AnimationTrack*, ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBAB30))(this, gameObject, isEnabled);
  }
  void SaveAndDisablePhysicComponents(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_AnimationTrack*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBAC70))(this, go);
  }
  void RestorePhysicComponents(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_AnimationTrack*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBAF20))(this, go);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_AnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBB0D0))(this);
  }
};
}