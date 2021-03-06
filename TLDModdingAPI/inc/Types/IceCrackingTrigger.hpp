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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __IceCrackingTrigger_Il2CppStaticFields {
  bool m_FallingIntoWater;
};

struct __IceCrackingTrigger_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __IceCrackingTrigger_Il2CppClass {
  Il2CppClass_1 _1;
  __IceCrackingTrigger_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __IceCrackingTrigger_Il2CppVtbl vtbl;
};

class IceCrackingTrigger {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2BFB8;
  static inline    __IceCrackingTrigger_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __IceCrackingTrigger_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__IceCrackingTrigger_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __IceCrackingTrigger_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_SecondsBeforeIceCracks;
  System_String* m_FallThroughIceAudio;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ClothingRegionsToMakeWet;
  bool m_SetLayerToTriggerIgnoreRaycast;
  bool m_PlayerInTrigger;
  float m_IceCrackingTimer;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_RespawnLocation;
  ModdingAPI::Exposed::UnityEngine::Collider_array* m_Colliders;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17575D0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1757670))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1757820))(this);
  }
  void OnTriggerEnter(ModdingAPI::Exposed::UnityEngine::Collider* other) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*, ModdingAPI::Exposed::UnityEngine::Collider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1757940))(this, other);
  }
  void OnTriggerExit(ModdingAPI::Exposed::UnityEngine::Collider* other) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*, ModdingAPI::Exposed::UnityEngine::Collider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1757A50))(this, other);
  }
  bool Overlaps(ModdingAPI::Exposed::UnityEngine::Collider* testedCollider) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*, ModdingAPI::Exposed::UnityEngine::Collider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1757B30))(this, testedCollider);
  }
  void FallInWater() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1757D30))(this);
  }
  void DidFallThroughIceFadeOut() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1758130))(this);
  }
  void DidFallThroughIceFadeIn() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1758850))(this);
  }
  void ExitStruggleIfActive() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17589A0))(this);
  }
  void ExtinguishLitItemInHands() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1758A90))(this);
  }
  void BreakIce() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1758E70))(this);
  }
  void MakeClothesWet() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17590E0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::IceCrackingTrigger*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1759310))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> m_FallingIntoWater = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_FallingIntoWater; }
  );
};
}