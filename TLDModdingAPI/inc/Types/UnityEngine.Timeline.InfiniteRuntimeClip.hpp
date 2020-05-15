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
struct __InfiniteRuntimeClip_Il2CppStaticFields {
  int64_t kIntervalEnd;
};

struct __InfiniteRuntimeClip_Il2CppVtbl {
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
};

struct __InfiniteRuntimeClip_Il2CppClass {
  Il2CppClass_1 _1;
  __InfiniteRuntimeClip_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __InfiniteRuntimeClip_Il2CppVtbl vtbl;
};

class InfiniteRuntimeClip {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C74888;
  static inline    __InfiniteRuntimeClip_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __InfiniteRuntimeClip_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__InfiniteRuntimeClip_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __InfiniteRuntimeClip_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t RuntimeElement__intervalBit_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Playables::Playable m_Playable;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Playables::Playable playable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::InfiniteRuntimeClip*, ModdingAPI::Exposed::UnityEngine::Playables::Playable)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F800))(this, playable);
  }
  int64_t get_intervalStart() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::InfiniteRuntimeClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  int64_t get_intervalEnd() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::InfiniteRuntimeClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB23C0))(this);
  }
  void set_enable(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::InfiniteRuntimeClip*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB2460))(this, value);
  }
  void EvaluateAt(double localTime, ModdingAPI::Exposed::UnityEngine::Playables::FrameData frameData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Timeline::InfiniteRuntimeClip*, double, ModdingAPI::Exposed::UnityEngine::Playables::FrameData)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB2510))(this, localTime, frameData);
  }

  // Static fields:
  static inline __CppStaticProperty<int64_t> kIntervalEnd = __CppStaticProperty<int64_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kIntervalEnd; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB25B0))();
  }
};
}