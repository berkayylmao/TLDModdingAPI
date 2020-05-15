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


namespace ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap {
struct __Platform_SDL2_Base_Il2CppStaticFields {
};

struct __Platform_SDL2_Base_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_get_platform;
  VirtualInvokeData _6_get_assignedButtonCount;
  VirtualInvokeData _7_get_assignedAxisCount;
  VirtualInvokeData _8_get_controllerNameOverride;
  VirtualInvokeData _9_get_elements_base;
  VirtualInvokeData _10_get_isAllowed;
  VirtualInvokeData _11_Matches;
  VirtualInvokeData _12_GetAxisNames;
  VirtualInvokeData _13_GetEffectiveButtonNames;
  VirtualInvokeData _14_GetGameElementIdentifierIdMappings;
  VirtualInvokeData _15_IsElementIdentifierMapped;
  VirtualInvokeData _16_get_hasData;
  VirtualInvokeData _17_get_disabled;
  VirtualInvokeData _18_get_variants_base;
  VirtualInvokeData _19_GetAxisCalibrationData;
  VirtualInvokeData _20_GetAxisData;
  VirtualInvokeData _21_GetButtonData;
  VirtualInvokeData _22_GetEffectiveElementIdentifierType;
  VirtualInvokeData _23_GetEffectiveAxisRange;
  VirtualInvokeData _24_DeepClone;
  VirtualInvokeData _25_CopyVars;
};

struct __Platform_SDL2_Base_Il2CppClass {
  Il2CppClass_1 _1;
  __Platform_SDL2_Base_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Platform_SDL2_Base_Il2CppVtbl vtbl;
};

class Platform_SDL2_Base {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C7AB38;
  static inline    Platform_SDL2_Base* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C60450;
  static inline    __Platform_SDL2_Base_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline Platform_SDL2_Base* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (Platform_SDL2_Base**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __Platform_SDL2_Base_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Platform_SDL2_Base_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Platform_SDL2_Base_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* description;
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base::MatchingCriteria* matchingCriteria;
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base::Elements* elements;

  // Member methods:
  int32_t get_platform() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD6B9F0))(this);
  }
  bool get_hasData() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x32CB00))(this);
  }
  bool get_disabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x327200))(this);
  }
  bool get_isAllowed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x32CB70))(this);
  }
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base::Axis_array* get_Axes_orig() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base::Axis_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3272A0))(this);
  }
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base::Button_array* get_Buttons_orig() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base::Button_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3272B0))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* get_variants_base() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  bool Matches(ModdingAPI::Exposed::Rewired::BridgedControllerHWInfo* BridgedControllerHWInfo, bool strictMatch, int32_t variantIndex, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform* platformMap) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*, ModdingAPI::Exposed::Rewired::BridgedControllerHWInfo*, bool, int32_t, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C6620))(this, BridgedControllerHWInfo, strictMatch, variantIndex, platformMap);
  }
  int32_t get_assignedButtonCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x327320))(this);
  }
  int32_t get_assignedAxisCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x327340))(this);
  }
  ModdingAPI::Exposed::System::String_array* GetAxisNames(ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* identifiers) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C66C0))(this, identifiers);
  }
  ModdingAPI::Exposed::System::String_array* GetEffectiveButtonNames(ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* identifiers) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C6A90))(this, identifiers);
  }
  bool IsElementIdentifierMapped(int32_t elementIdentifierId) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C6E40))(this, elementIdentifierId);
  }
  void GetGameElementIdentifierIdMappings(ModdingAPI::Exposed::System::Int32_array* buttons, ModdingAPI::Exposed::System::Int32_array* axes) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Int32_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C7160))(this, buttons, axes);
  }
  ModdingAPI::Exposed::Rewired::AxisCalibrationData_array* GetAxisCalibrationData() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::AxisCalibrationData_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C75B0))(this);
  }
  void GetAxisData(ModdingAPI::Exposed::Rewired::AxisRange_array* axisRanges, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo_array* axisInfos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*, ModdingAPI::Exposed::Rewired::AxisRange_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C7C20))(this, axisRanges, axisInfos);
  }
  void GetButtonData(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo_array* buttonInfos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C8130))(this, buttonInfos);
  }
  int32_t GetEffectiveElementIdentifierType(ModdingAPI::Exposed::Rewired::ControllerElementIdentifier* elementIdentifier) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x329100))(this, elementIdentifier);
  }
  bool GetEffectiveAxisRange(ModdingAPI::Exposed::Rewired::ControllerElementIdentifier* elementIdentifier, int32_t axisRange) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x329120))(this, elementIdentifier, axisRange);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* IterateAxes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C8370))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* IterateButtons() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C8500))(this);
  }
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Elements_Base* get_elements_base() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Elements_Base*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  Il2CppObject* DeepClone() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C8660))(this);
  }
  void CopyVars(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform* destination) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10C87C0))(this, destination);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::Platform_SDL2_Base*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
};
}