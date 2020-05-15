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
struct __EnumConverter_Il2CppStaticFields {
};

struct __EnumConverter_Il2CppVtbl {
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
  VirtualInvokeData _16_get_Comparer;
};

struct __EnumConverter_Il2CppClass {
  Il2CppClass_1 _1;
  __EnumConverter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __EnumConverter_Il2CppVtbl vtbl;
};

class EnumConverter {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C3C090;
  static inline    EnumConverter* _pStaticObjectInstance = nullptr;

public:
// Singleton object getter:
  static inline EnumConverter* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (EnumConverter**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Il2Cpp fields:
  __EnumConverter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::ComponentModel::TypeConverter::StandardValuesCollection* values;
  ModdingAPI::Exposed::System::Type* type;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Type* type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD5F5A0))(this, type);
  }
  ModdingAPI::Exposed::System::Type* get_EnumType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  ModdingAPI::Exposed::System::ComponentModel::TypeConverter::StandardValuesCollection* get_Values() {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::TypeConverter::StandardValuesCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void set_Values(ModdingAPI::Exposed::System::ComponentModel::TypeConverter::StandardValuesCollection* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*, ModdingAPI::Exposed::System::ComponentModel::TypeConverter::StandardValuesCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, value);
  }
  bool CanConvertFrom(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Type* sourceType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD5F650))(this, context, sourceType);
  }
  bool CanConvertTo(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD5F760))(this, context, destinationType);
  }
  ModdingAPI::Exposed::System::Collections::IComparer* get_Comparer() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IComparer*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD5F870))(this);
  }
  Il2CppObject* ConvertFrom(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, Il2CppObject* value) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD5F910))(this, context, culture, value);
  }
  Il2CppObject* ConvertTo(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, Il2CppObject* value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, Il2CppObject*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD5FD90))(this, context, culture, value, destinationType);
  }
  ModdingAPI::Exposed::System::ComponentModel::TypeConverter::StandardValuesCollection* GetStandardValues(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::TypeConverter::StandardValuesCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD60B90))(this, context);
  }
  bool GetStandardValuesExclusive(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD610C0))(this, context);
  }
  bool GetStandardValuesSupported(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this, context);
  }
  bool IsValid(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, Il2CppObject* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::EnumConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD611A0))(this, context, value);
  }
};
}