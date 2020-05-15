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
struct __XmlResolver_Il2CppStaticFields {
};

struct __XmlResolver_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_ResolveUri;
  VirtualInvokeData _6_SupportsType;
  VirtualInvokeData _7_GetEntityAsync;
  VirtualInvokeData _65535__ctor;
};

struct __XmlResolver_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlResolver_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlResolver_Il2CppVtbl vtbl;
};

class XmlResolver {
public:
  // Il2Cpp fields:
  __XmlResolver_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  ModdingAPI::Exposed::System::Uri* ResolveUri(ModdingAPI::Exposed::System::Uri* baseUri, System_String* relativeUri) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Uri*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlResolver*, ModdingAPI::Exposed::System::Uri*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF62C0))(this, baseUri, relativeUri);
  }
  bool SupportsType(ModdingAPI::Exposed::System::Uri* absoluteUri, ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlResolver*, ModdingAPI::Exposed::System::Uri*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF66D0))(this, absoluteUri, type);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_* GetEntityAsync(ModdingAPI::Exposed::System::Uri* absoluteUri, System_String* role, ModdingAPI::Exposed::System::Type* ofObjectToReturn) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlResolver*, ModdingAPI::Exposed::System::Uri*, System_String*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xBF6810))(this, absoluteUri, role, ofObjectToReturn);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlResolver*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
};
}