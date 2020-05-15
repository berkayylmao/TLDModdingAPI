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
struct __CinematicAssets_Il2CppStaticFields {
};

struct __CinematicAssets_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CinematicAssets_Il2CppClass {
  Il2CppClass_1 _1;
  __CinematicAssets_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CinematicAssets_Il2CppVtbl vtbl;
};

class CinematicAssets {
public:
  // Il2Cpp fields:
  __CinematicAssets_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::Animator* m_NPC_Animator;
  ModdingAPI::Exposed::UnityEngine::Animator* m_Player_Animator;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Props;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_TransientProps;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_PermananentProps;
  bool m_ArePropsLoaded;

  // Member methods:
  bool ArePropsLoaded() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DE420))(this);
  }
  ModdingAPI::Exposed::CinematicAssets::PermanentPropInfo* TryGetPermanentPropInfoFromMissionId(System_String* missionId) {
    return reinterpret_cast<ModdingAPI::Exposed::CinematicAssets::PermanentPropInfo*(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8B4E0))(this, missionId);
  }
  ModdingAPI::Exposed::CinematicAssets::PermanentPropInfo* GetPermanentPropInfo(int32_t value, ModdingAPI::Exposed::System::Collections::Generic::List_T_* props) {
    return reinterpret_cast<ModdingAPI::Exposed::CinematicAssets::PermanentPropInfo*(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8B6D0))(this, value, props);
  }
  bool LoadTransientProp(ModdingAPI::Exposed::CinematicAssets::DialogueProp* dialogueProp) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*, ModdingAPI::Exposed::CinematicAssets::DialogueProp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8B7D0))(this, dialogueProp);
  }
  bool LoadPermanentProp(ModdingAPI::Exposed::CinematicAssets::DialogueProp* prop, ModdingAPI::Exposed::System::Collections::Generic::List_T_* permanentProps) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*, ModdingAPI::Exposed::CinematicAssets::DialogueProp*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8BAC0))(this, prop, permanentProps);
  }
  void LoadProp(ModdingAPI::Exposed::CinematicAssets::DialogueProp* prop, ModdingAPI::Exposed::System::Collections::Generic::List_T_* permanentProps) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*, ModdingAPI::Exposed::CinematicAssets::DialogueProp*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8BEE0))(this, prop, permanentProps);
  }
  void LoadProps(ModdingAPI::Exposed::System::Collections::Generic::List_T_* permanentProps) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8C000))(this, permanentProps);
  }
  void ReParentProp(int32_t typeAsset, ModdingAPI::Exposed::UnityEngine::GameObject* newParent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*, int32_t, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8C370))(this, typeAsset, newParent);
  }
  void UnloadProps() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8C810))(this);
  }
  void SetTriggerOnLoadedPermanentProps(System_String* trigger) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8CB30))(this, trigger);
  }
  void RegisterAnimators(ModdingAPI::Exposed::CinematicAssets::DialogueProp* dialogueProp) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*, ModdingAPI::Exposed::CinematicAssets::DialogueProp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8CD20))(this, dialogueProp);
  }
  void UnRegisterAnimators(ModdingAPI::Exposed::CinematicAssets::DialogueProp* dialogueProp) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*, ModdingAPI::Exposed::CinematicAssets::DialogueProp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8CEF0))(this, dialogueProp);
  }
  void UseLoadedControllerAndResumeState() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8D090))(this);
  }
  void RestoreOriginalControllerAndResumeState() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8D250))(this);
  }
  void SynchronizePropAnimation(ModdingAPI::Exposed::UnityEngine::Animator* animator, ModdingAPI::Exposed::PlayEventMonitor* playEventMonitor, float currentTime) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*, ModdingAPI::Exposed::UnityEngine::Animator*, ModdingAPI::Exposed::PlayEventMonitor*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8D410))(this, animator, playEventMonitor, currentTime);
  }
  void LateSynchronizeAnimators(int32_t typeAsset, float currentTime, ModdingAPI::Exposed::PlayEventMonitor* playEventMonitor) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*, int32_t, float, ModdingAPI::Exposed::PlayEventMonitor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8D550))(this, typeAsset, currentTime, playEventMonitor);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CinematicAssets*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B8D7A0))(this);
  }
};
}