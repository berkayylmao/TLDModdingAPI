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


namespace ModdingAPI::Exposed::Newtonsoft::Json::Utilities {
struct __CollectionUtils_Il2CppStaticFields {
};

struct __CollectionUtils_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CollectionUtils_Il2CppClass {
  Il2CppClass_1 _1;
  __CollectionUtils_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CollectionUtils_Il2CppVtbl vtbl;
};

class CollectionUtils {
public:
  // Il2Cpp fields:
  __CollectionUtils_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline bool IsDictionaryType(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB79AC0))(type);
  }
  static inline ModdingAPI::Exposed::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor(ModdingAPI::Exposed::System::Type* collectionType, ModdingAPI::Exposed::System::Type* collectionItemType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::ConstructorInfo*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB79CB0))(collectionType, collectionItemType);
  }
  static inline ModdingAPI::Exposed::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor(ModdingAPI::Exposed::System::Type* collectionType, ModdingAPI::Exposed::System::Type* collectionItemType, ModdingAPI::Exposed::System::Type* constructorArgumentType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::ConstructorInfo*(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB79E10))(collectionType, collectionItemType, constructorArgumentType);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::IList_T_* GetDimensions(ModdingAPI::Exposed::System::Collections::IList* values, int32_t dimensionsCount) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::System::Collections::IList*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB7A0A0))(values, dimensionsCount);
  }
  static inline void CopyFromJaggedToMultidimensionalArray(ModdingAPI::Exposed::System::Collections::IList* values, ModdingAPI::Exposed::System::Array* multidimensionalArray, ModdingAPI::Exposed::System::Int32_array* indices) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::IList*, ModdingAPI::Exposed::System::Array*, ModdingAPI::Exposed::System::Int32_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB7A5A0))(values, multidimensionalArray, indices);
  }
  static inline Il2CppObject* JaggedArrayGetValue(ModdingAPI::Exposed::System::Collections::IList* values, ModdingAPI::Exposed::System::Int32_array* indices) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Collections::IList*, ModdingAPI::Exposed::System::Int32_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB7A890))(values, indices);
  }
  static inline ModdingAPI::Exposed::System::Array* ToMultidimensionalArray(ModdingAPI::Exposed::System::Collections::IList* values, ModdingAPI::Exposed::System::Type* type, int32_t rank) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Array*(__fastcall*)(ModdingAPI::Exposed::System::Collections::IList*, ModdingAPI::Exposed::System::Type*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB7A9C0))(values, type, rank);
  }
};
}