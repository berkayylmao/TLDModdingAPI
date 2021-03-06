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
struct __TraceLoggingTypeInfo_Il2CppStaticFields {
};

struct __TraceLoggingTypeInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _6_GetData;
  VirtualInvokeData _65535__ctor;
};

struct __TraceLoggingTypeInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __TraceLoggingTypeInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TraceLoggingTypeInfo_Il2CppVtbl vtbl;
};

class TraceLoggingTypeInfo {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C22BB8;
  static inline    __TraceLoggingTypeInfo_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TraceLoggingTypeInfo_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TraceLoggingTypeInfo_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TraceLoggingTypeInfo_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* name;
  int64_t keywords;
  int32_t level;
  int32_t opcode;
  int32_t tags;
  ModdingAPI::Exposed::System::Type* dataType;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Type* dataType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingTypeInfo*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64F090))(this, dataType);
  }
  void ::ctor(ModdingAPI::Exposed::System::Type* dataType, System_String* name, int32_t level, int32_t opcode, int64_t keywords, int32_t tags) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingTypeInfo*, ModdingAPI::Exposed::System::Type*, System_String*, int32_t, int32_t, int64_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64F190))(this, dataType, name, level, opcode, keywords, tags);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingTypeInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  int32_t get_Level() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingTypeInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x37AAE0))(this);
  }
  int32_t get_Opcode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingTypeInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x37AAF0))(this);
  }
  int64_t get_Keywords() {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingTypeInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  int32_t get_Tags() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingTypeInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F810))(this);
  }
  ModdingAPI::Exposed::System::Type* get_DataType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingTypeInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  Il2CppObject* GetData(Il2CppObject* value) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingTypeInfo*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64F310))(this, value);
  }
};
}