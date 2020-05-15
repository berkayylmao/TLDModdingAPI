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


namespace ModdingAPI::Exposed::System::Net {
struct __WebResponse_Il2CppStaticFields {
};

struct __WebResponse_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_CreateObjRef;
  VirtualInvokeData _5_InitializeLifetimeService;
  VirtualInvokeData _6_System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData _7_Dispose;
  VirtualInvokeData _8_GetObjectData;
  VirtualInvokeData _9_Close;
  VirtualInvokeData _10_Dispose;
  VirtualInvokeData _11_GetResponseStream;
  VirtualInvokeData _12_get_ResponseUri;
  VirtualInvokeData _13_get_Headers;
};

struct __WebResponse_Il2CppClass {
  Il2CppClass_1 _1;
  __WebResponse_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __WebResponse_Il2CppVtbl vtbl;
};

class WebResponse {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3DEB8;
  static inline    __WebResponse_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __WebResponse_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__WebResponse_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __WebResponse_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  Il2CppObject* MarshalByRefObject__identity;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* serializationInfo, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext streamingContext) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebResponse*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, serializationInfo, streamingContext);
  }
  void System::Runtime::Serialization::ISerializable::GetObjectData(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* serializationInfo, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext streamingContext) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebResponse*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x91FD60))(this, serializationInfo, streamingContext);
  }
  void GetObjectData(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* serializationInfo, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext streamingContext) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebResponse*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, serializationInfo, streamingContext);
  }
  void Close() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB0C670))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebResponse*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB0C720))(this, disposing);
  }
  ModdingAPI::Exposed::System::IO::Stream* GetResponseStream() {
    return reinterpret_cast<ModdingAPI::Exposed::System::IO::Stream*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB0C7D0))(this);
  }
  ModdingAPI::Exposed::System::Uri* get_ResponseUri() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Uri*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB0C810))(this);
  }
  ModdingAPI::Exposed::System::Net::WebHeaderCollection* get_Headers() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Net::WebHeaderCollection*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebResponse*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xB0C850))(this);
  }
};
}