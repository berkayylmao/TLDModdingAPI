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
#include "ModdingAPI.Exposed.System.Guid.hpp"
#include "ModdingAPI.Exposed.System.Diagnostics.Tracing.SessionMask.hpp"


namespace ModdingAPI::Exposed::System::Diagnostics::Tracing {
struct __TplEtwProvider_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Diagnostics::Tracing::TplEtwProvider* Log;
};

struct __TplEtwProvider_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_OnEventCommand;
  VirtualInvokeData _6_Dispose;
};

struct __TplEtwProvider_Il2CppClass {
  Il2CppClass_1 _1;
  __TplEtwProvider_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TplEtwProvider_Il2CppVtbl vtbl;
};

class TplEtwProvider {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C254C0;
  static inline    __TplEtwProvider_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TplEtwProvider_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TplEtwProvider_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TplEtwProvider_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Byte_array* EventSource_providerMetadata;
  System_String* EventSource_m_name;
  int32_t m_id;
  ModdingAPI::Exposed::System::Guid EventSource_m_guid;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventMetadata_array* m_eventData;
  ModdingAPI::Exposed::System::Byte_array* EventSource_m_rawManifest;
  ModdingAPI::Exposed::System::EventHandler_TEventArgs_* EventSource_m_eventCommandExecuted;
  int32_t EventSource_m_config;
  bool EventSource_m_eventSourceEnabled;
  int32_t m_level;
  int64_t m_matchAnyKeyword;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::EventDispatcher* m_Dispatchers;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::OverideEventProvider* EventSource_m_provider;
  bool EventSource_m_completelyInited;
  ModdingAPI::Exposed::System::Exception* EventSource_m_constructionException;
  uint8_t EventSource_m_outOfBandMessageCount;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::EventCommandEventArgs* EventSource_m_deferredCommands;
  ModdingAPI::Exposed::System::String_array* EventSource_m_traits;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::SessionMask EventSource_m_curLiveSessions;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::EtwSession_array* EventSource_m_etwSessionIdMap;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* EventSource_m_legacySessions;
  int64_t m_keywordTriggers;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::SessionMask m_activityFilteringForETWEnabled;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::ActivityTracker* EventSource_m_activityTracker;

  // Member methods:
  bool get_Debug() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TplEtwProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64A8A0))(this);
  }
  void DebugFacilityMessage(System_String* Facility, System_String* Message) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TplEtwProvider*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64A8D0))(this, Facility, Message);
  }
  void DebugFacilityMessage1(System_String* Facility, System_String* Message, System_String* Arg) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TplEtwProvider*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64A900))(this, Facility, Message, Arg);
  }
  void SetActivityId(ModdingAPI::Exposed::System::Guid Id) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TplEtwProvider*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64A930))(this, Id);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TplEtwProvider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64AA60))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Diagnostics::Tracing::TplEtwProvider*> Log = __CppStaticProperty<ModdingAPI::Exposed::System::Diagnostics::Tracing::TplEtwProvider*>(
   []() { return &GetStaticClassInstance()->pStaticFields->Log; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x64AB00))();
  }
};
}