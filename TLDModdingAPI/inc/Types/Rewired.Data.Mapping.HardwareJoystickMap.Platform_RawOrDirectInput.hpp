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


namespace ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap {
struct __Platform_RawOrDirectInput_Il2CppStaticFields {
};

struct __Platform_RawOrDirectInput_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _8_get_controllerNameOverride;
  VirtualInvokeData _10_get_isAllowed;
  VirtualInvokeData _16_get_hasData;
  VirtualInvokeData _17_get_disabled;
  VirtualInvokeData _24_DeepClone;
  VirtualInvokeData _25_CopyVars;
  VirtualInvokeData _65535__ctor;
};

struct __Platform_RawOrDirectInput_Il2CppClass {
  Il2CppClass_1 _1;
  __Platform_RawOrDirectInput_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Platform_RawOrDirectInput_Il2CppVtbl vtbl;
};

class Platform_RawOrDirectInput {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C584E0;
  static inline    __Platform_RawOrDirectInput_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Platform_RawOrDirectInput_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Platform_RawOrDirectInput_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Platform_RawOrDirectInput_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* description;
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_RawOrDirectInput::MatchingCriteria* matchingCriteria;

  // Member methods:
  bool get_hasData() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_RawOrDirectInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x32CB00))(this);
  }
  bool get_disabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_RawOrDirectInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x327200))(this);
  }
  bool get_isAllowed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_RawOrDirectInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x32CB70))(this);
  }
  void CopyVars(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform* destination) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_RawOrDirectInput*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C4C80))(this, destination);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_RawOrDirectInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
};
}