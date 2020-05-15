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


namespace ModdingAPI::Exposed::Rewired {
struct __InputCategory_Il2CppStaticFields {
};

struct __InputCategory_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __InputCategory_Il2CppClass {
  Il2CppClass_1 _1;
  __InputCategory_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __InputCategory_Il2CppVtbl vtbl;
};

class InputCategory {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C76AB0;
  static inline    __InputCategory_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __InputCategory_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__InputCategory_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __InputCategory_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* _name;
  System_String* _descriptiveName;
  System_String* _tag;
  int32_t _id;
  bool _userAssignable;

  // Member methods:
  System_String* get_name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputCategory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void set_name(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputCategory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, value);
  }
  System_String* get_descriptiveName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputCategory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void set_descriptiveName(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputCategory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, value);
  }
  System_String* get_tag() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputCategory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  void set_tag(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputCategory*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310F00))(this, value);
  }
  int32_t get_id() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::InputCategory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F810))(this);
  }
  void set_id(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputCategory*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31DD50))(this, value);
  }
  bool get_userAssignable() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::InputCategory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5718B0))(this);
  }
  void set_userAssignable(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputCategory*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5718C0))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputCategory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::InputCategory* source) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputCategory*, ModdingAPI::Exposed::Rewired::InputCategory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5718D0))(this, source);
  }
};
}