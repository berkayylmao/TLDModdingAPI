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
#include "ModdingAPI.Exposed.UQIzBNUszejlctEasGpMEKwFczKA.hpp"


namespace ModdingAPI::Exposed::Rewired::Platforms::XboxOne {
struct __XboxOneInputSource_Il2CppStaticFields {
};

struct __XboxOneInputSource_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_OnJoystickConnected;
  VirtualInvokeData _6_OnJoystickDisconnected;
  VirtualInvokeData _7_Dispose;
  VirtualInvokeData _8_Dispose;
  VirtualInvokeData _9_get_isReady;
  VirtualInvokeData _10_Update;
  VirtualInvokeData _11_GetXboxOneUserIdFromUnityJoystick;
  VirtualInvokeData _12_SetXboxOneVibration;
  VirtualInvokeData _13_PulseVibrateMotor;
};

struct __XboxOneInputSource_Il2CppClass {
  Il2CppClass_1 _1;
  __XboxOneInputSource_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XboxOneInputSource_Il2CppVtbl vtbl;
};

class XboxOneInputSource {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C937F8;
  static inline    __XboxOneInputSource_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XboxOneInputSource_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XboxOneInputSource_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XboxOneInputSource_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t CustomInputSource_iivlsFZfFuktOzGumGJRhPDgqJka;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* CustomInputSource_ztJHgDwBWRXJwZkxicTVCCQyscZQ;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* CustomInputSource_MYqtqBOJTHfZqiqkHOyAlIzrJXoI;
  bool CustomInputSource_CjRyEOQgggIeQJtxAqYucsKSPna;
  ModdingAPI::Exposed::System::Action* CustomInputSource_jeffDOKkXzVeWGDSRtXVjkzSeOe;
  ModdingAPI::Exposed::System::Action* CustomInputSource_ChqvEyPSewJEwVDVQCgLGHCRayU;
  bool CustomInputSource_IPjKDfWEXfJCxnkfIfovlZZlcJe;
  bool lUcIGCLIWkCmWeInmyFcCPqJaTE;
  bool KjUchMmYiaMIYgtsjIAWngiLCrY;
  ModdingAPI::Exposed::System::Collections::Generic::Queue_T_* rySeNyOqxswswXrRwqtbgyTdbqq;
  bool IPjKDfWEXfJCxnkfIfovlZZlcJe;

  // Member methods:
  bool get_isReady() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4EFF30))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB7F440))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB7F890))(this);
  }
  void rrdpwjGxBJlstdbJpGoddllpLpAL(uint32_t , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*, uint32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB7FA50))(this, , );
  }
  void DqdstyfOXmQJEaKNbNWCmJWxIvF(uint32_t , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*, uint32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB7FC10))(this, , );
  }
  void sCIRljhPTStXwXVCDTYRvJOqOCQ() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB7FEC0))(this);
  }
  bool DlsKNrHsnscnsSnXivunPMONjvJ(uint32_t , bool , int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*, uint32_t, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB80240))(this, , , );
  }
  void NghfMYAwxGtrgozBByqutlqqhEs() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB80540))(this);
  }
  int32_t GetXboxOneUserIdFromUnityJoystick(int32_t unityJoystickId) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB80600))(this, unityJoystickId);
  }
  void PulseVibrateMotor(uint64_t xboxOneJoystickId, int32_t motor, float startLevel, float endLevel, float duration) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*, uint64_t, int32_t, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB806E0))(this, xboxOneJoystickId, motor, startLevel, endLevel, duration);
  }
  bool SetXboxOneVibration(uint64_t xboxOneJoystickId, ModdingAPI::Exposed::UQIzBNUszejlctEasGpMEKwFczKA vibration) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*, uint64_t, ModdingAPI::Exposed::UQIzBNUszejlctEasGpMEKwFczKA)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB80880))(this, xboxOneJoystickId, vibration);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB80A10))(this);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB80BC0))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::XboxOne::XboxOneInputSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB80C60))(this, disposing);
  }
};
}