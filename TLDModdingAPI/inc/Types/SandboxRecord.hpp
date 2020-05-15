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
#include "ModdingAPI.Exposed.System.DateTime.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"


namespace ModdingAPI::Exposed {
struct __SandboxRecord_Il2CppStaticFields {
};

struct __SandboxRecord_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SandboxRecord_Il2CppClass {
  Il2CppClass_1 _1;
  __SandboxRecord_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SandboxRecord_Il2CppVtbl vtbl;
};

class SandboxRecord {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2D938;
  static inline    __SandboxRecord_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SandboxRecord_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SandboxRecord_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SandboxRecord_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* m_SandboxName;
  float m_ElapsedHours;
  ModdingAPI::Exposed::System::DateTime m_EndDate;
  int32_t m_StartRegion;
  System_String* m_EndRegion;
  int32_t m_ExperienceModeType;
  int32_t m_VoicePersona;
  System_String* m_CauseOfDeathLocId;
  System_String* m_GeneralNotes;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_LogDayInfoList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_CollectibleList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_CollectibleNotesList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_CollectibleCairnInfoList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_CollectibleAuroraScreenInfoList;
  ModdingAPI::Exposed::StatContainer* m_Stats;

  // Member methods:
  System_String* GetSurvivalRecordSummaryText(ModdingAPI::Exposed::UnityEngine::Color boldColor) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::SandboxRecord*, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC66B0))(this, boldColor);
  }
  System_String* GetStartRegionSpriteName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::SandboxRecord*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC6A40))(this);
  }
  System_String* GetSurvivorSpriteName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::SandboxRecord*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC6B30))(this);
  }
  System_String* GetExperienceModeSpriteName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::SandboxRecord*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC6BC0))(this);
  }
  System_String* GetEndDate() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::SandboxRecord*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC6C90))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SandboxRecord*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::SandboxRecord* CreateFromSandbox(ModdingAPI::Exposed::System::Collections::Generic::List_T_* collectibleList) {
    return reinterpret_cast<ModdingAPI::Exposed::SandboxRecord*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC5E90))(collectibleList);
  }
  static inline void StoreNoteCollectibles(ModdingAPI::Exposed::SandboxRecord* record) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SandboxRecord*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC6D10))(record);
  }
  static inline void StoreCairnCollectibles(ModdingAPI::Exposed::SandboxRecord* record) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SandboxRecord*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC6FD0))(record);
  }
  static inline void StoreAuroraScreenCollectibles(ModdingAPI::Exposed::SandboxRecord* record) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SandboxRecord*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AC7560))(record);
  }
};
}