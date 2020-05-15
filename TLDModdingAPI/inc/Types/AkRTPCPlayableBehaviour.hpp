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
struct __AkRTPCPlayableBehaviour_Il2CppStaticFields {
};

struct __AkRTPCPlayableBehaviour_Il2CppVtbl {
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

struct __AkRTPCPlayableBehaviour_Il2CppClass {
  Il2CppClass_1 _1;
  __AkRTPCPlayableBehaviour_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AkRTPCPlayableBehaviour_Il2CppVtbl vtbl;
};

class AkRTPCPlayableBehaviour {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C72E88;
  static inline    __AkRTPCPlayableBehaviour_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AkRTPCPlayableBehaviour_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AkRTPCPlayableBehaviour_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AkRTPCPlayableBehaviour_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool m_OverrideTrackObject;
  ModdingAPI::Exposed::AK::Wwise::RTPC* m_Parameter;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_RTPCObject;
  bool m_SetRTPCGlobally;
  float RTPCValue;

  // Member methods:
  void set_setRTPCGlobally(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkRTPCPlayableBehaviour*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A400))(this, value);
  }
  void set_overrideTrackObject(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkRTPCPlayableBehaviour*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30CFB0))(this, value);
  }
  void set_rtpcObject(ModdingAPI::Exposed::UnityEngine::GameObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkRTPCPlayableBehaviour*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310F00))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* get_rtpcObject() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::AkRTPCPlayableBehaviour*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  void set_parameter(ModdingAPI::Exposed::AK::Wwise::RTPC* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkRTPCPlayableBehaviour*, ModdingAPI::Exposed::AK::Wwise::RTPC*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, value);
  }
  void ProcessFrame(ModdingAPI::Exposed::UnityEngine::Playables::Playable playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData info, Il2CppObject* playerData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkRTPCPlayableBehaviour*, ModdingAPI::Exposed::UnityEngine::Playables::Playable, ModdingAPI::Exposed::UnityEngine::Playables::FrameData, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23E0690))(this, playable, info, playerData);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkRTPCPlayableBehaviour*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
};
}