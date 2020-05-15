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
#include "ModdingAPI.Exposed.System.Runtime.Serialization.StreamingContext.hpp"


namespace ModdingAPI::Exposed::System::Xml::XPath {
struct __XPathException_Il2CppStaticFields {
};

struct __XPathException_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_get_Message;
  VirtualInvokeData _6_get_Data;
  VirtualInvokeData _7_get_InnerException;
  VirtualInvokeData _8_get_StackTrace;
  VirtualInvokeData _9_get_Source;
  VirtualInvokeData _10_GetObjectData;
  VirtualInvokeData _11_GetType;
};

struct __XPathException_Il2CppClass {
  Il2CppClass_1 _1;
  __XPathException_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XPathException_Il2CppVtbl vtbl;
};

class XPathException {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C650F0;
  static inline    __XPathException_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XPathException_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XPathException_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XPathException_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* Exception__className;
  System_String* _message;
  ModdingAPI::Exposed::System::Collections::IDictionary* Exception__data;
  ModdingAPI::Exposed::System::Exception* Exception__innerException;
  System_String* Exception__helpURL;
  Il2CppObject* Exception__stackTrace;
  System_String* Exception__stackTraceString;
  System_String* Exception__remoteStackTraceString;
  int32_t Exception__remoteStackIndex;
  Il2CppObject* Exception__dynamicMethods;
  int32_t _HResult;
  System_String* Exception__source;
  ModdingAPI::Exposed::System::Runtime::Serialization::SafeSerializationManager* Exception__safeSerializationManager;
  ModdingAPI::Exposed::System::Diagnostics::StackTrace_array* captured_traces;
  ModdingAPI::Exposed::System::IntPtr_array* Exception_native_trace_ips;
  System_String* res;
  ModdingAPI::Exposed::System::String_array* args;
  System_String* message;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XPath::XPathException*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B8470))(this, info, context);
  }
  void GetObjectData(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XPath::XPathException*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B8760))(this, info, context);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XPath::XPathException*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B8860))(this);
  }
  void ::ctor(System_String* message, ModdingAPI::Exposed::System::Exception* innerException) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XPath::XPathException*, System_String*, ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B89F0))(this, message, innerException);
  }
  void ::ctor(System_String* res, ModdingAPI::Exposed::System::String_array* args) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XPath::XPathException*, System_String*, ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B90D0))(this, res, args);
  }
  void ::ctor(System_String* res, ModdingAPI::Exposed::System::String_array* args, ModdingAPI::Exposed::System::Exception* inner) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XPath::XPathException*, System_String*, ModdingAPI::Exposed::System::String_array*, ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B9130))(this, res, args, inner);
  }
  System_String* get_Message() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XPath::XPathException*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B9280))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Xml::XPath::XPathException* Create(System_String* res) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XPath::XPathException*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B8B30))(res);
  }
  static inline ModdingAPI::Exposed::System::Xml::XPath::XPathException* Create(System_String* res, System_String* arg) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XPath::XPathException*(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B8CA0))(res, arg);
  }
  static inline ModdingAPI::Exposed::System::Xml::XPath::XPathException* Create(System_String* res, System_String* arg, System_String* arg2) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Xml::XPath::XPathException*(__fastcall*)(System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B8E90))(res, arg, arg2);
  }
  static inline System_String* CreateMessage(System_String* res, ModdingAPI::Exposed::System::String_array* args) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9B91A0))(res, args);
  }
};
}