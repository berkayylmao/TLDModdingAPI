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
#include "ModdingAPI.Exposed.Rewired.ControllerElementTarget.hpp"
#include "ModdingAPI::Exposed::Rewired::ControllerElementTarget.hpp"


namespace ModdingAPI::Exposed::Rewired::ControllerTemplate {
struct __zdSHaHfLUGxPGQoutBAUlCwFLFp_Il2CppStaticFields {
};

struct __zdSHaHfLUGxPGQoutBAUlCwFLFp_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_id;
  VirtualInvokeData _5_get_descriptiveName;
  VirtualInvokeData _6_get_type;
  VirtualInvokeData _9_get_parent;
  VirtualInvokeData _13_get_elementCount;
  VirtualInvokeData _14_GetElement;
  VirtualInvokeData _15_GetElementTargets;
  VirtualInvokeData _16_get_source;
  VirtualInvokeData _17_get_exists;
  VirtualInvokeData _18_Rewired_IControllerTemplateAxis_get_positiveDescriptiveName;
  VirtualInvokeData _19_Rewired_IControllerTemplateAxis_get_negativeDescriptiveName;
  VirtualInvokeData _20_Rewired_IControllerTemplateAxis_GetDescriptiveName;
  VirtualInvokeData _21_Rewired_IControllerTemplateAxis_get_value;
  VirtualInvokeData _22_Rewired_IControllerTemplateAxis_get_valuePrev;
  VirtualInvokeData _23_Rewired_IControllerTemplateAxis_get_source;
  VirtualInvokeData _24_get_AsButton;
  VirtualInvokeData _25_Rewired_IControllerTemplateButton_get_value;
  VirtualInvokeData _26_Rewired_IControllerTemplateButton_get_valuePrev;
  VirtualInvokeData _27_Rewired_IControllerTemplateButton_get_pressure;
  VirtualInvokeData _28_Rewired_IControllerTemplateButton_get_pressurePrev;
  VirtualInvokeData _29_Rewired_IControllerTemplateButton_get_justPressed;
  VirtualInvokeData _30_Rewired_IControllerTemplateButton_get_justReleased;
  VirtualInvokeData _31_Rewired_IControllerTemplateButton_get_justChangedState;
  VirtualInvokeData _32_Rewired_IControllerTemplateButton_get_source;
  VirtualInvokeData _33_get_AsAxis;
};

struct __zdSHaHfLUGxPGQoutBAUlCwFLFp_Il2CppClass {
  Il2CppClass_1 _1;
  __zdSHaHfLUGxPGQoutBAUlCwFLFp_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __zdSHaHfLUGxPGQoutBAUlCwFLFp_Il2CppVtbl vtbl;
};

class zdSHaHfLUGxPGQoutBAUlCwFLFp {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C88438;
  static inline    __zdSHaHfLUGxPGQoutBAUlCwFLFp_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __zdSHaHfLUGxPGQoutBAUlCwFLFp_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__zdSHaHfLUGxPGQoutBAUlCwFLFp_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __zdSHaHfLUGxPGQoutBAUlCwFLFp_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Rewired::IControllerTemplate* nVLlrYscJzaCOhibZEADDJKIfCYP_uNxdinwYVsqwsFuvrknqiyaoWaP;
  int32_t nVLlrYscJzaCOhibZEADDJKIfCYP_GWhYqtabLocDuVzCkkrAPmUjKTh;
  System_String* nVLlrYscJzaCOhibZEADDJKIfCYP_pouvrAGzgKKMJngewwBnCpncoOj;
  int32_t nVLlrYscJzaCOhibZEADDJKIfCYP_BKWeeAtaRjenxRXXISPPwMjqydU;
  int32_t CtWHpgOaCVZYpcBzymhejPsalLW;
  int32_t aNANhpndZwaBsuuMlHETIByacAJa;
  ModdingAPI::Exposed::Rewired::ControllerTemplate::UQZOJiPrylhOQMMWtnGnpXUlYGV_array* sBgqaAgqQqAIHtBvunNsBCiLZI;
  ModdingAPI::Exposed::NwtKrWLPdxReWrJpprZAAzzvGYK* IcMefxblGBfMXSBvFJAncdOteVun;
  System_String* aVwUVbTbzKaKfaAXTvbjDkGBShvS;
  System_String* eosaaDsUDZpsoaEyMBAGgbPFbQaN;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::Rewired::IControllerTemplate* parent, int32_t id, System_String* name, System_String* positiveName, System_String* negativeName, int32_t elementType, ModdingAPI::Exposed::NwtKrWLPdxReWrJpprZAAzzvGYK* target, ModdingAPI::Exposed::System::Collections::Generic::IList_T_* sourceElements) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*, ModdingAPI::Exposed::Rewired::IControllerTemplate*, int32_t, System_String*, System_String*, System_String*, int32_t, ModdingAPI::Exposed::NwtKrWLPdxReWrJpprZAAzzvGYK*, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5AF20))(this, parent, id, name, positiveName, negativeName, elementType, target, sourceElements);
  }
  float get_floatValue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5B1C0))(this);
  }
  float get_floatValuePrev() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5B410))(this);
  }
  bool get_boolValue() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5B650))(this);
  }
  bool get_boolValuePrev() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5B830))(this);
  }
  System_String* Rewired::IControllerTemplateAxis::get_positiveDescriptiveName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5BA30))(this);
  }
  System_String* Rewired::IControllerTemplateAxis::get_negativeDescriptiveName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5BB20))(this);
  }
  float Rewired::IControllerTemplateAxis::get_value() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5BC10))(this);
  }
  float Rewired::IControllerTemplateAxis::get_valuePrev() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5BD00))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateAxisSource* Rewired::IControllerTemplateAxis::get_source() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateAxisSource*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5BDF0))(this);
  }
  System_String* Rewired::IControllerTemplateAxis::GetDescriptiveName(int32_t ) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5BEE0))(this, );
  }
  bool Rewired::IControllerTemplateButton::get_value() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5C110))(this);
  }
  bool Rewired::IControllerTemplateButton::get_valuePrev() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5C200))(this);
  }
  bool Rewired::IControllerTemplateButton::get_justPressed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5C2F0))(this);
  }
  bool Rewired::IControllerTemplateButton::get_justReleased() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5C5E0))(this);
  }
  bool Rewired::IControllerTemplateButton::get_justChangedState() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5C870))(this);
  }
  float Rewired::IControllerTemplateButton::get_pressure() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5C970))(this);
  }
  float Rewired::IControllerTemplateButton::get_pressurePrev() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5CA60))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateButtonSource* Rewired::IControllerTemplateButton::get_source() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateButtonSource*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5CB50))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateElementSource* get_source() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateElementSource*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5CC40))(this);
  }
  int32_t get_elementCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateElement* GetElement(int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateElement*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this, );
  }
  int32_t GetElementTargets(ModdingAPI::Exposed::Rewired::ControllerElementTarget , ModdingAPI::Exposed::System::Collections::Generic::IList_T_* ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*, ModdingAPI::Exposed::Rewired::ControllerElementTarget, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5CD30))(this, , );
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateAxis* get_AsAxis() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateAxis*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5D470))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateButton* get_AsButton() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateButton*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5D560))(this);
  }

  // Static methods:
  static inline bool NpzcszYmYklueLNUUqkfSZBCoaQ(ModdingAPI::Exposed::Rewired::ControllerElementTarget , ModdingAPI::Exposed::Rewired::IControllerElementTarget* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerElementTarget, ModdingAPI::Exposed::Rewired::IControllerElementTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE5D680))(, );
  }
};
}