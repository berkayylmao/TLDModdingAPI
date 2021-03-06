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


namespace ModdingAPI::Exposed::Rewired::Utils::Classes::Utility {
struct __DualRingReportBuffer_Il2CppStaticFields {
};

struct __DualRingReportBuffer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
};

struct __DualRingReportBuffer_Il2CppClass {
  Il2CppClass_1 _1;
  __DualRingReportBuffer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DualRingReportBuffer_Il2CppVtbl vtbl;
};

class DualRingReportBuffer {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C30638;
  static inline    __DualRingReportBuffer_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __DualRingReportBuffer_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DualRingReportBuffer_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __DualRingReportBuffer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t ckTQguEMVNSOPFfHpgJVFYyYODpv;
  int32_t cQmUUUMdEHOZFubMHmNwMPcDGrq;
  int32_t lPrtMPBARYnboLdPIzKedQXkAPOj;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer* xfvGqtebPxhctrJOzXeYUUJdnuy;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Data::NativeRingBuffer* ATAztKuYsUaDAHTMWLVDdCkDyLl;
  ModdingAPI::Exposed::System::Byte_array* OBJzDpYdaMhuVBSTWVcwBncBaoA;
  ModdingAPI::Exposed::System::Byte_array* BWePeuYAPOOHxkOGTTZcCekFoib;
  int32_t yYfxSeYeFodRHbZJyyBIGHRMczX;
  bool IPjKDfWEXfJCxnkfIfovlZZlcJe;

  // Member methods:
  int32_t get_BufferLength() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311060))(this);
  }
  int32_t get_BytesInBuffer() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCB9920))(this);
  }
  int32_t get_EntriesInBuffer() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCB9940))(this);
  }
  ModdingAPI::Exposed::System::Byte_array* get_ReadBuffer() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  int32_t get_LastNumBytesRead() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8E0))(this);
  }
  void ::ctor(int32_t entryByteLength, int32_t entryCapacity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCB9960))(this, entryByteLength, entryCapacity);
  }
  int32_t StartRead() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCB9D40))(this);
  }
  int32_t Read() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCB9D70))(this);
  }
  int32_t Read(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t numBytesToRead) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCB9E90))(this, buffer, numBytesToRead);
  }
  int32_t Read(intptr_t buffer, int32_t bufferLength, int32_t numBytesToRead) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*, intptr_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCBA0E0))(this, buffer, bufferLength, numBytesToRead);
  }
  int32_t Write(ModdingAPI::Exposed::System::Byte_array* buffer, int32_t numBytesToWrite) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*, ModdingAPI::Exposed::System::Byte_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCBA390))(this, buffer, numBytesToWrite);
  }
  int32_t Write(intptr_t buffer, int32_t bufferLength, int32_t numBytesToWrite) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*, intptr_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCBA5E0))(this, buffer, bufferLength, numBytesToWrite);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCBA8A0))(this);
  }
  void hVVFhXBcBgVYXLhrydbOrjwPeAi() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCBAAF0))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCBACF0))(this);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCBADE0))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::DualRingReportBuffer*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xCBAE30))(this, disposing);
  }
};
}