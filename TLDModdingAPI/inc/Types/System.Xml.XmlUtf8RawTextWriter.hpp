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
struct __XmlUtf8RawTextWriter_Il2CppStaticFields {
};

struct __XmlUtf8RawTextWriter_Il2CppVtbl {
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

struct __XmlUtf8RawTextWriter_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlUtf8RawTextWriter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlUtf8RawTextWriter_Il2CppVtbl vtbl;
};

class XmlUtf8RawTextWriter {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C81110;
  static inline    __XmlUtf8RawTextWriter_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlUtf8RawTextWriter_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlUtf8RawTextWriter_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlUtf8RawTextWriter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::XmlRawWriterBase64Encoder* base64Encoder;
  ModdingAPI::Exposed::System::Xml::IXmlNamespaceResolver* resolver;
  bool useAsync;
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
  int32_t newLineHandling;
  bool closeOutput;
  bool omitXmlDeclaration;
  System_String* newLineChars;
  bool checkCharacters;
  int32_t standalone;
  int32_t outputMethod;
  bool autoXmlDeclaration;
  bool mergeCDataSections;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Xml::XmlWriterSettings* settings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, ModdingAPI::Exposed::System::Xml::XmlWriterSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CBE40))(this, settings);
  }
  void ::ctor(ModdingAPI::Exposed::System::IO::Stream* stream, ModdingAPI::Exposed::System::Xml::XmlWriterSettings* settings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, ModdingAPI::Exposed::System::IO::Stream*, ModdingAPI::Exposed::System::Xml::XmlWriterSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CBF60))(this, stream, settings);
  }
  void WriteXmlDeclaration(int32_t standalone) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CC1E0))(this, standalone);
  }
  void WriteXmlDeclaration(System_String* xmldecl) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CC400))(this, xmldecl);
  }
  void WriteDocType(System_String* name, System_String* pubid, System_String* sysid, System_String* subset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CC4B0))(this, name, pubid, sysid, subset);
  }
  void WriteStartElement(System_String* prefix, System_String* localName, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CC820))(this, prefix, localName, ns);
  }
  void StartElementContent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CC900))(this);
  }
  void WriteEndElement(System_String* prefix, System_String* localName, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CC950))(this, prefix, localName, ns);
  }
  void WriteFullEndElement(System_String* prefix, System_String* localName, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CCB60))(this, prefix, localName, ns);
  }
  void WriteStartAttribute(System_String* prefix, System_String* localName, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CCCB0))(this, prefix, localName, ns);
  }
  void WriteEndAttribute() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CCE00))(this);
  }
  void WriteNamespaceDeclaration(System_String* prefix, System_String* namespaceName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CCE50))(this, prefix, namespaceName);
  }
  bool get_SupportsNamespaceDeclarationInChunks() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this);
  }
  void WriteStartNamespaceDeclaration(System_String* prefix) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CCEB0))(this, prefix);
  }
  void WriteEndNamespaceDeclaration() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CD040))(this);
  }
  void WriteCData(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CD090))(this, text);
  }
  void WriteComment(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CD3B0))(this, text);
  }
  void WriteProcessingInstruction(System_String* name, System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CD580))(this, name, text);
  }
  void WriteEntityRef(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CD710))(this, name);
  }
  void WriteCharEntity(wchar_t ch) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CD7E0))(this, ch);
  }
  void WriteWhitespace(System_String* ws) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CDA50))(this, ws);
  }
  void WriteString(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CDA50))(this, text);
  }
  void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, wchar_t, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CDA90))(this, lowChar, highChar);
  }
  void WriteChars(ModdingAPI::Exposed::System::Char_array* buffer, int32_t index, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CDC80))(this, buffer, index, count);
  }
  void WriteRaw(ModdingAPI::Exposed::System::Char_array* buffer, int32_t index, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, ModdingAPI::Exposed::System::Char_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CDCE0))(this, buffer, index, count);
  }
  void WriteRaw(System_String* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CDD40))(this, data);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CDD80))(this);
  }
  void Flush() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CDF10))(this);
  }
  void FlushBuffer() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CDF50))(this);
  }
  void FlushEncoder() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void WriteAttributeTextBlock(wchar_t* pSrc, wchar_t* pSrcEnd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, wchar_t*, wchar_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CE2A0))(this, pSrc, pSrcEnd);
  }
  void WriteElementTextBlock(wchar_t* pSrc, wchar_t* pSrcEnd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, wchar_t*, wchar_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CE560))(this, pSrc, pSrcEnd);
  }
  void RawText(System_String* s) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CE890))(this, s);
  }
  void RawText(wchar_t* pSrcBegin, wchar_t* pSrcEnd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, wchar_t*, wchar_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CE8C0))(this, pSrcBegin, pSrcEnd);
  }
  void WriteRawWithCharChecking(wchar_t* pSrcBegin, wchar_t* pSrcEnd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, wchar_t*, wchar_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CEA30))(this, pSrcBegin, pSrcEnd);
  }
  void WriteCommentOrPi(System_String* text, int32_t stopChar) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CECE0))(this, text, stopChar);
  }
  void WriteCDataSection(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CF080))(this, text);
  }
  uint8_t* InvalidXmlChar(int32_t ch, uint8_t* pDst, bool entitize) {
    return reinterpret_cast<uint8_t*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, int32_t, uint8_t*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CF600))(this, ch, pDst, entitize);
  }
  void EncodeChar(wchar_t* pSrc, wchar_t* pSrcEnd, uint8_t* pDst) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, wchar_t*, wchar_t*, uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CF7F0))(this, pSrc, pSrcEnd, pDst);
  }
  uint8_t* WriteNewLine(uint8_t* pDst) {
    return reinterpret_cast<uint8_t*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CF9C0))(this, pDst);
  }
  void ValidateContentChars(System_String* chars, System_String* propertyName, bool allowOnlyWhitespace) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlUtf8RawTextWriter*, System_String*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CFBD0))(this, chars, propertyName, allowOnlyWhitespace);
  }

  // Static methods:
  static inline bool IsSurrogateByte(uint8_t b) {
    return reinterpret_cast<bool(__fastcall*)(uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CF3F0))(b);
  }
  static inline uint8_t* EncodeSurrogate(wchar_t* pSrc, wchar_t* pSrcEnd, uint8_t* pDst) {
    return reinterpret_cast<uint8_t*(__fastcall*)(wchar_t*, wchar_t*, uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CF400))(pSrc, pSrcEnd, pDst);
  }
  static inline uint8_t* EncodeMultibyteUTF8(int32_t ch, uint8_t* pDst) {
    return reinterpret_cast<uint8_t*(__fastcall*)(int32_t, uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CF8C0))(ch, pDst);
  }
  static inline void CharToUTF8(wchar_t* pSrc, wchar_t* pSrcEnd, uint8_t* pDst) {
    reinterpret_cast<void(__fastcall*)(wchar_t*, wchar_t*, uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CF910))(pSrc, pSrcEnd, pDst);
  }
  static inline uint8_t* LtEntity(uint8_t* pDst) {
    return reinterpret_cast<uint8_t*(__fastcall*)(uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CFA30))(pDst);
  }
  static inline uint8_t* GtEntity(uint8_t* pDst) {
    return reinterpret_cast<uint8_t*(__fastcall*)(uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CFA40))(pDst);
  }
  static inline uint8_t* AmpEntity(uint8_t* pDst) {
    return reinterpret_cast<uint8_t*(__fastcall*)(uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CFA50))(pDst);
  }
  static inline uint8_t* QuoteEntity(uint8_t* pDst) {
    return reinterpret_cast<uint8_t*(__fastcall*)(uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CFA60))(pDst);
  }
  static inline uint8_t* TabEntity(uint8_t* pDst) {
    return reinterpret_cast<uint8_t*(__fastcall*)(uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CFA80))(pDst);
  }
  static inline uint8_t* LineFeedEntity(uint8_t* pDst) {
    return reinterpret_cast<uint8_t*(__fastcall*)(uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CFA90))(pDst);
  }
  static inline uint8_t* CarriageReturnEntity(uint8_t* pDst) {
    return reinterpret_cast<uint8_t*(__fastcall*)(uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CFAA0))(pDst);
  }
  static inline uint8_t* CharEntity(uint8_t* pDst, wchar_t ch) {
    return reinterpret_cast<uint8_t*(__fastcall*)(uint8_t*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CFAB0))(pDst, ch);
  }
  static inline uint8_t* RawStartCData(uint8_t* pDst) {
    return reinterpret_cast<uint8_t*(__fastcall*)(uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CFBA0))(pDst);
  }
  static inline uint8_t* RawEndCData(uint8_t* pDst) {
    return reinterpret_cast<uint8_t*(__fastcall*)(uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5CFBC0))(pDst);
  }
};
}