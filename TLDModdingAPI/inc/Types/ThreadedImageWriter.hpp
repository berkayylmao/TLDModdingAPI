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


namespace ModdingAPI::Exposed {
struct __ThreadedImageWriter_Il2CppStaticFields {
};

struct __ThreadedImageWriter_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ThreadedImageWriter_Il2CppClass {
  Il2CppClass_1 _1;
  __ThreadedImageWriter_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ThreadedImageWriter_Il2CppVtbl vtbl;
};

class ThreadedImageWriter {
public:
  // Il2Cpp fields:
  __ThreadedImageWriter_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Threading::Thread_array* writerThreads;
  ModdingAPI::Exposed::System::Collections::Generic::Queue_ImageWriteRequest__array* writerQueues;
  int32_t nextWriterQueue;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ThreadedImageWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BAD2C0))(this);
  }
  void AddWriteRequest(System_String* filename, ModdingAPI::Exposed::UnityEngine::Color_array* image, uint32_t width, uint32_t height, int32_t type, float farClip) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ThreadedImageWriter*, System_String*, ModdingAPI::Exposed::UnityEngine::Color_array*, uint32_t, uint32_t, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BAD9A0))(this, filename, image, width, height, type, farClip);
  }
  void AddWriteRequest(System_String* filename, ModdingAPI::Exposed::UnityEngine::Color_array* image, uint32_t width, uint32_t height, int32_t type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ThreadedImageWriter*, System_String*, ModdingAPI::Exposed::UnityEngine::Color_array*, uint32_t, uint32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BADC80))(this, filename, image, width, height, type);
  }
  void AddWriteRequest(System_String* filename, ModdingAPI::Exposed::System::Byte_array* image, uint32_t width, uint32_t height, int32_t type) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ThreadedImageWriter*, System_String*, ModdingAPI::Exposed::System::Byte_array*, uint32_t, uint32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BADF50))(this, filename, image, width, height, type);
  }
  bool IsFallingBehind() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::ThreadedImageWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BAE220))(this);
  }
  void ImageWriter(Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ThreadedImageWriter*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BAE300))(this, obj);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ThreadedImageWriter*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }
};
}