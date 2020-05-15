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


namespace ModdingAPI::Exposed::Newtonsoft::Json::Converters {
struct __IsoDateTimeConverter_Il2CppStaticFields {
};

struct __IsoDateTimeConverter_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_WriteJson;
  VirtualInvokeData _5_ReadJson;
  VirtualInvokeData _6_CanConvert;
  VirtualInvokeData _7_get_CanRead;
  VirtualInvokeData _8_get_CanWrite;
};

struct __IsoDateTimeConverter_Il2CppClass {
  Il2CppClass_1 _1;
  __IsoDateTimeConverter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __IsoDateTimeConverter_Il2CppVtbl vtbl;
};

class IsoDateTimeConverter {
public:
  // Il2Cpp fields:
  __IsoDateTimeConverter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t _dateTimeStyles;
  System_String* _dateTimeFormat;
  ModdingAPI::Exposed::System::Globalization::CultureInfo* _culture;

  // Member methods:
  ModdingAPI::Exposed::System::Globalization::CultureInfo* get_Culture() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::CultureInfo*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::IsoDateTimeConverter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D4D20))(this);
  }
  void WriteJson(ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter* writer, Il2CppObject* value, ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializer* serializer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::IsoDateTimeConverter*, ModdingAPI::Exposed::Newtonsoft::Json::JsonWriter*, Il2CppObject*, ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D4DE0))(this, writer, value, serializer);
  }
  Il2CppObject* ReadJson(ModdingAPI::Exposed::Newtonsoft::Json::JsonReader* reader, ModdingAPI::Exposed::System::Type* objectType, Il2CppObject* existingValue, ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializer* serializer) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::IsoDateTimeConverter*, ModdingAPI::Exposed::Newtonsoft::Json::JsonReader*, ModdingAPI::Exposed::System::Type*, Il2CppObject*, ModdingAPI::Exposed::Newtonsoft::Json::JsonSerializer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D5060))(this, reader, objectType, existingValue, serializer);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Newtonsoft::Json::Converters::IsoDateTimeConverter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9D56D0))(this);
  }
};
}