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
#include "ModdingAPI.Exposed.Rewired.HID.OutputReport.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Quaternion.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Quaternion.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"


namespace ModdingAPI::Exposed::Rewired::HID::Drivers {
struct __DualShock4Driver_Il2CppStaticFields {
};

struct __DualShock4Driver_Il2CppVtbl {
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
  VirtualInvokeData _13_Update;
  VirtualInvokeData _14_ParseInputReport;
  VirtualInvokeData _15_CreateControllerExtension;
  VirtualInvokeData _16_Dispose;
  VirtualInvokeData _17_get_BatteryLevel;
  VirtualInvokeData _18_get_LeftMotor;
  VirtualInvokeData _19_set_LeftMotor;
  VirtualInvokeData _20_get_RightMotor;
  VirtualInvokeData _21_set_RightMotor;
  VirtualInvokeData _22_get_LightColorR;
  VirtualInvokeData _23_set_LightColorR;
  VirtualInvokeData _24_get_LightColorG;
  VirtualInvokeData _25_set_LightColorG;
  VirtualInvokeData _26_get_LightColorB;
  VirtualInvokeData _27_set_LightColorB;
  VirtualInvokeData _28_get_LightFlashOnDuration;
  VirtualInvokeData _29_set_LightFlashOnDuration;
  VirtualInvokeData _30_get_LightFlashOffDuration;
  VirtualInvokeData _31_set_LightFlashOffDuration;
  VirtualInvokeData _32_get_AccelerometerValue;
  VirtualInvokeData _33_get_AccelerometerValueRaw;
  VirtualInvokeData _34_get_GyroscopeValue;
  VirtualInvokeData _35_get_GyroscopeValueRaw;
  VirtualInvokeData _36_get_LastGyroscopeValue;
  VirtualInvokeData _37_get_LastGyroscopeValueRaw;
  VirtualInvokeData _38_get_Orientation;
  VirtualInvokeData _39_ResetOrientation;
  VirtualInvokeData _40_get_MaxTouches;
  VirtualInvokeData _41_GetTouchCount;
  VirtualInvokeData _42_IsTouchingAtTouchId;
  VirtualInvokeData _43_IsTouchingAtIndex;
  VirtualInvokeData _44_GetTouchIdAtIndex;
  VirtualInvokeData _45_GetTouchPositionByIndex;
  VirtualInvokeData _46_GetTouchPositionByTouchId;
  VirtualInvokeData _47_GetTouchPositionAbsoluteByIndex;
  VirtualInvokeData _48_GetTouchPositionAbsoluteByTouchId;
  VirtualInvokeData _49_StopLightFlash;
  VirtualInvokeData _50_StopVibration;
};

struct __DualShock4Driver_Il2CppClass {
  Il2CppClass_1 _1;
  __DualShock4Driver_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DualShock4Driver_Il2CppVtbl vtbl;
};

class DualShock4Driver {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C74448;
  static inline    __DualShock4Driver_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __DualShock4Driver_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DualShock4Driver_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __DualShock4Driver_Il2CppClass* __pClassInstance;
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
  bool HIDDeviceDriver_IPjKDfWEXfJCxnkfIfovlZZlcJe;
  bool bpbfKqJdfDcFXAOSagSdAQRoZzp;
  int32_t aICxMOpIOTLXmIzKIaVYqJSaASFf;
  int32_t oVupbTrysERqYsYfAxtyzwUxWtJ;
  bool ifiTLFznazZUMjbsabkbbEIkKJed;
  uint8_t pDmCqxwhpGabSGjgZzKPVXvaXDq;
  int32_t rtCUlVivDHRPPZUNBcxdEqKgkFo;
  int32_t TYwxROTAPfAzqTFABIjpPyxALJK;
  int32_t dAFXEwLIoNpqjZeYPmsYQXydgKt;
  int32_t dnSCPiWPzSCntUoWSlFKnFbTpIB;
  int32_t oxabkZKiiVIgKGuQzwhQHpRxNhuR;
  int32_t OQhjOWXQsNmiHlwmhjRrcBvAaVYH;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer* PhPPyyRfZhSToEMurmMKAweYVmy;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer* QSgrzEFdBUIeCvbFfVKSOHCPaNv;
  ModdingAPI::Exposed::Rewired::HID::OutputReport TzfZuDCknOOYXqDnLqrmteOneEV;
  ModdingAPI::Exposed::System::Func_T__TResult_* hYAClracNmoatRqHuNZDhYpElKif;
  ModdingAPI::Exposed::System::Action_T_* UFGGgrBxLgBKTidJbuKnqHGVALg;
  bool YxOVBRSBVgRUUZZWPGYULXfeoCj;
  bool KGiLNpJGBiNYydKAsUtrPguCgDH;
  float dZkxoxAmMBjnhysgjRVNIMbjzRu;
  uint8_t NBTFYZxhdERAXIFIRahplUxRiZl;
  ModdingAPI::Exposed::UnityEngine::Quaternion wleNskbmlqMnHIRZGDzBHKVHrZp;
  uint16_t BwykfVCoPdZCAIJaSdhtZYWRcgG;
  float yGVsHVqsvwJQZyJzjeiLBpsfMpP;
  float aGVxhUuzDaGuiaLNOaPBJCuJPhY;
  float VcrjtTSLGbvvekGEXGvBEgTXuiG;
  uint8_t jdXXIAdbEApFqfhiYzuGvRIpZOF;
  uint8_t EFkinXfPpuATzAhCdAYLOjqcjVjN;
  ModdingAPI::Exposed::UnityEngine::Quaternion eJhgUbakTfOTucTSEZudxTelkMsg;
  bool vlKazmEWVfwYqgYFYekCycvxKjiF;
  int32_t uOEzFqeTVPvdhEoPCzJRWWocPm;
  ModdingAPI::Exposed::System::Int32_array* scshZpGoLbDiCQSNFqlNtLWdviI;
  ModdingAPI::Exposed::System::Int32_array* DHHCAZiwBjFlmLdJqoQcxeXbeUH;

  // Member methods:
  bool HYNoqjVWFrHbcEsfmMfSvtoZZNa() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1250))(this);
  }
  float get_BatteryLevel() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1300))(this);
  }
  float get_LeftMotor() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1390))(this);
  }
  void set_LeftMotor(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1410))(this, value);
  }
  float get_RightMotor() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1460))(this);
  }
  void set_RightMotor(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D14E0))(this, value);
  }
  float get_LightColorR() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1530))(this);
  }
  void set_LightColorR(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1590))(this, value);
  }
  float get_LightColorG() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1640))(this);
  }
  void set_LightColorG(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D16A0))(this, value);
  }
  float get_LightColorB() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1750))(this);
  }
  void set_LightColorB(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D17B0))(this, value);
  }
  float get_LightFlashOnDuration() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1850))(this);
  }
  void set_LightFlashOnDuration(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1860))(this, value);
  }
  float get_LightFlashOffDuration() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D18F0))(this);
  }
  void set_LightFlashOffDuration(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1900))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_AccelerometerValue() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1970))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_AccelerometerValueRaw() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1A70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_GyroscopeValue() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1B60))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_GyroscopeValueRaw() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1DB0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_LastGyroscopeValue() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D1F60))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_LastGyroscopeValueRaw() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D20B0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion get_Orientation() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D21A0))(this);
  }
  void ResetOrientation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D21B0))(this);
  }
  int32_t get_MaxTouches() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3201C0))(this);
  }
  int32_t GetTouchCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D2260))(this);
  }
  bool IsTouchingAtIndex(int32_t index) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D2330))(this, index);
  }
  bool IsTouchingAtTouchId(int32_t touchId) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D23B0))(this, touchId);
  }
  int32_t GetTouchIdAtIndex(int32_t index) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D2400))(this, index);
  }
  bool GetTouchPositionByIndex(int32_t index, ModdingAPI::Exposed::UnityEngine::Vector2 position) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D2480))(this, index, position);
  }
  bool GetTouchPositionByTouchId(int32_t touchId, ModdingAPI::Exposed::UnityEngine::Vector2 position) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D2580))(this, touchId, position);
  }
  bool GetTouchPositionAbsoluteByIndex(int32_t index, int32_t positionX, int32_t positionY) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D2740))(this, index, positionX, positionY);
  }
  bool GetTouchPositionAbsoluteByTouchId(int32_t touchId, int32_t positionX, int32_t positionY) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D2820))(this, touchId, positionX, positionY);
  }
  void StopLightFlash() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D29A0))(this);
  }
  void StopVibration() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D29C0))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver::InitArgs* initArgs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver::InitArgs*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D2AC0))(this, initArgs);
  }
  void Update(int32_t updateLoop) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D59E0))(this, updateLoop);
  }
  bool ParseInputReport(intptr_t inputReportPtr, int32_t inputReportLength, float timestamp) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, intptr_t, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D5B70))(this, inputReportPtr, inputReportLength, timestamp);
  }
  ModdingAPI::Exposed::Rewired::Controller::Extension* CreateControllerExtension() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Controller::Extension*(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D5E20))(this);
  }
  void ZWTsTuFZUVTafSxdrWTzOwFuakF(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D5F70))(this, );
  }
  bool jczckjhPONDrKIYuayzPQVRsBbRK(int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D5FF0))(this, );
  }
  void YBlvRdYuYLSGoWqPKBGSDKsIZYV() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D6040))(this);
  }
  bool xZPrJgPxeIHembnvBLLcPnxkHmR(int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D6780))(this, );
  }
  void SLzKHqJYdSkkhVgMsvkSzJiIWxV(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer* , float ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D6910))(this, , );
  }
  void cWrMDDMaQKuWdaoixVQTptQNzAa(ModdingAPI::Exposed::Rewired::HID::HIDControllerElement_array* , ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer* , float ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::Rewired::HID::HIDControllerElement_array*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D6E90))(this, , , );
  }
  void UGQgNLCSLCgmhHIJfWMOUtSWnOV() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D6F50))(this);
  }
  void ZtJCnCEMqifTvwkWcKcKFbMjwUsM(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D70D0))(this, );
  }
  void NCKmAZiwRLspuqpmRhpNwDKTdzJ() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D7340))(this);
  }
  void UtynGajrypEWmDdVwigQKwALzOUf(ModdingAPI::Exposed::UnityEngine::Vector3 , ModdingAPI::Exposed::UnityEngine::Vector3 ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D7640))(this, , );
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion rqfFrPRGIyrXDAsofsQmiqPaLJa(ModdingAPI::Exposed::UnityEngine::Quaternion , int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::UnityEngine::Quaternion, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D84F0))(this, , );
  }
  float PeuhwbGQAvGYXoUNQlDeGAgPBARY(float , float ) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D89F0))(this, , );
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 NBCcUFQtTOZsIaTqeCeclUBOJIx(ModdingAPI::Exposed::UnityEngine::Vector3 , float ) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D8A90))(this, , );
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion AxPukmphcgBJikuabCBQUMhyfHZ(ModdingAPI::Exposed::UnityEngine::Vector3 , float ) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D8BC0))(this, , );
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion DCGVPEdRPZVleVzAjZpAAmFgODW(ModdingAPI::Exposed::UnityEngine::Vector3 , float ) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D8D30))(this, , );
  }
  float dZEWNuIBSiuqQHJWwUWcpvGOqBG(ModdingAPI::Exposed::UnityEngine::Vector3 ) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D9130))(this, );
  }
  bool smfbThyczZYMsPtntucuqBaCPTV(float ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D9160))(this, );
  }
  bool bBHIgQvmSjooqDtWUruMMFHVLKp(ModdingAPI::Exposed::UnityEngine::Vector3 , int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::UnityEngine::Vector3, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D9180))(this, , );
  }
  bool HpMjBlXprHXIpUAVtwZzCeFADff(ModdingAPI::Exposed::UnityEngine::Vector3 ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D93C0))(this, );
  }
  bool oxaNAerAVmINseWFuwlBFPbneFz(ModdingAPI::Exposed::UnityEngine::Vector3 ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this, );
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 PWVyfMIezbFKJBdYzYeWHuYOxmp(ModdingAPI::Exposed::System::Single_array* ) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::System::Single_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D94B0))(this, );
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 FpXPCdXHcvlVJybRYgTjhGKUYukc(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_T_* ) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D9550))(this, );
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 FpXPCdXHcvlVJybRYgTjhGKUYukc(ModdingAPI::Exposed::UnityEngine::Vector3 , float ) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D9750))(this, , );
  }
  int32_t jBMAHJQjWJwPgEnvKLppWIzDiJy(int32_t ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D9890))(this, );
  }
  void rxkSQgdnSNUgWyWPIcvQnYtSqUg(ModdingAPI::Exposed::System::Byte_array* , ModdingAPI::Exposed::System::Single_array* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::Single_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D98A0))(this, , );
  }
  void aLdvAnQlrjGTqFwBaMyJwPdoHhDH(ModdingAPI::Exposed::System::Byte_array* , ModdingAPI::Exposed::System::Single_array* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::System::Byte_array*, ModdingAPI::Exposed::System::Single_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D99E0))(this, , );
  }
  float vOqXVPMwikMGlpSOJqzkzleadNS() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D9B20))(this);
  }
  void eSsrLXKuPxksIgJbJRlIgecnfxFA(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer* , ModdingAPI::Exposed::Rewired::HID::HIDTouchpad::TouchData_array* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer*, ModdingAPI::Exposed::Rewired::HID::HIDTouchpad::TouchData_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D9B30))(this, , );
  }
  int32_t gKZIwrCmtuAhcwJZsgetJXBaYpxo(int32_t , bool , int32_t ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, int32_t, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D9F30))(this, , , );
  }
  void fJFAanrWowEhbOwyRANrxUdTCyT() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA100))(this);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA110))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::Drivers::DualShock4Driver*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA1B0))(this, disposing);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion zrTBYZgDzoOVYuONOGnGWmkzWajW(ModdingAPI::Exposed::UnityEngine::Quaternion , ModdingAPI::Exposed::UnityEngine::Vector3 ) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D81A0))(, );
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 DkZSMxZhMhIAOBiSEGsrBoMMULj(ModdingAPI::Exposed::UnityEngine::Vector3 , ModdingAPI::Exposed::UnityEngine::Vector3 ) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D8240))(, );
  }
  static inline ModdingAPI::Exposed::UnityEngine::Quaternion Inverse(ModdingAPI::Exposed::UnityEngine::Quaternion quaternion) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Quaternion)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7D88F0))(quaternion);
  }
  static inline bool Matches(int32_t vid, int32_t pid) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA2B0))(vid, pid);
  }
};
}