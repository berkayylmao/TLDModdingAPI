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
struct __HIDGyroscope_Il2CppStaticFields {
};

struct __HIDGyroscope_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_UpdateValue;
  VirtualInvokeData _5_Update;
};

struct __HIDGyroscope_Il2CppClass {
  Il2CppClass_1 _1;
  __HIDGyroscope_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __HIDGyroscope_Il2CppVtbl vtbl;
};

class HIDGyroscope {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C74178;
  static inline    __HIDGyroscope_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __HIDGyroscope_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__HIDGyroscope_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __HIDGyroscope_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  uint8_t reportId;
  ModdingAPI::Exposed::Rewired::HID::HIDControllerElement::HIDInfo* hidInfo;
  ModdingAPI::Exposed::Rewired::HID::HIDControllerElementWithDataSet::iMXWXKnTyhEiEKmDMPZghDSaBMA* dataSet;
  float timestamp;
  ModdingAPI::Exposed::System::Single_array* lastRawValue;
  int32_t valueLength;
  ModdingAPI::Exposed::System::Byte_array* PcLOdZsbbCiHXzmlushWZCIPMVB;
  ModdingAPI::Exposed::System::Single_array* fusuHtNiOcuNNhxpWRhNyZJknUx;
  int32_t AJdmcefAtoEByIQEgByBZHUeTHpF;
  int32_t KTHfHIfsIEhkItdbsLlYmtnLLTs;
  ModdingAPI::Exposed::System::Action_T1__T2_* uuDZgOyqoJvNMuTdEJhJhgAZmQf;
  ModdingAPI::Exposed::System::Func_TResult_* bPivqJNkcccnyIRsoJFbGxlxIXWf;

  // Member methods:
  ModdingAPI::Exposed::System::Single_array* get_rawValue() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Single_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDGyroscope*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DDBC0))(this);
  }
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_T_* get_events() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ExpandableArray_DataContainer_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDGyroscope*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DDD90))(this);
  }
  void ::ctor(int32_t updateLoopSetting, uint8_t reportId, ModdingAPI::Exposed::Rewired::HID::HIDControllerElement::HIDInfo* hidInfo, int32_t valueLength, int32_t startingEventCapacity, ModdingAPI::Exposed::System::Action_T1__T2_* calcValueDelegate, ModdingAPI::Exposed::System::Func_TResult_* getSensorDeltaTimeDelegate) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDGyroscope*, int32_t, uint8_t, ModdingAPI::Exposed::Rewired::HID::HIDControllerElement::HIDInfo*, int32_t, int32_t, ModdingAPI::Exposed::System::Action_T1__T2_*, ModdingAPI::Exposed::System::Func_TResult_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DDF60))(this, updateLoopSetting, reportId, hidInfo, valueLength, startingEventCapacity, calcValueDelegate, getSensorDeltaTimeDelegate);
  }
  void UpdateValue(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer* inputReport, float timestamps) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HID::HIDGyroscope*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeBuffer*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DE320))(this, inputReport, timestamps);
  }
};
}