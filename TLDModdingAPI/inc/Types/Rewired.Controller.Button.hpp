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


namespace ModdingAPI::Exposed::Rewired::Controller {
struct __Button_Il2CppStaticFields {
};

struct __Button_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Button_Il2CppClass {
  Il2CppClass_1 _1;
  __Button_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Button_Il2CppVtbl vtbl;
};

class Button {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C68AA0;
  static inline    __Button_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Button_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Button_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Button_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t id;
  System_String* name;
  int32_t type;
  ModdingAPI::Exposed::Rewired::Controller::Element::DTtbdyDPlTQgvAGLmxORTfBbpFx* ukXlstERDQVnYLsPGAFrwavUqez;
  int32_t DjYbOzrYEbVKYdvVfTrIrltKGFu;
  ModdingAPI::Exposed::Rewired::Controller* eRiZsSFDNrFJxnreKaUhJBCLIKi;
  int32_t CtWHpgOaCVZYpcBzymhejPsalLW;
  bool tWPWeTZbCfIGkgNWagSmEfHFtBnD;
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo* yzLqnOQPdivohyLtuBBkifwKzGO;

  // Member methods:
  bool get_valuePrev() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80E2A0))(this);
  }
  bool get_value() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80E430))(this);
  }
  float get_pressure() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80E5C0))(this);
  }
  float get_pressurePrev() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80E750))(this);
  }
  bool get_isPressureSensitive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80E8E0))(this);
  }
  bool get_justPressed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80E9D0))(this);
  }
  bool get_justReleased() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80EBB0))(this);
  }
  bool get_justChangedState() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80EDC0))(this);
  }
  bool get_doublePressedAndHeld() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80EFE0))(this);
  }
  bool get_justDoublePressed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80F180))(this);
  }
  float get_timePressed() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80F2C0))(this);
  }
  float get_timeUnpressed() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80F470))(this);
  }
  float get_lastTimePressed() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80F620))(this);
  }
  float get_lastTimeUnpressed() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80F8E0))(this);
  }
  float get_lastTimeStateChanged() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80FA90))(this);
  }
  int32_t get_state() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80FC80))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::Controller* controller, int32_t elementIdentifierId, System_String* name, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo* buttonInfo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*, ModdingAPI::Exposed::Rewired::Controller*, int32_t, System_String*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80FDE0))(this, controller, elementIdentifierId, name, buttonInfo);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::Controller* controller, int32_t elementIdentifierId, System_String* name, bool isPressureSensitive, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo* buttonInfo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*, ModdingAPI::Exposed::Rewired::Controller*, int32_t, System_String*, bool, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80FFB0))(this, controller, elementIdentifierId, name, isPressureSensitive, buttonInfo);
  }
  bool DoublePressedAndHeld(float speed) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x810190))(this, speed);
  }
  bool JustDoublePressed(float speed) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x810350))(this, speed);
  }
  void buCXBvWCRWKasFmkSUeDBXrIMtL(int32_t , int32_t , ModdingAPI::Exposed::Rewired::ControllerDataUpdater* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*, int32_t, int32_t, ModdingAPI::Exposed::Rewired::ControllerDataUpdater*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x810530))(this, , , );
  }
  void sNscXJwpUrTgyvKupLrgcqAgHtJ(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8108A0))(this, );
  }
  void meaEAFLWnSVMPlXCBwmKQfUNADZ() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Button*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x810B60))(this);
  }
};
}