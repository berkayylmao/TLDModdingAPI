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
#include "ModdingAPI::Exposed::System::Guid.hpp"
#include "ModdingAPI::Exposed::UnityPlugin::FILETIME.hpp"
#include "ModdingAPI::Exposed::UnityPlugin::SYSTEMTIME.hpp"


namespace ModdingAPI::Exposed::DataPlatform {
struct __DynamicEventPlugin_Il2CppStaticFields {
};

struct __DynamicEventPlugin_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __DynamicEventPlugin_Il2CppClass {
  Il2CppClass_1 _1;
  __DynamicEventPlugin_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DynamicEventPlugin_Il2CppVtbl vtbl;
};

class DynamicEventPlugin {
public:
  // Il2Cpp fields:
  __DynamicEventPlugin_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DataPlatform::DynamicEventPlugin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static methods:
  static inline intptr_t DynamicEvent_Create(System_String* name) {
    return reinterpret_cast<intptr_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F83A30))(name);
  }
  static inline void DynamicEvent_Dispose(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F83BB0))(self);
  }
  static inline bool DynamicEvent_AddParamBoolean(intptr_t self, System_String* name, bool value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F83C50))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamInt8(intptr_t self, System_String* name, char value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, char)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F83D20))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamUInt8(intptr_t self, System_String* name, uint8_t value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F83DF0))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamInt16(intptr_t self, System_String* name, int16_t value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, int16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F83EC0))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamUInt16(intptr_t self, System_String* name, uint16_t value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F83F90))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamInt32(intptr_t self, System_String* name, int32_t value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F84060))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamUInt32(intptr_t self, System_String* name, uint32_t value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F84120))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamFloat(intptr_t self, System_String* name, float value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F841E0))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamDouble(intptr_t self, System_String* name, double value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F842B0))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamInt64(intptr_t self, System_String* name, int64_t value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F84380))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamUInt64(intptr_t self, System_String* name, uint64_t value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, uint64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F84440))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamGUID(intptr_t self, System_String* name, ModdingAPI::Exposed::System::Guid value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F84500))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamFILETIME(intptr_t self, System_String* name, ModdingAPI::Exposed::UnityPlugin::FILETIME value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, ModdingAPI::Exposed::UnityPlugin::FILETIME)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F845D0))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamSYSTEMTIME(intptr_t self, System_String* name, ModdingAPI::Exposed::UnityPlugin::SYSTEMTIME value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, ModdingAPI::Exposed::UnityPlugin::SYSTEMTIME)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F84690))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamUnicodeString(intptr_t self, System_String* name, System_String* value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F84750))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamIPv4(intptr_t self, System_String* name, ModdingAPI::Exposed::System::Byte_array* value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F84820))(self, name, value);
  }
  static inline bool DynamicEvent_AddParamIPv6(intptr_t self, System_String* name, ModdingAPI::Exposed::System::Byte_array* value) {
    return reinterpret_cast<bool(__fastcall*)(intptr_t, System_String*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F848F0))(self, name, value);
  }
};
}