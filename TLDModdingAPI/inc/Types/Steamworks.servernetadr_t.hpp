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
#include "ModdingAPI.Exposed.Steamworks.servernetadr_t.hpp"

namespace ModdingAPI::Exposed::Steamworks {
struct __servernetadr_t_Il2CppObject {
  uint16_t m_usConnectionPort;
  uint16_t m_usQueryPort;
  uint32_t m_unIP;
};
struct __servernetadr_t_Il2CppStaticFields {
};

struct __servernetadr_t_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __servernetadr_t_Il2CppClass {
  Il2CppClass_1 _1;
  __servernetadr_t_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __servernetadr_t_Il2CppVtbl vtbl;
};

class servernetadr_t {
  static constexpr uint64_t _rvaClassInstance     = 0x3C5E4E0;
  static inline    __servernetadr_t_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Static class getter:
  static inline __servernetadr_t_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__servernetadr_t_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  uint16_t m_usConnectionPort;
  uint16_t m_usQueryPort;
  uint32_t m_unIP;

  // Member methods:
  void Init(uint32_t ip, uint16_t usQueryPort, uint16_t usConnectionPort) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*, uint32_t, uint16_t, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0720))(this, ip, usQueryPort, usConnectionPort);
  }
  uint16_t GetQueryPort() {
    return reinterpret_cast<uint16_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3520))(this);
  }
  void SetQueryPort(uint16_t usPort) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3530))(this, usPort);
  }
  uint16_t GetConnectionPort() {
    return reinterpret_cast<uint16_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3500))(this);
  }
  void SetConnectionPort(uint16_t usPort) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3510))(this, usPort);
  }
  uint32_t GetIP() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5A20))(this);
  }
  void SetIP(uint32_t unIP) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE720))(this, unIP);
  }
  System_String* GetConnectionAddressString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0730))(this);
  }
  System_String* GetQueryAddressString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0740))(this);
  }
  bool Equals(Il2CppObject* other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0750))(this, other);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0850))(this);
  }
  bool Equals(ModdingAPI::Exposed::Steamworks::servernetadr_t other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*, ModdingAPI::Exposed::Steamworks::servernetadr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0860))(this, other);
  }
  int32_t CompareTo(ModdingAPI::Exposed::Steamworks::servernetadr_t other) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::servernetadr_t*, ModdingAPI::Exposed::Steamworks::servernetadr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0890))(this, other);
  }

  // Static methods:
  static inline System_String* ToString(uint32_t unIP, uint16_t usPort) {
    return reinterpret_cast<System_String*(__fastcall*)(uint32_t, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EA02F0))(unIP, usPort);
  }

};
}