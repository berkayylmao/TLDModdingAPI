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
struct __XmlReader_Il2CppStaticFields {
  uint32_t IsTextualNodeBitmap;
  uint32_t CanReadContentAsBitmap;
  uint32_t HasValueBitmap;
};

struct __XmlReader_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_get_Settings;
  VirtualInvokeData _7_get_Name;
  VirtualInvokeData _11_get_HasValue;
  VirtualInvokeData _16_get_IsDefault;
  VirtualInvokeData _17_get_SchemaInfo;
  VirtualInvokeData _18_ReadContentAsString;
  VirtualInvokeData _21_MoveToAttribute;
  VirtualInvokeData _28_Close;
  VirtualInvokeData _32_get_CanResolveEntity;
  VirtualInvokeData _34_MoveToContent;
  VirtualInvokeData _35_ReadStartElement;
  VirtualInvokeData _36_ReadEndElement;
  VirtualInvokeData _37_IsStartElement;
  VirtualInvokeData _38_Dispose;
  VirtualInvokeData _39_get_NamespaceManager;
  VirtualInvokeData _40_get_DtdInfo;
  VirtualInvokeData _65535__ctor;
};

struct __XmlReader_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlReader_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlReader_Il2CppVtbl vtbl;
};

class XmlReader {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C3F8A0;
  static inline    XmlReader* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C40608;
  static inline    __XmlReader_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline XmlReader* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (XmlReader**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __XmlReader_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlReader_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlReader_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  ModdingAPI::Exposed::System::Xml::XmlReaderSettings* get_Settings() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlReaderSettings*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2400))(this);
  }
  bool get_HasValue() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2540))(this);
  }
  bool get_IsDefault() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  ModdingAPI::Exposed::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Schema::IXmlSchemaInfo*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF25F0))(this);
  }
  System_String* ReadContentAsString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2670))(this);
  }
  void MoveToAttribute(int32_t i) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF27B0))(this, i);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  bool get_CanResolveEntity() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  int32_t MoveToContent() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF28D0))(this);
  }
  void ReadStartElement(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2960))(this, name);
  }
  void ReadEndElement() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2B30))(this);
  }
  bool IsStartElement() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2C70))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2C90))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2CB0))(this, disposing);
  }
  ModdingAPI::Exposed::System::Xml::XmlNamespaceManager* get_NamespaceManager() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlNamespaceManager*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::System::Exception* CreateReadContentAsException(System_String* methodName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2E70))(this, methodName);
  }
  bool CanReadContentAs() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2F50))(this);
  }
  System_String* InternalReadContentAsString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF34B0))(this);
  }
  ModdingAPI::Exposed::System::Xml::IDtdInfo* get_DtdInfo() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::IDtdInfo*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<uint32_t> IsTextualNodeBitmap = __CppStaticProperty<uint32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->IsTextualNodeBitmap; }
  );
  static inline __CppStaticProperty<uint32_t> CanReadContentAsBitmap = __CppStaticProperty<uint32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->CanReadContentAsBitmap; }
  );
  static inline __CppStaticProperty<uint32_t> HasValueBitmap = __CppStaticProperty<uint32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->HasValueBitmap; }
  );

  // Static methods:
  static inline bool CanReadContentAs(int32_t nodeType) {
    return reinterpret_cast<bool(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2CF0))(nodeType);
  }
  static inline bool HasValueInternal(int32_t nodeType) {
    return reinterpret_cast<bool(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF2DB0))(nodeType);
  }
  static inline ModdingAPI::Exposed::System::Exception* CreateReadContentAsException(System_String* methodName, int32_t nodeType, ModdingAPI::Exposed::System::Xml::IXmlLineInfo* lineInfo) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::Xml::IXmlLineInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF3000))(methodName, nodeType, lineInfo);
  }
  static inline System_String* AddLineInfo(System_String* message, ModdingAPI::Exposed::System::Xml::IXmlLineInfo* lineInfo) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Xml::IXmlLineInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF32A0))(message, lineInfo);
  }
  static inline ModdingAPI::Exposed::System::Xml::XmlReader* Create(ModdingAPI::Exposed::System::IO::Stream* input, ModdingAPI::Exposed::System::Xml::XmlReaderSettings* settings, System_String* baseUri) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlReader*(__fastcall*)(ModdingAPI::Exposed::System::IO::Stream*, ModdingAPI::Exposed::System::Xml::XmlReaderSettings*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF37C0))(input, settings, baseUri);
  }
  static inline ModdingAPI::Exposed::System::Xml::XmlReader* Create(ModdingAPI::Exposed::System::IO::TextReader* input) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlReader*(__fastcall*)(ModdingAPI::Exposed::System::IO::TextReader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF3950))(input);
  }
  static inline ModdingAPI::Exposed::System::Xml::XmlReader* Create(ModdingAPI::Exposed::System::IO::TextReader* input, ModdingAPI::Exposed::System::Xml::XmlReaderSettings* settings, System_String* baseUri) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlReader*(__fastcall*)(ModdingAPI::Exposed::System::IO::TextReader*, ModdingAPI::Exposed::System::Xml::XmlReaderSettings*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF3A10))(input, settings, baseUri);
  }
  static inline int32_t CalcBufferSize(ModdingAPI::Exposed::System::IO::Stream* input) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::IO::Stream*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF3B90))(input);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF3C90))();
  }
};
}