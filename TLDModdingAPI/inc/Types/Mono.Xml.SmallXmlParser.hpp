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


namespace ModdingAPI::Exposed::Mono::Xml {
struct __SmallXmlParser_Il2CppStaticFields {
};

struct __SmallXmlParser_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SmallXmlParser_Il2CppClass {
  Il2CppClass_1 _1;
  __SmallXmlParser_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SmallXmlParser_Il2CppVtbl vtbl;
};

class SmallXmlParser {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C64278;
  static inline    __SmallXmlParser_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SmallXmlParser_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SmallXmlParser_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SmallXmlParser_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Mono::Xml::SmallXmlParser::IContentHandler* handler;
  ModdingAPI::Exposed::System::IO::TextReader* reader;
  ModdingAPI::Exposed::System::Collections::Stack* elementNames;
  ModdingAPI::Exposed::System::Collections::Stack* xmlSpaces;
  System_String* xmlSpace;
  ModdingAPI::Exposed::System::Text::StringBuilder* buffer;
  ModdingAPI::Exposed::System::Char_array* nameBuffer;
  bool isWhitespace;
  ModdingAPI::Exposed::Mono::Xml::SmallXmlParser::AttrListImpl* attributes;
  int32_t line;
  int32_t column;
  bool resetColumn;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE90720))(this);
  }
  ModdingAPI::Exposed::System::Exception* Error(System_String* msg) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE90AE0))(this, msg);
  }
  ModdingAPI::Exposed::System::Exception* UnexpectedEndError() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE90D30))(this);
  }
  bool IsNameChar(wchar_t c, bool start) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*, wchar_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE90E80))(this, c, start);
  }
  bool IsWhitespace(int32_t c) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE90FE0))(this, c);
  }
  void SkipWhitespaces() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE91000))(this);
  }
  void HandleWhitespaces() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE91010))(this);
  }
  void SkipWhitespaces(bool expected) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE91290))(this, expected);
  }
  int32_t Peek() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCABC30))(this);
  }
  int32_t Read() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE913C0))(this);
  }
  void Expect(int32_t c) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE91420))(this, c);
  }
  System_String* ReadUntil(wchar_t until, bool handleReferences) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*, wchar_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE91570))(this, until, handleReferences);
  }
  System_String* ReadName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE91870))(this);
  }
  void Parse(ModdingAPI::Exposed::System::IO::TextReader* input, ModdingAPI::Exposed::Mono::Xml::SmallXmlParser::IContentHandler* handler) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*, ModdingAPI::Exposed::System::IO::TextReader*, ModdingAPI::Exposed::Mono::Xml::SmallXmlParser::IContentHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE91AC0))(this, input, handler);
  }
  void Cleanup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE91CE0))(this);
  }
  void ReadContent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE91D80))(this);
  }
  void HandleBufferedContent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE92510))(this);
  }
  void ReadCharacters() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE92640))(this);
  }
  void ReadReference() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE928B0))(this);
  }
  int32_t ReadCharacterReference() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE92B80))(this);
  }
  void ReadAttribute(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser::AttrListImpl* a) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*, ModdingAPI::Exposed::Mono::Xml::SmallXmlParser::AttrListImpl*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE92D10))(this, a);
  }
  void ReadCDATASection() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE92F70))(this);
  }
  void ReadComment() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Xml::SmallXmlParser*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE934E0))(this);
  }
};
}