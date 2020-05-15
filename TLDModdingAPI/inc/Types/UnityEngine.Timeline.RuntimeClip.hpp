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


namespace ModdingAPI::Exposed::UnityEngine::Timeline {
struct __RuntimeClip_Il2CppStaticFields {
};

struct __RuntimeClip_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _6_set_intervalBit;
  VirtualInvokeData _7_get_intervalStart;
  VirtualInvokeData _8_get_intervalEnd;
  VirtualInvokeData _9_get_intervalBit;
  VirtualInvokeData _10_set_enable;
  VirtualInvokeData _11_EvaluateAt;
  VirtualInvokeData _12_get_start;
  VirtualInvokeData _13_get_duration;
};

struct __RuntimeClip_Il2CppClass {
  Il2CppClass_1 _1;
  __RuntimeClip_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RuntimeClip_Il2CppVtbl vtbl;
};

class RuntimeClip {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C738C8;
  static inline    __RuntimeClip_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RuntimeClip_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RuntimeClip_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RuntimeClip_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t RuntimeElement__intervalBit_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* m_Clip;
  ModdingAPI::Exposed::UnityEngine::Playables::Playable m_Playable;
  ModdingAPI::Exposed::UnityEngine::Playables::Playable m_ParentMixer;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* clip, ModdingAPI::Exposed::UnityEngine::Playables::Playable clipPlayable, ModdingAPI::Exposed::UnityEngine::Playables::Playable parentMixer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::RuntimeClip*, ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Playables::Playable)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB4080))(this, clip, clipPlayable, parentMixer);
  }
  double get_start() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::RuntimeClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB4140))(this);
  }
  double get_duration() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::RuntimeClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB4170))(this);
  }
  void Create(ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* clip, ModdingAPI::Exposed::UnityEngine::Playables::Playable clipPlayable, ModdingAPI::Exposed::UnityEngine::Playables::Playable parentMixer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::RuntimeClip*, ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Playables::Playable)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB4080))(this, clip, clipPlayable, parentMixer);
  }
  ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip* get_clip() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Timeline::TimelineClip*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::RuntimeClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADD890))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::Playable get_mixer() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::RuntimeClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB4190))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::Playable get_playable() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::RuntimeClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE2BFF0))(this);
  }
  void set_enable(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::RuntimeClip*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB41A0))(this, value);
  }
  void SetTime(double time) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::RuntimeClip*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB42B0))(this, time);
  }
  void SetDuration(double duration) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::RuntimeClip*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB4350))(this, duration);
  }
  void EvaluateAt(double localTime, ModdingAPI::Exposed::UnityEngine::Playables::FrameData frameData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::RuntimeClip*, double, ModdingAPI::Exposed::UnityEngine::Playables::FrameData)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB43F0))(this, localTime, frameData);
  }
};
}