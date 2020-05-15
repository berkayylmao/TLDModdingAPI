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
struct __InteractionOverride_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_InteractionOverrides;
};

struct __InteractionOverride_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __InteractionOverride_Il2CppClass {
  Il2CppClass_1 _1;
  __InteractionOverride_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __InteractionOverride_Il2CppVtbl vtbl;
};

class InteractionOverride {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8A570;
  static inline    __InteractionOverride_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __InteractionOverride_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__InteractionOverride_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __InteractionOverride_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedHoverText;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedMessage;
  System_String* m_SoundEvent;
  bool m_Active;
  ModdingAPI::Exposed::Keypad* m_MatchKeypadLockState;
  System_String* m_Guid;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::InteractionOverride*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19CB940))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::InteractionOverride*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19CBA80))(this, text);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::InteractionOverride*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19CBB50))(this);
  }
  bool IsActive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::InteractionOverride*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19CC2E0))(this);
  }
  bool ProcessInteraction() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::InteractionOverride*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19CC3B0))(this);
  }
  System_String* GetInteractionText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::InteractionOverride*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19CC5E0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::InteractionOverride*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_InteractionOverrides = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_InteractionOverrides; }
  );

  // Static methods:
  static inline System_String* SerializeAll() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x19CBCD0))();
  }
  static inline void DeserializeAll(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19CC050))(text);
  }
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x19CC200))();
  }
  static inline ModdingAPI::Exposed::InteractionOverride* FindInteractionOverrideByGuid(System_String* guid) {
    return reinterpret_cast<ModdingAPI::Exposed::InteractionOverride*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19CC4F0))(guid);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x19CC6B0))();
  }
};
}