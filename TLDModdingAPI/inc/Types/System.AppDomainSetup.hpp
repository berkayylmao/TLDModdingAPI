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


namespace ModdingAPI::Exposed::System {
struct __AppDomainSetup_Il2CppStaticFields {
};

struct __AppDomainSetup_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AppDomainSetup_Il2CppClass {
  Il2CppClass_1 _1;
  __AppDomainSetup_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AppDomainSetup_Il2CppVtbl vtbl;
};

class AppDomainSetup {
public:
  // Il2Cpp fields:
  __AppDomainSetup_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* application_base;
  System_String* application_name;
  System_String* cache_path;
  System_String* configuration_file;
  System_String* dynamic_base;
  System_String* license_file;
  System_String* private_bin_path;
  System_String* private_bin_path_probe;
  System_String* shadow_copy_directories;
  System_String* shadow_copy_files;
  bool publisher_policy;
  bool path_changed;
  int32_t loader_optimization;
  bool disallow_binding_redirects;
  bool disallow_code_downloads;
  Il2CppObject* _activationArguments;
  Il2CppObject* domain_initializer;
  Il2CppObject* application_trust;
  ModdingAPI::Exposed::System::String_array* domain_initializer_args;
  bool disallow_appbase_probe;
  ModdingAPI::Exposed::System::Byte_array* configuration_bytes;
  ModdingAPI::Exposed::System::Byte_array* serialized_non_primitives;
  System_String* _TargetFrameworkName_k__BackingField;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::AppDomainSetup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
};
}