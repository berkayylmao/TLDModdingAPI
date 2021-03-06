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
#include "ModdingAPI.Exposed.Rewired.ControllerElementTarget.hpp"


namespace ModdingAPI::Exposed::Rewired {
struct __ControllerTemplate_Il2CppStaticFields {
};

struct __ControllerTemplate_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Rewired_IControllerTemplate_get_controller;
  VirtualInvokeData _5_Rewired_IControllerTemplate_get_name;
  VirtualInvokeData _6_Rewired_IControllerTemplate_get_typeGuid;
  VirtualInvokeData _7_Rewired_IControllerTemplate_get_elements;
  VirtualInvokeData _8_Rewired_IControllerTemplate_get_elementCount;
  VirtualInvokeData _9_Rewired_IControllerTemplate_GetElement;
  VirtualInvokeData _10_Rewired_IControllerTemplate_GetElement;
  VirtualInvokeData _11_Rewired_IControllerTemplate_GetElementTargets;
};

struct __ControllerTemplate_Il2CppClass {
  Il2CppClass_1 _1;
  __ControllerTemplate_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ControllerTemplate_Il2CppVtbl vtbl;
};

class ControllerTemplate {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C83F08;
  static inline    __ControllerTemplate_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ControllerTemplate_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ControllerTemplate_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ControllerTemplate_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* pouvrAGzgKKMJngewwBnCpncoOj;
  ModdingAPI::Exposed::System::Guid GjfpwUriGOXMaXGAzhlhesewsIN;
  ModdingAPI::Exposed::Rewired::Controller* eRiZsSFDNrFJxnreKaUhJBCLIKi;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ADictionary_TKey__TValue_* TasGtNGolxdwTnhzvFQqMpiZKfX;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ADictionary_TKey__TValue_* bFXUWuvECAwBpnwZCEyyPsnMldo;
  ModdingAPI::Exposed::Rewired::IControllerTemplateElement_array* zDYSoPuWRIUrndraUwJpaRdSJEG;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* BOLhTANJNrAyZcBkNpOGdedkKspm;
  int32_t CtWHpgOaCVZYpcBzymhejPsalLW;

  // Member methods:
  void ::ctor(Il2CppObject* payload) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4E130))(this, payload);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::ControllerTemplate::wGZiekanoaChyETlprVbdFeDuEN* initializer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate*, ModdingAPI::Exposed::Rewired::ControllerTemplate::wGZiekanoaChyETlprVbdFeDuEN*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4E210))(this, initializer);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateElement* GetElement(int32_t id) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateElement*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4FC00))(this, id);
  }
  ModdingAPI::Exposed::Rewired::Controller* Rewired::IControllerTemplate::get_controller() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Controller*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE4FF70))(this);
  }
  System_String* Rewired::IControllerTemplate::get_name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE50060))(this);
  }
  ModdingAPI::Exposed::System::Guid Rewired::IControllerTemplate::get_typeGuid() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE50150))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* Rewired::IControllerTemplate::get_elements() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE502B0))(this);
  }
  int32_t Rewired::IControllerTemplate::get_elementCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE503D0))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateElement* Rewired::IControllerTemplate::GetElement(int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateElement*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE504D0))(this, );
  }
  int32_t Rewired::IControllerTemplate::GetElementTargets(ModdingAPI::Exposed::Rewired::ControllerElementTarget , ModdingAPI::Exposed::System::Collections::Generic::IList_T_* ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate*, ModdingAPI::Exposed::Rewired::ControllerElementTarget, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE505D0))(this, , );
  }
  int32_t rrziZiafqxIHznIYqiOTTBReWbY(ModdingAPI::Exposed::Rewired::ControllerElementTarget , ModdingAPI::Exposed::System::Collections::Generic::IList_T_* ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate*, ModdingAPI::Exposed::Rewired::ControllerElementTarget, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE50730))(this, , );
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Type* GetInterfaceType(int32_t elementType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE50A60))(elementType);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::IList_T_* WnMYuOCMYqgqQfIZdJnjWDmtDyF(ModdingAPI::Exposed::Rewired::Controller* , ModdingAPI::Exposed::Rewired::IControllerTemplateAxisSource* ) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller*, ModdingAPI::Exposed::Rewired::IControllerTemplateAxisSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE50BC0))(, );
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::IList_T_* WnMYuOCMYqgqQfIZdJnjWDmtDyF(ModdingAPI::Exposed::Rewired::Controller* , ModdingAPI::Exposed::Rewired::IControllerTemplateButtonSource* ) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller*, ModdingAPI::Exposed::Rewired::IControllerTemplateButtonSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE510C0))(, );
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::IList_T_* WnMYuOCMYqgqQfIZdJnjWDmtDyF(ModdingAPI::Exposed::Rewired::Controller* , ModdingAPI::Exposed::Rewired::IControllerElementTarget* ) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::Controller*, ModdingAPI::Exposed::Rewired::IControllerElementTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE51170))(, );
  }
  static inline ModdingAPI::Exposed::Rewired::IControllerTemplateElement* uSLOyNDNoHpThFnNIzpmskHYqeR(ModdingAPI::Exposed::System::Collections::Generic::List_T_* , int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateElement*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE51400))(, );
  }
  static inline ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp* NpuwVaziABVOdqEREmYqsqTvKpk(ModdingAPI::Exposed::Rewired::IControllerTemplate* , ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ADictionary_TKey__TValue_* , int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*(__fastcall*)(ModdingAPI::Exposed::Rewired::IControllerTemplate*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ADictionary_TKey__TValue_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE51540))(, , );
  }
  static inline ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp* ibjCwdiiBOOCWpNpqBPqdWEcIeT(ModdingAPI::Exposed::Rewired::IControllerTemplate* , ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ADictionary_TKey__TValue_* , int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*(__fastcall*)(ModdingAPI::Exposed::Rewired::IControllerTemplate*, ModdingAPI::Exposed::Rewired::Utils::Classes::Data::ADictionary_TKey__TValue_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE51690))(, , );
  }
};
}