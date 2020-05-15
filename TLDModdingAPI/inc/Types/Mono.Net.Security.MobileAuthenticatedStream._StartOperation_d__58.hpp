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
#include "ModdingAPI.Exposed.System.Runtime.CompilerServices.AsyncTaskMethodBuilder_TResult_.hpp"
#include "ModdingAPI.Exposed.System.Threading.CancellationToken.hpp"
#include "ModdingAPI.Exposed.System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter_TResult_.hpp"

namespace ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream {
struct ___StartOperation_d__58_Il2CppObject {
  int32_t __1__state;
  ModdingAPI::Exposed::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_TResult_ __t__builder;
  ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream* __4__this;
  int32_t type;
  ModdingAPI::Exposed::Mono::Net::Security::AsyncProtocolRequest* asyncRequest;
  ModdingAPI::Exposed::System::Threading::CancellationToken cancellationToken;
  ModdingAPI::Exposed::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter_TResult_ __u__1;
};
struct ___StartOperation_d__58_Il2CppStaticFields {
};

struct ___StartOperation_d__58_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_MoveNext;
  VirtualInvokeData _5_SetStateMachine;
};

struct ___StartOperation_d__58_Il2CppClass {
  Il2CppClass_1 _1;
  ___StartOperation_d__58_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  ___StartOperation_d__58_Il2CppVtbl vtbl;
};

class _StartOperation_d__58 {
  static constexpr uint64_t _rvaObjectInstance     = 0x3C90BC0;
  static inline    _StartOperation_d__58* _pStaticObjectInstance = nullptr;

public:
  // Singleton object getter:
  static inline _StartOperation_d__58* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (_StartOperation_d__58**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Member fields:
  int32_t __1__state;
  ModdingAPI::Exposed::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_TResult_ __t__builder;
  ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream* __4__this;
  int32_t type;
  ModdingAPI::Exposed::Mono::Net::Security::AsyncProtocolRequest* asyncRequest;
  ModdingAPI::Exposed::System::Threading::CancellationToken cancellationToken;
  ModdingAPI::Exposed::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter_TResult_ __u__1;

  // Member methods:
  void MoveNext() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream::_StartOperation_d__58*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2C740))(this);
  }
  void SetStateMachine(ModdingAPI::Exposed::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream::_StartOperation_d__58*, ModdingAPI::Exposed::System::Runtime::CompilerServices::IAsyncStateMachine*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2C750))(this, stateMachine);
  }

};
}