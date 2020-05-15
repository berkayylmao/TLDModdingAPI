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


namespace ModdingAPI::Exposed::Newtonsoft::Json::Serialization {
struct __DefaultContractResolver_Il2CppStaticFields {
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::IContractResolver* _instance;
  ModdingAPI::Exposed::Newtonsoft::Json::JsonConverter_array* BuiltInConverters;
  Il2CppObject* TypeContractCacheLock;
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolverState* _sharedState;
};

struct __DefaultContractResolver_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_ResolveContract;
  VirtualInvokeData _6_GetSerializableMembers;
  VirtualInvokeData _7_CreateObjectContract;
  VirtualInvokeData _8_CreateConstructorParameters;
  VirtualInvokeData _9_CreatePropertyFromConstructorParameter;
  VirtualInvokeData _10_ResolveContractConverter;
  VirtualInvokeData _11_CreateDictionaryContract;
  VirtualInvokeData _12_CreateArrayContract;
  VirtualInvokeData _13_CreatePrimitiveContract;
  VirtualInvokeData _14_CreateLinqContract;
  VirtualInvokeData _15_CreateISerializableContract;
  VirtualInvokeData _16_CreateStringContract;
  VirtualInvokeData _17_CreateContract;
  VirtualInvokeData _18_CreateProperties;
  VirtualInvokeData _19_CreateMemberValueProvider;
  VirtualInvokeData _20_CreateProperty;
  VirtualInvokeData _21_ResolvePropertyName;
  VirtualInvokeData _22_ResolveDictionaryKey;
};

struct __DefaultContractResolver_Il2CppClass {
  Il2CppClass_1 _1;
  __DefaultContractResolver_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DefaultContractResolver_Il2CppVtbl vtbl;
};

class DefaultContractResolver {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C91E38;
  static inline    __DefaultContractResolver_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __DefaultContractResolver_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DefaultContractResolver_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __DefaultContractResolver_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolverState* _instanceState;
  bool _sharedCache;
  int32_t _DefaultMembersSearchFlags_k__BackingField;
  bool _SerializeCompilerGeneratedMembers_k__BackingField;
  bool _IgnoreSerializableInterface_k__BackingField;
  bool _IgnoreSerializableAttribute_k__BackingField;

  // Member methods:
  bool get_DynamicCodeGeneration() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x862E90))(this);
  }
  int32_t get_DefaultMembersSearchFlags() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36E9C0))(this);
  }
  void set_DefaultMembersSearchFlags(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36E9D0))(this, value);
  }
  bool get_SerializeCompilerGeneratedMembers() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x46FCC0))(this);
  }
  bool get_IgnoreSerializableInterface() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x46FCD0))(this);
  }
  bool get_IgnoreSerializableAttribute() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x46FCE0))(this);
  }
  void set_IgnoreSerializableAttribute(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x862F20))(this, value);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x862F30))(this);
  }
  void ::ctor(bool shareCache) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x863090))(this, shareCache);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolverState* GetState() {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolverState*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8631F0))(this);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonContract*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8632B0))(this, type);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetSerializableMembers(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x863770))(this, objectType);
  }
  bool ShouldSerializeEntityMember(ModdingAPI::Exposed::System::Reflection::MemberInfo* memberInfo) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Reflection::MemberInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x864170))(this, memberInfo);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonObjectContract* CreateObjectContract(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonObjectContract*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x864300))(this, objectType);
  }
  ModdingAPI::Exposed::System::Reflection::MemberInfo* GetExtensionDataMemberForType(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MemberInfo*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x864A20))(this, type);
  }
  ModdingAPI::Exposed::System::Reflection::ConstructorInfo* GetAttributeConstructor(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::ConstructorInfo*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x865A50))(this, objectType);
  }
  ModdingAPI::Exposed::System::Reflection::ConstructorInfo* GetParameterizedConstructor(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::ConstructorInfo*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x865F10))(this, objectType);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* CreateConstructorParameters(ModdingAPI::Exposed::System::Reflection::ConstructorInfo* constructor, ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonPropertyCollection* memberProperties) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Reflection::ConstructorInfo*, ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonPropertyCollection*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x865FF0))(this, constructor, memberProperties);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonProperty* CreatePropertyFromConstructorParameter(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonProperty* matchingMemberProperty, ModdingAPI::Exposed::System::Reflection::ParameterInfo* parameterInfo) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonProperty*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonProperty*, ModdingAPI::Exposed::System::Reflection::ParameterInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8662D0))(this, matchingMemberProperty, parameterInfo);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::JsonConverter* ResolveContractConverter(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::JsonConverter*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x866730))(this, objectType);
  }
  ModdingAPI::Exposed::System::Func_TResult_* GetDefaultCreator(ModdingAPI::Exposed::System::Type* createdType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Func_TResult_*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8667D0))(this, createdType);
  }
  void InitializeContract(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonContract* contract) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonContract*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8668B0))(this, contract);
  }
  void ResolveCallbackMethods(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonContract* contract, ModdingAPI::Exposed::System::Type* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonContract*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x866C50))(this, contract, t);
  }
  void GetCallbackMethodsForType(ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::System::Collections::Generic::List_T_* onSerializing, ModdingAPI::Exposed::System::Collections::Generic::List_T_* onSerialized, ModdingAPI::Exposed::System::Collections::Generic::List_T_* onDeserializing, ModdingAPI::Exposed::System::Collections::Generic::List_T_* onDeserialized, ModdingAPI::Exposed::System::Collections::Generic::List_T_* onError) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8671A0))(this, type, onSerializing, onSerialized, onDeserializing, onDeserialized, onError);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetClassHierarchyForType(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x867C00))(this, type);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonDictionaryContract* CreateDictionaryContract(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonDictionaryContract*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x867E20))(this, objectType);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonArrayContract* CreateArrayContract(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonArrayContract*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x868440))(this, objectType);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonPrimitiveContract* CreatePrimitiveContract(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonPrimitiveContract*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x868860))(this, objectType);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonLinqContract* CreateLinqContract(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonLinqContract*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8689C0))(this, objectType);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonISerializableContract* CreateISerializableContract(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonISerializableContract*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x868B30))(this, objectType);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonStringContract* CreateStringContract(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonStringContract*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x868E30))(this, objectType);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonContract* CreateContract(ModdingAPI::Exposed::System::Type* objectType) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonContract*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x869020))(this, objectType);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* CreateProperties(ModdingAPI::Exposed::System::Type* type, int32_t memberSerialization) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Type*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x86A3D0))(this, type, memberSerialization);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::IValueProvider* CreateMemberValueProvider(ModdingAPI::Exposed::System::Reflection::MemberInfo* member) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::IValueProvider*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Reflection::MemberInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x86A900))(this, member);
  }
  ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonProperty* CreateProperty(ModdingAPI::Exposed::System::Reflection::MemberInfo* member, int32_t memberSerialization) {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonProperty*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Reflection::MemberInfo*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x86AC60))(this, member, memberSerialization);
  }
  void SetPropertySettingsFromAttributes(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonProperty* property, Il2CppObject* attributeProvider, System_String* name, ModdingAPI::Exposed::System::Type* declaringType, int32_t memberSerialization, bool allowNonPublicAccess) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonProperty*, Il2CppObject*, System_String*, ModdingAPI::Exposed::System::Type*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x86B000))(this, property, attributeProvider, name, declaringType, memberSerialization, allowNonPublicAccess);
  }
  ModdingAPI::Exposed::System::Predicate_T_* CreateShouldSerializeTest(ModdingAPI::Exposed::System::Reflection::MemberInfo* member) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Predicate_T_*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::System::Reflection::MemberInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x86B540))(this, member);
  }
  void SetIsSpecifiedActions(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonProperty* property, ModdingAPI::Exposed::System::Reflection::MemberInfo* member, bool allowNonPublicAccess) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonProperty*, ModdingAPI::Exposed::System::Reflection::MemberInfo*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x86B8D0))(this, property, member, allowNonPublicAccess);
  }
  System_String* ResolvePropertyName(System_String* propertyName) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64F310))(this, propertyName);
  }
  System_String* ResolveDictionaryKey(System_String* dictionaryKey) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x86BD30))(this, dictionaryKey);
  }
  System_String* GetResolvedPropertyName(System_String* propertyName) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolver*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x86BD30))(this, propertyName);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::IContractResolver*> _instance = __CppStaticProperty<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::IContractResolver*>(
   []() { return &GetStaticClassInstance()->pStaticFields->_instance; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Newtonsoft::Json::JsonConverter_array*> BuiltInConverters = __CppStaticProperty<ModdingAPI::Exposed::Newtonsoft::Json::JsonConverter_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->BuiltInConverters; }
  );
  static inline __CppStaticProperty<Il2CppObject*> TypeContractCacheLock = __CppStaticProperty<Il2CppObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->TypeContractCacheLock; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolverState*> _sharedState = __CppStaticProperty<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::DefaultContractResolverState*>(
   []() { return &GetStaticClassInstance()->pStaticFields->_sharedState; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::Newtonsoft::Json::Serialization::IContractResolver* get_Instance() {
    return reinterpret_cast<ModdingAPI::Exposed::Newtonsoft::Json::Serialization::IContractResolver*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x862DF0))();
  }
  static inline void SetExtensionDataDelegates(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ModdingAPI::Exposed::System::Reflection::MemberInfo* member) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Serialization::JsonObjectContract*, ModdingAPI::Exposed::System::Reflection::MemberInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x864D70))(contract, member);
  }
  static inline bool ShouldSkipDeserialized(ModdingAPI::Exposed::System::Type* t) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(t);
  }
  static inline bool ShouldSkipSerializing(ModdingAPI::Exposed::System::Type* t) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(t);
  }
  static inline bool IsJsonPrimitiveType(ModdingAPI::Exposed::System::Type* t) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x869520))(t);
  }
  static inline bool IsIConvertible(ModdingAPI::Exposed::System::Type* t) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8695D0))(t);
  }
  static inline bool CanConvertToString(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8697A0))(type);
  }
  static inline bool IsValidCallback(ModdingAPI::Exposed::System::Reflection::MethodInfo* method, ModdingAPI::Exposed::System::Reflection::ParameterInfo_array* parameters, ModdingAPI::Exposed::System::Type* attributeType, ModdingAPI::Exposed::System::Reflection::MethodInfo* currentCallback, ModdingAPI::Exposed::System::Type* prevAttributeType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MethodInfo*, ModdingAPI::Exposed::System::Reflection::ParameterInfo_array*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Reflection::MethodInfo*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x869A00))(method, parameters, attributeType, currentCallback, prevAttributeType);
  }
  static inline System_String* GetClrTypeFullName(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x86A1C0))(type);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x86BD50))();
  }
};
}