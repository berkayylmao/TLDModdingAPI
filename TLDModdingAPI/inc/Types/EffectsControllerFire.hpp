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


namespace ModdingAPI::Exposed {
struct __EffectsControllerFire_Il2CppStaticFields {
};

struct __EffectsControllerFire_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __EffectsControllerFire_Il2CppClass {
  Il2CppClass_1 _1;
  __EffectsControllerFire_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __EffectsControllerFire_Il2CppVtbl vtbl;
};

class EffectsControllerFire {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C70288;
  static inline    EffectsControllerFire* _pStaticObjectInstance = nullptr;

public:
// Singleton object getter:
  static inline EffectsControllerFire* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (EffectsControllerFire**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Il2Cpp fields:
  __EffectsControllerFire_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::Transform* stage00_Embers;
  ModdingAPI::Exposed::UnityEngine::Transform* stage01_Small;
  ModdingAPI::Exposed::UnityEngine::Transform* stage02_Medium;
  ModdingAPI::Exposed::UnityEngine::Transform* stage03_Large;
  ModdingAPI::Exposed::UnityEngine::Transform* stage04_Full;
  ModdingAPI::Exposed::UnityEngine::Transform* accelrant;
  ModdingAPI::Exposed::UnityEngine::Transform* otherFX;
  ModdingAPI::Exposed::UnityEngine::Transform* flareupSmallFX;
  ModdingAPI::Exposed::UnityEngine::Transform* flareupLargeFX;
  ModdingAPI::Exposed::UnityEngine::Transform* lighting;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* l_StartingEmbers;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* l_StartingSmall;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* l_StartingMedium;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* l_StartingLarge;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* l_Fullburn;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* l_Accelerant;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* l_OtherFX;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* l_FlareupSmallFX;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* l_FlareupLargeFX;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* l_Lighting;
  bool isInitialized;
  bool usePrint;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EffectsControllerFire*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1940000))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EffectsControllerFire*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1940000))(this);
  }
  void TriggerStage(int32_t curState, bool shouldPlay, bool stopOtherStages) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EffectsControllerFire*, int32_t, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1940020))(this, curState, shouldPlay, stopOtherStages);
  }
  void TriggerFlareupLarge() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EffectsControllerFire*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19403E0))(this);
  }
  void StopAllStageFX() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EffectsControllerFire*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1940610))(this);
  }
  void StopAllFX() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EffectsControllerFire*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1940FF0))(this);
  }
  void DeactivateAllFX() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EffectsControllerFire*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1941FE0))(this);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EffectsControllerFire*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1942760))(this);
  }
  void LocalPrint(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EffectsControllerFire*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1942A50))(this, text);
  }
  void TriggerParticleSystems(ModdingAPI::Exposed::System::Collections::Generic::List_T_* particleSystems, bool shouldPlay) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EffectsControllerFire*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1942BC0))(this, particleSystems, shouldPlay);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EffectsControllerFire*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }
};
}