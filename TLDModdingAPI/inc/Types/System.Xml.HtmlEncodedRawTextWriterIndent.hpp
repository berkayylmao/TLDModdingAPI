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


namespace ModdingAPI::Exposed::System::Xml {
struct __HtmlEncodedRawTextWriterIndent_Il2CppStaticFields {
};

struct __HtmlEncodedRawTextWriterIndent_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_WriteStartDocument;
  VirtualInvokeData _6_WriteStartDocument;
  VirtualInvokeData _7_WriteEndDocument;
  VirtualInvokeData _8_WriteDocType;
  VirtualInvokeData _9_WriteStartElement;
  VirtualInvokeData _10_WriteEndElement;
  VirtualInvokeData _11_WriteFullEndElement;
  VirtualInvokeData _12_WriteStartAttribute;
  VirtualInvokeData _13_WriteEndAttribute;
  VirtualInvokeData _14_WriteCData;
  VirtualInvokeData _15_WriteComment;
  VirtualInvokeData _16_WriteProcessingInstruction;
  VirtualInvokeData _17_WriteEntityRef;
  VirtualInvokeData _18_WriteCharEntity;
  VirtualInvokeData _19_WriteWhitespace;
  VirtualInvokeData _20_WriteString;
  VirtualInvokeData _21_WriteSurrogateCharEntity;
  VirtualInvokeData _22_WriteChars;
  VirtualInvokeData _23_WriteRaw;
  VirtualInvokeData _24_WriteRaw;
  VirtualInvokeData _25_WriteBase64;
  VirtualInvokeData _26_WriteBinHex;
  VirtualInvokeData _27_get_WriteState;
  VirtualInvokeData _28_Close;
  VirtualInvokeData _29_Flush;
  VirtualInvokeData _30_LookupPrefix;
  VirtualInvokeData _31_WriteValue;
  VirtualInvokeData _32_WriteValue;
  VirtualInvokeData _33_WriteValue;
  VirtualInvokeData _34_WriteValue;
  VirtualInvokeData _35_WriteValue;
  VirtualInvokeData _36_WriteValue;
  VirtualInvokeData _37_WriteValue;
  VirtualInvokeData _38_WriteValue;
  VirtualInvokeData _39_WriteValue;
  VirtualInvokeData _40_Dispose;
  VirtualInvokeData _41_set_NamespaceResolver;
  VirtualInvokeData _42_WriteXmlDeclaration;
  VirtualInvokeData _43_WriteXmlDeclaration;
  VirtualInvokeData _44_StartElementContent;
  VirtualInvokeData _45_OnRootElement;
  VirtualInvokeData _46_WriteEndElement;
  VirtualInvokeData _47_WriteFullEndElement;
  VirtualInvokeData _48_WriteNamespaceDeclaration;
  VirtualInvokeData _49_get_SupportsNamespaceDeclarationInChunks;
  VirtualInvokeData _50_WriteStartNamespaceDeclaration;
  VirtualInvokeData _51_WriteEndNamespaceDeclaration;
  VirtualInvokeData _52_WriteEndBase64;
  VirtualInvokeData _53_Close;
  VirtualInvokeData _54_FlushBuffer;
};

struct __HtmlEncodedRawTextWriterIndent_Il2CppClass {
  Il2CppClass_1 _1;
  __HtmlEncodedRawTextWriterIndent_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __HtmlEncodedRawTextWriterIndent_Il2CppVtbl vtbl;
};

class HtmlEncodedRawTextWriterIndent {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C81688;
  static inline    __HtmlEncodedRawTextWriterIndent_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __HtmlEncodedRawTextWriterIndent_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__HtmlEncodedRawTextWriterIndent_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __HtmlEncodedRawTextWriterIndent_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::XmlRawWriterBase64Encoder* base64Encoder;
  ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* resolver;
  bool XmlEncodedRawTextWriter_useAsync;
  ModdingAPI::Exposed::System::Byte_array* bufBytes;
  ModdingAPI::Exposed::System::IO::Stream* stream;
  ModdingAPI::Exposed::System::Text::Encoding* encoding;
  ModdingAPI::Exposed::System::Xml::XmlCharType xmlCharType;
  int32_t bufPos;
  int32_t textPos;
  int32_t contentPos;
  int32_t cdataPos;
  int32_t attrEndPos;
  int32_t bufLen;
  bool writeToNull;
  bool hadDoubleBracket;
  bool inAttributeValue;
  int32_t bufBytesUsed;
  ModdingAPI::Exposed::System::Char_array* bufChars;
  ModdingAPI::Exposed::System::Text::Encoder* encoder;
  ModdingAPI::Exposed::System::IO::TextWriter* writer;
  bool trackTextContent;
  bool inTextContent;
  int32_t XmlEncodedRawTextWriter_lastMarkPos;
  ModdingAPI::Exposed::System::Int32_array* XmlEncodedRawTextWriter_textContentMarks;
  ModdingAPI::Exposed::System::Xml::CharEntityEncoderFallback* XmlEncodedRawTextWriter_charEntityFallback;
  int32_t newLineHandling;
  bool closeOutput;
  bool omitXmlDeclaration;
  System_String* newLineChars;
  bool checkCharacters;
  int32_t standalone;
  int32_t outputMethod;
  bool autoXmlDeclaration;
  bool mergeCDataSections;
  ModdingAPI::Exposed::System::Xml::ByteStack* elementScope;
  uint32_t currentElementProperties;
  uint32_t HtmlEncodedRawTextWriter_currentAttributeProperties;
  bool HtmlEncodedRawTextWriter_endsWithAmpersand;
  ModdingAPI::Exposed::System::Byte_array* HtmlEncodedRawTextWriter_uriEscapingBuffer;
  System_String* HtmlEncodedRawTextWriter_mediaType;
  bool HtmlEncodedRawTextWriter_doNotEscapeUriAttributes;
  int32_t indentLevel;
  int32_t endBlockPos;
  System_String* indentChars;
  bool newLineOnAttributes;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::IO::TextWriter* writer, ModdingAPI::Exposed::System::Xml::XmlWriterSettings* settings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::HtmlEncodedRawTextWriterIndent*, ModdingAPI::Exposed::System::IO::TextWriter*, ModdingAPI::Exposed::System::Xml::XmlWriterSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD3CC30))(this, writer, settings);
  }
  void ::ctor(ModdingAPI::Exposed::System::IO::Stream* stream, ModdingAPI::Exposed::System::Xml::XmlWriterSettings* settings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::HtmlEncodedRawTextWriterIndent*, ModdingAPI::Exposed::System::IO::Stream*, ModdingAPI::Exposed::System::Xml::XmlWriterSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD3CC90))(this, stream, settings);
  }
  void WriteDocType(System_String* name, System_String* pubid, System_String* sysid, System_String* subset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::HtmlEncodedRawTextWriterIndent*, System_String*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD3CCF0))(this, name, pubid, sysid, subset);
  }
  void WriteStartElement(System_String* prefix, System_String* localName, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::HtmlEncodedRawTextWriterIndent*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD3CD20))(this, prefix, localName, ns);
  }
  void StartElementContent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::HtmlEncodedRawTextWriterIndent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD3CFB0))(this);
  }
  void WriteEndElement(System_String* prefix, System_String* localName, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::HtmlEncodedRawTextWriterIndent*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD3D040))(this, prefix, localName, ns);
  }
  void WriteStartAttribute(System_String* prefix, System_String* localName, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::HtmlEncodedRawTextWriterIndent*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD3D0E0))(this, prefix, localName, ns);
  }
  void FlushBuffer() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::HtmlEncodedRawTextWriterIndent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD3D180))(this);
  }
  void Init(ModdingAPI::Exposed::System::Xml::XmlWriterSettings* settings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::HtmlEncodedRawTextWriterIndent*, ModdingAPI::Exposed::System::Xml::XmlWriterSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD3D1A0))(this, settings);
  }
  void WriteIndent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::HtmlEncodedRawTextWriterIndent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD3D1E0))(this);
  }
};
}