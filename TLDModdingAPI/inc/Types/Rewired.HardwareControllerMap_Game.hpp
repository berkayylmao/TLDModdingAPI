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
#include "ModdingAPI.Exposed.Rewired.HardwareControllerMapIdentifier.hpp"


namespace ModdingAPI::Exposed::Rewired {
struct __HardwareControllerMap_Game_Il2CppStaticFields {
};

struct __HardwareControllerMap_Game_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __HardwareControllerMap_Game_Il2CppClass {
  Il2CppClass_1 _1;
  __HardwareControllerMap_Game_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __HardwareControllerMap_Game_Il2CppVtbl vtbl;
};

class HardwareControllerMap_Game {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6BFB8;
  static inline    __HardwareControllerMap_Game_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __HardwareControllerMap_Game_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__HardwareControllerMap_Game_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __HardwareControllerMap_Game_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* controllerName;
  ModdingAPI::Exposed::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier;
  int32_t customControllerSourceId;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ADictionary_TKey__TValue_* elementIdentifiers;
  ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* elementIdentifiers_cache;
  ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* buttonElementIdentifiers_cache;
  ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* axisElementIdentifiers_cache;
  ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* axis2DElementIdentifiers_cache;
  ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* hatElementIdentifiers_cache;
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* elementIdentifiers_readOnly;
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* buttonElementIdentifiers_readOnly;
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* axisElementIdentifiers_readOnly;
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* axis2DElementIdentifiers_readOnly;
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* hatElementIdentifiers_readOnly;
  ModdingAPI::Exposed::System::Int32_array* buttonElementIdentifierIds;
  ModdingAPI::Exposed::System::Int32_array* axisElementIdentifierIds;
  ModdingAPI::Exposed::System::Int32_array* axis2DElementIdentifierIds;
  ModdingAPI::Exposed::System::Int32_array* hatElementIdentifierIds;
  int32_t elementIdentifierCount;
  int32_t axisCount;
  int32_t buttonCount;
  int32_t compoundElementCount;
  int32_t axis2DCount;
  int32_t hatCount;
  ModdingAPI::Exposed::Rewired::JoystickType_array* joystickTypes;
  ModdingAPI::Exposed::Rewired::AxisCalibrationData_array* hwAxisCalibrationData;
  ModdingAPI::Exposed::Rewired::AxisRange_array* hwAxisRanges;
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo_array* hwAxisInfo;
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo_array* hwButtonInfo;
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement_array* compoundElements;

  // Member methods:
  void ::ctor(System_String* controllerName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, controllerName);
  }
  void ::ctor(System_String* controllerName, int32_t customControllerSourceId, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* hardwareElementIdentifiers, ModdingAPI::Exposed::System::Int32_array* buttonElementIdentifierIds, ModdingAPI::Exposed::System::Int32_array* axisElementIdentifierIds, ModdingAPI::Exposed::Rewired::AxisCalibrationData_array* hwAxisCalibrationData, ModdingAPI::Exposed::Rewired::AxisRange_array* hwAxisRanges, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo_array* hwAxisInfo, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo_array* hwButtonInfo, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement_array* compoundElements) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, System_String*, int32_t, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::Rewired::AxisCalibrationData_array*, ModdingAPI::Exposed::Rewired::AxisRange_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E5AE0))(this, controllerName, customControllerSourceId, hardwareElementIdentifiers, buttonElementIdentifierIds, axisElementIdentifierIds, hwAxisCalibrationData, hwAxisRanges, hwAxisInfo, hwButtonInfo, compoundElements);
  }
  void ::ctor(System_String* controllerName, ModdingAPI::Exposed::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, ModdingAPI::Exposed::Rewired::JoystickType_array* joystickTypes, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* hardwareElementIdentifiers, ModdingAPI::Exposed::System::Int32_array* buttonElementIdentifierIds, ModdingAPI::Exposed::System::Int32_array* axisElementIdentifierIds, ModdingAPI::Exposed::Rewired::AxisCalibrationData_array* hwAxisCalibrationData, ModdingAPI::Exposed::Rewired::AxisRange_array* hwAxisRanges, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo_array* hwAxisInfo, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo_array* hwButtonInfo, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement_array* compoundElements) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, System_String*, ModdingAPI::Exposed::Rewired::HardwareControllerMapIdentifier, ModdingAPI::Exposed::Rewired::JoystickType_array*, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::Rewired::AxisCalibrationData_array*, ModdingAPI::Exposed::Rewired::AxisRange_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E5B70))(this, controllerName, hardwareMapIdentifier, joystickTypes, hardwareElementIdentifiers, buttonElementIdentifierIds, axisElementIdentifierIds, hwAxisCalibrationData, hwAxisRanges, hwAxisInfo, hwButtonInfo, compoundElements);
  }
  void ::ctor(System_String* controllerName, ModdingAPI::Exposed::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* hardwareElementIdentifiers, ModdingAPI::Exposed::System::Int32_array* buttonElementIdentifierIds, ModdingAPI::Exposed::System::Int32_array* axisElementIdentifierIds, ModdingAPI::Exposed::Rewired::AxisCalibrationData_array* hwAxisCalibrationData, ModdingAPI::Exposed::Rewired::AxisRange_array* hwAxisRanges, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo_array* hwAxisInfo, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo_array* hwButtonInfo, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement_array* compoundElements) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, System_String*, ModdingAPI::Exposed::Rewired::HardwareControllerMapIdentifier, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::Rewired::AxisCalibrationData_array*, ModdingAPI::Exposed::Rewired::AxisRange_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E5D10))(this, controllerName, hardwareMapIdentifier, hardwareElementIdentifiers, buttonElementIdentifierIds, axisElementIdentifierIds, hwAxisCalibrationData, hwAxisRanges, hwAxisInfo, hwButtonInfo, compoundElements);
  }
  void ::ctor(System_String* controllerName, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* hardwareElementIdentifiers, ModdingAPI::Exposed::System::Int32_array* buttonElementIdentifierIds, ModdingAPI::Exposed::System::Int32_array* axisElementIdentifierIds, ModdingAPI::Exposed::Rewired::AxisCalibrationData_array* hwAxisCalibrationData, ModdingAPI::Exposed::Rewired::AxisRange_array* hwAxisRanges, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo_array* hwAxisInfo, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo_array* hwButtonInfo, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement_array* compoundElements) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, System_String*, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::Rewired::AxisCalibrationData_array*, ModdingAPI::Exposed::Rewired::AxisRange_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareAxisInfo_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareButtonInfo_array*, ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E5E90))(this, controllerName, hardwareElementIdentifiers, buttonElementIdentifierIds, axisElementIdentifierIds, hwAxisCalibrationData, hwAxisRanges, hwAxisInfo, hwButtonInfo, compoundElements);
  }
  System_String* GetElementIdentifierName(int32_t elementIdentifierId) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E7950))(this, elementIdentifierId);
  }
  System_String* GetElementIdentifierPositiveName(int32_t elementIdentifierId) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E7A50))(this, elementIdentifierId);
  }
  System_String* GetElementIdentifierNegativeName(int32_t elementIdentifierId) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E7B50))(this, elementIdentifierId);
  }
  int32_t GetAxisIndex(int32_t elementIdentifierId) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E7C50))(this, elementIdentifierId);
  }
  int32_t GetAxisIndex(System_String* elementIdentifierName) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E7CE0))(this, elementIdentifierName);
  }
  int32_t GetButtonIndex(int32_t elementIdentifierId) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E8040))(this, elementIdentifierId);
  }
  int32_t GetButtonIndex(System_String* elementIdentifierName) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E80D0))(this, elementIdentifierName);
  }
  ModdingAPI::Exposed::Rewired::ControllerElementIdentifier* GetElementIdentifierById(int32_t id) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerElementIdentifier*(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E8420))(this, id);
  }
  ModdingAPI::Exposed::Rewired::ControllerElementIdentifier* GetButtonElementIdentifierById(int32_t id) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerElementIdentifier*(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E8530))(this, id);
  }
  ModdingAPI::Exposed::Rewired::ControllerElementIdentifier* GetAxisElementIdentifierById(int32_t id) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerElementIdentifier*(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E8600))(this, id);
  }
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement* GetAxis2DData(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement*(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E86B0))(this, index);
  }
  ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement* GetHatData(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Data::Mapping::HardwareJoystickMap::CompoundElement*(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E8760))(this, index);
  }
  int32_t GetElementType(int32_t elementIdentifierId) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E8890))(this, elementIdentifierId);
  }
  int32_t sYjvTVuvaKgArYhRRrPLWLcxdUP(ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array* , int32_t ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::HardwareControllerMap_Game*, ModdingAPI::Exposed::Rewired::ControllerElementIdentifier_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7E8980))(this, , );
  }
};
}