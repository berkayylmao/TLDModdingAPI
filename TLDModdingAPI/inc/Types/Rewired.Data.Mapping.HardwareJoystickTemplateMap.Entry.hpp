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


namespace ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickTemplateMap {
struct __Entry_Il2CppStaticFields {
};

struct __Entry_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Entry_Il2CppClass {
  Il2CppClass_1 _1;
  __Entry_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Entry_Il2CppVtbl vtbl;
};

class Entry {
public:
  // Il2Cpp fields:
  __Entry_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t id;
  System_String* name;
  System_String* joystickGuid;
  System_String* fileGuid;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* elementIdentifierMappings;

  // Member methods:
  ModdingAPI::Exposed::System::Guid get_JoystickGuid() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Entry*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3394F0))(this);
  }
  int32_t GetJoystickElementId(int32_t templateElementId) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Entry*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x339610))(this, templateElementId);
  }
  int32_t GetTemplateElementId(int32_t joystickElementId) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Entry*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x339750))(this, joystickElementId);
  }
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickTemplateMap::ElementIdentifierMap* GetElementIdentifierMap(int32_t templateId) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickTemplateMap::ElementIdentifierMap*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Entry*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3398D0))(this, templateId);
  }
  void GetElementIdentifierMaps(int32_t templateId, ModdingAPI::Exposed::System::Collections::Generic::List_T_* results) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Entry*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x339A20))(this, templateId, results);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickTemplateMap::Entry*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
};
}