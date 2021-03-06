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


namespace ModdingAPI::Exposed::Rewired::ComponentControls::Data {
struct __CustomControllerSelector_Il2CppStaticFields {
};

struct __CustomControllerSelector_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CustomControllerSelector_Il2CppClass {
  Il2CppClass_1 _1;
  __CustomControllerSelector_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CustomControllerSelector_Il2CppVtbl vtbl;
};

class CustomControllerSelector {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C76800;
  static inline    __CustomControllerSelector_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CustomControllerSelector_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CustomControllerSelector_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CustomControllerSelector_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool _findUsingSourceId;
  int32_t _sourceId;
  bool _findUsingTag;
  System_String* _tag;
  bool _findInPlayer;
  int32_t _playerId;

  // Member methods:
  bool get_findUsingSourceId() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33C2C0))(this);
  }
  void set_findUsingSourceId(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA00580))(this, value);
  }
  int32_t get_sourceId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311080))(this);
  }
  void set_sourceId(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA005B0))(this, value);
  }
  bool get_findUsingTag() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x318510))(this);
  }
  void set_findUsingTag(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA005D0))(this, value);
  }
  System_String* get_tag() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  void set_tag(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA005E0))(this, value);
  }
  bool get_findInPlayer() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3F0))(this);
  }
  void set_findInPlayer(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA00660))(this, value);
  }
  int32_t get_playerId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F820))(this);
  }
  void set_playerId(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA006A0))(this, value);
  }
  ModdingAPI::Exposed::Rewired::CustomController* GetCustomController() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::CustomController*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA006E0))(this);
  }
  void PvdPUQDXNMdWgjgPyaHetBdjfAt() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerSelector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EB2D0))(this);
  }
};
}