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


namespace ModdingAPI::Exposed::NodeCanvas::Framework {
struct __Blackboard_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* internalVarsTempList;
};

struct __Blackboard_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData _5_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
  VirtualInvokeData _6_add_onVariableAdded;
  VirtualInvokeData _7_remove_onVariableAdded;
  VirtualInvokeData _8_add_onVariableRemoved;
  VirtualInvokeData _9_remove_onVariableRemoved;
  VirtualInvokeData _10_get_name;
  VirtualInvokeData _11_set_name;
  VirtualInvokeData _12_get_variables;
  VirtualInvokeData _13_set_variables;
  VirtualInvokeData _14_get_propertiesBindTarget;
  VirtualInvokeData _15_AddVariable;
  VirtualInvokeData _16_AddVariable;
  VirtualInvokeData _17_RemoveVariable;
  VirtualInvokeData _18_GetVariable;
  VirtualInvokeData _19_GetVariableByID;
  VirtualInvokeData _20_GetVariable;
  VirtualInvokeData _21_GetValue;
  VirtualInvokeData _22_SetValue;
  VirtualInvokeData _23_GetVariableNames;
  VirtualInvokeData _24_GetVariableNames;
  VirtualInvokeData _25_Awake;
};

struct __Blackboard_Il2CppClass {
  Il2CppClass_1 _1;
  __Blackboard_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Blackboard_Il2CppVtbl vtbl;
};

class Blackboard {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C27A28;
  static inline    Blackboard* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C21218;
  static inline    __Blackboard_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline Blackboard* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (Blackboard**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __Blackboard_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Blackboard_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Blackboard_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Action_T_* onVariableAdded;
  ModdingAPI::Exposed::System::Action_T_* onVariableRemoved;
  System_String* _serializedBlackboard;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _objectReferences;
  ModdingAPI::Exposed::NodeCanvas::Framework::Internal::BlackboardSource* _blackboard;
  bool hasDeserialized;

  // Member methods:
  void add_onVariableAdded(ModdingAPI::Exposed::System::Action_T_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, ModdingAPI::Exposed::System::Action_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229BBE0))(this, value);
  }
  void remove_onVariableAdded(ModdingAPI::Exposed::System::Action_T_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, ModdingAPI::Exposed::System::Action_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229BCD0))(this, value);
  }
  void add_onVariableRemoved(ModdingAPI::Exposed::System::Action_T_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, ModdingAPI::Exposed::System::Action_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229BDC0))(this, value);
  }
  void remove_onVariableRemoved(ModdingAPI::Exposed::System::Action_T_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, ModdingAPI::Exposed::System::Action_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229BEB0))(this, value);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229BFA0))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C170))(this);
  }
  System_String* get_name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C1F0))(this);
  }
  void set_name(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C300))(this, value);
  }
  Il2CppObject* get_Item(System_String* varName) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C410))(this, varName);
  }
  void set_Item(System_String* varName, Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C430))(this, varName, value);
  }
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* get_variables() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C450))(this);
  }
  void set_variables(ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C470))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* get_propertiesBindTarget() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFD23D0))(this);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Variable* AddVariable(System_String* name, ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Variable*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C490))(this, name, type);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Variable* AddVariable(System_String* name, Il2CppObject* value) {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Variable*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C560))(this, name, value);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Variable* RemoveVariable(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Variable*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C630))(this, name);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Variable* GetVariable(System_String* name, ModdingAPI::Exposed::System::Type* ofType) {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Variable*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C800))(this, name, ofType);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Variable* GetVariableByID(System_String* ID) {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Variable*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C820))(this, ID);
  }
  ModdingAPI::Exposed::NodeCanvas::Framework::Variable* SetValue(System_String* name, Il2CppObject* value) {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::Variable*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C430))(this, name, value);
  }
  ModdingAPI::Exposed::System::String_array* GetVariableNames() {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C840))(this);
  }
  ModdingAPI::Exposed::System::String_array* GetVariableNames(ModdingAPI::Exposed::System::Type* ofType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C8F0))(this, ofType);
  }
  System_String* Save() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C910))(this);
  }
  System_String* Save(System_String* saveKey) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C950))(this, saveKey);
  }
  bool Load() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C990))(this);
  }
  bool Load(System_String* saveKey) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229C9C0))(this, saveKey);
  }
  void TLD_PreSerialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229CAC0))(this);
  }
  void TLD_PostSerialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229CAD0))(this);
  }
  void ExtractInternalVars() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229CAE0))(this);
  }
  void RestoreInternalVars() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229CEC0))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229D050))(this);
  }
  System_String* Serialize(ModdingAPI::Exposed::System::Collections::Generic::List_T_* storedObjectReferences) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229D150))(this, storedObjectReferences);
  }
  bool Deserialize(System_String* json) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229D250))(this, json);
  }
  bool Deserialize(System_String* json, ModdingAPI::Exposed::System::Collections::Generic::List_T_* storedObjectReferences, bool removeMissing) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*, System_String*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229D270))(this, json, storedObjectReferences, removeMissing);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::Blackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229D820))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> internalVarsTempList = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->internalVarsTempList; }
  );
};
}