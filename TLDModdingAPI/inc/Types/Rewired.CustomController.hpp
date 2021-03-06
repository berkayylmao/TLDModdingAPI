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
#include "ModdingAPI.Exposed.Rewired.ControllerIdentifier.hpp"


namespace ModdingAPI::Exposed::Rewired {
struct __CustomController_Il2CppStaticFields {
};

struct __CustomController_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_deviceInstanceGuid;
  VirtualInvokeData _5_LwKpWazmuZDrpZtifwRMfBjlws;
  VirtualInvokeData _6_GetElementById;
  VirtualInvokeData _7_GetButton;
  VirtualInvokeData _8_GetButtonDown;
  VirtualInvokeData _9_GetButtonUp;
  VirtualInvokeData _10_GetButtonChanged;
  VirtualInvokeData _11_GetButtonPrev;
  VirtualInvokeData _12_GetButtonDoublePressHold;
  VirtualInvokeData _13_GetButtonDoublePressHold;
  VirtualInvokeData _14_GetButtonDoublePressDown;
  VirtualInvokeData _15_GetButtonDoublePressDown;
  VirtualInvokeData _16_GetButtonTimePressed;
  VirtualInvokeData _17_GetButtonTimeUnpressed;
  VirtualInvokeData _18_GetButtonLastTimePressed;
  VirtualInvokeData _19_GetButtonLastTimeUnpressed;
  VirtualInvokeData _20_GetAnyButton;
  VirtualInvokeData _21_GetAnyButtonDown;
  VirtualInvokeData _22_GetAnyButtonUp;
  VirtualInvokeData _23_GetAnyButtonPrev;
  VirtualInvokeData _24_GetAnyButtonChanged;
  VirtualInvokeData _25_GetButtonById;
  VirtualInvokeData _26_GetButtonDownById;
  VirtualInvokeData _27_GetButtonUpById;
  VirtualInvokeData _28_GetButtonDoublePressHoldById;
  VirtualInvokeData _29_GetButtonDoublePressDownById;
  VirtualInvokeData _30_GetButtonDoublePressHoldById;
  VirtualInvokeData _31_GetButtonDoublePressDownById;
  VirtualInvokeData _32_GetButtonPrevById;
  VirtualInvokeData _33_GetButtonTimePressedById;
  VirtualInvokeData _34_GetButtonTimeUnpressedById;
  VirtualInvokeData _35_GetButtonLastTimePressedById;
  VirtualInvokeData _36_GetButtonLastTimeUnpressedById;
  VirtualInvokeData _37_PollForFirstElement;
  VirtualInvokeData _38_PollForFirstElementDown;
  VirtualInvokeData _39_PollForFirstButton;
  VirtualInvokeData _40_PollForFirstButtonDown;
  VirtualInvokeData _41_PollForAllElements;
  VirtualInvokeData _42_PollForAllElementsDown;
  VirtualInvokeData _43_PollForAllButtons;
  VirtualInvokeData _44_PollForAllButtonsDown;
  VirtualInvokeData _45_GetLastTimeActive;
  VirtualInvokeData _46_GetLastTimeActive;
  VirtualInvokeData _47_GetLastTimeAnyElementChanged;
  VirtualInvokeData _48_GetLastTimeAnyElementChanged;
  VirtualInvokeData _49_UpdateData;
  VirtualInvokeData _50_DRJcjEhqhASTxhzJHuZkXgvjfRh;
  VirtualInvokeData _51_Clear;
  VirtualInvokeData _52_SetEnabled;
  VirtualInvokeData _53_BakeMap;
  VirtualInvokeData _54_BakeActionElementMap;
  VirtualInvokeData _55_rcgIUfpkYrjrUXGyTomqMGJeaVQ;
  VirtualInvokeData _56_Connected;
  VirtualInvokeData _57_Disconnected;
  VirtualInvokeData _58_IsPolledAxisActive;
};

struct __CustomController_Il2CppClass {
  Il2CppClass_1 _1;
  __CustomController_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CustomController_Il2CppVtbl vtbl;
};

class CustomController {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C7C088;
  static inline    CustomController* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C770A8;
  static inline    __CustomController_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline CustomController* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (CustomController**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __CustomController_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CustomController_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CustomController_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t id;
  System_String* _tag;
  System_String* _name;
  System_String* _hardwareName;
  int32_t _type;
  ModdingAPI::Exposed::System::Guid bgEbuinIyksHhzwbKkeQTdhvMfB;
  System_String* _hardwareIdentifier;
  bool _isConnected;
  ModdingAPI::Exposed::Rewired::Controller::Extension* Controller_mOyfABPQGnDTXmvUyuQvMOOPHRt;
  bool Controller_yIozJzFkooRCrVDgMYuKERLjtKT;
  ModdingAPI::Exposed::Rewired::ControllerIdentifier Controller_LWnIwzKSsriocXoXPzmdHMThaXh;
  int32_t CtWHpgOaCVZYpcBzymhejPsalLW;
  int32_t _buttonCount;
  ModdingAPI::Exposed::Rewired::Controller::Button_array* buttons;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* buttons_readOnly;
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* Controller_zDYSoPuWRIUrndraUwJpaRdSJEG;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* Controller_BOLhTANJNrAyZcBkNpOGdedkKspm;
  int32_t rxKCLleLOYchANMgnMBjKBqyofIy;
  ModdingAPI::Exposed::Rewired::ControllerDataUpdater* TjnaCYbBJvhWUcbafhPbJbpmEEHG;
  ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game* kDCFjukcapMxkiTWjVJiJjJbuIc;
  uint32_t aUOBdeEozdjgtEVSBmIMjmsTwOc;
  uint32_t Controller_oPQfxVgUVqSNOHHPapJHfAitNsam;
  uint32_t Controller_xAEXTFehdQAtzbZMNQMxfdNgMSmN;
  ModdingAPI::Exposed::System::Action_T_* Controller_qFVtdtZKINIugHapYAWZixKJblw;
  ModdingAPI::Exposed::Rewired::IControllerTemplate_array* Controller_LBaGeVXHfBdEsIeJDbxApJJcZUhE;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* Controller_DgrYEPdrtFPsDCgGnAGsRqMlbYt;
  int32_t _axisCount;
  int32_t _axis2DCount;
  ModdingAPI::Exposed::Rewired::Controller::Axis_array* axes;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* axes_readOnly;
  ModdingAPI::Exposed::Rewired::Controller::Axis2D_array* axes2D;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* axes2D_readOnly;
  ModdingAPI::Exposed::Rewired::CalibrationMap* _calibrationMap;
  ModdingAPI::Exposed::System::Single_array* ControllerWithAxes_FSbDHfKqfVALREeVCdZLrHCYudR;
  uint32_t ControllerWithAxes_aZuqnAtAIPIBenYEWUoRLYNQzMt;
  ModdingAPI::Exposed::System::Func_T__TResult_* ControllerWithAxes_lAbSPzytMMAohvgPWrXteCHrirM;
  int32_t _sourceControllerId;
  ModdingAPI::Exposed::System::Func_T__TResult_* axisUpdateCallback;
  ModdingAPI::Exposed::System::Func_T__TResult_* buttonUpdateCallback;
  bool useUpdateCallbacks;
  ModdingAPI::Exposed::System::Guid _deviceInstanceGuid;

  // Member methods:
  int32_t get_sourceControllerId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x79C830))(this);
  }
  ModdingAPI::Exposed::System::Guid get_deviceInstanceGuid() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6E530))(this);
  }
  void ::ctor(ModdingAPI::Exposed::ZPhTbeGCKpbNCcuuTrVzFlZnRGe* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, ModdingAPI::Exposed::ZPhTbeGCKpbNCcuuTrVzFlZnRGe*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6E650))(this, data);
  }
  void ::ctor(int32_t controllerId, int32_t sourceControllerId, ModdingAPI::Exposed::System::Guid hardwareTypeGuid, int32_t inputSource, System_String* name, System_String* hardwareName, System_String* hardwareIdentifier, int32_t axisCount, int32_t buttonCount, ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game* hardwareMap, ModdingAPI::Exposed::Rewired::Controller::Extension* extension, ModdingAPI::Exposed::Rewired::ControllerDataUpdater* dataUpdater) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, int32_t, int32_t, ModdingAPI::Exposed::System::Guid, int32_t, System_String*, System_String*, System_String*, int32_t, int32_t, ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, ModdingAPI::Exposed::Rewired::Controller::Extension*, ModdingAPI::Exposed::Rewired::ControllerDataUpdater*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6E890))(this, controllerId, sourceControllerId, hardwareTypeGuid, inputSource, name, hardwareName, hardwareIdentifier, axisCount, buttonCount, hardwareMap, extension, dataUpdater);
  }
  void FillData() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6EBF0))(this);
  }
  void SetAxisValue(int32_t index, float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6EE50))(this, index, value);
  }
  void SetAxisValue(System_String* elementName, float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6F050))(this, elementName, value);
  }
  void SetAxisValueById(int32_t elementId, float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6F2A0))(this, elementId, value);
  }
  void SetButtonValue(int32_t index, bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6F4C0))(this, index, value);
  }
  void SetButtonValue(System_String* elementName, bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6F690))(this, elementName, value);
  }
  void SetButtonValueById(int32_t elementId, bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6F8C0))(this, elementId, value);
  }
  void SetAxisUpdateCallback(ModdingAPI::Exposed::System::Func_T__TResult_* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, ModdingAPI::Exposed::System::Func_T__TResult_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6FAC0))(this, callback);
  }
  void SetButtonUpdateCallback(ModdingAPI::Exposed::System::Func_T__TResult_* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, ModdingAPI::Exposed::System::Func_T__TResult_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6FBF0))(this, callback);
  }
  void ClearAxisValue(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6FD10))(this, index);
  }
  void ClearAxisValue(System_String* elementName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE6FF60))(this, elementName);
  }
  void ClearAxisValueById(int32_t elementId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE70160))(this, elementId);
  }
  void ClearButtonValue(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE703A0))(this, index);
  }
  void ClearButtonValue(System_String* elementName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE705D0))(this, elementName);
  }
  void ClearButtonValueById(int32_t elementId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::CustomController*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE707C0))(this, elementId);
  }
};
}