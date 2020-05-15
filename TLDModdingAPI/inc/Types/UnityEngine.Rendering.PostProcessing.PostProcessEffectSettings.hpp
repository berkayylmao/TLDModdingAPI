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


namespace ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing {
struct __PostProcessEffectSettings_Il2CppStaticFields {
};

struct __PostProcessEffectSettings_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_IsEnabledAndSupported;
};

struct __PostProcessEffectSettings_Il2CppClass {
  Il2CppClass_1 _1;
  __PostProcessEffectSettings_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PostProcessEffectSettings_Il2CppVtbl vtbl;
};

class PostProcessEffectSettings {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C916E0;
  static inline    PostProcessEffectSettings* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C42858;
  static inline    __PostProcessEffectSettings_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline PostProcessEffectSettings* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (PostProcessEffectSettings**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __PostProcessEffectSettings_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PostProcessEffectSettings_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PostProcessEffectSettings_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool active;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::BoolParameter* enabled;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* parameters;

  // Member methods:
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D04C0))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D0BE0))(this);
  }
  void SetAllOverridesTo(bool state, bool excludeEnabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D0DF0))(this, state, excludeEnabled);
  }
  bool IsEnabledAndSupported(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D1040))(this, context);
  }
  int32_t GetHash() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D1060))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D12A0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::ParameterOverride* _OnEnable_b__3_2(ModdingAPI::Exposed::System::Reflection::FieldInfo* t) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::ParameterOverride*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*, ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D1410))(this, t);
  }
};
}