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
#include "ModdingAPI.Exposed.Steamworks.SteamAPICall_t.hpp"
#include "ModdingAPI::Exposed::Steamworks::CSteamID.hpp"


namespace ModdingAPI::Exposed::Steamworks {
struct __SteamGameServerStats_Il2CppStaticFields {
};

struct __SteamGameServerStats_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SteamGameServerStats_Il2CppClass {
  Il2CppClass_1 _1;
  __SteamGameServerStats_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SteamGameServerStats_Il2CppVtbl vtbl;
};

class SteamGameServerStats {
public:
  // Il2Cpp fields:
  __SteamGameServerStats_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t RequestUserStats(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26EBC90))(steamIDUser);
  }
  static inline bool GetUserStat(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser, System_String* pchName, int32_t pData) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26EBDD0))(steamIDUser, pchName, pData);
  }
  static inline bool GetUserStat(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser, System_String* pchName, float pData) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26EC0D0))(steamIDUser, pchName, pData);
  }
  static inline bool GetUserAchievement(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser, System_String* pchName, bool pbAchieved) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26EC3D0))(steamIDUser, pchName, pbAchieved);
  }
  static inline bool SetUserStat(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser, System_String* pchName, int32_t nData) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26EC6E0))(steamIDUser, pchName, nData);
  }
  static inline bool SetUserStat(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser, System_String* pchName, float fData) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26EC9E0))(steamIDUser, pchName, fData);
  }
  static inline bool UpdateUserAvgRateStat(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser, System_String* pchName, float flCountThisSession, double dSessionLength) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, System_String*, float, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26ECCE0))(steamIDUser, pchName, flCountThisSession, dSessionLength);
  }
  static inline bool SetUserAchievement(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser, System_String* pchName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26ECFF0))(steamIDUser, pchName);
  }
  static inline bool ClearUserAchievement(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser, System_String* pchName) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26ED2E0))(steamIDUser, pchName);
  }
  static inline ModdingAPI::Exposed::Steamworks::SteamAPICall_t StoreUserStats(ModdingAPI::Exposed::Steamworks::CSteamID steamIDUser) {
    return reinterpret_cast<ModdingAPI::Exposed::Steamworks::SteamAPICall_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::CSteamID)>(Helpers::Memory::GetInstance().MakeAbsolute(0x26ED5D0))(steamIDUser);
  }
};
}