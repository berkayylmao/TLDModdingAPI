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


namespace ModdingAPI::Exposed::System::Xml::Serialization {
struct __TypeData_Il2CppStaticFields {
  ModdingAPI::Exposed::System::String_array* keywords;
};

struct __TypeData_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TypeData_Il2CppClass {
  Il2CppClass_1 _1;
  __TypeData_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TypeData_Il2CppVtbl vtbl;
};

class TypeData {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C29B48;
  static inline    __TypeData_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TypeData_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TypeData_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TypeData_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Type* type;
  System_String* elementName;
  int32_t sType;
  ModdingAPI::Exposed::System::Type* listItemType;
  System_String* typeName;
  System_String* fullTypeName;
  ModdingAPI::Exposed::System::Xml::Serialization::TypeData* listItemTypeData;
  ModdingAPI::Exposed::System::Xml::Serialization::TypeData* mappedType;
  ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaPatternFacet* facet;
  ModdingAPI::Exposed::System::Reflection::MethodInfo* typeConvertor;
  bool hasPublicConstructor;
  bool nullableOverride;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Type* type, System_String* elementName, bool isPrimitive) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*, ModdingAPI::Exposed::System::Type*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A7750))(this, type, elementName, isPrimitive);
  }
  void ::ctor(ModdingAPI::Exposed::System::Type* type, System_String* elementName, bool isPrimitive, ModdingAPI::Exposed::System::Xml::Serialization::TypeData* mappedType, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaPatternFacet* facet) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*, ModdingAPI::Exposed::System::Type*, System_String*, bool, ModdingAPI::Exposed::System::Xml::Serialization::TypeData*, ModdingAPI::Exposed::System::Xml::Schema::XmlSchemaPatternFacet*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A7770))(this, type, elementName, isPrimitive, mappedType, facet);
  }
  void LookupTypeConvertor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A7BB0))(this);
  }
  System_String* get_TypeName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  System_String* get_XmlType() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  ModdingAPI::Exposed::System::Type* get_Type() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  System_String* get_FullTypeName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  int32_t get_SchemaType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x37AAE0))(this);
  }
  bool get_IsListType() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A7D80))(this);
  }
  bool get_IsComplexType() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A7D90))(this);
  }
  bool get_IsValueType() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A7DB0))(this);
  }
  bool get_IsNullable() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A7EA0))(this);
  }
  void set_IsNullable(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6A0AE0))(this, value);
  }
  ModdingAPI::Exposed::System::Xml::Serialization::TypeData* get_ListItemTypeData() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Serialization::TypeData*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A8000))(this);
  }
  ModdingAPI::Exposed::System::Type* get_ListItemType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A80F0))(this);
  }
  bool get_IsXsdType() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::TypeData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A88B0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::String_array*> keywords = __CppStaticProperty<ModdingAPI::Exposed::System::String_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->keywords; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Reflection::PropertyInfo* GetIndexerProperty(ModdingAPI::Exposed::System::Type* collectionType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::PropertyInfo*(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A88C0))(collectionType);
  }
  static inline ModdingAPI::Exposed::System::InvalidOperationException* CreateMissingAddMethodException(ModdingAPI::Exposed::System::Type* type, System_String* inheritFrom, ModdingAPI::Exposed::System::Type* argumentType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::InvalidOperationException*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A8A60))(type, inheritFrom, argumentType);
  }
  static inline ModdingAPI::Exposed::System::Type* GetGenericListItemType(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A8C60))(type);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x8A8EB0))();
  }
};
}