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
#include "ModdingAPI.Exposed.UnityEngine.Playables.ScriptPlayable_T_.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph.hpp"


namespace ModdingAPI::Exposed::UnityEngine::Timeline {
struct __PrefabControlPlayable_Il2CppStaticFields {
};

struct __PrefabControlPlayable_Il2CppVtbl {
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

struct __PrefabControlPlayable_Il2CppClass {
  Il2CppClass_1 _1;
  __PrefabControlPlayable_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PrefabControlPlayable_Il2CppVtbl vtbl;
};

class PrefabControlPlayable {
public:
  // Il2Cpp fields:
  __PrefabControlPlayable_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Instance;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::PrefabControlPlayable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* get_prefabInstance() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::PrefabControlPlayable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x666540))(this);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* Initialize(ModdingAPI::Exposed::UnityEngine::GameObject* prefabGameObject, ModdingAPI::Exposed::UnityEngine::Transform* parentTransform) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::PrefabControlPlayable*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB3650))(this, prefabGameObject, parentTransform);
  }
  void OnPlayableDestroy(ModdingAPI::Exposed::UnityEngine::Playables::Playable playable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::PrefabControlPlayable*, ModdingAPI::Exposed::UnityEngine::Playables::Playable)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB3950))(this, playable);
  }
  void OnBehaviourPlay(ModdingAPI::Exposed::UnityEngine::Playables::Playable playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData info) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::PrefabControlPlayable*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB3AA0))(this, playable, info);
  }
  void OnBehaviourPause(ModdingAPI::Exposed::UnityEngine::Playables::Playable playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData info) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::PrefabControlPlayable*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB3BA0))(this, playable, info);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Playables::ScriptPlayable_T_ Create(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph graph, ModdingAPI::Exposed::UnityEngine::GameObject* prefabGameObject, ModdingAPI::Exposed::UnityEngine::Transform* parentTransform) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::ScriptPlayable_T_(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB34D0))(graph, prefabGameObject, parentTransform);
  }
  static inline void SetHideFlagsRecursive(ModdingAPI::Exposed::UnityEngine::GameObject* gameObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB3C90))(gameObject);
  }
};
}