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


namespace ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter {
struct __AttributeValueCache_Il2CppStaticFields {
};

struct __AttributeValueCache_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AttributeValueCache_Il2CppClass {
  Il2CppClass_1 _1;
  __AttributeValueCache_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AttributeValueCache_Il2CppVtbl vtbl;
};

class AttributeValueCache {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7F1B0;
  static inline    __AttributeValueCache_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AttributeValueCache_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AttributeValueCache_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AttributeValueCache_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Text::StringBuilder* stringValue;
  System_String* singleStringValue;
  ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache::Item_array* items;
  int32_t firstItem;
  int32_t lastItem;

  // Member methods:
  System_String* get_StringValue() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DB390))(this);
  }
  void WriteEntityRef(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DB3D0))(this, name);
  }
  void WriteCharEntity(wchar_t ch) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DB680))(this, ch);
  }
  void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*, wchar_t, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DB780))(this, lowChar, highChar);
  }
  void WriteWhitespace(System_String* ws) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DB8F0))(this, ws);
  }
  void WriteString(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DB980))(this, text);
  }
  void WriteChars(ModdingAPI::Exposed::System::Char_array* buffer, int32_t index, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DBA20))(this, buffer, index, count);
  }
  void WriteRaw(ModdingAPI::Exposed::System::Char_array* buffer, int32_t index, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DBC00))(this, buffer, index, count);
  }
  void WriteRaw(System_String* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DBDE0))(this, data);
  }
  void WriteValue(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DBE70))(this, value);
  }
  void Replay(ModdingAPI::Exposed::System::Xml::XmlWriter* writer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*, ModdingAPI::Exposed::System::Xml::XmlWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DBF00))(this, writer);
  }
  void Trim() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DC370))(this);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DC990))(this);
  }
  void StartComplexValue() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DC9D0))(this);
  }
  void AddItem(int32_t type, Il2CppObject* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*, int32_t, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DCA20))(this, type, data);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWellFormedWriter::AttributeValueCache*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DCCA0))(this);
  }
};
}