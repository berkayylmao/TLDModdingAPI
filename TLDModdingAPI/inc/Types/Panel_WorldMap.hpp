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
struct __Panel_WorldMap_Il2CppStaticFields {
};

struct __Panel_WorldMap_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Panel_WorldMap_Il2CppClass {
  Il2CppClass_1 _1;
  __Panel_WorldMap_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Panel_WorldMap_Il2CppVtbl vtbl;
};

class Panel_WorldMap {
public:
  // Il2Cpp fields:
  __Panel_WorldMap_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::ButtonLegendContainer* m_ButtonLegendContainer;
  ModdingAPI::Exposed::UnityEngine::Transform* m_MapElementsTransform;
  ModdingAPI::Exposed::MapCrosshair* m_Crosshair;
  float m_GamepadMoveSpeed;
  float m_MaxMouseClickDistance;
  bool m_StartHasBeenCalled;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_MapElementsOrigPos;
  ModdingAPI::Exposed::UIWidget* m_CrosshairWidget;
  ModdingAPI::Exposed::WorldMapRegion_array* m_Regions;
  ModdingAPI::Exposed::WorldMapRegion* m_HoverRegion;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_MouseDownPosition;
  ModdingAPI::Exposed::WorldMapDetail_array* m_Details;
  int32_t m_State;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EAB30))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EAF40))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EB140))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EB4B0))(this, text);
  }
  void AddMapDetailToMap(ModdingAPI::Exposed::MapDetail* md) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*, ModdingAPI::Exposed::MapDetail*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EB770))(this, md);
  }
  void RemoveMapDetailFromMap(ModdingAPI::Exposed::MapDetail* md) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*, ModdingAPI::Exposed::MapDetail*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EB860))(this, md);
  }
  void Enable(int32_t state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EBA50))(this, state);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48B340))(this);
  }
  void OnCancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EBC50))(this);
  }
  void OnBackToRegionMap() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EBD00))(this);
  }
  void SelectRegionMap(System_String* regionName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EBD10))(this, regionName);
  }
  void CheckForHoverState() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EBFD0))(this);
  }
  void DoGamepadControls() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EC4F0))(this);
  }
  void DoMouseControls() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EC680))(this);
  }
  void EnableWorldMapDetail(System_String* guid) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19EC910))(this, guid);
  }
  void DisableWorldMapDetail(System_String* guid) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19ECA30))(this, guid);
  }
  void MaybeFollowMouseWithCrosshair() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19ECB50))(this);
  }
  void ResetToNormal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19ED3F0))(this);
  }
  void UpdateButtonLegend() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19ED590))(this);
  }
  void UpdateCrosshairState() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19ED7B0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Panel_WorldMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19ED7E0))(this);
  }
};
}