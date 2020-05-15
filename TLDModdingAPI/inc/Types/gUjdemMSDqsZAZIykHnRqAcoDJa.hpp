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
#include "ModdingAPI.Exposed.System.Guid.hpp"


namespace ModdingAPI::Exposed {
struct __gUjdemMSDqsZAZIykHnRqAcoDJa_Il2CppStaticFields {
};

struct __gUjdemMSDqsZAZIykHnRqAcoDJa_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_get_HidDevice;
  VirtualInvokeData _6_get_ProductName;
  VirtualInvokeData _7_get_VendorId;
  VirtualInvokeData _8_get_ProductId;
  VirtualInvokeData _9_get_ProductGuid;
  VirtualInvokeData _10_get_InstanceGuid;
  VirtualInvokeData _11_get_DeviceType;
  VirtualInvokeData _12_get_IsBluetoothDevice;
  VirtualInvokeData _13_get_BluetoothDeviceName;
  VirtualInvokeData _14_get_HWDefinitionMatchTag;
  VirtualInvokeData _15_get_Driver;
  VirtualInvokeData _16_get_ControllerExtension;
  VirtualInvokeData _22_get_IsValid;
  VirtualInvokeData _23_Update;
  VirtualInvokeData _24_UpdateFinished;
  VirtualInvokeData _25_Dispose;
  VirtualInvokeData _26_Acquire;
  VirtualInvokeData _27_Unacquire;
  VirtualInvokeData _28_get_JoystickId;
  VirtualInvokeData _29_get_JoystickSourceType;
  VirtualInvokeData _30_get_JoystickSourceHandle;
  VirtualInvokeData _31_get_Buttons;
  VirtualInvokeData _32_get_HatValues;
  VirtualInvokeData _33_get_ButtonCount;
  VirtualInvokeData _34_get_AxisCount;
  VirtualInvokeData _35_get_HatCount;
  VirtualInvokeData _36_get_HasElements;
  VirtualInvokeData _37_get_SupportsVibration;
  VirtualInvokeData _38_get_VibrationMotorCount;
  VirtualInvokeData _39_get_AxesState;
  VirtualInvokeData _40_get_InputSource;
  VirtualInvokeData _41_UpdateValue;
  VirtualInvokeData _42_SetJoystickId;
};

struct __gUjdemMSDqsZAZIykHnRqAcoDJa_Il2CppClass {
  Il2CppClass_1 _1;
  __gUjdemMSDqsZAZIykHnRqAcoDJa_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __gUjdemMSDqsZAZIykHnRqAcoDJa_Il2CppVtbl vtbl;
};

class gUjdemMSDqsZAZIykHnRqAcoDJa {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C82130;
  static inline    __gUjdemMSDqsZAZIykHnRqAcoDJa_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __gUjdemMSDqsZAZIykHnRqAcoDJa_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__gUjdemMSDqsZAZIykHnRqAcoDJa_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __gUjdemMSDqsZAZIykHnRqAcoDJa_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::mCAMdxhJaeECmAhyzYhXQVVmSyIq* axssNNNbGdVrRfdaWBqgCCHSyNo;
  System_String* JQTVMKeYcXhEpkVfiLKRjmlhiym;
  System_String* XjWjgrPmKAhuhbRkjFodhgFDRCLZ;
  int32_t FnUlbhUQqdlJLDbLyfnOIeMsNry;
  int32_t IFrJmuNrPwaCodZCUDQrEeIfRBe;
  ModdingAPI::Exposed::System::Guid kuBetGEBRTFJqIbJJhpOJOZJvmdL;
  ModdingAPI::Exposed::System::Guid jntwhUDZgkSQBbIeGtLkGHwlehl;
  int32_t DrGVTMOVrhUtgmIOMsliEhUxmCN;
  System_String* cHZvZtNvrGAqVmlCXykNHCWkQuW;
  ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver* hQcyTjFGnaVqrREfYzFlxqUPeDy;
  ModdingAPI::Exposed::Rewired::Controller::Extension* FCvvDWivkrjEZStDONtpxTYPeJH;
  System_String* XnWircNorQerbgQIVqjYXuooAeWs;
  bool GWfkftncwQHEfmCBFCMeHGbWrDL_aStwDHfMTTrjGocQNajmbHbmhvJ;
  int32_t aIUUpTFMsSrdBEOnfajgGCFcmHsd;
  int32_t ncsTTyOhWgfxGKjIeiDiECNHqmxi;
  intptr_t GjzMbyJlVHDlPkrioLeEfDYuKsjh;
  ModdingAPI::Exposed::Rewired::ButtonLoopSet* GclvSmeRMnpmzewfyGEVweuJYtb;
  ModdingAPI::Exposed::lJWGwkehXFaliHiGegJxCNAGsiwj_array* EaMZkjqzrHtxsnUsNTwWTRgnNxX;
  ModdingAPI::Exposed::HczVKVVORbwmYGVIlvuUqrYrotD_array* ZvlavvbUwneXoXBmTAzGEKNmdz;
  ModdingAPI::Exposed::System::Int32_array* tmObGrJOINxehLPszKxPhKrIRET;
  ModdingAPI::Exposed::Rewired::HID::HIDAccelerometer_array* vwVkbMIIKovocaEDKNLGtsZkgg;
  ModdingAPI::Exposed::Rewired::HID::HIDGyroscope_array* vBJgYgDhlqkvnhFRNceJFpkJvltQ;
  ModdingAPI::Exposed::Rewired::HID::HIDTouchpad_array* UMlyDsidvODukvruYblWZQqYqPk;
  int32_t ueAFscqPjICdniqmbbbDsFWgOeVT;
  int32_t CSdFTfiJYNvkIPikdBRSzcliiFm;
  int32_t FmABbUpKZcEBVkooiNvicUTbdMap;
  int32_t dxiyBltLZPgtaVjdcClqKnYSpLt;
  int32_t yKXGyeUGZkqtywjpZMjCyuoRqvY;
  int32_t gDYuAzSOvXFlbjXvWFIxJlLCFVuN;
  ModdingAPI::Exposed::Rewired::HID::HidOutputReportHandler* VHCSrDThpmgNSNFEZLSOKkfBdJN;
  ModdingAPI::Exposed::denNgiiTsYsQtRGAEwNiOJIojpi* gYPZeIibsbftRvPzomPJJcbirzg;
  bool aStwDHfMTTrjGocQNajmbHbmhvJ;

  // Member methods:
  int32_t get_JoystickId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307620))(this);
  }
  int32_t get_JoystickSourceType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307630))(this);
  }
  intptr_t get_JoystickSourceHandle() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307640))(this);
  }
  ModdingAPI::Exposed::System::Boolean_array* get_Buttons() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Boolean_array*(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F080))(this);
  }
  ModdingAPI::Exposed::System::Int32_array* get_HatValues() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F140))(this);
  }
  int32_t get_ButtonCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F150))(this);
  }
  int32_t get_AxisCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F160))(this);
  }
  int32_t get_HatCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F170))(this);
  }
  bool get_HasElements() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F180))(this);
  }
  bool get_SupportsVibration() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F1A0))(this);
  }
  int32_t get_VibrationMotorCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F1D0))(this);
  }
  int32_t get_InputSource() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F1F0))(this);
  }
  ModdingAPI::Exposed::qxrSUMZpMXTnuxUmiSNXgJUhpcL* get_AxesState() {
    return reinterpret_cast<ModdingAPI::Exposed::qxrSUMZpMXTnuxUmiSNXgJUhpcL*(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F200))(this);
  }
  void ::ctor(int32_t joystickId, int32_t joystickSourceType, intptr_t joystickSourceHandle, ModdingAPI::Exposed::mCAMdxhJaeECmAhyzYhXQVVmSyIq* hidDevice, ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver* driver, ModdingAPI::Exposed::Rewired::HID::HidOutputReportHandler* hidOutputReportHandler) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*, int32_t, int32_t, intptr_t, ModdingAPI::Exposed::mCAMdxhJaeECmAhyzYhXQVVmSyIq*, ModdingAPI::Exposed::Rewired::HID::Drivers::HIDDeviceDriver*, ModdingAPI::Exposed::Rewired::HID::HidOutputReportHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F210))(this, joystickId, joystickSourceType, joystickSourceHandle, hidDevice, driver, hidOutputReportHandler);
  }
  void Update(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F520))(this, );
  }
  void UpdateFinished() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F730))(this);
  }
  void UpdateValue(intptr_t , int32_t , int32_t , int32_t , float ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*, intptr_t, int32_t, int32_t, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F7E0))(this, , , , , );
  }
  void Acquire() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void Unacquire() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void SetJoystickId(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x308500))(this, );
  }
  void SiehMeCIYTlJBUeVjLCpblhJhpH() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30FA20))(this);
  }
  void sEdyhQmspcQUCEEbpwtPxQEVQoc() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310160))(this);
  }
  void PzoYaIOfEYvRSHGWXCMbxdaEjAJ() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310250))(this);
  }
  void DYTLfRFdPwVIhHntBBjmoBiEMqr() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3103E0))(this);
  }
  ModdingAPI::Exposed::lJWGwkehXFaliHiGegJxCNAGsiwj* kpPAVFVJxyAmCBulvNAoUcxtjAeF(ModdingAPI::Exposed::Rewired::HID::HIDAxis* ) {
    return reinterpret_cast<ModdingAPI::Exposed::lJWGwkehXFaliHiGegJxCNAGsiwj*(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*, ModdingAPI::Exposed::Rewired::HID::HIDAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3104E0))(this, );
  }
  ModdingAPI::Exposed::HczVKVVORbwmYGVIlvuUqrYrotD* SWPErUmYsAKTZkAzZmGrNdsaAoN(ModdingAPI::Exposed::Rewired::HID::HIDHat* ) {
    return reinterpret_cast<ModdingAPI::Exposed::HczVKVVORbwmYGVIlvuUqrYrotD*(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*, ModdingAPI::Exposed::Rewired::HID::HIDHat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310730))(this, );
  }
  void Dispose(bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::gUjdemMSDqsZAZIykHnRqAcoDJa*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310950))(this, );
  }
};
}