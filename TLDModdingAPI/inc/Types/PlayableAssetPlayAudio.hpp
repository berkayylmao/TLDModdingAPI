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
#include "ModdingAPI.Exposed.UnityEngine.Playables.PlayableGraph.hpp"


namespace ModdingAPI::Exposed {
struct __PlayableAssetPlayAudio_Il2CppStaticFields {
};

struct __PlayableAssetPlayAudio_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _6_CreatePlayable;
  VirtualInvokeData _7_get_duration;
  VirtualInvokeData _8_get_outputs;
};

struct __PlayableAssetPlayAudio_Il2CppClass {
  Il2CppClass_1 _1;
  __PlayableAssetPlayAudio_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PlayableAssetPlayAudio_Il2CppVtbl vtbl;
};

class PlayableAssetPlayAudio {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C7A948;
  static inline    PlayableAssetPlayAudio* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4D4D8;
  static inline    __PlayableAssetPlayAudio_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline PlayableAssetPlayAudio* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (PlayableAssetPlayAudio**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __PlayableAssetPlayAudio_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PlayableAssetPlayAudio_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PlayableAssetPlayAudio_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  System_String* m_AudioEventStart;
  System_String* m_AudioEventStop;
  bool m_AudioDrivesDirectorTime;
  bool m_SeekAudioEnabled;
  bool m_KeepAudioPlaying;
  ModdingAPI::Exposed::TLD_AudioTrack* m_Track;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Playables::Playable CreatePlayable(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::GameObject* owner) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::PlayableAssetPlayAudio*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2081F30))(this, graph, owner);
  }
  void SetTrack(ModdingAPI::Exposed::TLD_AudioTrack* tldAudioTrack) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayableAssetPlayAudio*, ModdingAPI::Exposed::TLD_AudioTrack*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A410))(this, tldAudioTrack);
  }
  ModdingAPI::Exposed::TLD_AudioTrack* GetTrack() {
    return reinterpret_cast<ModdingAPI::Exposed::TLD_AudioTrack*(__fastcall*)(ModdingAPI::Exposed::PlayableAssetPlayAudio*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayableAssetPlayAudio*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20820F0))(this);
  }
};
}