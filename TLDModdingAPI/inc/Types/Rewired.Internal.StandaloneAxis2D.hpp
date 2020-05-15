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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed::Rewired::Internal {
struct __StandaloneAxis2D_Il2CppStaticFields {
};

struct __StandaloneAxis2D_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __StandaloneAxis2D_Il2CppClass {
  Il2CppClass_1 _1;
  __StandaloneAxis2D_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StandaloneAxis2D_Il2CppVtbl vtbl;
};

class StandaloneAxis2D {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5E1D8;
  static inline    __StandaloneAxis2D_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __StandaloneAxis2D_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__StandaloneAxis2D_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __StandaloneAxis2D_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Rewired::Axis2DCalibration* _calibration;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* _xAxis;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* _yAxis;
  bool _allowEvents;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler* _ValueChangedEvent;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler* _RawValueChangedEvent;

  // Member methods:
  ModdingAPI::Exposed::Rewired::Axis2DCalibration* get_calibration() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Axis2DCalibration*(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* get_xAxis() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* get_yAxis() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_value() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74B370))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_valuePrev() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74B380))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_valueDelta() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74B520))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_rawValue() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74B600))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_rawValuePrev() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74B680))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_rawValueDelta() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74B700))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_rawZero() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74B830))(this);
  }
  void add__ValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74B880))(this, value);
  }
  void remove__ValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74B990))(this, value);
  }
  void add_ValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74B880))(this, value);
  }
  void remove_ValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74B990))(this, value);
  }
  void add__RawValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74BAB0))(this, value);
  }
  void remove__RawValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74BBB0))(this, value);
  }
  void add_RawValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74BAB0))(this, value);
  }
  void remove_RawValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D::ValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74BBB0))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74BCD0))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* xAxis, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* yAxis) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74BFB0))(this, xAxis, yAxis);
  }
  void SetRawValue(float x, float y) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74C2D0))(this, x, y);
  }
  void SetRawValue(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74C360))(this, value);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74C380))(this);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74C470))(this);
  }
  void Deinitialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74C480))(this);
  }
  void EvalAndSendValueChangeEvents() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74C490))(this);
  }
  void Subscribe() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74C910))(this);
  }
  void Unsubscribe() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74CDB0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetCalibratedValue(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* xAxis, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* yAxis) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74D240))(this, xAxis, yAxis);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetCalibratedValuePrev(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* xAxis, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* yAxis) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74D410))(this, xAxis, yAxis);
  }
  void OnAxisValueChanged(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74D5A0))(this, value);
  }
  void OnAxisRawValueChanged(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x74D630))(this, value);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D* CreateRelative() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis2D*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x74D6B0))();
  }
};
}