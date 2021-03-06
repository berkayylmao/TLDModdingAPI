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
#include "ModdingAPI.Exposed.UnityEngine.Playables.PlayableHandle.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Audio.AudioClipPlayable.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Playables.PlayableGraph.hpp"

namespace ModdingAPI::Exposed::UnityEngine::Audio {
struct __AudioClipPlayable_Il2CppObject {
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle m_Handle;
};
struct __AudioClipPlayable_Il2CppStaticFields {
};

struct __AudioClipPlayable_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_GetHandle;
  VirtualInvokeData _5_Equals;
};

struct __AudioClipPlayable_Il2CppClass {
  Il2CppClass_1 _1;
  __AudioClipPlayable_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AudioClipPlayable_Il2CppVtbl vtbl;
};

class AudioClipPlayable {
public:
  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle m_Handle;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle handle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x52F00))(this, handle);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle GetHandle() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x27E00))(this);
  }
  bool Equals(ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable*, ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable)>(Helpers::Memory::GetInstance().MakeAbsolute(0x52F20))(this, other);
  }
  ModdingAPI::Exposed::UnityEngine::AudioClip* GetClip() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AudioClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x53080))(this);
  }
  bool GetLooped() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x530E0))(this);
  }
  bool IsPlaying() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x53140))(this);
  }
  bool IsChannelPlaying() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x53140))(this);
  }
  double GetStartDelay() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x531A0))(this);
  }
  double GetPauseDelay() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x53200))(this);
  }
  void Seek(double startTime, double startDelay, double duration) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable*, double, double, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x53260))(this, startTime, startDelay, duration);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable Create(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::AudioClip* clip, bool looping) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Audio::AudioClipPlayable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::AudioClip*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1526220))(graph, clip, looping);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle CreateHandle(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::AudioClip* clip, bool looping) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::AudioClip*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15264B0))(graph, clip, looping);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AudioClip* GetClipInternal(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle hdl) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AudioClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1526780))(hdl);
  }
  static inline bool GetLoopedInternal(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle hdl) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15267D0))(hdl);
  }
  static inline bool GetIsChannelPlayingInternal(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle hdl) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1526820))(hdl);
  }
  static inline double GetStartDelayInternal(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle hdl) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1526870))(hdl);
  }
  static inline void SetStartDelayInternal(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle hdl, double delay) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15268C0))(hdl, delay);
  }
  static inline double GetPauseDelayInternal(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle hdl) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1526920))(hdl);
  }
  static inline void SetPauseDelayInternal(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle hdl, double delay) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1526970))(hdl, delay);
  }
  static inline bool InternalCreateAudioClipPlayable(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::AudioClip* clip, bool looping, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle handle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::AudioClip*, bool, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15269D0))(graph, clip, looping, handle);
  }

};
}