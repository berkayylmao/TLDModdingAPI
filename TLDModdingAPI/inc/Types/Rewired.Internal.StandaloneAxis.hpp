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


namespace ModdingAPI::Exposed::Rewired::Internal {
struct __StandaloneAxis_Il2CppStaticFields {
};

struct __StandaloneAxis_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __StandaloneAxis_Il2CppClass {
  Il2CppClass_1 _1;
  __StandaloneAxis_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StandaloneAxis_Il2CppVtbl vtbl;
};

class StandaloneAxis {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C724E8;
  static inline    __StandaloneAxis_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __StandaloneAxis_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__StandaloneAxis_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __StandaloneAxis_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  float _buttonActivationThreshold;
  ModdingAPI::Exposed::Rewired::AxisCalibration* _calibration;
  float _valueRaw;
  float _valueRawPrev;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler* ESAxWMFGXaCAXHDitLuepFFwJQ;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler* grKDJgjvpyDKnIgFSEfiCLGaBvdk;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler* zxumFlOHqxjraWVvjfKjftDAYtS;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler* LPDeDshFAjYnsQxtCxuDdRBegPc;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler* FuqKIRzipREIooNlRSrotJzpIkl;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler* ZTueURdrEdvkHVPOoAjEIbkyEcRa;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler* GjzKvBXGrQetJYzFIKjhpIJyZzL;
  ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler* InWJArXKkckIrqsJVwawTNWQulN;

  // Member methods:
  float get_buttonActivationThreshold() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5914A0))(this);
  }
  void set_buttonActivationThreshold(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5914B0))(this, value);
  }
  ModdingAPI::Exposed::Rewired::AxisCalibration* get_calibration() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::AxisCalibration*(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void vgRCCYhMLalUWERFJwLDlWzdAqRp(ModdingAPI::Exposed::Rewired::AxisCalibration* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::AxisCalibration*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5914E0))(this, );
  }
  float get_valueRaw() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x56ECC0))(this);
  }
  void DcUaWamtYLjiXwcPZtkxkKXdyhI(float ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5914F0))(this, );
  }
  float get_valueRawPrev() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591530))(this);
  }
  void GGkARATopavenmnKkTKBdebYZcO(float ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591540))(this, );
  }
  float get_valueRawDelta() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591550))(this);
  }
  float get_value() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591560))(this);
  }
  float get_valuePrev() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591580))(this);
  }
  float get_valueDelta() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5915A0))(this);
  }
  bool get_rawButtonValue() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591610))(this);
  }
  bool get_rawButtonValuePrev() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591620))(this);
  }
  bool get_buttonValue() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591630))(this);
  }
  bool get_buttonValuePrev() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591690))(this);
  }
  float get_rawMin() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5916F0))(this);
  }
  float get_rawMax() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591730))(this);
  }
  float get_rawZero() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591760))(this);
  }
  void EOtpRAwWMOuSnMXlFiLcTGnPxjl(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591780))(this, );
  }
  void pbMJEyuwCCKnpmXuHMbbcFdTGJG(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591870))(this, );
  }
  void add_AxisValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591780))(this, value);
  }
  void remove_AxisValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591870))(this, value);
  }
  void qbbEmlFRuxdkMcfwxkaKByqljUsA(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5919A0))(this, );
  }
  void HTtzbREfuwEapHhbShyIvZjJzIO(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591AB0))(this, );
  }
  void add_RawAxisValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5919A0))(this, value);
  }
  void remove_RawAxisValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::AxisValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591AB0))(this, value);
  }
  void jLauAOQRhXiSDPUbmTBejvBUKTk(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591BC0))(this, );
  }
  void AeAyuxWtrjLonCyYmEZlKYgbvFz(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591CB0))(this, );
  }
  void add_ButtonDownEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591BC0))(this, value);
  }
  void remove_ButtonDownEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591CB0))(this, value);
  }
  void rpMeDVKeWlixXfuEPbjbGpKdsFTE(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591DB0))(this, );
  }
  void NnyChXcUSXsrEnHpKhXwmopTTcc(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591EC0))(this, );
  }
  void add_ButtonUpEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591DB0))(this, value);
  }
  void remove_ButtonUpEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591EC0))(this, value);
  }
  void fVGTDjHDsiuEcdsYgxhZbmrzFNKe(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591FC0))(this, );
  }
  void psZnMxXuRcgUNOKsCfoHXxbvSab(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5920E0))(this, );
  }
  void add_ButtonValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591FC0))(this, value);
  }
  void remove_ButtonValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5920E0))(this, value);
  }
  void nzOirjBXJQztsTRdWKSbEyclLvF(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5921F0))(this, );
  }
  void WzefyHkcSOgTCdFljlsiyCippMwB(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592300))(this, );
  }
  void add_RawButtonDownEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5921F0))(this, value);
  }
  void remove_RawButtonDownEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonDownEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592300))(this, value);
  }
  void WjMaxAaPkpOfxnJNbHioVhnlTaKu(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592420))(this, );
  }
  void MsuOnKEDSKfQmzInehSAYgvNztX(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592520))(this, );
  }
  void add_RawButtonUpEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592420))(this, value);
  }
  void remove_RawButtonUpEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonUpEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592520))(this, value);
  }
  void LzrAOxErOmjqlZceRTPqYOkcGEOG(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592630))(this, );
  }
  void hgtTBxtIZPdhxAIEdEcjHYWDctQ(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592730))(this, );
  }
  void add_RawButtonValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592630))(this, value);
  }
  void remove_RawButtonValueChangedEvent(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis::ButtonValueChangedEventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592730))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592820))(this);
  }
  void SetRawValue(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592970))(this, value);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x592DB0))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis* CreateRelative() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Internal::StandaloneAxis*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x592DE0))();
  }
};
}