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


namespace ModdingAPI::Exposed::UIRect {
struct __AnchorPoint_Il2CppStaticFields {
};

struct __AnchorPoint_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AnchorPoint_Il2CppClass {
  Il2CppClass_1 _1;
  __AnchorPoint_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AnchorPoint_Il2CppVtbl vtbl;
};

class AnchorPoint {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5CED0;
  static inline    __AnchorPoint_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AnchorPoint_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AnchorPoint_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AnchorPoint_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Transform* target;
  float relative;
  int32_t absolute;
  ModdingAPI::Exposed::UIRect* rect;
  ModdingAPI::Exposed::UnityEngine::Camera* targetCam;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect::AnchorPoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor(float relative) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect::AnchorPoint*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x699250))(this, relative);
  }
  void Set(float relative, float absolute) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect::AnchorPoint*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D8E70))(this, relative, absolute);
  }
  void Set(ModdingAPI::Exposed::UnityEngine::Transform* target, float relative, float absolute) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect::AnchorPoint*, ModdingAPI::Exposed::UnityEngine::Transform*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D8F40))(this, target, relative, absolute);
  }
  void SetToNearest(float abs0, float abs1, float abs2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect::AnchorPoint*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D9020))(this, abs0, abs1, abs2);
  }
  void SetToNearest(float rel0, float rel1, float rel2, float abs0, float abs1, float abs2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect::AnchorPoint*, float, float, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D9150))(this, rel0, rel1, rel2, abs0, abs1, abs2);
  }
  void SetHorizontal(ModdingAPI::Exposed::UnityEngine::Transform* parent, float localPos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect::AnchorPoint*, ModdingAPI::Exposed::UnityEngine::Transform*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D9290))(this, parent, localPos);
  }
  void SetVertical(ModdingAPI::Exposed::UnityEngine::Transform* parent, float localPos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect::AnchorPoint*, ModdingAPI::Exposed::UnityEngine::Transform*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D95A0))(this, parent, localPos);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3_array* GetSides(ModdingAPI::Exposed::UnityEngine::Transform* relativeTo) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UIRect::AnchorPoint*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D9890))(this, relativeTo);
  }
};
}