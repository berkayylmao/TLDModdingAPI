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
struct __Phone_Il2CppStaticFields {
  float s_CurrentPhoneRingDurationRealtimeSeconds;
};

struct __Phone_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Phone_Il2CppClass {
  Il2CppClass_1 _1;
  __Phone_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Phone_Il2CppVtbl vtbl;
};

class Phone {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8C080;
  static inline    __Phone_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Phone_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Phone_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Phone_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDisplayName;
  System_String* m_PickUpReceiverAudio;
  System_String* m_RingingAudio;
  System_String* m_RingingClosedCaptionID;
  float m_MinDistanceToPlayerForCaptions;
  bool m_LoopAudio;
  int32_t m_RingCountMin;
  int32_t m_RingCountMax;
  float m_ShortPauseDurationSeconds;
  float m_NextCallDurationSeconds;
  ModdingAPI::Exposed::DTContainer* m_DTContainer;
  ModdingAPI::Exposed::DialogueModeRigFP* m_DialogueMode;
  ModdingAPI::Exposed::AnimatedInteraction* m_PickupAnimatedInteraction;
  ModdingAPI::Exposed::AnimatedInteraction* m_HangupAnimatedInteraction;
  System_String* m_TimelinePhoneTrackName;
  bool m_StartRinging;
  ModdingAPI::Exposed::NPCVoice* m_NPCVoice;
  System_String* m_NPCVoiceTrackName;
  uint32_t m_RingingAudioInstance;
  int32_t m_RolledRingCount;
  ModdingAPI::Exposed::MissionObjectIdentifier* m_MissionObjectIdentifier;
  bool m_HasStartedRinging;
  int32_t m_RingingState;
  float m_TimeElapsed;
  int32_t m_CurrentRingIndex;
  bool m_HasResumed;
  int32_t m_RingCycleCount;
  bool m_IsShowingClosedCaptions;

  // Member methods:
  System_String* get_m_DisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35A0))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20730B0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20731C0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2073320))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20734E0))(this);
  }
  System_String* GetMissionObjectId() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2073630))(this);
  }
  void StartSingleRing() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2073710))(this);
  }
  void HideClosedCaptions() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2073C20))(this);
  }
  void MarkResumed() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF81620))(this);
  }
  void MaybeAssignDTController() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2073D10))(this);
  }
  System_String* GetDebugText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2074150))(this);
  }
  void StartRinging() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2074520))(this);
  }
  void StopRinging() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20746C0))(this);
  }
  void StopPhoneRingAudio() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2074790))(this);
  }
  bool IsRinging() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2074890))(this);
  }
  System_String* GetHoverText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35A0))(this);
  }
  bool ProcessInteraction() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20748C0))(this);
  }
  bool IsInConversation() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2074A30))(this);
  }
  int32_t GetRingCycleCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2074B30))(this);
  }
  void OnPhonePickup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2074BE0))(this);
  }
  void OnPhonePickupComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2074DA0))(this);
  }
  void OnPhoneHangup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2074F50))(this);
  }
  void OnPhoneHangupComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2075230))(this);
  }
  void StartShortPause() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2075380))(this);
  }
  void UpdateRinging() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2075480))(this);
  }
  int32_t RollRingCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2075610))(this);
  }
  void UpdateShortPause() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2075670))(this);
  }
  void StartWaitingNextCall() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2075810))(this);
  }
  void UpdateWaitingNextCall() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2075970))(this);
  }
  void UpdateAudio() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2075AE0))(this);
  }
  void AssignBindingOverrides() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2076380))(this);
  }
  void AssignBindingInfo(ModdingAPI::Exposed::AnimatedInteraction* animatedInteraction, ModdingAPI::Exposed::UnityEngine::Animator* animator) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*, ModdingAPI::Exposed::AnimatedInteraction*, ModdingAPI::Exposed::UnityEngine::Animator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2076500))(this, animatedInteraction, animator);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Phone*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2076760))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<float> s_CurrentPhoneRingDurationRealtimeSeconds = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_CurrentPhoneRingDurationRealtimeSeconds; }
  );

  // Static methods:
  static inline void AudioCallback(Il2CppObject* in_cookie, int32_t in_type, Il2CppObject* in_info) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*, int32_t, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2075E50))(in_cookie, in_type, in_info);
  }
  static inline ModdingAPI::Exposed::Phone* GetPhone(System_String* missionId) {
    return reinterpret_cast<ModdingAPI::Exposed::Phone*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2075F90))(missionId);
  }
  static inline void StartPhoneRinging(System_String* missionId) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2076100))(missionId);
  }
  static inline void StopPhoneRinging(System_String* missionId) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2076290))(missionId);
  }
};
}