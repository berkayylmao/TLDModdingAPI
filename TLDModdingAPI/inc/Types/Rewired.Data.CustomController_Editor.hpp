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


namespace ModdingAPI::Exposed::Rewired::Data {
struct __CustomController_Editor_Il2CppStaticFields {
};

struct __CustomController_Editor_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CustomController_Editor_Il2CppClass {
  Il2CppClass_1 _1;
  __CustomController_Editor_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CustomController_Editor_Il2CppVtbl vtbl;
};

class CustomController_Editor {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C78C28;
  static inline    __CustomController_Editor_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CustomController_Editor_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CustomController_Editor_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CustomController_Editor_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* _name;
  System_String* _descriptiveName;
  int32_t _id;
  System_String* _typeGuidString;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _elementIdentifiers;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _axes;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* _buttons;
  int32_t _elementIdentifierIdCounter;

  // Member methods:
  System_String* get_name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void set_name(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, value);
  }
  System_String* get_descriptiveName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void set_descriptiveName(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, value);
  }
  int32_t get_id() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x37AAE0))(this);
  }
  void set_id(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3838E0))(this, value);
  }
  ModdingAPI::Exposed::System::Guid get_typeGuid() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x883260))(this);
  }
  void set_typeGuid(ModdingAPI::Exposed::System::Guid value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8828C0))(this, value);
  }
  System_String* get_typeGuidString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  void set_typeGuidString(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110C0))(this, value);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* get_elementIdentifiers() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  void set_elementIdentifiers(ModdingAPI::Exposed::System::Collections::Generic::List_T_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A410))(this, value);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* get_axes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* get_buttons() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319960))(this);
  }
  int32_t get_buttonCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x883320))(this);
  }
  int32_t get_axisCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8833B0))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* get_ElementIdentifiers() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x883440))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8835A0))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor* source) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x883910))(this, source);
  }
  ModdingAPI::Exposed::Rewired::Data::CustomController_Editor* Clone() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x884110))(this);
  }
  ModdingAPI::Exposed::System::String_array* GetElementIdentifierNames() {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x884260))(this);
  }
  ModdingAPI::Exposed::System::Int32_array* GetElementIdentifierIds() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x884410))(this);
  }
  ModdingAPI::Exposed::System::String_array* GetElementIdentifierNamesTypeSorted() {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x884560))(this);
  }
  ModdingAPI::Exposed::System::Int32_array* GetElementIdentifierIdsTypeSorted() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8849D0))(this);
  }
  ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* GetElementIdentifiersTypeSorted() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x885100))(this);
  }
  bool ContainsElementIdentifier(int32_t id) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x885670))(this, id);
  }
  int32_t IndexOfElementIdentifier(int32_t id) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x885790))(this, id);
  }
  ModdingAPI::Exposed::Rewired::ControllerElementIdentifier* GetElementIdentifier(int32_t id) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerElementIdentifier*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8858C0))(this, id);
  }
  int32_t UpxzfyIeCcEKdONNPrzGCgyVNYF(int32_t ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8859A0))(this, );
  }
  bool WDnBHMGgyNnwqGmVjDMIRaYClhH(int32_t , int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x885C20))(this, , );
  }
  ModdingAPI::Exposed::System::String_array* GetButtonNames() {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x885E40))(this);
  }
  ModdingAPI::Exposed::System::Int32_array* GetButtonElementIdentifierIds() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x886010))(this);
  }
  ModdingAPI::Exposed::System::String_array* GetAxisNames() {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x886160))(this);
  }
  ModdingAPI::Exposed::System::Int32_array* GetAxisElementIdentifierIds() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x886320))(this);
  }
  ModdingAPI::Exposed::System::String_array* GetElementNames(int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x886490))(this, type);
  }
  ModdingAPI::Exposed::System::Int32_array* GetElementElementIdentifierIds(int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x886560))(this, type);
  }
  void AddElement(int32_t type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8868B0))(this, type);
  }
  void AddAxis() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x886A40))(this);
  }
  void AddButton() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x886B10))(this);
  }
  void InsertElement(int32_t type, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x886BE0))(this, type, index);
  }
  void InsertAxis(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x886E40))(this, index);
  }
  void InsertButton(int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x886F70))(this, index);
  }
  void DeleteElement(int32_t type, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8870C0))(this, type, index);
  }
  bool ReorderElement(int32_t type, int32_t index, bool offsetDown, bool offsetNow) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t, int32_t, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8871A0))(this, type, index, offsetDown, offsetNow);
  }
  void DuplicateElement(int32_t type, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x887370))(this, type, index);
  }
  ModdingAPI::Exposed::Rewired::ControllerElementIdentifier* yuYlNXJdLQIsiqtYOmJgmrHQIAy(int32_t , System_String* ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerElementIdentifier*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x887490))(this, , );
  }
  ModdingAPI::Exposed::Rewired::Data::CustomController_Editor::Element* oHlcYeHWZvNrEXOVYxLghBhqWOL(int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Data::CustomController_Editor::Element*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x887740))(this, );
  }
  ModdingAPI::Exposed::Rewired::ControllerElementIdentifier* rbnIsBnQQRXGZaIJzAVfHaepHDZ(int32_t , System_String* , System_String* , System_String* ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerElementIdentifier*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*, int32_t, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x887B80))(this, , , , );
  }
  ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game* fVffmWzuXBEUYlpTLIOshJGRKgK() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::CustomController_Editor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x887D30))(this);
  }
};
}