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
#include "ModdingAPI.Exposed.System.TimeSpan.hpp"


namespace ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime {
struct __Lease_Il2CppStaticFields {
};

struct __Lease_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CreateObjRef;
  VirtualInvokeData _5_InitializeLifetimeService;
  VirtualInvokeData _6_get_CurrentLeaseTime;
  VirtualInvokeData _7_get_CurrentState;
  VirtualInvokeData _8_set_InitialLeaseTime;
  VirtualInvokeData _9_get_RenewOnCallTime;
  VirtualInvokeData _10_set_RenewOnCallTime;
  VirtualInvokeData _11_set_SponsorshipTimeout;
  VirtualInvokeData _12_Renew;
  VirtualInvokeData _13_Unregister;
};

struct __Lease_Il2CppClass {
  Il2CppClass_1 _1;
  __Lease_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Lease_Il2CppVtbl vtbl;
};

class Lease {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C56E50;
  static inline    __Lease_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Lease_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Lease_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Lease_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  Il2CppObject* MarshalByRefObject__identity;
  ModdingAPI::Exposed::System::DateTime _leaseExpireTime;
  int32_t _currentState;
  ModdingAPI::Exposed::System::TimeSpan _initialLeaseTime;
  ModdingAPI::Exposed::System::TimeSpan _renewOnCallTime;
  ModdingAPI::Exposed::System::TimeSpan _sponsorshipTimeout;
  ModdingAPI::Exposed::System::Collections::ArrayList* _sponsors;
  ModdingAPI::Exposed::System::Collections::Queue* _renewingSponsors;
  ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate* _renewalDelegate;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF5A980))(this);
  }
  ModdingAPI::Exposed::System::TimeSpan get_CurrentLeaseTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::TimeSpan(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF5AC10))(this);
  }
  int32_t get_CurrentState() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x37AAE0))(this);
  }
  void Activate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF5ACC0))(this);
  }
  void set_InitialLeaseTime(ModdingAPI::Exposed::System::TimeSpan value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF5ACD0))(this, value);
  }
  ModdingAPI::Exposed::System::TimeSpan get_RenewOnCallTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::TimeSpan(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  void set_RenewOnCallTime(ModdingAPI::Exposed::System::TimeSpan value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF5AE40))(this, value);
  }
  void set_SponsorshipTimeout(ModdingAPI::Exposed::System::TimeSpan value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF5AF30))(this, value);
  }
  ModdingAPI::Exposed::System::TimeSpan Renew(ModdingAPI::Exposed::System::TimeSpan renewalTime) {
    return reinterpret_cast<ModdingAPI::Exposed::System::TimeSpan(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF5B020))(this, renewalTime);
  }
  void Unregister(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::ISponsor* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*, ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::ISponsor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF5B100))(this, obj);
  }
  void UpdateState() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF5B270))(this);
  }
  void CheckNextSponsor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF5B4E0))(this);
  }
  void ProcessSponsorResponse(Il2CppObject* state, bool timedOut) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Lifetime::Lease*, Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF5B810))(this, state, timedOut);
  }
};
}