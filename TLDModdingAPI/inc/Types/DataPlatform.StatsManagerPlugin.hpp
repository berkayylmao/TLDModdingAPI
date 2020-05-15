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


namespace ModdingAPI::Exposed::DataPlatform {
struct __StatsManagerPlugin_Il2CppStaticFields {
};

struct __StatsManagerPlugin_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __StatsManagerPlugin_Il2CppClass {
  Il2CppClass_1 _1;
  __StatsManagerPlugin_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StatsManagerPlugin_Il2CppVtbl vtbl;
};

class StatsManagerPlugin {
public:
  // Il2Cpp fields:
  __StatsManagerPlugin_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::StatsManagerPlugin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static methods:
  static inline void StatsManager_AddLocalUser(int32_t userId) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8EC30))(userId);
  }
  static inline void StatsManager_RemoveLocalUser(int32_t userId) {
    reinterpret_cast<void(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8ECD0))(userId);
  }
  static inline void StatsManager_SetStatAsInteger(int32_t userId, System_String* statName, int64_t statValue) {
    reinterpret_cast<void(__fastcall*)(int32_t, System_String*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8ED70))(userId, statName, statValue);
  }
  static inline void StatsManager_SetStatAsNumber(int32_t userId, System_String* statName, double statValue) {
    reinterpret_cast<void(__fastcall*)(int32_t, System_String*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8EE30))(userId, statName, statValue);
  }
  static inline void StatsManager_SetStatAsString(int32_t userId, System_String* statName, System_String* statValue) {
    reinterpret_cast<void(__fastcall*)(int32_t, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8EEF0))(userId, statName, statValue);
  }
  static inline void StatsManager_RequestFlushToService(int32_t userId, bool isHighPriority) {
    reinterpret_cast<void(__fastcall*)(int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8F0A0))(userId, isHighPriority);
  }
  static inline intptr_t StatsManager_GetStatNames(int32_t userId) {
    return reinterpret_cast<intptr_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8FA80))(userId);
  }
  static inline void StatsManager_GetStatNames_Dispose(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8FB20))(self);
  }
  static inline uint32_t StatsManager_GetStatNames_Length(intptr_t self) {
    return reinterpret_cast<uint32_t(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8FBC0))(self);
  }
  static inline intptr_t StatsManager_GetStatNames_GetAt(intptr_t self, uint32_t idx) {
    return reinterpret_cast<intptr_t(__fastcall*)(intptr_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8FC60))(self, idx);
  }
  static inline intptr_t StatsManager_GetStat(int32_t userId, System_String* statName) {
    return reinterpret_cast<intptr_t(__fastcall*)(int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8FD10))(userId, statName);
  }
  static inline void StatsManager_DeleteStat(int32_t userId, System_String* statName) {
    reinterpret_cast<void(__fastcall*)(int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8F5C0))(userId, statName);
  }
  static inline void StatsManager_GetLeaderboard(int32_t userId, System_String* statName, intptr_t query) {
    reinterpret_cast<void(__fastcall*)(int32_t, System_String*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8FDC0))(userId, statName, query);
  }
  static inline void StatsManager_GetSocialLeaderboard(int32_t userId, System_String* statName, System_String* socialGroup, intptr_t query) {
    reinterpret_cast<void(__fastcall*)(int32_t, System_String*, System_String*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8FE80))(userId, statName, socialGroup, query);
  }
  static inline intptr_t StatsManager_DoWork() {
    return reinterpret_cast<intptr_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8FF50))();
  }
  static inline void StatsManager_DoWork_Dispose(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8FFE0))(self);
  }
  static inline uint32_t StatsManager_DoWork_Length(intptr_t self) {
    return reinterpret_cast<uint32_t(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F90080))(self);
  }
  static inline intptr_t StatsManager_DoWork_GetAt(intptr_t self, uint32_t idx) {
    return reinterpret_cast<intptr_t(__fastcall*)(intptr_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F90120))(self, idx);
  }
};
}