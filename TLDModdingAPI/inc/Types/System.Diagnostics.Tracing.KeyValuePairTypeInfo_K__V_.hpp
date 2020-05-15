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
struct __KeyValuePairTypeInfo_K__V__Il2CppStaticFields {
};

struct __KeyValuePairTypeInfo_K__V__Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_WriteMetadata;
  VirtualInvokeData _5_WriteObjectData;
  VirtualInvokeData _6_GetData;
  VirtualInvokeData _7_WriteData;
};

struct __KeyValuePairTypeInfo_K__V__Il2CppClass {
  Il2CppClass_1 _1;
  __KeyValuePairTypeInfo_K__V__Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __KeyValuePairTypeInfo_K__V__Il2CppVtbl vtbl;
};

class KeyValuePairTypeInfo_K__V_ {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C733D0;
  static inline    KeyValuePairTypeInfo_K__V_* _pStaticObjectInstance = nullptr;

public:
// Singleton object getter:
  static inline KeyValuePairTypeInfo_K__V_* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (KeyValuePairTypeInfo_K__V_**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Il2Cpp fields:
  __KeyValuePairTypeInfo_K__V__Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* TraceLoggingTypeInfo_name;
  int64_t TraceLoggingTypeInfo_keywords;
  int32_t TraceLoggingTypeInfo_level;
  int32_t TraceLoggingTypeInfo_opcode;
  int32_t TraceLoggingTypeInfo_tags;
  ModdingAPI::Exposed::System::Type* TraceLoggingTypeInfo_dataType;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingTypeInfo_DataType_* keyInfo;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingTypeInfo_DataType_* valueInfo;
};
}