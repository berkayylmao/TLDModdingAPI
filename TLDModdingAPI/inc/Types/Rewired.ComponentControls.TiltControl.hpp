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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed::Rewired::ComponentControls {
struct __TiltControl_Il2CppStaticFields {
};

struct __TiltControl_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Rewired_ComponentControls_IComponentControl_Update;
  VirtualInvokeData _6_get_hasController;
  VirtualInvokeData _7_ClearValue;
  VirtualInvokeData _8_Awake;
  VirtualInvokeData _9_Start;
  VirtualInvokeData _10_OnEnable;
  VirtualInvokeData _11_OnDisable;
  VirtualInvokeData _12_OnDestroy;
  VirtualInvokeData _13_OnValidate;
  VirtualInvokeData _14_OnCanvasGroupChanged;
  VirtualInvokeData _15_OnTransformParentChanged;
  VirtualInvokeData _16_OnDidApplyAnimationProperties;
  VirtualInvokeData _17_Reset;
  VirtualInvokeData _18_OnUpdate;
  VirtualInvokeData _19_OnInitialize;
  VirtualInvokeData _20_jpIxhKAdaZXGIIkpVlxYmllPXyp;
  VirtualInvokeData _21_OnSubscribeEvents;
  VirtualInvokeData _22_OnUnsubscribeEvents;
  VirtualInvokeData _23_OnSetProperty;
  VirtualInvokeData _24_OnClear;
  VirtualInvokeData _25_FindEventHandlers;
  VirtualInvokeData _26_FindController;
  VirtualInvokeData _27_GetRequiredControllerType;
  VirtualInvokeData _28_OnCustomControllerUpdate;
};

struct __TiltControl_Il2CppClass {
  Il2CppClass_1 _1;
  __TiltControl_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TiltControl_Il2CppVtbl vtbl;
};

class TiltControl {
public:
  // Il2Cpp fields:
  __TiltControl_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::Rewired::ComponentControls::IComponentController* ComponentControl__controller;
  bool ComponentControl_esYehwKhrldtApGnRVqbmuVUkFZ;
  bool ComponentControl_PoetrkNntCfZfEAGrHRwgvcHgnLh;
  int32_t ComponentControl__lastUpdateFrame;
  int32_t _allowedTiltDirections;
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* _horizontalTiltCustomControllerElement;
  float _horizontalTiltLimit;
  float _horizontalRestAngle;
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* _forwardTiltCustomControllerElement;
  float _forwardTiltLimit;
  float _forwardRestAngle;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D* _axis2D;
  bool _useHAxis;
  bool _useFAxis;
  ModdingAPI::Exposed::System::Func_TResult_* _getAccelerationValue;

  // Member methods:
  int32_t get_axesToUse() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F810))(this);
  }
  void set_axesToUse(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05580))(this, value);
  }
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_horizontalTiltCustomControllerElement() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  float get_horizontalTiltLimit() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x56EDE0))(this);
  }
  void set_horizontalTiltLimit(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA055F0))(this, value);
  }
  float get_horizontalRestAngle() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x807940))(this);
  }
  void set_horizontalRestAngle(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05640))(this, value);
  }
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_forwardTiltCustomControllerElement() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319960))(this);
  }
  float get_forwardTiltLimit() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x56EEC0))(this);
  }
  void set_forwardTiltLimit(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA056D0))(this, value);
  }
  float get_forwardRestAngle() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4EFF50))(this);
  }
  void set_forwardRestAngle(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05770))(this, value);
  }
  ModdingAPI::Exposed::Rewired::AxisCalibration* get_horizontalAxisCalibration() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::AxisCalibration*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05800))(this);
  }
  ModdingAPI::Exposed::Rewired::AxisCalibration* get_verticalAxisCalibration() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::AxisCalibration*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05830))(this);
  }
  ModdingAPI::Exposed::Rewired::Axis2DCalibration* get_deadZoneType() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Axis2DCalibration*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05860))(this);
  }
  ModdingAPI::Exposed::Rewired::Axis2DCalibration* get_axis2DCalibration() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Axis2DCalibration*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05860))(this);
  }
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D* get_axis2D() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A440))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_acceleration() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05880))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05990))(this);
  }
  void SetAccelerationSourceCallback(ModdingAPI::Exposed::System::Func_TResult_* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*, ModdingAPI::Exposed::System::Func_TResult_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A4B0))(this, callback);
  }
  void SetRestOrientation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05C90))(this);
  }
  void OnValidate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05EA0))(this);
  }
  bool OnInitialize() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05F20))(this);
  }
  void OnUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05F50))(this);
  }
  void OnCustomControllerUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05FB0))(this);
  }
  void ClearValue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06190))(this);
  }
  void LZYcXaUKhGBDdnryIwTiIdCqjUg() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA062F0))(this);
  }
  void dpUfjRPAbinbRvaeYBjdKzxjZDtP() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06830))(this);
  }
  void OkkhqKThCymaQOeqSSYCziUuYhY(int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::TiltControl*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA06940))(this, );
  }
};
}