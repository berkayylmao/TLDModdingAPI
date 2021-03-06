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
struct __TLD_CameraAnimationTrack_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Camera* s_AnimatedCamera;
  ModdingAPI::Exposed::UnityEngine::GameObject* s_AnimatedCameraAnimatorObject;
  ModdingAPI::Exposed::UnityEngine::GameObject* s_AnimatedCameraRootObject;
  ModdingAPI::Exposed::UnityEngine::GameObject* s_AnimatedCameraHeadObject;
  int32_t s_CountPlaying;
  bool s_IsHoldingCameraDisabledForNextTimeline;
  bool s_IsHoldingFovForNextTimeline;
  float s_OriginalFovForNextTimeline;
};

struct __TLD_CameraAnimationTrack_Il2CppVtbl {
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
  VirtualInvokeData _26_Play;
  VirtualInvokeData _27_Stop;
  VirtualInvokeData _28_UpdatePlay;
  VirtualInvokeData _29_LateUpdatePlay;
  VirtualInvokeData _30_DoDynamicBinding;
  VirtualInvokeData _31_SetFPAnchor;
};

struct __TLD_CameraAnimationTrack_Il2CppClass {
  Il2CppClass_1 _1;
  __TLD_CameraAnimationTrack_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TLD_CameraAnimationTrack_Il2CppVtbl vtbl;
};

class TLD_CameraAnimationTrack {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C55510;
  static inline    __TLD_CameraAnimationTrack_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TLD_CameraAnimationTrack_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TLD_CameraAnimationTrack_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TLD_CameraAnimationTrack_Il2CppClass* __pClassInstance;
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
  float m_FieldOfView;
  bool m_OverrideClipPlanes;
  float m_NearClipPlane;
  float m_FarClipPlane;
  bool m_HoldLastFPFrame;
  bool m_ReplaceDialogueExit;
  float m_InTransitionDurationSeconds;
  float m_OutTransitionDurationSeconds;
  bool m_HoldPlayerOverrideForNextTimeline;
  bool m_SuppressBreathFX;
  ModdingAPI::Exposed::CameraGlobalRT* m_GlobalCamera;
  int32_t m_RestorePlayerControlMode;
  bool m_IsPlaying;
  ModdingAPI::Exposed::UnityEngine::Transform* m_FPAnchor;
  bool m_HasStartedOverride;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_OriginalFPPosition;
  ModdingAPI::Exposed::UnityEngine::Quaternion m_OriginalFPRotation;
  ModdingAPI::Exposed::UnityEngine::Quaternion m_OriginalCameraLocalRotation;
  bool m_HasUpdatedForAnchor;
  float m_AppliedNearClipPlane;
  float m_AppliedFarClipPlane;
  bool m_FPSCameraDisabled;
  bool m_TimelineHasFPAnchor;
  bool m_HasInitializedExitValues;
  ModdingAPI::Exposed::UnityEngine::Quaternion m_ExitStartCameraRootOriginalRotation;

  // Member methods:
  void StartCameraOverride() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBBAA0))(this);
  }
  bool HasStartedCameraOverride() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07310))(this);
  }
  void Play() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBC380))(this);
  }
  bool ShouldSupressBreathFX() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBC6B0))(this);
  }
  float GetNextEndTime(float currentTimeSeconds) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBC6C0))(this, currentTimeSeconds);
  }
  void UpdatePlay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void LateUpdatePlay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBC8B0))(this);
  }
  void Stop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBCF70))(this);
  }
  void SetFPAnchor(ModdingAPI::Exposed::UnityEngine::Transform* anchor) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBE0E0))(this, anchor);
  }
  void DoDynamicBinding(ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector* director) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBE1B0))(this, director);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* GetCamera() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBE1F0))(this);
  }
  void CreateAnimatedCamera() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBEEF0))(this);
  }
  void UpdateCamera(float progress, ModdingAPI::Exposed::UnityEngine::Vector3 desiredPosition, ModdingAPI::Exposed::UnityEngine::Quaternion desiredRotation) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*, float, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBF560))(this, progress, desiredPosition, desiredRotation);
  }
  void UpdateCameraExit(float progress) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBFDB0))(this, progress);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_CameraAnimationTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC0340))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Camera*> s_AnimatedCamera = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Camera*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_AnimatedCamera; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*> s_AnimatedCameraAnimatorObject = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_AnimatedCameraAnimatorObject; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*> s_AnimatedCameraRootObject = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_AnimatedCameraRootObject; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*> s_AnimatedCameraHeadObject = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_AnimatedCameraHeadObject; }
  );
  static inline __CppStaticProperty<int32_t> s_CountPlaying = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_CountPlaying; }
  );
  static inline __CppStaticProperty<bool> s_IsHoldingCameraDisabledForNextTimeline = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_IsHoldingCameraDisabledForNextTimeline; }
  );
  static inline __CppStaticProperty<bool> s_IsHoldingFovForNextTimeline = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_IsHoldingFovForNextTimeline; }
  );
  static inline __CppStaticProperty<float> s_OriginalFovForNextTimeline = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_OriginalFovForNextTimeline; }
  );

  // Static methods:
  static inline void ResetAllTransforms(ModdingAPI::Exposed::UnityEngine::Transform* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBDD50))(t);
  }
  static inline void ResetCamera() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EBDF80))();
  }
};
}