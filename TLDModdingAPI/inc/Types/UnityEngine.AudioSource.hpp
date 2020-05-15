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
#include "ModdingAPI.Exposed.UnityEngine.PropertyName.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::PropertyName.hpp"


namespace ModdingAPI::Exposed::UnityEngine {
struct __AudioSource_Il2CppStaticFields {
};

struct __AudioSource_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AudioSource_Il2CppClass {
  Il2CppClass_1 _1;
  __AudioSource_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AudioSource_Il2CppVtbl vtbl;
};

class AudioSource {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C80380;
  static inline    AudioSource* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C801C0;
  static inline    __AudioSource_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline AudioSource* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (AudioSource**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __AudioSource_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AudioSource_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AudioSource_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::AudioSourceExtension* spatializerExtension;
  ModdingAPI::Exposed::UnityEngine::AudioSourceExtension* ambisonicExtension;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B4E0))(this);
  }
  float get_volume() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B500))(this);
  }
  void set_volume(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B550))(this, value);
  }
  float get_pitch() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B5B0))(this);
  }
  void set_pitch(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B600))(this, value);
  }
  float get_time() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B660))(this);
  }
  void set_time(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B6B0))(this, value);
  }
  int32_t get_timeSamples() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B710))(this);
  }
  void set_timeSamples(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B760))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::AudioClip* get_clip() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AudioClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B7C0))(this);
  }
  void set_clip(ModdingAPI::Exposed::UnityEngine::AudioClip* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::UnityEngine::AudioClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B810))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Audio::AudioMixerGroup* get_outputAudioMixerGroup() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Audio::AudioMixerGroup*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B870))(this);
  }
  void set_outputAudioMixerGroup(ModdingAPI::Exposed::UnityEngine::Audio::AudioMixerGroup* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::UnityEngine::Audio::AudioMixerGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B8C0))(this, value);
  }
  void Play(uint64_t delay) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B920))(this, delay);
  }
  void Play() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B980))(this);
  }
  void PlayDelayed(float delay) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152B9E0))(this, delay);
  }
  void PlayScheduled(double time) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BA40))(this, time);
  }
  void SetScheduledStartTime(double time) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BAA0))(this, time);
  }
  void SetScheduledEndTime(double time) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BB00))(this, time);
  }
  void Stop() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BB60))(this);
  }
  void Pause() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BBB0))(this);
  }
  void UnPause() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BC00))(this);
  }
  bool get_isPlaying() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BC50))(this);
  }
  bool get_isVirtual() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BCA0))(this);
  }
  void PlayOneShot(ModdingAPI::Exposed::UnityEngine::AudioClip* clip) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::UnityEngine::AudioClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BCF0))(this, clip);
  }
  void PlayOneShot(ModdingAPI::Exposed::UnityEngine::AudioClip* clip, float volumeScale) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::UnityEngine::AudioClip*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BD00))(this, clip, volumeScale);
  }
  void PlayOneShotHelper(ModdingAPI::Exposed::UnityEngine::AudioClip* clip, float volumeScale) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::UnityEngine::AudioClip*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BEC0))(this, clip, volumeScale);
  }
  void PlayOneShotHelper(ModdingAPI::Exposed::UnityEngine::AudioClip* clip) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::UnityEngine::AudioClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BF30))(this, clip);
  }
  bool get_loop() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C4E0))(this);
  }
  void set_loop(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C530))(this, value);
  }
  bool get_ignoreListenerVolume() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C590))(this);
  }
  void set_ignoreListenerVolume(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C5E0))(this, value);
  }
  bool get_playOnAwake() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C640))(this);
  }
  void set_playOnAwake(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C690))(this, value);
  }
  bool get_ignoreListenerPause() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C6F0))(this);
  }
  void set_ignoreListenerPause(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C740))(this, value);
  }
  int32_t get_velocityUpdateMode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C7A0))(this);
  }
  void set_velocityUpdateMode(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C7F0))(this, value);
  }
  float get_panStereo() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C850))(this);
  }
  void set_panStereo(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C8A0))(this, value);
  }
  float get_spatialBlend() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C900))(this);
  }
  void set_spatialBlend(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C950))(this, value);
  }
  bool get_spatializeInternal() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C9B0))(this);
  }
  void set_spatializeInternal(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CA00))(this, value);
  }
  bool get_spatialize() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152C9B0))(this);
  }
  void set_spatialize(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CA60))(this, value);
  }
  bool get_spatializePostEffects() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CC10))(this);
  }
  void set_spatializePostEffects(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CC60))(this, value);
  }
  void SetCustomCurve(int32_t type, ModdingAPI::Exposed::UnityEngine::AnimationCurve* curve) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t, ModdingAPI::Exposed::UnityEngine::AnimationCurve*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CCC0))(this, type, curve);
  }
  ModdingAPI::Exposed::UnityEngine::AnimationCurve* GetCustomCurve(int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AnimationCurve*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CD30))(this, type);
  }
  float get_reverbZoneMix() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CD90))(this);
  }
  void set_reverbZoneMix(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CDE0))(this, value);
  }
  bool get_bypassEffects() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CE40))(this);
  }
  void set_bypassEffects(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CE90))(this, value);
  }
  bool get_bypassListenerEffects() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CEF0))(this);
  }
  void set_bypassListenerEffects(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CF40))(this, value);
  }
  bool get_bypassReverbZones() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CFA0))(this);
  }
  void set_bypassReverbZones(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152CFF0))(this, value);
  }
  float get_dopplerLevel() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D050))(this);
  }
  void set_dopplerLevel(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D0A0))(this, value);
  }
  float get_spread() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D100))(this);
  }
  void set_spread(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D150))(this, value);
  }
  int32_t get_priority() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D1B0))(this);
  }
  void set_priority(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D200))(this, value);
  }
  bool get_mute() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D260))(this);
  }
  void set_mute(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D2B0))(this, value);
  }
  float get_minDistance() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D310))(this);
  }
  void set_minDistance(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D360))(this, value);
  }
  float get_maxDistance() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D3C0))(this);
  }
  void set_maxDistance(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D410))(this, value);
  }
  int32_t get_rolloffMode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D470))(this);
  }
  void set_rolloffMode(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D4C0))(this, value);
  }
  void GetOutputDataHelper(ModdingAPI::Exposed::System::Single_array* samples, int32_t channel) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::System::Single_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D520))(this, samples, channel);
  }
  ModdingAPI::Exposed::System::Single_array* GetOutputData(int32_t numSamples, int32_t channel) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Single_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D590))(this, numSamples, channel);
  }
  void GetOutputData(ModdingAPI::Exposed::System::Single_array* samples, int32_t channel) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::System::Single_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D640))(this, samples, channel);
  }
  void GetSpectrumDataHelper(ModdingAPI::Exposed::System::Single_array* samples, int32_t channel, int32_t window) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::System::Single_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D650))(this, samples, channel, window);
  }
  ModdingAPI::Exposed::System::Single_array* GetSpectrumData(int32_t numSamples, int32_t channel, int32_t window) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Single_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D6D0))(this, numSamples, channel, window);
  }
  void GetSpectrumData(ModdingAPI::Exposed::System::Single_array* samples, int32_t channel, int32_t window) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::System::Single_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D7A0))(this, samples, channel, window);
  }
  int32_t GetNumExtensionProperties() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D7B0))(this);
  }
  int32_t GetNumExtensionPropertiesForThisExtension(ModdingAPI::Exposed::UnityEngine::PropertyName extensionName) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::UnityEngine::PropertyName)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D800))(this, extensionName);
  }
  ModdingAPI::Exposed::UnityEngine::PropertyName ReadExtensionName(int32_t sourceIndex) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::PropertyName(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D8C0))(this, sourceIndex);
  }
  ModdingAPI::Exposed::UnityEngine::PropertyName ReadExtensionPropertyName(int32_t sourceIndex) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::PropertyName(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D9A0))(this, sourceIndex);
  }
  float ReadExtensionPropertyValue(int32_t sourceIndex) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152DA80))(this, sourceIndex);
  }
  bool ReadExtensionProperty(ModdingAPI::Exposed::UnityEngine::PropertyName extensionName, ModdingAPI::Exposed::UnityEngine::PropertyName propertyName, float propertyValue) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::UnityEngine::PropertyName, ModdingAPI::Exposed::UnityEngine::PropertyName, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152DAE0))(this, extensionName, propertyName, propertyValue);
  }
  void ClearExtensionProperties(ModdingAPI::Exposed::UnityEngine::PropertyName extensionName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::UnityEngine::PropertyName)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152DBE0))(this, extensionName);
  }
  ModdingAPI::Exposed::UnityEngine::AudioSourceExtension* AddSpatializerExtension(ModdingAPI::Exposed::System::Type* extensionType) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AudioSourceExtension*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152DCA0))(this, extensionType);
  }
  ModdingAPI::Exposed::UnityEngine::AudioSourceExtension* AddAmbisonicExtension(ModdingAPI::Exposed::System::Type* extensionType) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AudioSourceExtension*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152DDF0))(this, extensionType);
  }
  float get_minVolume() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152DF40))(this);
  }
  void set_minVolume(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152DF90))(this, value);
  }
  float get_maxVolume() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152DFF0))(this);
  }
  void set_maxVolume(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152E040))(this, value);
  }
  float get_rolloffFactor() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152E0A0))(this);
  }
  void set_rolloffFactor(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152E0F0))(this, value);
  }
  bool SetSpatializerFloat(int32_t index, float value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152E150))(this, index, value);
  }
  bool GetSpatializerFloat(int32_t index, float value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152E1C0))(this, index, value);
  }
  bool SetAmbisonicDecoderFloat(int32_t index, float value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152E230))(this, index, value);
  }
  bool GetAmbisonicDecoderFloat(int32_t index, float value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152E2A0))(this, index, value);
  }

  // Static methods:
  static inline void INTERNAL_CALL_Pause(ModdingAPI::Exposed::UnityEngine::AudioSource* self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BBB0))(self);
  }
  static inline void INTERNAL_CALL_UnPause(ModdingAPI::Exposed::UnityEngine::AudioSource* self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BC00))(self);
  }
  static inline void PlayClipAtPoint(ModdingAPI::Exposed::UnityEngine::AudioClip* clip, ModdingAPI::Exposed::UnityEngine::Vector3 position) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioClip*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BF40))(clip, position);
  }
  static inline void PlayClipAtPoint(ModdingAPI::Exposed::UnityEngine::AudioClip* clip, ModdingAPI::Exposed::UnityEngine::Vector3 position, float volume) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioClip*, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152BF70))(clip, position, volume);
  }
  static inline int32_t INTERNAL_CALL_GetNumExtensionPropertiesForThisExtension(ModdingAPI::Exposed::UnityEngine::AudioSource* self, ModdingAPI::Exposed::UnityEngine::PropertyName extensionName) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::UnityEngine::PropertyName)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D860))(self, extensionName);
  }
  static inline void INTERNAL_CALL_ReadExtensionName(ModdingAPI::Exposed::UnityEngine::AudioSource* self, int32_t sourceIndex, ModdingAPI::Exposed::UnityEngine::PropertyName value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t, ModdingAPI::Exposed::UnityEngine::PropertyName)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152D930))(self, sourceIndex, value);
  }
  static inline void INTERNAL_CALL_ReadExtensionPropertyName(ModdingAPI::Exposed::UnityEngine::AudioSource* self, int32_t sourceIndex, ModdingAPI::Exposed::UnityEngine::PropertyName value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, int32_t, ModdingAPI::Exposed::UnityEngine::PropertyName)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152DA10))(self, sourceIndex, value);
  }
  static inline bool INTERNAL_CALL_ReadExtensionProperty(ModdingAPI::Exposed::UnityEngine::AudioSource* self, ModdingAPI::Exposed::UnityEngine::PropertyName extensionName, ModdingAPI::Exposed::UnityEngine::PropertyName propertyName, float propertyValue) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::UnityEngine::PropertyName, ModdingAPI::Exposed::UnityEngine::PropertyName, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152DB60))(self, extensionName, propertyName, propertyValue);
  }
  static inline void INTERNAL_CALL_ClearExtensionProperties(ModdingAPI::Exposed::UnityEngine::AudioSource* self, ModdingAPI::Exposed::UnityEngine::PropertyName extensionName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioSource*, ModdingAPI::Exposed::UnityEngine::PropertyName)>(Helpers::Memory::GetInstance().MakeAbsolute(0x152DC40))(self, extensionName);
  }
};
}