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


namespace ModdingAPI::Exposed::Rewired::InputManagers {
struct __CustomInputManager_Il2CppStaticFields {
};

struct __CustomInputManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_deviceCount;
  VirtualInvokeData _5_get_primaryInputManager;
  VirtualInvokeData _6_get_inputSource;
  VirtualInvokeData _7_get_inputSourceType;
  VirtualInvokeData _8_Initialize;
  VirtualInvokeData _9_Update;
  VirtualInvokeData _10_OnDestroy;
  VirtualInvokeData _11_SystemDeviceConnected;
  VirtualInvokeData _12_SystemDeviceDisconnected;
  VirtualInvokeData _13_UpdateControllerData;
  VirtualInvokeData _14_GetInputDataUpdateDelegate;
  VirtualInvokeData _15_SetUnityJoystickId;
  VirtualInvokeData _16_GetUnifiedMouseSource;
  VirtualInvokeData _17_GetUnifiedKeyboardSource;
};

struct __CustomInputManager_Il2CppClass {
  Il2CppClass_1 _1;
  __CustomInputManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CustomInputManager_Il2CppVtbl vtbl;
};

class CustomInputManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C91008;
  static inline    __CustomInputManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CustomInputManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CustomInputManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CustomInputManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Action_T_* _DeviceConnectedEvent;
  ModdingAPI::Exposed::System::Action_T_* _DeviceDisconnectedEvent;
  ModdingAPI::Exposed::System::Action_T_* _UpdateControllerInfoEvent;
  ModdingAPI::Exposed::System::Action* _SystemDeviceConnectedEvent;
  ModdingAPI::Exposed::System::Action* _SystemDeviceDisconnectedEvent;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* rnMUjAAytlIbJWVrZULXbcCBevYe;
  int32_t QoFtlVWUMQsddVwjrzotxPiGRyT;
  ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager::oVTlToOQWzOWEhnyJVDWhNdgBGv* kEXrkhPhmbzHnZkXPcqVqaAVbdDk;
  int32_t AVVfdcScxwmBLNYCqYFiLzdpYXU;
  ModdingAPI::Exposed::System::Action_T1__T2_* lwjQNqsriGAuttGQpvTIUHxoEms;
  ModdingAPI::Exposed::Rewired::PlatformInputManager* hiJQaHVmeucOBgPaRcWwuWQHlhn;
  ModdingAPI::Exposed::Rewired::Platforms::Custom::CustomInputSource* yXFBHqPWSgKDrdilRzdYdfncCuwC;
  bool iELmyAXIJKJyNkWkZJBtThYVgfUe;
  ModdingAPI::Exposed::System::Func_T__TResult_* WujvuKDdcTEdoajKBMVdBKsEOubM;
  ModdingAPI::Exposed::System::Func_TResult_* BQkOpmhhfrHzWmcMpTNMqDNeRTo;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::Rewired::Platforms::Custom::CustomInputSource* customInputSource, int32_t updateLoopSetting, ModdingAPI::Exposed::System::Func_T__TResult_* getHardwareJoystickMap_InputManager, ModdingAPI::Exposed::System::Func_TResult_* getNewJoystickId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, ModdingAPI::Exposed::Rewired::Platforms::Custom::CustomInputSource*, int32_t, ModdingAPI::Exposed::System::Func_T__TResult_*, ModdingAPI::Exposed::System::Func_TResult_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x575B30))(this, customInputSource, updateLoopSetting, getHardwareJoystickMap_InputManager, getNewJoystickId);
  }
  int32_t get_deviceCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8E0))(this);
  }
  ModdingAPI::Exposed::Rewired::PlatformInputManager* get_primaryInputManager() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::PlatformInputManager*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3199C0))(this);
  }
  ModdingAPI::Exposed::Rewired::Interfaces::IInputSource* get_inputSource() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Interfaces::IInputSource*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  int32_t get_inputSourceType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x576070))(this);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x576090))(this);
  }
  void Update(int32_t updateLoop) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5763D0))(this, updateLoop);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x576630))(this);
  }
  ModdingAPI::Exposed::System::Action_T1__T2_* GetInputDataUpdateDelegate() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Action_T1__T2_*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383960))(this);
  }
  void UpdateControllerData(int32_t inputManagerId, ModdingAPI::Exposed::Rewired::ControllerDataUpdater* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, int32_t, ModdingAPI::Exposed::Rewired::ControllerDataUpdater*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x576690))(this, inputManagerId, data);
  }
  void SystemDeviceConnected() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x576880))(this);
  }
  void SystemDeviceDisconnected() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5768A0))(this);
  }
  void SetUnityJoystickId(int32_t joystickId, int32_t unityJoystickIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, joystickId, unityJoystickIndex);
  }
  ModdingAPI::Exposed::Rewired::Interfaces::IUnifiedMouseSource* GetUnifiedMouseSource() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Interfaces::IUnifiedMouseSource*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::Rewired::Interfaces::IUnifiedKeyboardSource* GetUnifiedKeyboardSource() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Interfaces::IUnifiedKeyboardSource*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  void pELhHhhrKwBblgZHfaPOBMNHwJRt(ModdingAPI::Exposed::Rewired::Platforms::Custom::CustomInputSource::Joystick_array* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, ModdingAPI::Exposed::Rewired::Platforms::Custom::CustomInputSource::Joystick_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5768C0))(this, );
  }
  void OrwDXmodZXgABdXHcPiEPUdngXYa() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x577150))(this);
  }
  void fAMTbjfVpKaaVxfGTQAOyYlBOBd(int32_t , int32_t , ModdingAPI::Exposed::System::Collections::Generic::List_T_* , ModdingAPI::Exposed::System::Collections::Generic::List_T_* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, int32_t, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5772B0))(this, , , , );
  }
  void OnzjSuCvTXviBRopKrwgNzyIzve(ModdingAPI::Exposed::System::Collections::Generic::List_T_* , int32_t , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5777F0))(this, , , );
  }
  bool WDCpOqktbLKBWhVgWgZBAEfrghv(ModdingAPI::Exposed::System::Collections::Generic::List_T_* , int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x577970))(this, , );
  }
  int32_t OTahHpnSZnFHTJxDZDMDefWBgbth(ModdingAPI::Exposed::System::Collections::Generic::List_T_* ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x577AD0))(this, );
  }
  bool CeLtMAvrxulOVTRXNTeHUoPlckM(ModdingAPI::Exposed::System::Collections::Generic::List_T_* , int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x577C30))(this, , );
  }
  void nBIzquOywAtECGLgGqkkVEdHWDF(int32_t , ModdingAPI::Exposed::System::Collections::Generic::List_T_* , int32_t , ModdingAPI::Exposed::System::Collections::Generic::List_T_* , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x577D50))(this, , , , , );
  }
  void fOQWXBkWBzOzPqCGllFipbrQeYQ(int32_t , ModdingAPI::Exposed::System::Collections::Generic::List_T_* , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x577FD0))(this, , , );
  }
  void bikLiGOlpJgrrtGhMMLsbToowGQ() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x578280))(this);
  }
  bool WiUhLBJYVlmPaqsICWIvsNVnCOMf(ModdingAPI::Exposed::Rewired::Platforms::Custom::CustomInputSource::Joystick_array* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, ModdingAPI::Exposed::Rewired::Platforms::Custom::CustomInputSource::Joystick_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x578300))(this, );
  }
  void wTFduyeUJuowUXJXzNGwjjXETlMn(ModdingAPI::Exposed::System::Collections::Generic::List_T_* , ModdingAPI::Exposed::System::Collections::Generic::List_T_* , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5787A0))(this, , , );
  }
  void GajxeQAXbckJXiGkKvgvBmDuYwS(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager::UgQKKYSMzvdIpIUNkhkOdZaHXuz* , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager::UgQKKYSMzvdIpIUNkhkOdZaHXuz*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x578AD0))(this, , );
  }
  void zxEMWryHHbhJMuWAZFZQYeaIjBr(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager::UgQKKYSMzvdIpIUNkhkOdZaHXuz* , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager*, ModdingAPI::Exposed::Rewired::InputManagers::CustomInputManager::UgQKKYSMzvdIpIUNkhkOdZaHXuz*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x578B10))(this, , );
  }
};
}