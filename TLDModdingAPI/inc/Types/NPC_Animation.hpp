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
struct __NPC_Animation_Il2CppStaticFields {
};

struct __NPC_Animation_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __NPC_Animation_Il2CppClass {
  Il2CppClass_1 _1;
  __NPC_Animation_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NPC_Animation_Il2CppVtbl vtbl;
};

class NPC_Animation {
public:
  // Il2Cpp fields:
  __NPC_Animation_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_PermanentProps;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_LocIdList;
  int32_t m_IdlesVariationCount;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_AudioEmitterNode;
  float m_MinDelayUntilNextVOSeconds;
  float m_MaxDelayUntilNextVOSeconds;
  float m_MinDelayUntilNextIdleSeconds;
  float m_MaxDelayUntilNextIdleSeconds;
  int32_t m_VO_State;
  ModdingAPI::Exposed::UnityEngine::Animator* m_Animator;
  int32_t m_OnGoingAnimationState;
  uint32_t m_AudioID;
  float m_VODuration;
  float m_AudioDurationRealtimeSeconds;
  float m_OnGoingAnimationDuration;
  int32_t m_NPCBaseLayerIndex;
  int32_t m_NPCHeadLayerIndex;
  int32_t m_NPCFaceLayerIndex;
  float m_VOElapsedTime;
  System_String* m_OnGoingAnimationTrigger;
  System_String* m_OnGoingFaceAnimationTrigger;
  ModdingAPI::Exposed::PlayEventMonitor* m_PlayEventMonitor;
  float m_NextVOElapsedTime;
  float m_DelayUntilNextVOSeconds;
  float m_NextIdleVariationElapsedTime;
  float m_DelayUntilNextIdleVariationSeconds;
  int32_t m_CurrentRandomLocIndex;
  int32_t m_CurrentVariationIdleIndex;
  int32_t m_AnimParameter_IdleVariationIndex;

  // Member methods:
  void RollDelayNextVO() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E89480))(this);
  }
  void RollDelayNextIdle() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E894B0))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E894E0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E896E0))(this);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E89830))(this);
  }
  bool IsNotSpeaking() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E89900))(this);
  }
  void RestoreIdleIndex() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E89910))(this);
  }
  void Update_None() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E89920))(this);
  }
  System_String* RollLocId() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E899A0))(this);
  }
  void RollCurrentIdleVariation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E89AE0))(this);
  }
  void RequestVO(System_String* requestedLocId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E89B60))(this, requestedLocId);
  }
  void Update_RequestRandomVO() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8A350))(this);
  }
  void Update_VOPlaying() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8A4C0))(this);
  }
  void AudioCallback(Il2CppObject* in_cookie, int32_t in_type, Il2CppObject* in_info) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*, Il2CppObject*, int32_t, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8A810))(this, in_cookie, in_type, in_info);
  }
  float GetOnGoingStateDuration() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8A910))(this);
  }
  float ComputeSubtitleDurationInSeconds(System_String* text) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8AA60))(this, text);
  }
  void ReturnToIdleAnimation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8AB80))(this);
  }
  void LateSynchronizeAnimators(float currentTime, int32_t stateHash) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8AE10))(this, currentTime, stateHash);
  }
  void SynchronizePropAnimation(ModdingAPI::Exposed::UnityEngine::Animator* animator, ModdingAPI::Exposed::PlayEventMonitor* playEventMonitor, float currentTime) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*, ModdingAPI::Exposed::UnityEngine::Animator*, ModdingAPI::Exposed::PlayEventMonitor*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8B2B0))(this, animator, playEventMonitor, currentTime);
  }
  void SetAnimationParameter_IdleVariationIndex(int32_t idleVariationIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8B3F0))(this, idleVariationIndex);
  }
  void MaybeChangeVariationIdle() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8B610))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NPC_Animation*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E8B7E0))(this);
  }
};
}