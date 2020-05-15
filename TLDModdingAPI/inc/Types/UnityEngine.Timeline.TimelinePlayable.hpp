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
#include "ModdingAPI.Exposed.UnityEngine.Playables.PlayableGraph.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Playables.Playable.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Animations.AnimationPlayableOutput.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Playables.FrameData.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Playables.ScriptPlayable_T_.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph.hpp"


namespace ModdingAPI::Exposed::UnityEngine::Timeline {
struct __TimelinePlayable_Il2CppStaticFields {
  bool muteAudioScrubbing;
};

struct __TimelinePlayable_Il2CppVtbl {
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

struct __TimelinePlayable_Il2CppClass {
  Il2CppClass_1 _1;
  __TimelinePlayable_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TimelinePlayable_Il2CppVtbl vtbl;
};

class TimelinePlayable {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C74F30;
  static inline    __TimelinePlayable_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TimelinePlayable_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TimelinePlayable_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TimelinePlayable_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::IntervalTree_T_* m_IntervalTree;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ActiveClips;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_CurrentListOfActiveClips;
  int32_t m_ActiveBit;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_EvaluateCallbacks;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_PlayableCache;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TimelinePlayable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBBD90))(this);
  }
  void Compile(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::Playables::Playable timelinePlayable, ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* tracks, ModdingAPI::Exposed::UnityEngine::GameObject* go, bool autoRebalance, bool createOutputs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TimelinePlayable*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*, ModdingAPI::Exposed::UnityEngine::GameObject*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBC4D0))(this, graph, timelinePlayable, tracks, go, autoRebalance, createOutputs);
  }
  void CompileTrackList(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::Playables::Playable timelinePlayable, ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* tracks, ModdingAPI::Exposed::UnityEngine::GameObject* go, bool createOutputs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TimelinePlayable*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*, ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBC9D0))(this, graph, timelinePlayable, tracks, go, createOutputs);
  }
  void CreateTrackOutput(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset* track, ModdingAPI::Exposed::UnityEngine::Playables::Playable playable, int32_t port) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TimelinePlayable*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBCC80))(this, graph, track, playable, port);
  }
  void EvaluateWeightsForAnimationPlayableOutput(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset* track, ModdingAPI::Exposed::UnityEngine::Animations::AnimationPlayableOutput animOutput) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TimelinePlayable*, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Animations::AnimationPlayableOutput)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBD190))(this, track, animOutput);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::Playable CreateTrackPlayable(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::Playables::Playable timelinePlayable, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset* track, ModdingAPI::Exposed::UnityEngine::GameObject* go, bool createOutputs) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TimelinePlayable*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBD3B0))(this, graph, timelinePlayable, track, go, createOutputs);
  }
  void PrepareFrame(ModdingAPI::Exposed::UnityEngine::Playables::Playable playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData info) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TimelinePlayable*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBD980))(this, playable, info);
  }
  void Evaluate(ModdingAPI::Exposed::UnityEngine::Playables::Playable playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData frameData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TimelinePlayable*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBD9D0))(this, playable, frameData);
  }
  void CacheTrack(ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset* track, ModdingAPI::Exposed::UnityEngine::Playables::Playable playable, int32_t port, ModdingAPI::Exposed::UnityEngine::Playables::Playable parent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::TimelinePlayable*, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, int32_t, ModdingAPI::Exposed::UnityEngine::Playables::Playable)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBDF40))(this, track, playable, port, parent);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> muteAudioScrubbing = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->muteAudioScrubbing; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Playables::ScriptPlayable_T_ Create(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* tracks, ModdingAPI::Exposed::UnityEngine::GameObject* go, bool autoRebalance, bool createOutputs) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::ScriptPlayable_T_(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*, ModdingAPI::Exposed::UnityEngine::GameObject*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBC170))(graph, tracks, go, autoRebalance, createOutputs);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Playables::Playable CreatePlayableGraph(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset* asset, ModdingAPI::Exposed::UnityEngine::GameObject* go, ModdingAPI::Exposed::UnityEngine::IntervalTree_T_* tree) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::Timeline::TrackAsset*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::IntervalTree_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBD310))(graph, asset, go, tree);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xFBE010))();
  }
};
}