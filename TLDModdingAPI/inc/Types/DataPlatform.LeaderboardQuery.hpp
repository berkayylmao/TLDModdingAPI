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
struct __LeaderboardQuery_Il2CppStaticFields {
};

struct __LeaderboardQuery_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_SetNativePtr;
  VirtualInvokeData _6_GetNativePtr;
};

struct __LeaderboardQuery_Il2CppClass {
  Il2CppClass_1 _1;
  __LeaderboardQuery_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __LeaderboardQuery_Il2CppVtbl vtbl;
};

class LeaderboardQuery {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C40228;
  static inline    __LeaderboardQuery_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __LeaderboardQuery_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__LeaderboardQuery_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __LeaderboardQuery_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t m_Self;
  System_String* m_StatName;
  System_String* m_SocialGroup;

  // Member methods:
  bool get_SkipResultToMe() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F84EC0))(this);
  }
  void set_SkipResultToMe(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F84F60))(this, value);
  }
  uint32_t get_SkipResultToRank() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F85010))(this);
  }
  void set_SkipResultToRank(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F850B0))(this, value);
  }
  uint32_t get_MaxItems() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F85160))(this);
  }
  void set_MaxItems(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F85200))(this, value);
  }
  int32_t get_Order() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F852B0))(this);
  }
  void set_Order(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F85350))(this, value);
  }
  System_String* get_StatName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F85400))(this);
  }
  System_String* get_SocialGroup() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F85570))(this);
  }
  bool get_HasNext() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F856E0))(this);
  }
  void ::ctor(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, self);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F85780))(this);
  }
  void SetNativePtr(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, self);
  }
  intptr_t GetNativePtr() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F858B0))(this);
  }
  intptr_t _get_StatName_b__13_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F859D0))(this);
  }
  intptr_t _get_SocialGroup_b__15_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::DataPlatform::LeaderboardQuery*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F85A70))(this);
  }
};
}