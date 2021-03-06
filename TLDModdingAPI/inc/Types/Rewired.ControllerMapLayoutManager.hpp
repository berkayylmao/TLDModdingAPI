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


namespace ModdingAPI::Exposed::Rewired {
struct __ControllerMapLayoutManager_Il2CppStaticFields {
};

struct __ControllerMapLayoutManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ControllerMapLayoutManager_Il2CppClass {
  Il2CppClass_1 _1;
  __ControllerMapLayoutManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ControllerMapLayoutManager_Il2CppVtbl vtbl;
};

class ControllerMapLayoutManager {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C79300;
  static inline    ControllerMapLayoutManager* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C69C28;
  static inline    __ControllerMapLayoutManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline ControllerMapLayoutManager* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (ControllerMapLayoutManager**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __ControllerMapLayoutManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ControllerMapLayoutManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ControllerMapLayoutManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool _enabled;
  bool _loadFromUserDataStore;
  ModdingAPI::Exposed::Rewired::Player* _player;
  ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::StartingSettings* _startingSettings;
  int32_t _reInputId;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _ruleSets;
  ModdingAPI::Exposed::System::Action* _ApplyCalledEvent;

  // Member methods:
  void add_ApplyCalledEvent(ModdingAPI::Exposed::System::Action* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*, ModdingAPI::Exposed::System::Action*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE11A40))(this, value);
  }
  void remove_ApplyCalledEvent(ModdingAPI::Exposed::System::Action* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*, ModdingAPI::Exposed::System::Action*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE11B00))(this, value);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::Player* player, ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::StartingSettings* startingSettings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*, ModdingAPI::Exposed::Rewired::Player*, ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager::StartingSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE11BC0))(this, player, startingSettings);
  }
  bool get_enabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33C2C0))(this);
  }
  void set_enabled(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE11CF0))(this, value);
  }
  bool get_loadFromUserDataStore() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33CD00))(this);
  }
  void set_loadFromUserDataStore(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33CD10))(this, value);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* get_ruleSets() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  void set_ruleSets(ModdingAPI::Exposed::System::Collections::Generic::List_T_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE11D00))(this, value);
  }
  void Apply() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE11ED0))(this);
  }
  void LoadDefaults() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE133E0))(this);
  }
  System_String* ToXmlString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE137A0))(this);
  }
  System_String* ToJsonString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE13970))(this);
  }
  bool ImportXml(System_String* xmlString) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE13B40))(this, xmlString);
  }
  bool ImportJson(System_String* jsonString) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE13D50))(this, jsonString);
  }
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject* Export() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE13FA0))(this);
  }
  void ExportDataToSerializedObject(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject* serializedObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE14120))(this, serializedObject);
  }
  bool Import(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject* serializedObject) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerMapLayoutManager*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE14D20))(this, serializedObject);
  }
};
}