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
#include "ModdingAPI.Exposed.System.Runtime.InteropServices.GCHandle.hpp"
#include "ModdingAPI.Exposed.Steamworks.HServerListRequest.hpp"


namespace ModdingAPI::Exposed::Steamworks {
struct __ISteamMatchmakingServerListResponse_Il2CppStaticFields {
};

struct __ISteamMatchmakingServerListResponse_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ISteamMatchmakingServerListResponse_Il2CppClass {
  Il2CppClass_1 _1;
  __ISteamMatchmakingServerListResponse_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ISteamMatchmakingServerListResponse_Il2CppVtbl vtbl;
};

class ISteamMatchmakingServerListResponse {
public:
  // Il2Cpp fields:
  __ISteamMatchmakingServerListResponse_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse::VTable* m_VTable;
  intptr_t m_pVTable;
  ModdingAPI::Exposed::System::Runtime::InteropServices::GCHandle m_pGCHandle;
  ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse::ServerResponded* m_ServerResponded;
  ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse::ServerFailedToRespond* m_ServerFailedToRespond;
  ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse::RefreshComplete* m_RefreshComplete;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse::ServerResponded* onServerResponded, ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse::ServerFailedToRespond* onServerFailedToRespond, ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse::RefreshComplete* onRefreshComplete) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse*, ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse::ServerResponded*, ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse::ServerFailedToRespond*, ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse::RefreshComplete*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23655E0))(this, onServerResponded, onServerFailedToRespond, onRefreshComplete);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2365BA0))(this);
  }
  void InternalOnServerResponded(intptr_t thisptr, ModdingAPI::Exposed::Steamworks::HServerListRequest hRequest, int32_t iServer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse*, intptr_t, ModdingAPI::Exposed::Steamworks::HServerListRequest, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2365CB0))(this, thisptr, hRequest, iServer);
  }
  void InternalOnServerFailedToRespond(intptr_t thisptr, ModdingAPI::Exposed::Steamworks::HServerListRequest hRequest, int32_t iServer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse*, intptr_t, ModdingAPI::Exposed::Steamworks::HServerListRequest, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2365CE0))(this, thisptr, hRequest, iServer);
  }
  void InternalOnRefreshComplete(intptr_t thisptr, ModdingAPI::Exposed::Steamworks::HServerListRequest hRequest, int32_t response) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::ISteamMatchmakingServerListResponse*, intptr_t, ModdingAPI::Exposed::Steamworks::HServerListRequest, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2365D10))(this, thisptr, hRequest, response);
  }
};
}