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


namespace ModdingAPI::Exposed::System::Xml::Schema {
struct __DoubleLinkAxis_Il2CppStaticFields {
};

struct __DoubleLinkAxis_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_Type;
  VirtualInvokeData _5_get_ReturnType;
};

struct __DoubleLinkAxis_Il2CppClass {
  Il2CppClass_1 _1;
  __DoubleLinkAxis_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DoubleLinkAxis_Il2CppVtbl vtbl;
};

class DoubleLinkAxis {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3FC78;
  static inline    __DoubleLinkAxis_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __DoubleLinkAxis_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DoubleLinkAxis_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __DoubleLinkAxis_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t Axis_axisType;
  ModdingAPI::Exposed::MS::Internal::Xml::XPath::AstNode* Axis_input;
  System_String* Axis_prefix;
  System_String* Axis_name;
  int32_t Axis_nodeType;
  bool abbrAxis;
  System_String* Axis_urn;
  ModdingAPI::Exposed::MS::Internal::Xml::XPath::Axis* next;

  // Member methods:
  ModdingAPI::Exposed::MS::Internal::Xml::XPath::Axis* get_Next() {
    return reinterpret_cast<ModdingAPI::Exposed::MS::Internal::Xml::XPath::Axis*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::DoubleLinkAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319960))(this);
  }
  void set_Next(ModdingAPI::Exposed::MS::Internal::Xml::XPath::Axis* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::DoubleLinkAxis*, ModdingAPI::Exposed::MS::Internal::Xml::XPath::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31F420))(this, value);
  }
  void ::ctor(ModdingAPI::Exposed::MS::Internal::Xml::XPath::Axis* axis, ModdingAPI::Exposed::System::Xml::Schema::DoubleLinkAxis* inputaxis) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Schema::DoubleLinkAxis*, ModdingAPI::Exposed::MS::Internal::Xml::XPath::Axis*, ModdingAPI::Exposed::System::Xml::Schema::DoubleLinkAxis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD79A80))(this, axis, inputaxis);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Xml::Schema::DoubleLinkAxis* ConvertTree(ModdingAPI::Exposed::MS::Internal::Xml::XPath::Axis* axis) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::DoubleLinkAxis*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::Axis*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD79B00))(axis);
  }
};
}