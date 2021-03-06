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
#include "ModdingAPI.Exposed.Steamworks.HHTMLBrowser.hpp"

namespace ModdingAPI::Exposed::Steamworks {
struct __HHTMLBrowser_Il2CppObject {
  uint32_t m_HHTMLBrowser;
};
struct __HHTMLBrowser_Il2CppStaticFields {
  ModdingAPI::Exposed::Steamworks::HHTMLBrowser Invalid;
};

struct __HHTMLBrowser_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Equals;
  VirtualInvokeData _5_CompareTo;
};

struct __HHTMLBrowser_Il2CppClass {
  Il2CppClass_1 _1;
  __HHTMLBrowser_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __HHTMLBrowser_Il2CppVtbl vtbl;
};

class HHTMLBrowser {
  static constexpr uint64_t _rvaClassInstance     = 0x3C4E6F0;
  static inline    __HHTMLBrowser_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Static class getter:
  static inline __HHTMLBrowser_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__HHTMLBrowser_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  uint32_t m_HHTMLBrowser;

  // Member methods:
  void ::ctor(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Steamworks::HHTMLBrowser*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3020))(this, value);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Steamworks::HHTMLBrowser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x40770))(this);
  }
  bool Equals(Il2CppObject* other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HHTMLBrowser*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DD070))(this, other);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::HHTMLBrowser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3030))(this);
  }
  bool Equals(ModdingAPI::Exposed::Steamworks::HHTMLBrowser other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Steamworks::HHTMLBrowser*, ModdingAPI::Exposed::Steamworks::HHTMLBrowser)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3050))(this, other);
  }
  int32_t CompareTo(ModdingAPI::Exposed::Steamworks::HHTMLBrowser other) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Steamworks::HHTMLBrowser*, ModdingAPI::Exposed::Steamworks::HHTMLBrowser)>(Helpers::Memory::GetInstance().MakeAbsolute(0x40740))(this, other);
  }

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C77E00))();
  }

};
}