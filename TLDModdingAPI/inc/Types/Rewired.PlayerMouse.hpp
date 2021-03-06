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
#include "ModdingAPI.Exposed.Rewired.Utils.Classes.Data.ScreenRect.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed::Rewired {
struct __PlayerMouse_Il2CppStaticFields {
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ScreenRect pKyXGqCAIAbcBmTluDrpBgvSfUbC;
  ModdingAPI::Exposed::System::Predicate_T_* YCSdvkgZyaVedIqsxdgrGakHaFHI;
  ModdingAPI::Exposed::System::Predicate_T_* mKLKqNybslTdtDSQPWqhwnKnaDXc;
};

struct __PlayerMouse_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_enabled;
  VirtualInvokeData _5_set_enabled;
  VirtualInvokeData _6_get_playerId;
  VirtualInvokeData _7_set_playerId;
  VirtualInvokeData _8_get_buttons;
  VirtualInvokeData _9_get_axes;
  VirtualInvokeData _10_get_elements;
  VirtualInvokeData _11_get_buttonCount;
  VirtualInvokeData _12_get_axisCount;
  VirtualInvokeData _13_get_elementCount;
  VirtualInvokeData _14_add_ButtonStateChangedEvent;
  VirtualInvokeData _15_remove_ButtonStateChangedEvent;
  VirtualInvokeData _16_add_AxisValueChangedEvent;
  VirtualInvokeData _17_remove_AxisValueChangedEvent;
  VirtualInvokeData _18_add_EnabledStateChangedEvent;
  VirtualInvokeData _19_remove_EnabledStateChangedEvent;
  VirtualInvokeData _20_GetButton;
  VirtualInvokeData _21_GetButtonDown;
  VirtualInvokeData _22_GetButtonUp;
  VirtualInvokeData _23_GetAxis;
  VirtualInvokeData _24_GetAxisRaw;
  VirtualInvokeData _25_GetElement;
  VirtualInvokeData _26_GetElement;
  VirtualInvokeData _27_Update;
  VirtualInvokeData _28_UpdateFinished;
  VirtualInvokeData _29_ClearVars;
  VirtualInvokeData _30_get_defaultToCenter;
  VirtualInvokeData _31_get_movementArea;
  VirtualInvokeData _32_set_movementArea;
  VirtualInvokeData _33_get_movementAreaUnit;
  VirtualInvokeData _34_set_movementAreaUnit;
  VirtualInvokeData _35_get_screenPosition;
  VirtualInvokeData _36_get_screenPositionPrev;
  VirtualInvokeData _37_get_screenPositionDelta;
  VirtualInvokeData _38_get_xAxis;
  VirtualInvokeData _39_get_yAxis;
  VirtualInvokeData _40_get_wheel;
  VirtualInvokeData _41_get_leftButton;
  VirtualInvokeData _42_get_rightButton;
  VirtualInvokeData _43_get_middleButton;
  VirtualInvokeData _44_get_pointerSpeed;
  VirtualInvokeData _45_get_useHardwarePointerPosition;
  VirtualInvokeData _46_add_ScreenPositionChangedEvent;
  VirtualInvokeData _47_remove_ScreenPositionChangedEvent;
  VirtualInvokeData _49_Rewired_UI_IMouseInputSource_get_enabled;
  VirtualInvokeData _50_Rewired_UI_IMouseInputSource_get_locked;
  VirtualInvokeData _52_Rewired_UI_IMouseInputSource_GetButtonDown;
  VirtualInvokeData _53_Rewired_UI_IMouseInputSource_GetButtonUp;
  VirtualInvokeData _54_Rewired_UI_IMouseInputSource_GetButton;
  VirtualInvokeData _55_Rewired_UI_IMouseInputSource_get_screenPosition;
  VirtualInvokeData _56_Rewired_UI_IMouseInputSource_get_screenPositionDelta;
  VirtualInvokeData _57_Rewired_UI_IMouseInputSource_get_wheelDelta;
};

struct __PlayerMouse_Il2CppClass {
  Il2CppClass_1 _1;
  __PlayerMouse_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PlayerMouse_Il2CppVtbl vtbl;
};

class PlayerMouse {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C93398;
  static inline    __PlayerMouse_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __PlayerMouse_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PlayerMouse_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PlayerMouse_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t CtWHpgOaCVZYpcBzymhejPsalLW;
  bool PlayerController_yIozJzFkooRCrVDgMYuKERLjtKT;
  int32_t PlayerController_RQvCtWMSaXdtWuElfcQyltnGehm;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::AList_T_* PlayerController_zDYSoPuWRIUrndraUwJpaRdSJEG;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::AList_T_* PlayerController_KVNyFuTeDYMEfZfzXNZSFyiUjOz;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::AList_T_* PlayerController_ygKoSRPvlhFHNugDEHnHEFOaPysU;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* PlayerController_BOLhTANJNrAyZcBkNpOGdedkKspm;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* PlayerController_dFHovyHkekMsXyCKWzTPLFQzuLf;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* PlayerController_qRvwjQLeRXtQWAsIHTXHSDttcbM;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* PlayerController_FxRWPqQfHCtkeFiDDbkgBJhYVnI;
  ModdingAPI::Exposed::System::Action_T1__T2_* PlayerController_pJJgLlGdrDeIPEXcbbLhDGNqGVlS;
  ModdingAPI::Exposed::System::Action_T1__T2_* PlayerController_ESAxWMFGXaCAXHDitLuepFFwJQ;
  ModdingAPI::Exposed::System::Action_T_* PlayerController_qFVtdtZKINIugHapYAWZixKJblw;
  int32_t dWRCNGxieVxgBLXQMXmfGgdILTQ;
  int32_t HOjYAhDgpljYgImwwimHPEFcpao;
  int32_t lEQNpPKYGRClhZPrgbfVmRPQSJS;
  int32_t fqJFdObRTnoIIppSfhNjBrLFrgoH;
  int32_t RwaZjkoWXSlhILnzGrAqQksPzTZ;
  int32_t GiMceKYTzdMLKIWxGdWgQczuTHV;
  bool bUyKLtEOzHlIWCSXqhSUVhRgZvy;
  ModdingAPI::Exposed::UnityEngine::Vector2 ewEfnjaHEXQeyDhwGBIyPSCRAJYi;
  ModdingAPI::Exposed::UnityEngine::Vector2 rdICODotkIgPAKPLcrFQJqzqCgy;
  ModdingAPI::Exposed::UnityEngine::Vector2 BmCgoGBixBptBWetIsFMqoGUWXlL;
  ModdingAPI::Exposed::UnityEngine::Vector2 HFXydOmuCDohqYKgnDabKlyeyGW;
  ModdingAPI::Exposed::UnityEngine::Vector2 ErZphSRRWdPtCmegYbspjpwlIoDG;
  float CqugyKpWNsCwBFYxSVTMnWcYvxT;
  bool DQmqVUlVBteipRuulUSvyzfbOtj;
  ModdingAPI::Exposed::System::Action_T_* fFQSBWmCvrrZcsdXRyclzueUUEe;
  bool wRVqLebtsONSHRRLNDjcELiKEQI;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ScreenRect bkHKeoNMwNFDyeawCefyGbYhGeCI;
  int32_t CHdYYxYMbaSDtHWMkOSFEDzoeZB;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::Rewired::PlayerMouse::Definition* definition) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, ModdingAPI::Exposed::Rewired::PlayerMouse::Definition*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x611F90))(this, definition);
  }
  bool get_defaultToCenter() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x612C90))(this);
  }
  void set_defaultToCenter(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x612D80))(this, value);
  }
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ScreenRect get_movementArea() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ScreenRect(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x612D90))(this);
  }
  void set_movementArea(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ScreenRect value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ScreenRect)>(Helpers::Memory::GetInstance().MakeAbsolute(0x612EC0))(this, value);
  }
  int32_t get_movementAreaUnit() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x612ED0))(this);
  }
  void set_movementAreaUnit(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EFC60))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_screenPosition() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x612FC0))(this);
  }
  void set_screenPosition(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6130F0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_screenPositionPrev() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x613100))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_screenPositionDelta() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x613240))(this);
  }
  ModdingAPI::Exposed::Rewired::PlayerController::MouseAxis* get_xAxis() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::PlayerController::MouseAxis*(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x613370))(this);
  }
  ModdingAPI::Exposed::Rewired::PlayerController::MouseAxis* get_yAxis() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::PlayerController::MouseAxis*(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x613490))(this);
  }
  ModdingAPI::Exposed::Rewired::PlayerController::MouseWheel* get_wheel() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::PlayerController::MouseWheel*(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6135B0))(this);
  }
  ModdingAPI::Exposed::Rewired::PlayerController::Button* get_leftButton() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::PlayerController::Button*(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6136F0))(this);
  }
  ModdingAPI::Exposed::Rewired::PlayerController::Button* get_rightButton() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::PlayerController::Button*(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x613800))(this);
  }
  ModdingAPI::Exposed::Rewired::PlayerController::Button* get_middleButton() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::PlayerController::Button*(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x613910))(this);
  }
  float get_pointerSpeed() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x613A20))(this);
  }
  void set_pointerSpeed(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x613B10))(this, value);
  }
  bool get_useHardwarePointerPosition() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x613C50))(this);
  }
  void set_useHardwarePointerPosition(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x613D40))(this, value);
  }
  void add_ScreenPositionChangedEvent(ModdingAPI::Exposed::System::Action_T_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, ModdingAPI::Exposed::System::Action_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x613E60))(this, value);
  }
  void remove_ScreenPositionChangedEvent(ModdingAPI::Exposed::System::Action_T_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, ModdingAPI::Exposed::System::Action_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x613F80))(this, value);
  }
  bool Update(int32_t updateLoop) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x614040))(this, updateLoop);
  }
  void UpdateFinished() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6145A0))(this);
  }
  void ClearVars() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6146B0))(this);
  }
  void lzMlDFKxDnLdufXnxLCnRmpGcVW(ModdingAPI::Exposed::UnityEngine::Vector2 ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x614830))(this, );
  }
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ScreenRect JdbvOqdybtpVzNhUirbzkhsFtHS() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ScreenRect(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x614AF0))(this);
  }
  void VRDeTGwAsHDNFazWiPLTHChoeLn() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x614DA0))(this);
  }
  bool Rewired::UI::IMouseInputSource::get_enabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x614EE0))(this);
  }
  bool Rewired::UI::IMouseInputSource::GetButtonDown(int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x614EF0))(this, );
  }
  bool Rewired::UI::IMouseInputSource::GetButtonUp(int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x614F00))(this, );
  }
  bool Rewired::UI::IMouseInputSource::GetButton(int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x614F10))(this, );
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 Rewired::UI::IMouseInputSource::get_screenPosition() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x614F20))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 Rewired::UI::IMouseInputSource::get_screenPositionDelta() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x614F40))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 Rewired::UI::IMouseInputSource::get_wheelDelta() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x614F60))(this);
  }
  bool Rewired::UI::IMouseInputSource::get_locked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerMouse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ScreenRect> pKyXGqCAIAbcBmTluDrpBgvSfUbC = __CppStaticProperty<ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ScreenRect>(
   []() { return &GetStaticClassInstance()->pStaticFields->pKyXGqCAIAbcBmTluDrpBgvSfUbC; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Predicate_T_*> YCSdvkgZyaVedIqsxdgrGakHaFHI = __CppStaticProperty<ModdingAPI::Exposed::System::Predicate_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->YCSdvkgZyaVedIqsxdgrGakHaFHI; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Predicate_T_*> mKLKqNybslTdtDSQPWqhwnKnaDXc = __CppStaticProperty<ModdingAPI::Exposed::System::Predicate_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->mKLKqNybslTdtDSQPWqhwnKnaDXc; }
  );

  // Static methods:
  static inline float uABVSTOCXJWWXSJoLcLyjwABAXv(ModdingAPI::Exposed::Rewired::PlayerController::Axis* , float , float ) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerController::Axis*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x614E80))(, , );
  }
  static inline bool nTbQgmWmFCxRwYXMbkmnLukRuwY(ModdingAPI::Exposed::Rewired::PlayerController::Axis* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerController::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x615040))();
  }
  static inline bool MJJtBATgJYKcIEmnhOBhMGnnGw(ModdingAPI::Exposed::Rewired::PlayerController::Axis* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerController::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x615130))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x615220))();
  }
};
}