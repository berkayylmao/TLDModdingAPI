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
struct __StatEventPlugin_Il2CppStaticFields {
};

struct __StatEventPlugin_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __StatEventPlugin_Il2CppClass {
  Il2CppClass_1 _1;
  __StatEventPlugin_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StatEventPlugin_Il2CppVtbl vtbl;
};

class StatEventPlugin {
public:
  // Il2Cpp fields:
  __StatEventPlugin_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::StatEventPlugin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static methods:
  static inline int32_t StatisticEvent_EventType(intptr_t self) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8C120))(self);
  }
  static inline int32_t StatisticEvent_ErrorCode(intptr_t self) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8C1C0))(self);
  }
  static inline intptr_t StatisticEvent_ErrorMessage(intptr_t self) {
    return reinterpret_cast<intptr_t(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8C260))(self);
  }
  static inline void StatisticEvent_Dispose(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8C300))(self);
  }
  static inline int32_t StatisticEvent_User(intptr_t self) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8C3A0))(self);
  }
  static inline intptr_t StatisticEvent_EventArgs_AsLeaderboardResultEventArgs(intptr_t self) {
    return reinterpret_cast<intptr_t(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F8C440))(self);
  }
};
}