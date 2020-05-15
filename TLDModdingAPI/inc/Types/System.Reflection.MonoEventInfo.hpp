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
#include "ModdingAPI.Exposed.System.Reflection.MonoEventInfo.hpp"

namespace ModdingAPI::Exposed::System::Reflection {
struct __MonoEventInfo_Il2CppObject {
  ModdingAPI::Exposed::System::Type* declaring_type;
  ModdingAPI::Exposed::System::Type* reflected_type;
  System_String* name;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* add_method;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* remove_method;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* raise_method;
  int32_t attrs;
  ModdingAPI::Exposed::System::Reflection::MethodInfo_array* other_methods;
};
struct __MonoEventInfo_Il2CppStaticFields {
};

struct __MonoEventInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __MonoEventInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __MonoEventInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MonoEventInfo_Il2CppVtbl vtbl;
};

class MonoEventInfo {
public:
  // Member fields:
  ModdingAPI::Exposed::System::Type* declaring_type;
  ModdingAPI::Exposed::System::Type* reflected_type;
  System_String* name;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* add_method;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* remove_method;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* raise_method;
  int32_t attrs;
  ModdingAPI::Exposed::System::Reflection::MethodInfo_array* other_methods;

  // Static methods:
  static inline void get_event_info(ModdingAPI::Exposed::System::Reflection::MonoEvent* ev, ModdingAPI::Exposed::System::Reflection::MonoEventInfo info) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MonoEvent*, ModdingAPI::Exposed::System::Reflection::MonoEventInfo)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF22C90))(ev, info);
  }
  static inline ModdingAPI::Exposed::System::Reflection::MonoEventInfo GetEventInfo(ModdingAPI::Exposed::System::Reflection::MonoEvent* ev) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MonoEventInfo(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MonoEvent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF22DA0))(ev);
  }

};
}