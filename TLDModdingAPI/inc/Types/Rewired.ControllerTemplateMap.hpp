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
#include "ModdingAPI.Exposed.System.Guid.hpp"


namespace ModdingAPI::Exposed::Rewired {
struct __ControllerTemplateMap_Il2CppStaticFields {
  int32_t __idCounter;
};

struct __ControllerTemplateMap_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_ExportDataToSerializedObject;
  VirtualInvokeData _5_Import;
};

struct __ControllerTemplateMap_Il2CppClass {
  Il2CppClass_1 _1;
  __ControllerTemplateMap_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ControllerTemplateMap_Il2CppVtbl vtbl;
};

class ControllerTemplateMap {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C88468;
  static inline    ControllerTemplateMap* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C838D0;
  static inline    __ControllerTemplateMap_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline ControllerTemplateMap* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (ControllerTemplateMap**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __ControllerTemplateMap_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ControllerTemplateMap_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ControllerTemplateMap_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t _reInputId;
  int32_t _id;
  ModdingAPI::Exposed::System::Guid _templateTypeGuid;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _elementMaps;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* _elementMaps_readOnly;
  bool _enabled;
  int32_t _categoryId;
  int32_t _layoutId;
  int32_t _sourceMapId;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Guid templateTypeGuid) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE612D0))(this, templateTypeGuid);
  }
  void ::ctor(ModdingAPI::Exposed::System::Guid templateTypeGuid, int32_t categoryId, int32_t layoutId, int32_t sourceMapId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*, ModdingAPI::Exposed::System::Guid, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE615C0))(this, templateTypeGuid, categoryId, layoutId, sourceMapId);
  }
  int32_t get_id() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE61610))(this);
  }
  ModdingAPI::Exposed::System::Guid get_templateTypeGuid() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE61700))(this);
  }
  bool get_enabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE61820))(this);
  }
  void set_enabled(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6CE3F0))(this, value);
  }
  int32_t get_categoryId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE61910))(this);
  }
  void set_categoryId(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8D0))(this, value);
  }
  int32_t get_layoutId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE61A00))(this);
  }
  void set_layoutId(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8F0))(this, value);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* get_ElementMaps() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE61AF0))(this);
  }
  System_String* ToXmlString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE61BE0))(this);
  }
  System_String* ToJsonString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE61DB0))(this);
  }
  ModdingAPI::Exposed::Rewired::ControllerMap* ToControllerMap(ModdingAPI::Exposed::Rewired::Controller* controller) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerMap*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*, ModdingAPI::Exposed::Rewired::Controller*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE61F80))(this, controller);
  }
  void ExportDataToSerializedObject(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject* serializedObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE624A0))(this, serializedObject);
  }
  void Import(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject* serializedObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE63710))(this, serializedObject);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE63AD0))(this);
  }
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject* Export() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE63BB0))(this);
  }
  void AddElementMap(ModdingAPI::Exposed::Rewired::ControllerTemplateActionElementMap* elementMap) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplateMap*, ModdingAPI::Exposed::Rewired::ControllerTemplateActionElementMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE63D30))(this, elementMap);
  }

  // Static fields:
  static inline __CppStaticProperty<int32_t> __idCounter = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->__idCounter; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::Rewired::ControllerTemplateMap* FromControllerMap(ModdingAPI::Exposed::Rewired::IControllerTemplate* controllerTemplate, ModdingAPI::Exposed::Rewired::ControllerMap* controllerMap) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerTemplateMap*(__fastcall*)(ModdingAPI::Exposed::Rewired::IControllerTemplate*, ModdingAPI::Exposed::Rewired::ControllerMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE63DE0))(controllerTemplate, controllerMap);
  }
  static inline ModdingAPI::Exposed::Rewired::ControllerTemplateMap* FromXml(System_String* xmlString) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerTemplateMap*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE645D0))(xmlString);
  }
  static inline ModdingAPI::Exposed::Rewired::ControllerTemplateMap* FromJson(System_String* jsonString) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerTemplateMap*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE64730))(jsonString);
  }
  static inline ModdingAPI::Exposed::Rewired::ControllerTemplateMap* FromSerializedData(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject* serializedObject) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerTemplateMap*(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Data::SerializedObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE648B0))(serializedObject);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))();
  }
};
}