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


namespace ModdingAPI::Exposed::Rewired::HID::Drivers {
struct __HIDDeviceDriver_Il2CppStaticFields {
};

struct __HIDDeviceDriver_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_get_AxisCount;
  VirtualInvokeData _6_get_ButtonCount;
  VirtualInvokeData _7_get_HatCount;
  VirtualInvokeData _8_get_AccelerometerCount;
  VirtualInvokeData _9_get_GyroscopeCount;
  VirtualInvokeData _10_get_TouchpadCount;
  VirtualInvokeData _11_get_LightCount;
  VirtualInvokeData _12_get_VibrationMotorCount;
  VirtualInvokeData _16_Dispose;
  VirtualInvokeData _65535__ctor;
};

struct __HIDDeviceDriver_Il2CppClass {
  Il2CppClass_1 _1;
  __HIDDeviceDriver_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __HIDDeviceDriver_Il2CppVtbl vtbl;
};

class HIDDeviceDriver {
public:
  // Il2Cpp fields:
  __HIDDeviceDriver_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Rewired::HID::HIDAxis_array* axes;
  ModdingAPI::Exposed::Rewired::HID::HIDButton_array* buttons;
  ModdingAPI::Exposed::Rewired::HID::HIDHat_array* hats;
  ModdingAPI::Exposed::Rewired::HID::HIDAccelerometer_array* accelerometers;
  ModdingAPI::Exposed::Rewired::HID::HIDGyroscope_array* gyroscopes;
  ModdingAPI::Exposed::Rewired::HID::HIDTouchpad_array* touchpads;
  ModdingAPI::Exposed::Rewired::HID::HIDVibrationMotor_array* vibrationMotors;
  ModdingAPI::Exposed::Rewired::HID::HIDLight_array* lights;
  bool IPjKDfWEXfJCxnkfIfovlZZlcJe;

  // Member methods:
  int32_t get_AxisCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x323DC0))(this);
  }
  int32_t get_ButtonCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x323DB0))(this);
  }
  int32_t get_HatCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA480))(this);
  }
  int32_t get_AccelerometerCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA490))(this);
  }
  int32_t get_GyroscopeCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x32B8D0))(this);
  }
  int32_t get_TouchpadCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x338580))(this);
  }
  int32_t get_LightCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA4A0))(this);
  }
  int32_t get_VibrationMotorCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA4B0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  bool get_disposed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x766C20))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA7B0))(this);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA860))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA8E0))(this, disposing);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver* GetDriver(int32_t driverId, ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver::InitArgs* hidDriverInitArgs) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*(__fastcall*)(int32_t, ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver::InitArgs*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA4C0))(driverId, hidDriverInitArgs);
  }
  static inline int32_t FindDriverId(int32_t vendorId, int32_t productId) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA750))(vendorId, productId);
  }
};
}