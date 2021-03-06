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
#include "ModdingAPI.Exposed.System.TimeSpan.hpp"
#include "ModdingAPI.Exposed.System.DateTime.hpp"


namespace ModdingAPI::Exposed {
struct __DateGate_Il2CppStaticFields {
  ModdingAPI::Exposed::System::TimeSpan m_PDTToUTC;
};

struct __DateGate_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __DateGate_Il2CppClass {
  Il2CppClass_1 _1;
  __DateGate_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DateGate_Il2CppVtbl vtbl;
};

class DateGate {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5E6E8;
  static inline    __DateGate_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __DateGate_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DateGate_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __DateGate_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t m_StartYear;
  int32_t m_StartMonth;
  int32_t m_StartDay;
  int32_t m_StartHour;
  int32_t m_StartMinute;
  int32_t m_EndYear;
  int32_t m_EndMonth;
  int32_t m_EndDay;
  int32_t m_EndHour;
  int32_t m_EndMinute;
  int32_t m_AssociatedTODState;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_GateObject;
  int32_t m_MinDay;
  int32_t m_MaxDay;
  ModdingAPI::Exposed::System::DateTime m_MinTime;
  ModdingAPI::Exposed::System::DateTime m_MaxTime;
  bool m_Active;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DateGate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F920B0))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DateGate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F92300))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DateGate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F92410))(this);
  }
  bool PassesDateGate() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DateGate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F925D0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DateGate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::TimeSpan> m_PDTToUTC = __CppStaticProperty<ModdingAPI::Exposed::System::TimeSpan>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_PDTToUTC; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F926A0))();
  }
};
}