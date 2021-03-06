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
#include "ModdingAPI.Exposed.FnmztnLddJqCqxGCEqqkXvzeimS.hpp"

namespace ModdingAPI::Exposed::Rewired::Utils::Classes::Data {
struct __TypeWrapper_Il2CppObject {
  int32_t type;
  ModdingAPI::Exposed::FnmztnLddJqCqxGCEqqkXvzeimS QQHWnVPbxEeRrnYsSaOsnHZdsQP;
  System_String* igiGRsgvadvHWbtevbnOnswfYzN;
  Il2CppObject* PBPhgpdkHZJMqUSXXlqbQpFDYoLG;
};
struct __TypeWrapper_Il2CppStaticFields {
};

struct __TypeWrapper_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TypeWrapper_Il2CppClass {
  Il2CppClass_1 _1;
  __TypeWrapper_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TypeWrapper_Il2CppVtbl vtbl;
};

class TypeWrapper {
  static constexpr uint64_t _rvaClassInstance     = 0x3C8C0C8;
  static inline    __TypeWrapper_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Static class getter:
  static inline __TypeWrapper_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TypeWrapper_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  int32_t type;
  ModdingAPI::Exposed::FnmztnLddJqCqxGCEqqkXvzeimS QQHWnVPbxEeRrnYsSaOsnHZdsQP;
  System_String* igiGRsgvadvHWbtevbnOnswfYzN;
  Il2CppObject* PBPhgpdkHZJMqUSXXlqbQpFDYoLG;

  // Member methods:
  void ::ctor(int32_t type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319B0))(this, type);
  }
  void ::ctor(uint8_t item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319D0))(this, item);
  }
  void ::ctor(char item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, char)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319F0))(this, item);
  }
  void ::ctor(wchar_t item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31A10))(this, item);
  }
  void ::ctor(int16_t item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, int16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31A30))(this, item);
  }
  void ::ctor(uint16_t item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31A50))(this, item);
  }
  void ::ctor(int32_t item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31A70))(this, item);
  }
  void ::ctor(uint32_t item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31A90))(this, item);
  }
  void ::ctor(int64_t item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31AB0))(this, item);
  }
  void ::ctor(uint64_t item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31AD0))(this, item);
  }
  void ::ctor(float item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31AF0))(this, item);
  }
  void ::ctor(double item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31B10))(this, item);
  }
  void ::ctor(bool item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31B30))(this, item);
  }
  void ::ctor(System_String* item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31B50))(this, item);
  }
  void ::ctor(Il2CppObject* item) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31B70))(this, item);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::TypeWrapper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31B90))(this);
  }

};
}