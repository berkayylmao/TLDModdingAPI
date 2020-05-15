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


namespace ModdingAPI::Exposed::MS::Internal::Xml::XPath {
struct __Operator_Il2CppStaticFields {
  ModdingAPI::Exposed::MS::Internal::Xml::XPath::Operator::Op_array* invertOp;
};

struct __Operator_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_Type;
  VirtualInvokeData _5_get_ReturnType;
};

struct __Operator_Il2CppClass {
  Il2CppClass_1 _1;
  __Operator_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Operator_Il2CppVtbl vtbl;
};

class Operator {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3F4F0;
  static inline    __Operator_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Operator_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Operator_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Operator_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t opType;
  ModdingAPI::Exposed::MS::Internal::Xml::XPath::AstNode* opnd1;
  ModdingAPI::Exposed::MS::Internal::Xml::XPath::AstNode* opnd2;

  // Member methods:
  void ::ctor(int32_t op, ModdingAPI::Exposed::MS::Internal::Xml::XPath::AstNode* opnd1, ModdingAPI::Exposed::MS::Internal::Xml::XPath::AstNode* opnd2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::Operator*, int32_t, ModdingAPI::Exposed::MS::Internal::Xml::XPath::AstNode*, ModdingAPI::Exposed::MS::Internal::Xml::XPath::AstNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC2CD30))(this, op, opnd1, opnd2);
  }
  int32_t get_Type() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::Operator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4114C0))(this);
  }
  int32_t get_ReturnType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::Operator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD20D10))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::MS::Internal::Xml::XPath::Operator::Op_array*> invertOp = __CppStaticProperty<ModdingAPI::Exposed::MS::Internal::Xml::XPath::Operator::Op_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->invertOp; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xD20D30))();
  }
};
}