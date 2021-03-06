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
struct __TypeConverter_Il2CppStaticFields {
  bool useCompatibleTypeConversion;
};

struct __TypeConverter_Il2CppVtbl {
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

struct __TypeConverter_Il2CppClass {
  Il2CppClass_1 _1;
  __TypeConverter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TypeConverter_Il2CppVtbl vtbl;
};

class TypeConverter {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C922D0;
  static inline    TypeConverter* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C364E0;
  static inline    __TypeConverter_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline TypeConverter* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (TypeConverter**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __TypeConverter_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TypeConverter_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TypeConverter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  bool CanConvertFrom(ModdingAPI::Exposed::System::Type* sourceType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED3CA0))(this, sourceType);
  }
  bool CanConvertFrom(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Type* sourceType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED3CC0))(this, context, sourceType);
  }
  bool CanConvertTo(ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED3D70))(this, destinationType);
  }
  bool CanConvertTo(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED3D90))(this, context, destinationType);
  }
  Il2CppObject* ConvertFrom(Il2CppObject* value) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED3E40))(this, value);
  }
  Il2CppObject* ConvertFrom(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, Il2CppObject* value) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED3F20))(this, context, culture, value);
  }
  Il2CppObject* ConvertFromInvariantString(System_String* text) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED3FE0))(this, text);
  }
  Il2CppObject* ConvertFromInvariantString(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, System_String* text) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED40B0))(this, context, text);
  }
  Il2CppObject* ConvertFromString(System_String* text) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED4180))(this, text);
  }
  Il2CppObject* ConvertFromString(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, System_String* text) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED41B0))(this, context, text);
  }
  Il2CppObject* ConvertFromString(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, System_String* text) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED42A0))(this, context, culture, text);
  }
  Il2CppObject* ConvertTo(Il2CppObject* value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, Il2CppObject*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED42C0))(this, value, destinationType);
  }
  Il2CppObject* ConvertTo(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, Il2CppObject* value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, Il2CppObject*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED42F0))(this, context, culture, value, destinationType);
  }
  System_String* ConvertToInvariantString(Il2CppObject* value) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED44D0))(this, value);
  }
  System_String* ConvertToInvariantString(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, Il2CppObject* value) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED4590))(this, context, value);
  }
  System_String* ConvertToString(Il2CppObject* value) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED4660))(this, value);
  }
  System_String* ConvertToString(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, Il2CppObject* value) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED47C0))(this, context, value);
  }
  System_String* ConvertToString(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, Il2CppObject* value) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED4920))(this, context, culture, value);
  }
  Il2CppObject* CreateInstance(ModdingAPI::Exposed::System::Collections::IDictionary* propertyValues) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::Collections::IDictionary*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED4A40))(this, propertyValues);
  }
  Il2CppObject* CreateInstance(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, ModdingAPI::Exposed::System::Collections::IDictionary* propertyValues) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, ModdingAPI::Exposed::System::Collections::IDictionary*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this, context, propertyValues);
  }
  ModdingAPI::Exposed::System::Exception* GetConvertFromException(Il2CppObject* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED4A60))(this, value);
  }
  ModdingAPI::Exposed::System::Exception* GetConvertToException(Il2CppObject* value, ModdingAPI::Exposed::System::Type* destinationType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, Il2CppObject*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED4BE0))(this, value, destinationType);
  }
  bool GetCreateInstanceSupported() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED4DA0))(this);
  }
  bool GetCreateInstanceSupported(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this, context);
  }
  ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection* GetProperties(Il2CppObject* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED4DC0))(this, value);
  }
  ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection* GetProperties(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, Il2CppObject* value) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED4F10))(this, context, value);
  }
  ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection* GetProperties(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, Il2CppObject* value, ModdingAPI::Exposed::System::Attribute_array* attributes) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, Il2CppObject*, ModdingAPI::Exposed::System::Attribute_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this, context, value, attributes);
  }
  bool GetPropertiesSupported() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED5060))(this);
  }
  bool GetPropertiesSupported(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this, context);
  }
  ModdingAPI::Exposed::System::Collections::ICollection* GetStandardValues() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::ICollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED5080))(this);
  }
  ModdingAPI::Exposed::System::ComponentModel::TypeConverter::StandardValuesCollection* GetStandardValues(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::TypeConverter::StandardValuesCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this, context);
  }
  bool GetStandardValuesExclusive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED50A0))(this);
  }
  bool GetStandardValuesExclusive(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this, context);
  }
  bool GetStandardValuesSupported() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED50C0))(this);
  }
  bool GetStandardValuesSupported(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this, context);
  }
  bool IsValid(Il2CppObject* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED50E0))(this, value);
  }
  bool IsValid(ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext* context, Il2CppObject* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::ITypeDescriptorContext*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED5100))(this, context, value);
  }
  ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection* SortProperties(ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection* props, ModdingAPI::Exposed::System::String_array* names) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*, ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection*, ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED52F0))(this, props, names);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::TypeConverter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> useCompatibleTypeConversion = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->useCompatibleTypeConversion; }
  );

  // Static methods:
  static inline bool get_UseCompatibleTypeConversion() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xED3BF0))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))();
  }
};
}