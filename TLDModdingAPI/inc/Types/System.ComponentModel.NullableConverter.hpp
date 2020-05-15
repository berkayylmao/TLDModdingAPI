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
struct __NullableConverter_Il2CppStaticFields {
};

struct __NullableConverter_Il2CppVtbl {
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

struct __NullableConverter_Il2CppClass {
  Il2CppClass_1 _1;
  __NullableConverter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NullableConverter_Il2CppVtbl vtbl;
};

class NullableConverter {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C3C710;
  static inline    NullableConverter* _pStaticObjectInstance = nullptr;

public:
// Singleton object getter:
  static inline NullableConverter* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (NullableConverter**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Il2Cpp fields:
  __NullableConverter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Type* nullableType;
  ModdingAPI::Exposed::System::Type* simpleType;
  ModdingAPI::Exposed::System::ComponentModel::TypeConverter* simpleTypeConverter;

  // Member methods:
  bool CanConvertFrom(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Type* sourceType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::NullableConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBFAB0))(this, context, sourceType);
  }
  Il2CppObject* ConvertFrom(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, Il2CppObject* value) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::NullableConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBFBA0))(this, context, culture, value);
  }
  bool CanConvertTo(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::NullableConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBFCF0))(this, context, destinationType);
  }
  Il2CppObject* ConvertTo(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, Il2CppObject* value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::NullableConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, Il2CppObject*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEBFE10))(this, context, culture, value, destinationType);
  }
  Il2CppObject* CreateInstance(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Collections::IDictionary* propertyValues) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::NullableConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Collections::IDictionary*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEC0230))(this, context, propertyValues);
  }
  bool GetCreateInstanceSupported(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::NullableConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEC0250))(this, context);
  }
  ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection* GetProperties(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, Il2CppObject* value, ModdingAPI::Exposed::System::Attribute_array* attributes) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::NullableConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, Il2CppObject*, ModdingAPI::Exposed::System::Attribute_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEC0270))(this, context, value, attributes);
  }
  bool GetPropertiesSupported(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::NullableConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEC02A0))(this, context);
  }
  ModdingAPI::Exposed::System::ComponentModel::TypeConverter::StandardValuesCollection* GetStandardValues(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::TypeConverter::StandardValuesCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::NullableConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEC02C0))(this, context);
  }
  bool GetStandardValuesExclusive(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::NullableConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEC0610))(this, context);
  }
  bool GetStandardValuesSupported(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::NullableConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEC0630))(this, context);
  }
  bool IsValid(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, Il2CppObject* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::NullableConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEC0650))(this, context, value);
  }
};
}