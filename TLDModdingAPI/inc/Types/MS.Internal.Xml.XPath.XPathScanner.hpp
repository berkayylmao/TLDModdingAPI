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
#include "ModdingAPI.Exposed.System.Xml.XmlCharType.hpp"


namespace ModdingAPI::Exposed::MS::Internal::Xml::XPath {
struct __XPathScanner_Il2CppStaticFields {
};

struct __XPathScanner_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __XPathScanner_Il2CppClass {
  Il2CppClass_1 _1;
  __XPathScanner_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XPathScanner_Il2CppVtbl vtbl;
};

class XPathScanner {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3D950;
  static inline    __XPathScanner_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XPathScanner_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XPathScanner_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XPathScanner_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* xpathExpr;
  int32_t xpathExprIndex;
  int32_t kind;
  wchar_t currentChar;
  System_String* name;
  System_String* prefix;
  System_String* stringValue;
  double numberValue;
  bool canBeFunction;
  ModdingAPI::Exposed::System::Xml::XmlCharType xmlCharType;

  // Member methods:
  void ::ctor(System_String* xpathExpr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD27610))(this, xpathExpr);
  }
  System_String* get_SourceText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  wchar_t get_CurerntChar() {
    return reinterpret_cast<wchar_t(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD27720))(this);
  }
  bool NextChar() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD27730))(this);
  }
  int32_t get_Kind() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36E9C0))(this);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  System_String* get_Prefix() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  System_String* get_StringValue() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  double get_NumberValue() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD27790))(this);
  }
  bool get_CanBeFunction() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4EFF30))(this);
  }
  void SkipSpace() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD277A0))(this);
  }
  bool NextLex() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD27840))(this);
  }
  double ScanNumber() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD27E60))(this);
  }
  double ScanFraction() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD28060))(this);
  }
  System_String* ScanString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD281A0))(this);
  }
  System_String* ScanName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::MS::Internal::Xml::XPath::XPathScanner*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD28350))(this);
  }
};
}