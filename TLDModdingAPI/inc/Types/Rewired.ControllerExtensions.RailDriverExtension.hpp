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


namespace ModdingAPI::Exposed::Rewired::ControllerExtensions {
struct __RailDriverExtension_Il2CppStaticFields {
};

struct __RailDriverExtension_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Clear;
  VirtualInvokeData _5_SourceUpdated;
  VirtualInvokeData _6_UpdateData;
  VirtualInvokeData _7_Clone;
};

struct __RailDriverExtension_Il2CppClass {
  Il2CppClass_1 _1;
  __RailDriverExtension_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RailDriverExtension_Il2CppVtbl vtbl;
};

class RailDriverExtension {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C75178;
  static inline    __RailDriverExtension_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RailDriverExtension_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RailDriverExtension_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RailDriverExtension_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Rewired::Controller* Extension_eRiZsSFDNrFJxnreKaUhJBCLIKi;
  ModdingAPI::Exposed::Rewired::Interfaces::IControllerExtensionSource* Extension_ovJjdavCVCSQaRYvkKYaPvETjMV;
  int32_t _reInputId;
  ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension::hPOctYplUWRoqPVAIWRrsYRagHK* fGhzNzNjvtDWYoPIgmXBNXrBWIC;

  // Member methods:
  ModdingAPI::Exposed::Rewired::Joystick* get_joystick() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Joystick*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x81C980))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::Drivers::Interfaces::IDriver_RailDriver* driver) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension*, ModdingAPI::Exposed::Rewired::Drivers::Interfaces::IDriver_RailDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x81CA90))(this, driver);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension* source) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension*, ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x813600))(this, source);
  }
  bool get_speakerEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x81CBE0))(this);
  }
  void set_speakerEnabled(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x81CD00))(this, value);
  }
  void SetLEDDisplay(int32_t digitIndex, uint8_t digitBitValues) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension*, int32_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x81CF00))(this, digitIndex, digitBitValues);
  }
  void SetLEDDisplay(uint8_t digit1BitValues, uint8_t digit2BitValues, uint8_t digit3BitValues) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension*, uint8_t, uint8_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x81D110))(this, digit1BitValues, digit2BitValues, digit3BitValues);
  }
  void UpdateData(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, );
  }
  void SourceUpdated(ModdingAPI::Exposed::Rewired::Interfaces::IControllerExtensionSource* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension*, ModdingAPI::Exposed::Rewired::Interfaces::IControllerExtensionSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x81D2F0))(this, );
  }
  ModdingAPI::Exposed::Rewired::Controller::Extension* Clone() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Controller::Extension*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerExtensions::RailDriverExtension*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x81D3C0))(this);
  }
};
}