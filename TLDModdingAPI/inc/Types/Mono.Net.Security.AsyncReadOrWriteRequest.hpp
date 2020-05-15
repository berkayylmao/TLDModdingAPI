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


namespace ModdingAPI::Exposed::Mono::Net::Security {
struct __AsyncReadOrWriteRequest_Il2CppStaticFields {
};

struct __AsyncReadOrWriteRequest_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _65535__ctor;
};

struct __AsyncReadOrWriteRequest_Il2CppClass {
  Il2CppClass_1 _1;
  __AsyncReadOrWriteRequest_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AsyncReadOrWriteRequest_Il2CppVtbl vtbl;
};

class AsyncReadOrWriteRequest {
public:
  // Il2Cpp fields:
  __AsyncReadOrWriteRequest_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream* AsyncProtocolRequest__Parent_k__BackingField;
  bool AsyncProtocolRequest__RunSynchronously_k__BackingField;
  int32_t AsyncProtocolRequest__UserResult_k__BackingField;
  int32_t AsyncProtocolRequest_Started;
  int32_t AsyncProtocolRequest_RequestedSize;
  int32_t AsyncProtocolRequest_WriteRequested;
  Il2CppObject* AsyncProtocolRequest_locker;
  ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize* _UserBuffer_k__BackingField;
  int32_t _CurrentSize_k__BackingField;

  // Member methods:
  ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize* get_UserBuffer() {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Net::Security::BufferOffsetSize*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::AsyncReadOrWriteRequest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  int32_t get_CurrentSize() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::AsyncReadOrWriteRequest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8E0))(this);
  }
  void set_CurrentSize(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::AsyncReadOrWriteRequest*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8F0))(this, value);
  }
  void ::ctor(ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ModdingAPI::Exposed::System::Byte_array* buffer, int32_t offset, int32_t size) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::AsyncReadOrWriteRequest*, ModdingAPI::Exposed::Mono::Net::Security::MobileAuthenticatedStream*, bool, ModdingAPI::Exposed::System::Byte_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3DC50))(this, parent, sync, buffer, offset, size);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::Security::AsyncReadOrWriteRequest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3DDE0))(this);
  }
};
}