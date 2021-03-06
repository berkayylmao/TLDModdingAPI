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
#include "ModdingAPI.Exposed.UnityEngine.Playables.Playable.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Playables.FrameData.hpp"


namespace ModdingAPI::Exposed {
struct __PlayableBehaviourPlayAudio_Il2CppStaticFields {
};

struct __PlayableBehaviourPlayAudio_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _13_OnGraphStart;
  VirtualInvokeData _14_OnGraphStop;
  VirtualInvokeData _15_OnPlayableCreate;
  VirtualInvokeData _16_OnPlayableDestroy;
  VirtualInvokeData _17_OnBehaviourPlay;
  VirtualInvokeData _18_OnBehaviourPause;
  VirtualInvokeData _19_PrepareFrame;
  VirtualInvokeData _20_ProcessFrame;
  VirtualInvokeData _21_Clone;
};

struct __PlayableBehaviourPlayAudio_Il2CppClass {
  Il2CppClass_1 _1;
  __PlayableBehaviourPlayAudio_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PlayableBehaviourPlayAudio_Il2CppVtbl vtbl;
};

class PlayableBehaviourPlayAudio {
public:
  // Il2Cpp fields:
  __PlayableBehaviourPlayAudio_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* m_AudioEventStart;
  System_String* m_AudioEventStop;
  bool m_AudioDrivesDirectorTime;
  ModdingAPI::Exposed::TLD_TimelineDirector* m_TLD_Director;
  double m_StartTime;
  bool m_KeepAudioPlaying;
  uint32_t m_AudioID;
  float m_AudioDuration;
  bool m_HasStarted;
  bool m_HasFailed;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_AudioEmitterNode;
  bool m_SeekRequested;
  float m_SeekTimeRequested;
  bool m_PlayRequested;
  bool m_SeekAudioEnabled;

  // Member methods:
  void PrepareFrame(ModdingAPI::Exposed::UnityEngine::Playables::Playable playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData info) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourPlayAudio*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DC97A0))(this, playable, info);
  }
  void ProcessFrame(ModdingAPI::Exposed::UnityEngine::Playables::Playable playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData info, Il2CppObject* playerData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourPlayAudio*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DC97B0))(this, playable, info, playerData);
  }
  void OnBehaviourPlay(ModdingAPI::Exposed::UnityEngine::Playables::Playable playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData info) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourPlayAudio*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DC97A0))(this, playable, info);
  }
  void OnBehaviourPause(ModdingAPI::Exposed::UnityEngine::Playables::Playable playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData info) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourPlayAudio*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DC9B00))(this, playable, info);
  }
  void PlayAudio(float seekTime) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourPlayAudio*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DC9BC0))(this, seekTime);
  }
  void StopAudio() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourPlayAudio*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DC9E10))(this);
  }
  uint32_t PostStopAudioEvent() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourPlayAudio*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DCA010))(this);
  }
  bool TryToSeekAudio() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourPlayAudio*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DCA120))(this);
  }
  void AudioCallback(Il2CppObject* in_cookie, int32_t in_type, Il2CppObject* in_info) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourPlayAudio*, Il2CppObject*, int32_t, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DCA310))(this, in_cookie, in_type, in_info);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourPlayAudio*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static methods:
  static inline void AudioSeek(int32_t audioMs, System_String* audioEventStart, uint32_t audioId, ModdingAPI::Exposed::UnityEngine::GameObject* audioEmitterNode) {
    reinterpret_cast<void(__fastcall*)(int32_t, System_String*, uint32_t, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DCA410))(audioMs, audioEventStart, audioId, audioEmitterNode);
  }
};
}