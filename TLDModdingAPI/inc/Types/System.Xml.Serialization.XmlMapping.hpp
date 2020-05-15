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


namespace ModdingAPI::Exposed::System::Xml::Serialization {
struct __XmlMapping_Il2CppStaticFields {
};

struct __XmlMapping_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __XmlMapping_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlMapping_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlMapping_Il2CppVtbl vtbl;
};

class XmlMapping {
public:
  // Il2Cpp fields:
  __XmlMapping_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Xml::Serialization::ObjectMap* map;
  ModdingAPI::Exposed::System::Collections::ArrayList* relatedMaps;
  int32_t format;
  System_String* _elementName;
  System_String* _namespace;
  System_String* key;

  // Member methods:
  void ::ctor(System_String* elementName, System_String* ns) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlMapping*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8B4B00))(this, elementName, ns);
  }
  System_String* get_ElementName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlMapping*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  System_String* get_Namespace() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlMapping*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  void SetKey(System_String* key) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlMapping*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A420))(this, key);
  }
  ModdingAPI::Exposed::System::Xml::Serialization::ObjectMap* get_ObjectMap() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::Serialization::ObjectMap*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlMapping*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void set_ObjectMap(ModdingAPI::Exposed::System::Xml::Serialization::ObjectMap* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlMapping*, ModdingAPI::Exposed::System::Xml::Serialization::ObjectMap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, value);
  }
  ModdingAPI::Exposed::System::Collections::ArrayList* get_RelatedMaps() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::ArrayList*(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlMapping*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void set_RelatedMaps(ModdingAPI::Exposed::System::Collections::ArrayList* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlMapping*, ModdingAPI::Exposed::System::Collections::ArrayList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, value);
  }
  int32_t get_Format() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlMapping*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x37AAE0))(this);
  }
  void set_Format(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::Serialization::XmlMapping*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3838E0))(this, value);
  }
};
}