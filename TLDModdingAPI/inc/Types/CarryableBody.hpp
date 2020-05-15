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
struct __CarryableBody_Il2CppStaticFields {
};

struct __CarryableBody_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CarryableBody_Il2CppClass {
  Il2CppClass_1 _1;
  __CarryableBody_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CarryableBody_Il2CppVtbl vtbl;
};

class CarryableBody {
public:
  // Il2Cpp fields:
  __CarryableBody_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_FPHGearItemPrefab;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDisplayName;
  float m_PlacementDistance;
  ModdingAPI::Exposed::AnimationStateRef* m_DropAnimation;
  ModdingAPI::Exposed::AnimationStateRef* m_DroppedIdleAnimation;
  ModdingAPI::Exposed::AnimationStateRef* m_PlacementMeshIdleAnimation;
  int32_t m_PickupIntensity;
  ModdingAPI::Exposed::ShowOnMapItem* m_ShowItemOnMap;
  ModdingAPI::Exposed::Container* m_Container;
  ModdingAPI::Exposed::NPC* m_NPC;
  ModdingAPI::Exposed::Placeable* m_Placeable;
  ModdingAPI::Exposed::UnityEngine::Animator* m_Animator;
  bool m_ReplacedOriginal;
  ModdingAPI::Exposed::Bed* m_Bed;
  bool m_HasBeenDropped;
  bool m_ResumeRequested;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CarryableBody*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B84B80))(this);
  }
  bool CanInteract() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CarryableBody*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B84C40))(this);
  }
  System_String* GetHoverText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::CarryableBody*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B84DF0))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::CarryableBody*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B84EF0))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CarryableBody*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B85070))(this, text);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CarryableBody*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B85150))(this);
  }
  void Dropped() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CarryableBody*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B85300))(this);
  }
  void OnPickedUp() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CarryableBody*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B85490))(this);
  }
  void MaybeRestoreDroppedAnimation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CarryableBody*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B85620))(this);
  }
  void StartingPlacement() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CarryableBody*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B85730))(this);
  }
  void OnPlacedInBed(ModdingAPI::Exposed::Bed* bed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CarryableBody*, ModdingAPI::Exposed::Bed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x47E020))(this, bed);
  }
  void OnRemovedFromBed(ModdingAPI::Exposed::Bed* bed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CarryableBody*, ModdingAPI::Exposed::Bed*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B85830))(this, bed);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CarryableBody*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }
};
}