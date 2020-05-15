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


namespace ModdingAPI::Exposed::Holoville::HOTween::Core {
struct __EaseInfo_Il2CppStaticFields {
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInSineInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeOutSineInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInOutSineInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInQuadInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeOutQuadInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInOutQuadInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInCubicInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeOutCubicInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInOutCubicInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInQuartInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeOutQuartInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInOutQuartInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInQuintInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeOutQuintInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInOutQuintInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInExpoInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeOutExpoInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInOutExpoInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInCircInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeOutCircInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInOutCircInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInElasticInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeOutElasticInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInOutElasticInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInBackInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeOutBackInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInOutBackInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInBounceInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeOutBounceInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInOutBounceInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInStrongInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeOutStrongInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* easeInOutStrongInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* defaultEaseInfo;
};

struct __EaseInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __EaseInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __EaseInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __EaseInfo_Il2CppVtbl vtbl;
};

class EaseInfo {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C85A50;
  static inline    __EaseInfo_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __EaseInfo_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__EaseInfo_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __EaseInfo_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::EaseFunc* ease;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::EaseFunc* inverseEase;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::EaseFunc* p_ease, ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::EaseFunc* p_inverseEase) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*, ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::EaseFunc*, ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::EaseFunc*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F0E70))(this, p_ease, p_inverseEase);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInSineInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInSineInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeOutSineInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeOutSineInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInOutSineInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInOutSineInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInQuadInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInQuadInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeOutQuadInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeOutQuadInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInOutQuadInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInOutQuadInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInCubicInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInCubicInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeOutCubicInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeOutCubicInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInOutCubicInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInOutCubicInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInQuartInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInQuartInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeOutQuartInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeOutQuartInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInOutQuartInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInOutQuartInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInQuintInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInQuintInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeOutQuintInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeOutQuintInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInOutQuintInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInOutQuintInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInExpoInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInExpoInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeOutExpoInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeOutExpoInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInOutExpoInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInOutExpoInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInCircInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInCircInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeOutCircInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeOutCircInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInOutCircInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInOutCircInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInElasticInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInElasticInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeOutElasticInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeOutElasticInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInOutElasticInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInOutElasticInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInBackInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInBackInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeOutBackInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeOutBackInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInOutBackInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInOutBackInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInBounceInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInBounceInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeOutBounceInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeOutBounceInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInOutBounceInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInOutBounceInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInStrongInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInStrongInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeOutStrongInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeOutStrongInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> easeInOutStrongInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->easeInOutStrongInfo; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*> defaultEaseInfo = __CppStaticProperty<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->defaultEaseInfo; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* GetEaseInfo(int32_t p_easeType) {
    return reinterpret_cast<ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1153F30))(p_easeType);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1154810))();
  }
};
}