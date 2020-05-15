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


namespace ModdingAPI::Exposed {
struct __TLD_TimelineDirector_Il2CppStaticFields {
};

struct __TLD_TimelineDirector_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TLD_TimelineDirector_Il2CppClass {
  Il2CppClass_1 _1;
  __TLD_TimelineDirector_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TLD_TimelineDirector_Il2CppVtbl vtbl;
};

class TLD_TimelineDirector {
public:
  // Il2Cpp fields:
  __TLD_TimelineDirector_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::TimelineManifest* m_Manifest;
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector* m_Director;
  bool m_IsPlaying;
  uint32_t m_AudioId;
  bool m_IsAudioDriven;
  float m_AudioClipStartTime;
  bool m_IsPaused;
  bool m_TimeChangeRequested;
  int32_t m_TimeChangeRequestedFrameCount;
  ModdingAPI::Exposed::System::Action* m_OnStopCallback;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_OverrideBindingInfoList;
  bool m_HasGamePaused;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_FPPositionOnPlay;
  ModdingAPI::Exposed::UnityEngine::Quaternion m_FPRotationOnPlay;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B9FCA0))(this);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA0200))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA0460))(this);
  }
  bool HasFPAnchor() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA07D0))(this);
  }
  ModdingAPI::Exposed::TLD_CameraAnimationTrack* GetCameraTrack() {
    return reinterpret_cast<ModdingAPI::Exposed::TLD_CameraAnimationTrack*(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA0B40))(this);
  }
  void HandleGamePause() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA0DD0))(this);
  }
  void UpdateAudioDrivenTime() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA0F90))(this);
  }
  void SetNewTime(float newTime) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA1040))(this, newTime);
  }
  float GetCurrentTimelineTime() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA10D0))(this);
  }
  bool ShouldSupressBreathFX() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA1130))(this);
  }
  float GetCameraTrackNextEndTime(float currentTimeSeconds) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA12B0))(this, currentTimeSeconds);
  }
  float GetCameraTrackOutTransitionDurationSeconds() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA1390))(this);
  }
  bool TryGetTimeFromVoice(float currentTime) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA1460))(this, currentTime);
  }
  bool TryGetTimeFromAudio(uint32_t audioID, float currAudioTime) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*, uint32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA1940))(this, audioID, currAudioTime);
  }
  bool IsTimeChangePending() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x921400))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA1A30))(this);
  }
  void AudioDrivenStart(uint32_t audioId, float startTime) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*, uint32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA1F80))(this, audioId, startTime);
  }
  void AudioDrivenStop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCAA370))(this);
  }
  bool IsAudioDriven(uint32_t audioId) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA1F90))(this, audioId);
  }
  void Play(ModdingAPI::Exposed::UnityEngine::Timeline::TimelineAsset* timelineAsset, ModdingAPI::Exposed::System::Action* onStop, ModdingAPI::Exposed::System::Collections::Generic::List_T_* bindingOverrides) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*, ModdingAPI::Exposed::UnityEngine::Timeline::TimelineAsset*, ModdingAPI::Exposed::System::Action*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA1FB0))(this, timelineAsset, onStop, bindingOverrides);
  }
  void Stop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA23A0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetFPPositionOnPlay() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA2400))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion GetFPRotationOnPlay() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3C04D0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* GetGameObjectOverride(System_String* objectName, System_String* currentMissionId) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA2D40))(this, objectName, currentMissionId);
  }
  bool TryGetFPAnchorTargetOverride(ModdingAPI::Exposed::UnityEngine::GameObject* overideTarget) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA2F60))(this, overideTarget);
  }
  void Cleanup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA3160))(this);
  }
  void OnPause(ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector* director) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x968AD0))(this, director);
  }
  void OnPlay(ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector* director) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA3580))(this, director);
  }
  void OnStop(ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector* director) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA3910))(this, director);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TLD_TimelineDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA3D40))(this);
  }

  // Static methods:
  static inline void DoDynamicBinding(ModdingAPI::Exposed::UnityEngine::Timeline::TimelineAsset* timelineAsset, ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector* director) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TimelineAsset*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA2420))(timelineAsset, director);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* FindClip(ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector* director, ModdingAPI::Exposed::UnityEngine::Object* clipAsset) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableDirector*, ModdingAPI::Exposed::UnityEngine::Object*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA2660))(director, clipAsset);
  }
  static inline ModdingAPI::Exposed::TLD_TimelineDirector::BindingInfo* GetTrackBindingInfo(ModdingAPI::Exposed::System::Collections::Generic::List_T_* list, System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::TLD_TimelineDirector::BindingInfo*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA29F0))(list, name);
  }
  static inline ModdingAPI::Exposed::TLD_TimelineDirector::BindingInfo* GetFPAnchorBindingInfo(ModdingAPI::Exposed::System::Collections::Generic::List_T_* list) {
    return reinterpret_cast<ModdingAPI::Exposed::TLD_TimelineDirector::BindingInfo*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BA2BB0))(list);
  }
};
}