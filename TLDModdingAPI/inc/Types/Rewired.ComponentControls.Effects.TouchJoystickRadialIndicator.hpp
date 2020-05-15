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


namespace ModdingAPI::Exposed::Rewired::ComponentControls::Effects {
struct __TouchJoystickRadialIndicator_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Vector2 QfcAtDCATMeXTHTFNQGXDpmhHBzn;
};

struct __TouchJoystickRadialIndicator_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Rewired_Utils_Interfaces_IRegistrar_Rewired_ComponentControls_Effects_TouchJoystickAngleIndicator__Register;
  VirtualInvokeData _5_Rewired_Utils_Interfaces_IRegistrar_Rewired_ComponentControls_Effects_TouchJoystickAngleIndicator__Deregister;
};

struct __TouchJoystickRadialIndicator_Il2CppClass {
  Il2CppClass_1 _1;
  __TouchJoystickRadialIndicator_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TouchJoystickRadialIndicator_Il2CppVtbl vtbl;
};

class TouchJoystickRadialIndicator {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C765B0;
  static inline    __TouchJoystickRadialIndicator_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TouchJoystickRadialIndicator_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TouchJoystickRadialIndicator_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TouchJoystickRadialIndicator_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool _scale;
  bool _preserveSpriteAspectRatio;
  float _scaleRatio;
  float _aspectRatioX;
  float _aspectRatioY;
  float _offset;
  ModdingAPI::Exposed::UnityEngine::RectTransform* CPzgcAdQAUyDKSvlanuAORDOrlYH;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* OVwLIXTBrOjAhsXGwtsprKOnhGG;

  // Member methods:
  bool get_scale() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x318510))(this);
  }
  void set_scale(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04360))(this, value);
  }
  bool get_preserveSpriteAspectRatio() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x580F70))(this);
  }
  void set_preserveSpriteAspectRatio(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04370))(this, value);
  }
  float get_scaleRatio() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x79C3E0))(this);
  }
  void set_scaleRatio(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04380))(this, value);
  }
  float get_aspectRatioX() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x56ECC0))(this);
  }
  void set_aspectRatioX(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA043C0))(this, value);
  }
  float get_aspectRatioY() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x591530))(this);
  }
  void set_aspectRatioY(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04400))(this, value);
  }
  float get_offset() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x56ED60))(this);
  }
  void set_offset(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04440))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::RectTransform* get_rectTransform() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RectTransform*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA044A0))(this);
  }
  void Rewired::Utils::Interfaces::IRegistrar_Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator_::Register(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*, ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04530))(this, );
  }
  void Rewired::Utils::Interfaces::IRegistrar_Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator_::Deregister(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*, ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04690))(this, );
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04760))(this);
  }
  void OnValidate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04770))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04760))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04800))(this);
  }
  void tMAdfqXWyHevBeNRfIAAHkQlUwJ() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA048B0))(this);
  }
  void vTOahQXacnzisJJKUVNVBAAmZEa(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*, ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickAngleIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04A50))(this, );
  }
  void PvdPUQDXNMdWgjgPyaHetBdjfAt() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA04760))(this);
  }
  void QhQPRFgEUTDGYSaZqFHGUEQHCot() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05070))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Effects::TouchJoystickRadialIndicator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA05340))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector2> QfcAtDCATMeXTHTFNQGXDpmhHBzn = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector2>(
   []() { return &GetStaticClassInstance()->pStaticFields->QfcAtDCATMeXTHTFNQGXDpmhHBzn; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA054F0))();
  }
};
}