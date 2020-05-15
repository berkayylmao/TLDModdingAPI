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
#include "ModdingAPI.Exposed.PlayableBehaviourSkip.SkipInfo.hpp"


namespace ModdingAPI::Exposed {
struct __PlayableBehaviourSkip_Il2CppStaticFields {
  bool s_ForceSkipEnabled;
};

struct __PlayableBehaviourSkip_Il2CppVtbl {
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

struct __PlayableBehaviourSkip_Il2CppClass {
  Il2CppClass_1 _1;
  __PlayableBehaviourSkip_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PlayableBehaviourSkip_Il2CppVtbl vtbl;
};

class PlayableBehaviourSkip {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6CBA8;
  static inline    __PlayableBehaviourSkip_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __PlayableBehaviourSkip_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PlayableBehaviourSkip_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PlayableBehaviourSkip_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_SkipableClips;
  bool m_CanSkip;

  // Member methods:
  void ProcessFrame(ModdingAPI::Exposed::UnityEngine::Playables::Playable playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData info, Il2CppObject* playerData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourSkip*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DCB2A0))(this, playable, info, playerData);
  }
  float GetNextSkipTime(float currentTimeSeconds) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourSkip*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DCB590))(this, currentTimeSeconds);
  }
  float GetNextEndOrStartTime(float currentTimeSeconds) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourSkip*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DCB5D0))(this, currentTimeSeconds);
  }
  bool CanOverrideValue(ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* clip, ModdingAPI::Exposed::PlayableBehaviourSkip::SkipInfo skipInfo, float time) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourSkip*, ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*, ModdingAPI::Exposed::PlayableBehaviourSkip::SkipInfo, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DCB880))(this, clip, skipInfo, time);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayableBehaviourSkip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DCBA00))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> s_ForceSkipEnabled = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_ForceSkipEnabled; }
  );
};
}