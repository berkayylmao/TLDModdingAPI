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


namespace ModdingAPI::Exposed::System::Diagnostics::Tracing {
struct __TraceLoggingMetadataCollector_Il2CppStaticFields {
};

struct __TraceLoggingMetadataCollector_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TraceLoggingMetadataCollector_Il2CppClass {
  Il2CppClass_1 _1;
  __TraceLoggingMetadataCollector_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TraceLoggingMetadataCollector_Il2CppVtbl vtbl;
};

class TraceLoggingMetadataCollector {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C23E30;
  static inline    __TraceLoggingMetadataCollector_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TraceLoggingMetadataCollector_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TraceLoggingMetadataCollector_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TraceLoggingMetadataCollector_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl* impl;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::FieldMetadata* currentGroup;
  int32_t bufferedArrayFieldCount;
  int32_t _Tags_k__BackingField;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64DA40))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* other, ModdingAPI::Exposed::System::Diagnostics::Tracing::FieldMetadata* group) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ModdingAPI::Exposed::System::Diagnostics::Tracing::FieldMetadata*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64DCB0))(this, other, group);
  }
  int32_t get_Tags() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x37AAF0))(this);
  }
  void set_Tags(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3838F0))(this, value);
  }
  int32_t get_ScratchSize() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64DCE0))(this);
  }
  int32_t get_DataCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64DD00))(this);
  }
  int32_t get_PinCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64DD20))(this);
  }
  bool get_BeginningBufferedArray() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64DD40))(this);
  }
  ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* AddGroup(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64DD50))(this, name);
  }
  void AddScalar(System_String* name, int32_t type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64DFE0))(this, name, type);
  }
  void AddBinary(System_String* name, int32_t type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64E270))(this, name, type);
  }
  void AddArray(System_String* name, int32_t type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64E4A0))(this, name, type);
  }
  void BeginBufferedArray() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64E750))(this);
  }
  void EndBufferedArray() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64E840))(this);
  }
  ModdingAPI::Exposed::System::Byte_array* GetMetadata() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64E920))(this);
  }
  void AddField(ModdingAPI::Exposed::System::Diagnostics::Tracing::FieldMetadata* fieldMetadata) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ModdingAPI::Exposed::System::Diagnostics::Tracing::FieldMetadata*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64E9F0))(this, fieldMetadata);
  }
};
}