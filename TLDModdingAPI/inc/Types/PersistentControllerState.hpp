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
#include "ModdingAPI.Exposed.PersistentControllerStateSaveData.ParameterSaveData.hpp"
#include "ModdingAPI::Exposed::PersistentControllerStateSaveData::ParameterSaveData.hpp"


namespace ModdingAPI::Exposed {
struct __PersistentControllerState_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* s_PersistentControllerStates;
};

struct __PersistentControllerState_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __PersistentControllerState_Il2CppClass {
  Il2CppClass_1 _1;
  __PersistentControllerState_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PersistentControllerState_Il2CppVtbl vtbl;
};

class PersistentControllerState {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8A998;
  static inline    __PersistentControllerState_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __PersistentControllerState_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PersistentControllerState_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PersistentControllerState_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::Animator* m_Animator;
  System_String* m_Id;
  ModdingAPI::Exposed::PersistentControllerStateSaveData* m_RestoreData;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PersistentControllerState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20704E0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PersistentControllerState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2070690))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PersistentControllerState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2070760))(this);
  }
  void RequestRestoreState(ModdingAPI::Exposed::PersistentControllerStateSaveData* saveData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PersistentControllerState*, ModdingAPI::Exposed::PersistentControllerStateSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110C0))(this, saveData);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PersistentControllerState*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> s_PersistentControllerStates = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_PersistentControllerStates; }
  );

  // Static methods:
  static inline System_String* SerializeAll() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2070820))();
  }
  static inline void SaveParameters(ModdingAPI::Exposed::UnityEngine::Animator* animator, ModdingAPI::Exposed::PersistentControllerStateSaveData* pcd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Animator*, ModdingAPI::Exposed::PersistentControllerStateSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2070F20))(animator, pcd);
  }
  static inline ModdingAPI::Exposed::PersistentControllerStateSaveData::ParameterSaveData SaveParameter(ModdingAPI::Exposed::UnityEngine::Animator* animator, ModdingAPI::Exposed::UnityEngine::AnimatorControllerParameter* param) {
    return reinterpret_cast<ModdingAPI::Exposed::PersistentControllerStateSaveData::ParameterSaveData(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Animator*, ModdingAPI::Exposed::UnityEngine::AnimatorControllerParameter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2071150))(animator, param);
  }
  static inline void SaveStates(ModdingAPI::Exposed::PersistentControllerState* pc, ModdingAPI::Exposed::UnityEngine::Animator* animator, ModdingAPI::Exposed::PersistentControllerStateSaveData* pcd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PersistentControllerState*, ModdingAPI::Exposed::UnityEngine::Animator*, ModdingAPI::Exposed::PersistentControllerStateSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20713D0))(pc, animator, pcd);
  }
  static inline void DeserializeAll(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2071680))(text);
  }
  static inline void RestoreState(ModdingAPI::Exposed::PersistentControllerStateSaveData* pcd, ModdingAPI::Exposed::UnityEngine::Animator* animator) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PersistentControllerStateSaveData*, ModdingAPI::Exposed::UnityEngine::Animator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20718D0))(pcd, animator);
  }
  static inline void RequestRestoreState(ModdingAPI::Exposed::PersistentControllerStateSaveData* pcd, ModdingAPI::Exposed::UnityEngine::Animator* animator) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PersistentControllerStateSaveData*, ModdingAPI::Exposed::UnityEngine::Animator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20719E0))(pcd, animator);
  }
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2071AC0))();
  }
  static inline void LoadStates(ModdingAPI::Exposed::PersistentControllerStateSaveData* pcd, ModdingAPI::Exposed::UnityEngine::Animator* animator) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PersistentControllerStateSaveData*, ModdingAPI::Exposed::UnityEngine::Animator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2071BA0))(pcd, animator);
  }
  static inline int32_t GetLayerIndex(System_String* layerName, ModdingAPI::Exposed::UnityEngine::Animator* animator) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*, ModdingAPI::Exposed::UnityEngine::Animator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2071E10))(layerName, animator);
  }
  static inline void LoadParameters(ModdingAPI::Exposed::PersistentControllerStateSaveData* pcd, ModdingAPI::Exposed::UnityEngine::Animator* animator) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PersistentControllerStateSaveData*, ModdingAPI::Exposed::UnityEngine::Animator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2071EF0))(pcd, animator);
  }
  static inline void LoadParameter(ModdingAPI::Exposed::UnityEngine::Animator* animator, ModdingAPI::Exposed::PersistentControllerStateSaveData::ParameterSaveData paramData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Animator*, ModdingAPI::Exposed::PersistentControllerStateSaveData::ParameterSaveData)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2072130))(animator, paramData);
  }
  static inline void LoadInt(ModdingAPI::Exposed::UnityEngine::Animator* animator, ModdingAPI::Exposed::PersistentControllerStateSaveData::ParameterSaveData paramData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Animator*, ModdingAPI::Exposed::PersistentControllerStateSaveData::ParameterSaveData)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20723E0))(animator, paramData);
  }
  static inline void LoadFloat(ModdingAPI::Exposed::UnityEngine::Animator* animator, ModdingAPI::Exposed::PersistentControllerStateSaveData::ParameterSaveData paramData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Animator*, ModdingAPI::Exposed::PersistentControllerStateSaveData::ParameterSaveData)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2072460))(animator, paramData);
  }
  static inline void LoadBool(ModdingAPI::Exposed::UnityEngine::Animator* animator, ModdingAPI::Exposed::PersistentControllerStateSaveData::ParameterSaveData paramData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Animator*, ModdingAPI::Exposed::PersistentControllerStateSaveData::ParameterSaveData)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20724F0))(animator, paramData);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x20725E0))();
  }
};
}