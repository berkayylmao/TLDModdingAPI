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
#include "ModdingAPI.Exposed.MissionStatusDisplaySettings.hpp"
#include "ModdingAPI.Exposed.HUDMission.StatusUpdate.hpp"


namespace ModdingAPI::Exposed {
struct __HUDMission_Il2CppStaticFields {
};

struct __HUDMission_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __HUDMission_Il2CppClass {
  Il2CppClass_1 _1;
  __HUDMission_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __HUDMission_Il2CppVtbl vtbl;
};

class HUDMission {
public:
  // Il2Cpp fields:
  __HUDMission_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UILabel* m_MissionInfo;
  ModdingAPI::Exposed::UILabel* m_MissionStatus;
  ModdingAPI::Exposed::MissionStatusDisplaySettings m_DisplaySettings;
  bool m_RestoreDisplay;
  ModdingAPI::Exposed::HUDMission::StatusUpdate m_CurrentStatus;
  ModdingAPI::Exposed::System::Collections::Generic::Queue_T_* m_Queue;
  ModdingAPI::Exposed::UnityEngine::Animator* m_Animator;
  float m_AnimationStartTime;
  float m_AnimationElapsedSec;

  // Member methods:
  void Disable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::HUDMission*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A90DF0))(this);
  }
  void Enqueue(int32_t type, System_String* id) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::HUDMission*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A90FC0))(this, type, id);
  }
  void EnqueueObjective(int32_t type, System_String* objectiveId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::HUDMission*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A91270))(this, type, objectiveId);
  }
  System_String* GetDebugText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::HUDMission*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A913C0))(this);
  }
  void HideDisplay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::HUDMission*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A91580))(this);
  }
  bool IsActive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::HUDMission*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A8ABB0))(this);
  }
  void RestoreDisplay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::HUDMission*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A91740))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::HUDMission*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A918D0))(this);
  }
  void Dequeue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::HUDMission*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A919D0))(this);
  }
  void OnAnimationComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::HUDMission*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A921B0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::HUDMission*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A922E0))(this);
  }
};
}