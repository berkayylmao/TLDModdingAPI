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


namespace ModdingAPI::Exposed::System::Net::WebConnectionGroup {
struct __ConnectionState_Il2CppStaticFields {
};

struct __ConnectionState_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_Group;
  VirtualInvokeData _5_TrySetBusy;
  VirtualInvokeData _6_SetIdle;
  VirtualInvokeData _7_get_ServicePoint;
  VirtualInvokeData _8_get_Busy;
  VirtualInvokeData _9_get_IdleSince;
};

struct __ConnectionState_Il2CppClass {
  Il2CppClass_1 _1;
  __ConnectionState_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ConnectionState_Il2CppVtbl vtbl;
};

class ConnectionState {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C34B50;
  static inline    __ConnectionState_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ConnectionState_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ConnectionState_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ConnectionState_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Net::WebConnection* _Connection_k__BackingField;
  ModdingAPI::Exposed::System::Net::WebConnectionGroup* _Group_k__BackingField;
  bool busy;
  ModdingAPI::Exposed::System::DateTime idleSince;

  // Member methods:
  ModdingAPI::Exposed::System::Net::WebConnection* get_Connection() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Net::WebConnection*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup::ConnectionState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void set_Connection(ModdingAPI::Exposed::System::Net::WebConnection* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup::ConnectionState*, ModdingAPI::Exposed::System::Net::WebConnection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, value);
  }
  ModdingAPI::Exposed::System::Net::WebConnectionGroup* get_Group() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Net::WebConnectionGroup*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup::ConnectionState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void set_Group(ModdingAPI::Exposed::System::Net::WebConnectionGroup* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup::ConnectionState*, ModdingAPI::Exposed::System::Net::WebConnectionGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, value);
  }
  ModdingAPI::Exposed::System::Net::ServicePoint* get_ServicePoint() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Net::ServicePoint*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup::ConnectionState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8C7AA0))(this);
  }
  bool get_Busy() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup::ConnectionState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x46FCC0))(this);
  }
  ModdingAPI::Exposed::System::DateTime get_IdleSince() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup::ConnectionState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  bool TrySetBusy() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup::ConnectionState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFF830))(this);
  }
  void SetIdle() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup::ConnectionState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFFA20))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Net::WebConnectionGroup* group) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup::ConnectionState*, ModdingAPI::Exposed::System::Net::WebConnectionGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFFB90))(this, group);
  }
};
}