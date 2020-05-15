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
struct __GlobalBlackboard_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* allGlobals;
};

struct __GlobalBlackboard_Il2CppVtbl {
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

struct __GlobalBlackboard_Il2CppClass {
  Il2CppClass_1 _1;
  __GlobalBlackboard_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __GlobalBlackboard_Il2CppVtbl vtbl;
};

class GlobalBlackboard {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C79FE0;
  static inline    __GlobalBlackboard_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __GlobalBlackboard_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__GlobalBlackboard_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __GlobalBlackboard_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Action_T_* Blackboard_onVariableAdded;
  ModdingAPI::Exposed::System::Action_T_* Blackboard_onVariableRemoved;
  System_String* Blackboard__serializedBlackboard;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* Blackboard__objectReferences;
  ModdingAPI::Exposed::NodeCanvas::Framework::Internal::BlackboardSource* Blackboard__blackboard;
  bool Blackboard_hasDeserialized;
  bool dontDestroy;

  // Member methods:
  System_String* get_name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229FAE0))(this);
  }
  void set_name(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229FAF0))(this, value);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22A0450))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22A07D0))(this);
  }
  bool IsUnique() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22A0890))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22A0A60))(this);
  }
  bool _IsUnique_b__9_0(ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard* b) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard*, ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22A0D10))(this, b);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> allGlobals = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->allGlobals; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard* Create() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x229FD20))();
  }
  static inline ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard* Find(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Framework::GlobalBlackboard*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x229FEA0))(name);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x22A0BC0))();
  }
};
}