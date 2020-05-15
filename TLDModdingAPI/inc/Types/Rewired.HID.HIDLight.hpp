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


namespace ModdingAPI::Exposed::Rewired::HID {
struct __HIDLight_Il2CppStaticFields {
};

struct __HIDLight_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __HIDLight_Il2CppClass {
  Il2CppClass_1 _1;
  __HIDLight_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __HIDLight_Il2CppVtbl vtbl;
};

class HIDLight {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C75070;
  static inline    __HIDLight_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __HIDLight_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__HIDLight_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __HIDLight_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  uint8_t KrJZDgkqkPjzOErWClfohQnUIiy;
  uint8_t inMrYeOdvOFoaCNaTKkOvPvouHm;
  uint8_t LyMfUSMltfEofxZhZpHyCcCUjfC;
  ModdingAPI::Exposed::System::Action* wYVoFhuhmjjaVjlueLnhoZBvjZO;

  // Member methods:
  float get_ColorR() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DFBF0))(this);
  }
  void set_ColorR(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DFC10))(this, value);
  }
  float get_ColorG() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DFC80))(this);
  }
  void set_ColorG(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DFCA0))(this, value);
  }
  float get_ColorB() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DFD10))(this);
  }
  void set_ColorB(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DFD30))(this, value);
  }
  uint8_t get_ColorRRaw() {
    return reinterpret_cast<uint8_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33C2C0))(this);
  }
  void set_ColorRRaw(uint8_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DFD90))(this, value);
  }
  uint8_t get_ColorGRaw() {
    return reinterpret_cast<uint8_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33CD00))(this);
  }
  void set_ColorGRaw(uint8_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E0150))(this, value);
  }
  uint8_t get_ColorBRaw() {
    return reinterpret_cast<uint8_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310E30))(this);
  }
  void set_ColorBRaw(uint8_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E0500))(this, value);
  }
  void add_ValueChangedEvent(ModdingAPI::Exposed::System::Action* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*, ModdingAPI::Exposed::System::Action*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E0520))(this, value);
  }
  void remove_ValueChangedEvent(ModdingAPI::Exposed::System::Action* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*, ModdingAPI::Exposed::System::Action*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E0630))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor(uint8_t colorRRaw, uint8_t colorGRaw, uint8_t colorBRaw) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDLight*, uint8_t, uint8_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E0760))(this, colorRRaw, colorGRaw, colorBRaw);
  }
};
}