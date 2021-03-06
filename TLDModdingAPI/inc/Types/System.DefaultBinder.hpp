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


namespace ModdingAPI::Exposed::System {
struct __DefaultBinder_Il2CppStaticFields {
};

struct __DefaultBinder_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_BindToMethod;
  VirtualInvokeData _5_BindToField;
  VirtualInvokeData _6_SelectMethod;
  VirtualInvokeData _7_SelectProperty;
  VirtualInvokeData _8_ChangeType;
  VirtualInvokeData _9_ReorderArgumentArray;
};

struct __DefaultBinder_Il2CppClass {
  Il2CppClass_1 _1;
  __DefaultBinder_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DefaultBinder_Il2CppVtbl vtbl;
};

class DefaultBinder {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C30838;
  static inline    __DefaultBinder_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __DefaultBinder_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DefaultBinder_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __DefaultBinder_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  ModdingAPI::Exposed::System::Reflection::MethodBase* BindToMethod(int32_t bindingAttr, ModdingAPI::Exposed::System::Reflection::MethodBase_array* match, ModdingAPI::Exposed::System::Object_array* args, ModdingAPI::Exposed::System::Reflection::ParameterModifier_array* modifiers, ModdingAPI::Exposed::System::Globalization::CultureInfo* cultureInfo, ModdingAPI::Exposed::System::String_array* names, Il2CppObject* state) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MethodBase*(__fastcall*)(ModdingAPI::Exposed::System::DefaultBinder*, int32_t, ModdingAPI::Exposed::System::Reflection::MethodBase_array*, ModdingAPI::Exposed::System::Object_array*, ModdingAPI::Exposed::System::Reflection::ParameterModifier_array*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, ModdingAPI::Exposed::System::String_array*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10384F0))(this, bindingAttr, match, args, modifiers, cultureInfo, names, state);
  }
  ModdingAPI::Exposed::System::Reflection::FieldInfo* BindToField(int32_t bindingAttr, ModdingAPI::Exposed::System::Reflection::FieldInfo_array* match, Il2CppObject* value, ModdingAPI::Exposed::System::Globalization::CultureInfo* cultureInfo) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::FieldInfo*(__fastcall*)(ModdingAPI::Exposed::System::DefaultBinder*, int32_t, ModdingAPI::Exposed::System::Reflection::FieldInfo_array*, Il2CppObject*, ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103AC40))(this, bindingAttr, match, value, cultureInfo);
  }
  ModdingAPI::Exposed::System::Reflection::MethodBase* SelectMethod(int32_t bindingAttr, ModdingAPI::Exposed::System::Reflection::MethodBase_array* match, ModdingAPI::Exposed::System::Type_array* types, ModdingAPI::Exposed::System::Reflection::ParameterModifier_array* modifiers) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MethodBase*(__fastcall*)(ModdingAPI::Exposed::System::DefaultBinder*, int32_t, ModdingAPI::Exposed::System::Reflection::MethodBase_array*, ModdingAPI::Exposed::System::Type_array*, ModdingAPI::Exposed::System::Reflection::ParameterModifier_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103B3D0))(this, bindingAttr, match, types, modifiers);
  }
  ModdingAPI::Exposed::System::Reflection::PropertyInfo* SelectProperty(int32_t bindingAttr, ModdingAPI::Exposed::System::Reflection::PropertyInfo_array* match, ModdingAPI::Exposed::System::Type* returnType, ModdingAPI::Exposed::System::Type_array* indexes, ModdingAPI::Exposed::System::Reflection::ParameterModifier_array* modifiers) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::PropertyInfo*(__fastcall*)(ModdingAPI::Exposed::System::DefaultBinder*, int32_t, ModdingAPI::Exposed::System::Reflection::PropertyInfo_array*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type_array*, ModdingAPI::Exposed::System::Reflection::ParameterModifier_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103BC00))(this, bindingAttr, match, returnType, indexes, modifiers);
  }
  Il2CppObject* ChangeType(Il2CppObject* value, ModdingAPI::Exposed::System::Type* type, ModdingAPI::Exposed::System::Globalization::CultureInfo* cultureInfo) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::DefaultBinder*, Il2CppObject*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103C7B0))(this, value, type, cultureInfo);
  }
  void ReorderArgumentArray(ModdingAPI::Exposed::System::Object_array* args, Il2CppObject* state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DefaultBinder*, ModdingAPI::Exposed::System::Object_array*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103C820))(this, args, state);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DefaultBinder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Reflection::MethodBase* ExactBinding(ModdingAPI::Exposed::System::Reflection::MethodBase_array* match, ModdingAPI::Exposed::System::Type_array* types, ModdingAPI::Exposed::System::Reflection::ParameterModifier_array* modifiers) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MethodBase*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MethodBase_array*, ModdingAPI::Exposed::System::Type_array*, ModdingAPI::Exposed::System::Reflection::ParameterModifier_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103CBF0))(match, types, modifiers);
  }
  static inline ModdingAPI::Exposed::System::Reflection::PropertyInfo* ExactPropertyBinding(ModdingAPI::Exposed::System::Reflection::PropertyInfo_array* match, ModdingAPI::Exposed::System::Type* returnType, ModdingAPI::Exposed::System::Type_array* types, ModdingAPI::Exposed::System::Reflection::ParameterModifier_array* modifiers) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::PropertyInfo*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::PropertyInfo_array*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type_array*, ModdingAPI::Exposed::System::Reflection::ParameterModifier_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103CED0))(match, returnType, types, modifiers);
  }
  static inline int32_t FindMostSpecific(ModdingAPI::Exposed::System::Reflection::ParameterInfo_array* p1, ModdingAPI::Exposed::System::Int32_array* paramOrder1, ModdingAPI::Exposed::System::Type* paramArrayType1, ModdingAPI::Exposed::System::Reflection::ParameterInfo_array* p2, ModdingAPI::Exposed::System::Int32_array* paramOrder2, ModdingAPI::Exposed::System::Type* paramArrayType2, ModdingAPI::Exposed::System::Type_array* types, ModdingAPI::Exposed::System::Object_array* args) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Reflection::ParameterInfo_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Reflection::ParameterInfo_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type_array*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103D220))(p1, paramOrder1, paramArrayType1, p2, paramOrder2, paramArrayType2, types, args);
  }
  static inline int32_t FindMostSpecificType(ModdingAPI::Exposed::System::Type* c1, ModdingAPI::Exposed::System::Type* c2, ModdingAPI::Exposed::System::Type* t) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103D720))(c1, c2, t);
  }
  static inline int32_t FindMostSpecificMethod(ModdingAPI::Exposed::System::Reflection::MethodBase* m1, ModdingAPI::Exposed::System::Int32_array* paramOrder1, ModdingAPI::Exposed::System::Type* paramArrayType1, ModdingAPI::Exposed::System::Reflection::MethodBase* m2, ModdingAPI::Exposed::System::Int32_array* paramOrder2, ModdingAPI::Exposed::System::Type* paramArrayType2, ModdingAPI::Exposed::System::Type_array* types, ModdingAPI::Exposed::System::Object_array* args) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MethodBase*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Reflection::MethodBase*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type_array*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103DAC0))(m1, paramOrder1, paramArrayType1, m2, paramOrder2, paramArrayType2, types, args);
  }
  static inline int32_t FindMostSpecificField(ModdingAPI::Exposed::System::Reflection::FieldInfo* cur1, ModdingAPI::Exposed::System::Reflection::FieldInfo* cur2) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Reflection::FieldInfo*, ModdingAPI::Exposed::System::Reflection::FieldInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103DBF0))(cur1, cur2);
  }
  static inline int32_t FindMostSpecificProperty(ModdingAPI::Exposed::System::Reflection::PropertyInfo* cur1, ModdingAPI::Exposed::System::Reflection::PropertyInfo* cur2) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Reflection::PropertyInfo*, ModdingAPI::Exposed::System::Reflection::PropertyInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103DBF0))(cur1, cur2);
  }
  static inline bool CompareMethodSigAndName(ModdingAPI::Exposed::System::Reflection::MethodBase* m1, ModdingAPI::Exposed::System::Reflection::MethodBase* m2) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MethodBase*, ModdingAPI::Exposed::System::Reflection::MethodBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103DCF0))(m1, m2);
  }
  static inline int32_t GetHierarchyDepth(ModdingAPI::Exposed::System::Type* t) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103DEB0))(t);
  }
  static inline ModdingAPI::Exposed::System::Reflection::MethodBase* FindMostDerivedNewSlotMeth(ModdingAPI::Exposed::System::Reflection::MethodBase_array* match, int32_t cMatches) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::MethodBase*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MethodBase_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103DF80))(match, cMatches);
  }
  static inline void ReorderParams(ModdingAPI::Exposed::System::Int32_array* paramOrder, ModdingAPI::Exposed::System::Object_array* vars) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103E0E0))(paramOrder, vars);
  }
  static inline bool CreateParamOrder(ModdingAPI::Exposed::System::Int32_array* paramOrder, ModdingAPI::Exposed::System::Reflection::ParameterInfo_array* pars, ModdingAPI::Exposed::System::String_array* names) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Reflection::ParameterInfo_array*, ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103E2E0))(paramOrder, pars, names);
  }
  static inline bool CanConvertPrimitive(ModdingAPI::Exposed::System::RuntimeType* source, ModdingAPI::Exposed::System::RuntimeType* target) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::RuntimeType*, ModdingAPI::Exposed::System::RuntimeType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103E5D0))(source, target);
  }
  static inline bool CanConvertPrimitiveObjectToType(Il2CppObject* source, ModdingAPI::Exposed::System::RuntimeType* type) {
    return reinterpret_cast<bool(__fastcall*)(Il2CppObject*, ModdingAPI::Exposed::System::RuntimeType*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x103E850))(source, type);
  }
};
}