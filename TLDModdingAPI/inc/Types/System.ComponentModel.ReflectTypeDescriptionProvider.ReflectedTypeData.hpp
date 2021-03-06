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


namespace ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider {
struct __ReflectedTypeData_Il2CppStaticFields {
};

struct __ReflectedTypeData_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ReflectedTypeData_Il2CppClass {
  Il2CppClass_1 _1;
  __ReflectedTypeData_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ReflectedTypeData_Il2CppVtbl vtbl;
};

class ReflectedTypeData {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3CEB8;
  static inline    __ReflectedTypeData_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ReflectedTypeData_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ReflectedTypeData_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ReflectedTypeData_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Type* _type;
  ModdingAPI::Exposed::System::ComponentModel::AttributeCollection* _attributes;
  ModdingAPI::Exposed::System::ComponentModel::EventDescriptorCollection* _events;
  ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection* _properties;
  ModdingAPI::Exposed::System::ComponentModel::TypeConverter* _converter;
  ModdingAPI::Exposed::System::Object_array* _editors;
  ModdingAPI::Exposed::System::Type_array* _editorTypes;
  int32_t _editorCount;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Type* type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, type);
  }
  bool get_IsPopulated() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xECFB10))(this);
  }
  ModdingAPI::Exposed::System::ComponentModel::AttributeCollection* GetAttributes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::AttributeCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xECFB40))(this);
  }
  System_String* GetClassName(Il2CppObject* instance) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF8B20))(this, instance);
  }
  System_String* GetComponentName(Il2CppObject* instance) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED02C0))(this, instance);
  }
  ModdingAPI::Exposed::System::ComponentModel::TypeConverter* GetConverter(Il2CppObject* instance) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::TypeConverter*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED03A0))(this, instance);
  }
  ModdingAPI::Exposed::System::ComponentModel::EventDescriptor* GetDefaultEvent(Il2CppObject* instance) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::EventDescriptor*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED0830))(this, instance);
  }
  ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(Il2CppObject* instance) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptor*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED0AC0))(this, instance);
  }
  Il2CppObject* GetEditor(Il2CppObject* instance, ModdingAPI::Exposed::System::Type* editorBaseType) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*, Il2CppObject*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED0DD0))(this, instance, editorBaseType);
  }
  ModdingAPI::Exposed::System::ComponentModel::EventDescriptorCollection* GetEvents() {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::EventDescriptorCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED1730))(this);
  }
  ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection* GetProperties() {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::PropertyDescriptorCollection*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED1C10))(this);
  }
  ModdingAPI::Exposed::System::Type* GetTypeFromName(System_String* typeName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED20F0))(this, typeName);
  }
  void Refresh() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::ReflectTypeDescriptionProvider::ReflectedTypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED2300))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::ComponentModel::EditorAttribute* GetEditorAttribute(ModdingAPI::Exposed::System::ComponentModel::AttributeCollection* attributes, ModdingAPI::Exposed::System::Type* editorBaseType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::ComponentModel::EditorAttribute*(__fastcall*)(ModdingAPI::Exposed::System::ComponentModel::AttributeCollection*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xED1460))(attributes, editorBaseType);
  }
};
}