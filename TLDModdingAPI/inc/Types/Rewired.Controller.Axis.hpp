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
struct __Axis_Il2CppStaticFields {
};

struct __Axis_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Axis_Il2CppClass {
  Il2CppClass_1 _1;
  __Axis_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Axis_Il2CppVtbl vtbl;
};

class Axis {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C87018;
  static inline    __Axis_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Axis_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Axis_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Axis_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t id;
  System_String* name;
  int32_t type;
  ModdingAPI::Exposed::Rewired::Controller::Element::DTtbdyDPlTQgvAGLmxORTfBbpFx* ukXlstERDQVnYLsPGAFrwavUqez;
  int32_t DjYbOzrYEbVKYdvVfTrIrltKGFu;
  ModdingAPI::Exposed::Rewired::Controller* eRiZsSFDNrFJxnreKaUhJBCLIKi;
  int32_t CtWHpgOaCVZYpcBzymhejPsalLW;
  int32_t blyWBUAfzZoHnbnflsIBcRxYuHW;
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo* QiigZeZPyUafPYkoiiVRHGNUlbCa;

  // Member methods:
  float get_value() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80A140))(this);
  }
  float get_valuePrev() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80A2D0))(this);
  }
  float get_valueRaw() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80A490))(this);
  }
  void set_valueRaw(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80A620))(this, value);
  }
  float get_valueRawPrev() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80A790))(this);
  }
  float get_valueDelta() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80A950))(this);
  }
  float get_valueDeltaRaw() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80AA60))(this);
  }
  float get_lastTimeActive() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80AC80))(this);
  }
  float get_lastTimeActiveRaw() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80AE40))(this);
  }
  float get_lastTimeInactive() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80AFD0))(this);
  }
  float get_lastTimeInactiveRaw() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80B160))(this);
  }
  float get_lastTimeValueChanged() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80B2F0))(this);
  }
  float get_lastTimeValueChangedRaw() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80B480))(this);
  }
  float get_timeActive() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80B610))(this);
  }
  float get_timeActiveRaw() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80B7B0))(this);
  }
  float get_timeInactive() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80B950))(this);
  }
  float get_timeInactiveRaw() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80BB90))(this);
  }
  float get_selfValue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80BDD0))(this);
  }
  float get_selfValuePrev() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80BEF0))(this);
  }
  void hlZwtzMUEbnraeKQFBFpCGYUhdLe(float ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80C010))(this, );
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::Controller* controller, int32_t elementIdentifierId, System_String* name, int32_t axisRange, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo* axisInfo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*, ModdingAPI::Exposed::Rewired::Controller*, int32_t, System_String*, int32_t, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80C130))(this, controller, elementIdentifierId, name, axisRange, axisInfo);
  }
  void GaGsqquRXExMAgBzAbnuDJCMryj(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80C300))(this, );
  }
  void hdpQYUofZxEemKhWoFeTFBXPMWjE(ModdingAPI::Exposed::Rewired::AxisCalibration* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*, ModdingAPI::Exposed::Rewired::AxisCalibration*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80C320))(this, );
  }
  void hdpQYUofZxEemKhWoFeTFBXPMWjE() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80C500))(this);
  }
  void GNyjqzmZCbksuAkVrBpFGGvnyHU() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80C620))(this);
  }
  void YZOkTYKrFFnsoWkJwVqWVHEOLWB() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80C710))(this);
  }
  void meaEAFLWnSVMPlXCBwmKQfUNADZ(float ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80C810))(this, );
  }
  float nSYnQThYFjjkhFKNNLpOcgEijep(int32_t , ModdingAPI::Exposed::Rewired::AxisCalibration* ) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller::Axis*, int32_t, ModdingAPI::Exposed::Rewired::AxisCalibration*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x80CA80))(this, , );
  }
};
}