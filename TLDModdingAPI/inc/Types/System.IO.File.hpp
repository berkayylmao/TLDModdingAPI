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
#include "ModdingAPI.Exposed.System.Nullable_T_.hpp"
#include "ModdingAPI.Exposed.System.DateTime.hpp"
#include "ModdingAPI::Exposed::System::IO::MonoIOStat.hpp"


namespace ModdingAPI::Exposed::System::IO {
struct __File_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Nullable_T_ defaultLocalFileTime;
};

struct __File_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __File_Il2CppClass {
  Il2CppClass_1 _1;
  __File_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __File_Il2CppVtbl vtbl;
};

class File {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C95C70;
  static inline    __File_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __File_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__File_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __File_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Nullable_T_> defaultLocalFileTime = __CppStaticProperty<ModdingAPI::Exposed::System::Nullable_T_>(
   []() { return &GetStaticClassInstance()->pStaticFields->defaultLocalFileTime; }
  );

  // Static methods:
  static inline void Copy(System_String* sourceFileName, System_String* destFileName) {
    reinterpret_cast<void(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9F0A0))(sourceFileName, destFileName);
  }
  static inline void Copy(System_String* sourceFileName, System_String* destFileName, bool overwrite) {
    reinterpret_cast<void(__fastcall*)(System_String*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9F0B0))(sourceFileName, destFileName, overwrite);
  }
  static inline ModdingAPI::Exposed::System::IO::FileStream* Create(System_String* path) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IO::FileStream*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9F7E0))(path);
  }
  static inline ModdingAPI::Exposed::System::IO::FileStream* Create(System_String* path, int32_t bufferSize) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IO::FileStream*(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9F950))(path, bufferSize);
  }
  static inline void Delete(System_String* path) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9FAD0))(path);
  }
  static inline bool Exists(System_String* path) {
    return reinterpret_cast<bool(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9FD70))(path);
  }
  static inline int32_t GetAttributes(System_String* path) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA9FF20))(path);
  }
  static inline ModdingAPI::Exposed::System::DateTime GetLastWriteTime(System_String* path) {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA0040))(path);
  }
  static inline ModdingAPI::Exposed::System::IO::FileStream* Open(System_String* path, int32_t mode) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IO::FileStream*(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA0300))(path, mode);
  }
  static inline ModdingAPI::Exposed::System::IO::FileStream* OpenRead(System_String* path) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IO::FileStream*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA0490))(path);
  }
  static inline ModdingAPI::Exposed::System::IO::StreamReader* OpenText(System_String* path) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IO::StreamReader*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA0610))(path);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* ReadAllBytes(System_String* path) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA0760))(path);
  }
  static inline System_String* ReadAllText(System_String* path) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA0970))(path);
  }
  static inline void WriteAllBytes(System_String* path, ModdingAPI::Exposed::System::Byte_array* bytes) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA0B70))(path, bytes);
  }
  static inline void WriteAllText(System_String* path, System_String* contents) {
    reinterpret_cast<void(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA0CB0))(path, contents);
  }
  static inline void WriteAllText(System_String* path, System_String* contents, ModdingAPI::Exposed::System::Text::Encoding* encoding) {
    reinterpret_cast<void(__fastcall*)(System_String*, System_String*, ModdingAPI::Exposed::System::Text::Encoding*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA0D70))(path, contents, encoding);
  }
  static inline ModdingAPI::Exposed::System::DateTime get_DefaultLocalFileTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA0FA0))();
  }
  static inline int32_t FillAttributeInfo(System_String* path, ModdingAPI::Exposed::System::IO::MonoIOStat data, bool tryagain, bool returnErrorOnNotFound) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*, ModdingAPI::Exposed::System::IO::MonoIOStat, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAA1130))(path, data, tryagain, returnErrorOnNotFound);
  }
};
}