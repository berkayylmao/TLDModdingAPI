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
#include "ModdingAPI.Exposed.UnityEngine.Animations.AnimationMixerPlayable.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Playables.PlayableGraph.hpp"

namespace ModdingAPI::Exposed::UnityEngine::Animations {
struct __AnimationMixerPlayable_Il2CppObject {
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle m_Handle;
};
struct __AnimationMixerPlayable_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Animations::AnimationMixerPlayable m_NullPlayable;
};

struct __AnimationMixerPlayable_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_GetHandle;
  VirtualInvokeData _5_Equals;
};

struct __AnimationMixerPlayable_Il2CppClass {
  Il2CppClass_1 _1;
  __AnimationMixerPlayable_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AnimationMixerPlayable_Il2CppVtbl vtbl;
};

class AnimationMixerPlayable {
  static constexpr uint64_t _rvaObjectInstance     = 0x3C73108;
  static inline    AnimationMixerPlayable* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t _rvaClassInstance     = 0x3C740B0;
  static inline    __AnimationMixerPlayable_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Singleton object getter:
  static inline AnimationMixerPlayable* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (AnimationMixerPlayable**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Static class getter:
  static inline __AnimationMixerPlayable_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AnimationMixerPlayable_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle m_Handle;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle handle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Animations::AnimationMixerPlayable*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x517E0))(this, handle);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle GetHandle() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Animations::AnimationMixerPlayable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x27E00))(this);
  }
  bool Equals(ModdingAPI::Exposed::UnityEngine::Animations::AnimationMixerPlayable other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Animations::AnimationMixerPlayable*, ModdingAPI::Exposed::UnityEngine::Animations::AnimationMixerPlayable)>(Helpers::Memory::GetInstance().MakeAbsolute(0x51800))(this, other);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Animations::AnimationMixerPlayable get_Null() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Animations::AnimationMixerPlayable(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x14EEA80))();
  }
  static inline ModdingAPI::Exposed::UnityEngine::Animations::AnimationMixerPlayable Create(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool normalizeWeights) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Animations::AnimationMixerPlayable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14EEB30))(graph, inputCount, normalizeWeights);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle CreateHandle(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool normalizeWeights) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14EEC40))(graph, inputCount, normalizeWeights);
  }
  static inline bool CreateHandleInternal(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool normalizeWeights, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle handle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, int32_t, bool, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14EF000))(graph, inputCount, normalizeWeights, handle);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x14EF100))();
  }
  static inline bool CreateHandleInternal_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool normalizeWeights, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle handle) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, int32_t, bool, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14EF1D0))(graph, inputCount, normalizeWeights, handle);
  }

};
}