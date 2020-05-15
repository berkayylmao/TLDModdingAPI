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


namespace ModdingAPI::Exposed::UnityEngine {
struct __Resources_Il2CppStaticFields {
};

struct __Resources_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Resources_Il2CppClass {
  Il2CppClass_1 _1;
  __Resources_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Resources_Il2CppVtbl vtbl;
};

class Resources {
public:
  // Il2Cpp fields:
  __Resources_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Object_array* FindObjectsOfTypeAll(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Object_array*(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1077AA0))(type);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Object* Load(System_String* path) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Object*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10A8880))(path);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Object* Load(System_String* path, ModdingAPI::Exposed::System::Type* systemTypeInstance) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Object*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10A8980))(path, systemTypeInstance);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Object_array* LoadAll(System_String* path, ModdingAPI::Exposed::System::Type* systemTypeInstance) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Object_array*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10A89E0))(path, systemTypeInstance);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Object* GetBuiltinResource(ModdingAPI::Exposed::System::Type* type, System_String* path) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Object*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10A8A40))(type, path);
  }
  static inline void UnloadAsset(ModdingAPI::Exposed::UnityEngine::Object* assetToUnload) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Object*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10A8AA0))(assetToUnload);
  }
};
}