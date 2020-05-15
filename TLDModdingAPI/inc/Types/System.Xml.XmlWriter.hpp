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
#include "ModdingAPI.Exposed.System.DateTime.hpp"
#include "ModdingAPI.Exposed.System.Decimal.hpp"


namespace ModdingAPI::Exposed::System::Xml {
struct __XmlWriter_Il2CppStaticFields {
};

struct __XmlWriter_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _26_WriteBinHex;
  VirtualInvokeData _28_Close;
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
  VirtualInvokeData _65535__ctor;
};

struct __XmlWriter_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlWriter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlWriter_Il2CppVtbl vtbl;
};

class XmlWriter {
public:
  // Il2Cpp fields:
  __XmlWriter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void WriteStartElement(System_String* localName, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DD3A0))(this, localName, ns);
  }
  void WriteStartElement(System_String* localName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DD3D0))(this, localName);
  }
  void WriteAttributeString(System_String* localName, System_String* ns, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DD400))(this, localName, ns, value);
  }
  void WriteAttributeString(System_String* localName, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DD470))(this, localName, value);
  }
  void WriteAttributeString(System_String* prefix, System_String* localName, System_String* ns, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, System_String*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DD4E0))(this, prefix, localName, ns, value);
  }
  void WriteBinHex(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t index, int32_t count) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DD530))(this, buffer, index, count);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void WriteValue(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DD560))(this, value);
  }
  void WriteValue(System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DD680))(this, value);
  }
  void WriteValue(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DD6A0))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::DateTime value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DD760))(this, value);
  }
  void WriteValue(double value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DD8A0))(this, value);
  }
  void WriteValue(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DD960))(this, value);
  }
  void WriteValue(ModdingAPI::Exposed::System::Decimal value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, ModdingAPI::Exposed::System::Decimal)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DDA20))(this, value);
  }
  void WriteValue(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DDB00))(this, value);
  }
  void WriteValue(int64_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DDBE0))(this, value);
  }
  void WriteElementString(System_String* localName, System_String* ns, System_String* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DDCC0))(this, localName, ns, value);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DDD30))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DDD50))(this, disposing);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Xml::XmlWriter* Create(ModdingAPI::Exposed::System::IO::Stream* output, ModdingAPI::Exposed::System::Xml::XmlWriterSettings* settings) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlWriter*(__fastcall*)(ModdingAPI::Exposed::System::IO::Stream*, ModdingAPI::Exposed::System::Xml::XmlWriterSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DDD90))(output, settings);
  }
  static inline ModdingAPI::Exposed::System::Xml::XmlWriter* Create(ModdingAPI::Exposed::System::IO::TextWriter* output) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlWriter*(__fastcall*)(ModdingAPI::Exposed::System::IO::TextWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DDF00))(output);
  }
  static inline ModdingAPI::Exposed::System::Xml::XmlWriter* Create(ModdingAPI::Exposed::System::IO::TextWriter* output, ModdingAPI::Exposed::System::Xml::XmlWriterSettings* settings) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XmlWriter*(__fastcall*)(ModdingAPI::Exposed::System::IO::TextWriter*, ModdingAPI::Exposed::System::Xml::XmlWriterSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5DDF10))(output, settings);
  }
};
}