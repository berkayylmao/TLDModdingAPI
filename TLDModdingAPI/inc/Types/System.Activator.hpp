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
struct __Activator_Il2CppStaticFields {
};

struct __Activator_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Activator_Il2CppClass {
  Il2CppClass_1 _1;
  __Activator_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Activator_Il2CppVtbl vtbl;
};

class Activator {
public:
  // Il2Cpp fields:
  __Activator_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline Il2CppObject* CreateInstance(ModdingAPI::Exposed::System::Type* type, int32_t bindingAttr, ModdingAPI::Exposed::System::Reflection::Binder* binder, ModdingAPI::Exposed::System::Object_array* args, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, int32_t, ModdingAPI::Exposed::System::Reflection::Binder*, ModdingAPI::Exposed::System::Object_array*, ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE94220))(type, bindingAttr, binder, args, culture);
  }
  static inline Il2CppObject* CreateInstance(ModdingAPI::Exposed::System::Type* type, int32_t bindingAttr, ModdingAPI::Exposed::System::Reflection::Binder* binder, ModdingAPI::Exposed::System::Object_array* args, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, ModdingAPI::Exposed::System::Object_array* activationAttributes) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, int32_t, ModdingAPI::Exposed::System::Reflection::Binder*, ModdingAPI::Exposed::System::Object_array*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE94250))(type, bindingAttr, binder, args, culture, activationAttributes);
  }
  static inline Il2CppObject* CreateInstance(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::System::Object_array* args) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x649900))(type, args);
  }
  static inline Il2CppObject* CreateInstance(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::System::Object_array* args, ModdingAPI::Exposed::System::Object_array* activationAttributes) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Object_array*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE94490))(type, args, activationAttributes);
  }
  static inline Il2CppObject* CreateInstance(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE944C0))(type);
  }
  static inline Il2CppObject* CreateInstance(ModdingAPI::Exposed::System::Type* type, bool nonPublic) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Type*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE944D0))(type, nonPublic);
  }
};
}