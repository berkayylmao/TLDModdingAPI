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


namespace ModdingAPI::Exposed::System::ComponentModel {
struct __DateTimeOffsetConverter_Il2CppStaticFields {
};

struct __DateTimeOffsetConverter_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CanConvertFrom;
  VirtualInvokeData _5_CanConvertTo;
  VirtualInvokeData _6_ConvertFrom;
  VirtualInvokeData _7_ConvertTo;
  VirtualInvokeData _8_CreateInstance;
  VirtualInvokeData _9_GetCreateInstanceSupported;
  VirtualInvokeData _10_GetProperties;
  VirtualInvokeData _11_GetPropertiesSupported;
  VirtualInvokeData _12_GetStandardValues;
  VirtualInvokeData _13_GetStandardValuesExclusive;
  VirtualInvokeData _14_GetStandardValuesSupported;
  VirtualInvokeData _15_IsValid;
};

struct __DateTimeOffsetConverter_Il2CppClass {
  Il2CppClass_1 _1;
  __DateTimeOffsetConverter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DateTimeOffsetConverter_Il2CppVtbl vtbl;
};

class DateTimeOffsetConverter {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C3CE28;
  static inline    DateTimeOffsetConverter* _pStaticObjectInstance = nullptr;

public:
// Singleton object getter:
  static inline DateTimeOffsetConverter* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (DateTimeOffsetConverter**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Il2Cpp fields:
  __DateTimeOffsetConverter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  bool CanConvertFrom(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Type* sourceType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::DateTimeOffsetConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD59D40))(this, context, sourceType);
  }
  bool CanConvertTo(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::DateTimeOffsetConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD59E20))(this, context, destinationType);
  }
  Il2CppObject* ConvertFrom(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, Il2CppObject* value) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::DateTimeOffsetConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD59F00))(this, context, culture, value);
  }
  Il2CppObject* ConvertTo(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, Il2CppObject* value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::DateTimeOffsetConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, Il2CppObject*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD5A240))(this, context, culture, value, destinationType);
  }
};
}