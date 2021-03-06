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
struct __ControllerMapSaveData_Il2CppStaticFields {
};

struct __ControllerMapSaveData_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ControllerMapSaveData_Il2CppClass {
  Il2CppClass_1 _1;
  __ControllerMapSaveData_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ControllerMapSaveData_Il2CppVtbl vtbl;
};

class ControllerMapSaveData {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C7C0A8;
  static inline    ControllerMapSaveData* _pStaticObjectInstance = nullptr;

public:
// Singleton object getter:
  static inline ControllerMapSaveData* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (ControllerMapSaveData**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Il2Cpp fields:
  __ControllerMapSaveData_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Rewired::Controller* _controller;
  ModdingAPI::Exposed::Rewired::ControllerMap* _map;
  int32_t CtWHpgOaCVZYpcBzymhejPsalLW;

  // Member methods:
  ModdingAPI::Exposed::Rewired::ControllerMap* get_map() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerMap*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE195C0))(this);
  }
  int32_t get_categoryId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE196B0))(this);
  }
  int32_t get_layoutId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE197B0))(this);
  }
  ModdingAPI::Exposed::System::Type* get_mapType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE198E0))(this);
  }
  System_String* get_mapTypeString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE199E0))(this);
  }
  ModdingAPI::Exposed::Rewired::Controller* get_controller() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Controller*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE19B90))(this);
  }
  int32_t get_controllerType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE19C80))(this);
  }
  System_String* get_controllerHardwareIdentifier() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE19D80))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::Controller* controller, ModdingAPI::Exposed::Rewired::ControllerMap* map) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapSaveData*, ModdingAPI::Exposed::Rewired::Controller*, ModdingAPI::Exposed::Rewired::ControllerMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE19E90))(this, controller, map);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::Rewired::ControllerMapSaveData* vDCnOMtiDgvdBHibTeByEtCPBLh(ModdingAPI::Exposed::Rewired::Controller* , ModdingAPI::Exposed::Rewired::ControllerMap* ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerMapSaveData*(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller*, ModdingAPI::Exposed::Rewired::ControllerMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE19F50))(, );
  }
};
}