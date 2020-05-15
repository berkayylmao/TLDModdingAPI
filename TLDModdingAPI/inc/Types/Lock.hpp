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
struct __Lock_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_UnlockedCompanionGuids;
  ModdingAPI::Exposed::LockSaveDataProxy* m_LockSaveDataProxy;
};

struct __Lock_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Lock_Il2CppClass {
  Il2CppClass_1 _1;
  __Lock_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Lock_Il2CppVtbl vtbl;
};

class Lock {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6E350;
  static inline    __Lock_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Lock_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Lock_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Lock_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t m_ModeFilter;
  float m_ChanceLocked;
  float m_ForceLockDurationSecondsMin;
  float m_ForceLockDurationSecondsMax;
  float m_ChanceContainerRuinedWhenToolBreaks;
  ModdingAPI::Exposed::GearItem* m_GearPrefabToForceLock;
  System_String* m_CompanionLockGuid;
  System_String* m_LockedAudio;
  System_String* m_UnlockAudio;
  bool m_UseHoverTextColor;
  bool m_HideToolRequiredToForceOpenHintText;
  ModdingAPI::Exposed::AnimatedInteraction* m_AnimatedInteraction;
  ModdingAPI::Exposed::UnityEngine::Animator* m_AnimatedObjectAnimator;
  System_String* m_AnimatedObjectTrackName;
  ModdingAPI::Exposed::GearItem* m_GearUsedToForceLock;
  int32_t m_LockState;
  bool m_AttemptedToOpen;
  bool m_LockStateRolled;
  bool m_BreakOnUse;
  bool m_CheckedForUnlockedCompanion;
  ModdingAPI::Exposed::ObjectGuid* m_ObjectGuid;
  ModdingAPI::Exposed::HoverIconsToShow* m_HoverIcons;
  ModdingAPI::Exposed::Lock::OnLockStateBroken* m_OnLockStateBroken;
  bool m_IsBeingInteractedWith;
  float m_InteractTimer;
  uint32_t m_ForceLockAudioID;
  int32_t m_RestoreControlMode;
  float m_RandomFailureTime;
  bool m_WasEverLocked;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19023A0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1902680))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19027D0))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1902B90))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1902CB0))(this, text);
  }
  bool IsLocked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1902FB0))(this);
  }
  bool WasEverLocked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1892960))(this);
  }
  bool IsBroken() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1902FC0))(this);
  }
  void SetLockState(int32_t state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48B450))(this, state);
  }
  bool AttemptedToOpen() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48B460))(this);
  }
  void RollLockedState() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1902FD0))(this);
  }
  bool RequiresToolToUnlock() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19030A0))(this);
  }
  bool PlayerHasRequiredToolToUnlock() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1903140))(this);
  }
  void ForceLockBegin(ModdingAPI::Exposed::Lock::OnLockStateBroken* onLockStateBroken) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*, ModdingAPI::Exposed::Lock::OnLockStateBroken*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19031F0))(this, onLockStateBroken);
  }
  ModdingAPI::Exposed::GearItem* GetGearItemToForceLock() {
    return reinterpret_cast<ModdingAPI::Exposed::GearItem*(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19033F0))(this);
  }
  void UnlockCompainionLock() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1903700))(this);
  }
  void StartInteract() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1903830))(this);
  }
  void StartInteractInternal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1903A60))(this);
  }
  void Cancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1903FC0))(this);
  }
  void ProgressBarStarted() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnForceLockComplete(bool success, bool playerCancel, float progress) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*, bool, bool, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19041E0))(this, success, playerCancel, progress);
  }
  void MaybeUnlockDueToCompanionBeingUnlocked() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1904540))(this);
  }
  void PlayLockedAudio() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19046D0))(this);
  }
  void PlayUnlockAudio() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1904840))(this);
  }
  void AssignBindingOverrides() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1904980))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Lock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1904BA0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_UnlockedCompanionGuids = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_UnlockedCompanionGuids; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::LockSaveDataProxy*> m_LockSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::LockSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_LockSaveDataProxy; }
  );

  // Static methods:
  static inline System_String* SerializeUnlockedCompanionGuids() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1902D80))();
  }
  static inline void DeserializeUnlockedCompanionGuids(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1902E90))(text);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1904BC0))();
  }
};
}