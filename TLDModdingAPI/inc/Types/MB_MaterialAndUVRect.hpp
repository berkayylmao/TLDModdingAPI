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
#include "ModdingAPI.Exposed.UnityEngine.Rect.hpp"


namespace ModdingAPI::Exposed {
struct __MB_MaterialAndUVRect_Il2CppStaticFields {
};

struct __MB_MaterialAndUVRect_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __MB_MaterialAndUVRect_Il2CppClass {
  Il2CppClass_1 _1;
  __MB_MaterialAndUVRect_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MB_MaterialAndUVRect_Il2CppVtbl vtbl;
};

class MB_MaterialAndUVRect {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2C560;
  static inline    __MB_MaterialAndUVRect_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MB_MaterialAndUVRect_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MB_MaterialAndUVRect_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MB_MaterialAndUVRect_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Material* material;
  ModdingAPI::Exposed::UnityEngine::Rect atlasRect;
  System_String* srcObjName;
  bool allPropsUseSameTiling;
  ModdingAPI::Exposed::UnityEngine::Rect allPropsUseSameTiling_sourceMaterialTiling;
  ModdingAPI::Exposed::UnityEngine::Rect allPropsUseSameTiling_samplingEncapsulatinRect;
  ModdingAPI::Exposed::UnityEngine::Rect propsUseDifferntTiling_srcUVsamplingRect;
  int32_t tilingTreatment;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Material* mat, ModdingAPI::Exposed::UnityEngine::Rect destRect, bool allPropsUseSameTiling, ModdingAPI::Exposed::UnityEngine::Rect sourceMaterialTiling, ModdingAPI::Exposed::UnityEngine::Rect samplingEncapsulatingRect, ModdingAPI::Exposed::UnityEngine::Rect srcUVsamplingRect, int32_t treatment, System_String* objName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MB_MaterialAndUVRect*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Rect, bool, ModdingAPI::Exposed::UnityEngine::Rect, ModdingAPI::Exposed::UnityEngine::Rect, ModdingAPI::Exposed::UnityEngine::Rect, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21B4DE0))(this, mat, destRect, allPropsUseSameTiling, sourceMaterialTiling, samplingEncapsulatingRect, srcUVsamplingRect, treatment, objName);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::MB_MaterialAndUVRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21B4E30))(this);
  }
  bool Equals(Il2CppObject* obj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::MB_MaterialAndUVRect*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21B4E80))(this, obj);
  }
  ModdingAPI::Exposed::UnityEngine::Rect GetEncapsulatingRect() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rect(__fastcall*)(ModdingAPI::Exposed::MB_MaterialAndUVRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21B50D0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Rect GetMaterialTilingRect() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rect(__fastcall*)(ModdingAPI::Exposed::MB_MaterialAndUVRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21B50F0))(this);
  }
};
}