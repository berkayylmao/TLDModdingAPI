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


namespace ModdingAPI::Exposed::System::Xml {
struct __XmlAsyncCheckReaderWithLineInfo_Il2CppStaticFields {
};

struct __XmlAsyncCheckReaderWithLineInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_get_Settings;
  VirtualInvokeData _6_get_NodeType;
  VirtualInvokeData _7_get_Name;
  VirtualInvokeData _8_get_LocalName;
  VirtualInvokeData _9_get_NamespaceURI;
  VirtualInvokeData _10_get_Prefix;
  VirtualInvokeData _11_get_HasValue;
  VirtualInvokeData _12_get_Value;
  VirtualInvokeData _13_get_Depth;
  VirtualInvokeData _14_get_BaseURI;
  VirtualInvokeData _15_get_IsEmptyElement;
  VirtualInvokeData _16_get_IsDefault;
  VirtualInvokeData _17_get_SchemaInfo;
  VirtualInvokeData _18_ReadContentAsString;
  VirtualInvokeData _19_get_AttributeCount;
  VirtualInvokeData _20_MoveToAttribute;
  VirtualInvokeData _21_MoveToAttribute;
  VirtualInvokeData _22_MoveToFirstAttribute;
  VirtualInvokeData _23_MoveToNextAttribute;
  VirtualInvokeData _24_MoveToElement;
  VirtualInvokeData _25_ReadAttributeValue;
  VirtualInvokeData _26_Read;
  VirtualInvokeData _27_get_EOF;
  VirtualInvokeData _28_Close;
  VirtualInvokeData _29_get_ReadState;
  VirtualInvokeData _30_get_NameTable;
  VirtualInvokeData _31_LookupNamespace;
  VirtualInvokeData _32_get_CanResolveEntity;
  VirtualInvokeData _33_ResolveEntity;
  VirtualInvokeData _34_MoveToContent;
  VirtualInvokeData _35_ReadStartElement;
  VirtualInvokeData _36_ReadEndElement;
  VirtualInvokeData _37_IsStartElement;
  VirtualInvokeData _38_Dispose;
  VirtualInvokeData _39_get_NamespaceManager;
  VirtualInvokeData _40_get_DtdInfo;
  VirtualInvokeData _43_get_LineNumber;
  VirtualInvokeData _44_get_LinePosition;
};

struct __XmlAsyncCheckReaderWithLineInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlAsyncCheckReaderWithLineInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlAsyncCheckReaderWithLineInfo_Il2CppVtbl vtbl;
};

class XmlAsyncCheckReaderWithLineInfo {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C65A50;
  static inline    __XmlAsyncCheckReaderWithLineInfo_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlAsyncCheckReaderWithLineInfo_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlAsyncCheckReaderWithLineInfo_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlAsyncCheckReaderWithLineInfo_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::XmlReader* XmlAsyncCheckReader_coreReader;
  ModdingAPI::Exposed::System::Threading::Tasks::Task* XmlAsyncCheckReader_lastTask;
  ModdingAPI::Exposed::System::Xml::IXmlLineInfo* readerAsIXmlLineInfo;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Xml::XmlReader* reader) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlAsyncCheckReaderWithLineInfo*, ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9BC550))(this, reader);
  }
  int32_t get_LineNumber() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlAsyncCheckReaderWithLineInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9BC620))(this);
  }
  int32_t get_LinePosition() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlAsyncCheckReaderWithLineInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9BC6B0))(this);
  }
};
}