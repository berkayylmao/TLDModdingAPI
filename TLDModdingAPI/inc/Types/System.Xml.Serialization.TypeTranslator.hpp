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
struct __TypeTranslator_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Hashtable* nameCache;
  ModdingAPI::Exposed::System::Collections::Hashtable* primitiveTypes;
  ModdingAPI::Exposed::System::Collections::Hashtable* primitiveArrayTypes;
  ModdingAPI::Exposed::System::Collections::Hashtable* nullableTypes;
};

struct __TypeTranslator_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TypeTranslator_Il2CppClass {
  Il2CppClass_1 _1;
  __TypeTranslator_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TypeTranslator_Il2CppVtbl vtbl;
};

class TypeTranslator {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2A620;
  static inline    __TypeTranslator_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TypeTranslator_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TypeTranslator_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TypeTranslator_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*> nameCache = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*>(
   []() { return &GetStaticClassInstance()->pStaticFields->nameCache; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*> primitiveTypes = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*>(
   []() { return &GetStaticClassInstance()->pStaticFields->primitiveTypes; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*> primitiveArrayTypes = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*>(
   []() { return &GetStaticClassInstance()->pStaticFields->primitiveArrayTypes; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*> nullableTypes = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*>(
   []() { return &GetStaticClassInstance()->pStaticFields->nullableTypes; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x8AB030))();
  }
  static inline ModdingAPI::Exposed::System::Xml::Serialization::TypeData* GetTypeData(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Serialization::TypeData*(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8AF7A0))(type);
  }
  static inline ModdingAPI::Exposed::System::Xml::Serialization::TypeData* GetTypeData(ModdingAPI::Exposed::System::Type* runtimeType, System_String* xmlDataType, bool underlyingEnumType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Serialization::TypeData*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8AF840))(runtimeType, xmlDataType, underlyingEnumType);
  }
  static inline ModdingAPI::Exposed::System::Xml::Serialization::TypeData* GetPrimitiveTypeData(System_String* typeName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Serialization::TypeData*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8B06D0))(typeName);
  }
  static inline ModdingAPI::Exposed::System::Xml::Serialization::TypeData* GetPrimitiveTypeData(System_String* typeName, bool nullable) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Serialization::TypeData*(__fastcall*)(System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8B0770))(typeName, nullable);
  }
  static inline System_String* GetArrayName(System_String* elemName) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8B0A20))(elemName);
  }
  static inline void ParseArrayType(System_String* arrayType, System_String* type, System_String* ns, System_String* dimensions) {
    reinterpret_cast<void(__fastcall*)(System_String*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8B0BE0))(arrayType, type, ns, dimensions);
  }
};
}