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
#include "ModdingAPI.Exposed.System.Runtime.Serialization.StreamingContext.hpp"
#include "ModdingAPI.Exposed.System.Nullable_T_.hpp"


namespace ModdingAPI::Exposed::Newtonsoft::Json {
struct __JsonSerializerSettings_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext DefaultContext;
  ModdingAPI::Exposed::System::Globalization::CultureInfo* DefaultCulture;
};

struct __JsonSerializerSettings_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __JsonSerializerSettings_Il2CppClass {
  Il2CppClass_1 _1;
  __JsonSerializerSettings_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __JsonSerializerSettings_Il2CppVtbl vtbl;
};

class JsonSerializerSettings {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6DFE8;
  static inline    __JsonSerializerSettings_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __JsonSerializerSettings_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__JsonSerializerSettings_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __JsonSerializerSettings_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Nullable_T_ _formatting;
  ModdingAPI::Exposed::System::Nullable_T_ _dateFormatHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _dateTimeZoneHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _dateParseHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _floatFormatHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _floatParseHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _stringEscapeHandling;
  ModdingAPI::Exposed::System::Globalization::CultureInfo* _culture;
  ModdingAPI::Exposed::System::Nullable_T_ _checkAdditionalContent;
  ModdingAPI::Exposed::System::Nullable_T_ _maxDepth;
  bool _maxDepthSet;
  System_String* _dateFormatString;
  bool _dateFormatStringSet;
  ModdingAPI::Exposed::System::Nullable_T_ _typeNameAssemblyFormat;
  ModdingAPI::Exposed::System::Nullable_T_ _defaultValueHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _preserveReferencesHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _nullValueHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _objectCreationHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _missingMemberHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _referenceLoopHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _context;
  ModdingAPI::Exposed::System::Nullable_T_ _constructorHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _typeNameHandling;
  ModdingAPI::Exposed::System::Nullable_T_ _metadataPropertyHandling;
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* _Converters_k__BackingField;
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::IContractResolver* _ContractResolver_k__BackingField;
  ModdingAPI::Exposed::System::Collections::IEqualityComparer* _EqualityComparer_k__BackingField;
  ModdingAPI::Exposed::System::Func_TResult_* _ReferenceResolverProvider_k__BackingField;
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::ITraceWriter* _TraceWriter_k__BackingField;
  ModdingAPI::Exposed::System::Runtime::Serialization::SerializationBinder* _Binder_k__BackingField;
  ModdingAPI::Exposed::System::EventHandler_TEventArgs_* _Error_k__BackingField;

  // Member methods:
  int32_t get_ReferenceLoopHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF7B70))(this);
  }
  int32_t get_MissingMemberHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF7C00))(this);
  }
  int32_t get_ObjectCreationHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF7C90))(this);
  }
  int32_t get_NullValueHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF7D20))(this);
  }
  int32_t get_DefaultValueHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF7DB0))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* get_Converters() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3EBFD0))(this);
  }
  void set_Converters(ModdingAPI::Exposed::System::Collections::Generic::IList_T_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6012B0))(this, value);
  }
  int32_t get_PreserveReferencesHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF7E40))(this);
  }
  int32_t get_TypeNameHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF7ED0))(this);
  }
  int32_t get_MetadataPropertyHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF7F60))(this);
  }
  int32_t get_TypeNameAssemblyFormat() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF7FF0))(this);
  }
  int32_t get_ConstructorHandling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF8080))(this);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver() {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::IContractResolver*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3EBFF0))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEqualityComparer* get_EqualityComparer() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEqualityComparer*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F200))(this);
  }
  ModdingAPI::Exposed::System::Func_TResult_* get_ReferenceResolverProvider() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Func_TResult_*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077C0))(this);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter() {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::ITraceWriter*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E080))(this);
  }
  ModdingAPI::Exposed::System::Runtime::Serialization::SerializationBinder* get_Binder() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Serialization::SerializationBinder*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E0A0))(this);
  }
  ModdingAPI::Exposed::System::EventHandler_TEventArgs_* get_Error() {
    return reinterpret_cast<ModdingAPI::Exposed::System::EventHandler_TEventArgs_*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E0C0))(this);
  }
  ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext get_Context() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF8110))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializerSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF82C0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext> DefaultContext = __CppStaticProperty<ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext>(
   []() { return &GetStaticClassInstance()->pStaticFields->DefaultContext; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Globalization::CultureInfo*> DefaultCulture = __CppStaticProperty<ModdingAPI::Exposed::System::Globalization::CultureInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->DefaultCulture; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xCF8200))();
  }
};
}