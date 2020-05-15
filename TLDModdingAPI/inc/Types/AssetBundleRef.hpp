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
struct __AssetBundleRef_Il2CppStaticFields {
};

struct __AssetBundleRef_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_IsLoaded;
  VirtualInvokeData _17_LoadBundle;
  VirtualInvokeData _18_LoadBundleAsync;
  VirtualInvokeData _19_UnloadBundle;
  VirtualInvokeData _65535__ctor;
};

struct __AssetBundleRef_Il2CppClass {
  Il2CppClass_1 _1;
  __AssetBundleRef_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AssetBundleRef_Il2CppVtbl vtbl;
};

class AssetBundleRef {
public:
  // Il2Cpp fields:
  __AssetBundleRef_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Dependencies;
  System_String* m_Name;
  int32_t m_NameHash;
  int32_t m_RefCount;

  // Member methods:
  void ::ctor(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AssetBundleRef*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9AEA0))(this, name);
  }
  bool IsLoaded() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FABDF0))(this);
  }
  void LoadBundle() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FABFA0))(this);
  }
  void LoadBundleAsync() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FAC160))(this);
  }
  void UnloadBundle(bool unloadAllLoadedObjects) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AssetBundleRef*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FAC320))(this, unloadAllLoadedObjects);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x37AAE0))(this);
  }
  System_String* GetName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::AssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  int32_t GetRefCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x37AAF0))(this);
  }
  bool HasDependencies() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FAC4C0))(this);
  }
  void AddDependent(ModdingAPI::Exposed::AssetBundleRef* bundle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AssetBundleRef*, ModdingAPI::Exposed::AssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FAC550))(this, bundle);
  }
  int32_t DecrementRefCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FAC6D0))(this);
  }
  int32_t IncrementRefCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FAC7B0))(this);
  }
};
}