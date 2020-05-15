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
struct __SafeCracking_Il2CppStaticFields {
  ModdingAPI::Exposed::SafeCrackingSaveDataProxy* m_SafeCrackingSaveDataProxy;
};

struct __SafeCracking_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SafeCracking_Il2CppClass {
  Il2CppClass_1 _1;
  __SafeCracking_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SafeCracking_Il2CppVtbl vtbl;
};

class SafeCracking {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C90948;
  static inline    __SafeCracking_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SafeCracking_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SafeCracking_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SafeCracking_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t m_Difficulty;
  bool m_Cracked;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_DialObjectPrefab;
  float touchRotationScale;
  float m_MinRotateDegreesPerSecond;
  float m_MaxRotateDegreesPerSecond;
  float m_RotateRampUpTime;
  int32_t m_NumTicksOnDial;
  bool m_RollCombination;
  ModdingAPI::Exposed::System::Int32_array* m_Combination;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_DialObject;
  System_String* m_DialSpinAudio;
  System_String* m_SafeClickAudio;
  System_String* m_TumblerFallAudio;
  System_String* m_TumblerResetAudio;
  bool m_DisableCollisionDuringAnimation;
  uint32_t m_dialSpinPlayingID;
  uint32_t m_safeClickPlayingID;
  int32_t m_NumTumblers;
  ModdingAPI::Exposed::Tumbler_array* m_Tumblers;
  float m_DegreesPerTick;
  int32_t m_CurrentTumblerIndex;
  bool m_ReturnToZeroRequired;
  float m_RotateStartTime;
  float m_LastDialEulerAnglesZ;
  ModdingAPI::Exposed::vp_Timer* m_PlayTumblerSoundTimer;
  ModdingAPI::Exposed::vp_Timer* m_ShowOpenButtonTimer;
  ModdingAPI::Exposed::HoverIconsToShow* m_HoverIcons;
  ModdingAPI::Exposed::OpenClose* m_OpenClose;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC2360))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC2640))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC2F40))(this);
  }
  bool IsOpen() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC33A0))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC3480))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC3570))(this, text);
  }
  float GetDialDelta() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC3640))(this);
  }
  void UpdateDial() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC3B30))(this);
  }
  void ResetTumblers() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC4200))(this);
  }
  void UnlockSafe() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC43F0))(this);
  }
  void UnlockCurrentTumbler() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC44C0))(this);
  }
  void HitTick(float deltaDegrees) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC4950))(this, deltaDegrees);
  }
  void ResetSafe() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC4D00))(this);
  }
  void PlayDialSpinClick() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC4D20))(this);
  }
  void PlayResetTumblersSound() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC4E90))(this);
  }
  void PlaySafeClickSound() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC4F80))(this);
  }
  void PlayTumblerFallSound() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC50F0))(this);
  }
  int32_t TickToDialNumber(float tick) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::SafeCracking*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC51E0))(this, tick);
  }
  void EnableSafeCrackingInterface() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC5290))(this);
  }
  void DisableSafeCrackingInterface() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC5720))(this);
  }
  void ExitInterfaceAndOpenSafe() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC5800))(this);
  }
  void OpenSafe(bool isImmediate) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC5AA0))(this, isImmediate);
  }
  void CloseSafe(bool isImmediate) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC5B90))(this, isImmediate);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SafeCracking*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC5C70))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::SafeCrackingSaveDataProxy*> m_SafeCrackingSaveDataProxy = __CppStaticProperty<ModdingAPI::Exposed::SafeCrackingSaveDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_SafeCrackingSaveDataProxy; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC5C90))();
  }
};
}