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
struct __DefaultAssetBundleRef_Il2CppStaticFields {
};

struct __DefaultAssetBundleRef_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_IsLoaded;
  VirtualInvokeData _5_IsValid;
  VirtualInvokeData _6_Contains;
  VirtualInvokeData _7_LoadAsset;
  VirtualInvokeData _8_LoadAsset;
  VirtualInvokeData _9_LoadAsset;
  VirtualInvokeData _10_LoadAllAssets;
  VirtualInvokeData _11_LoadAllAssets;
  VirtualInvokeData _12_LoadAllAssets;
  VirtualInvokeData _13_LoadAssetAsync;
  VirtualInvokeData _14_LoadAssetAsync;
  VirtualInvokeData _15_LoadAssetAsync;
  VirtualInvokeData _16_UpdateBundleLoad;
  VirtualInvokeData _17_LoadBundle;
  VirtualInvokeData _18_LoadBundleAsync;
  VirtualInvokeData _19_UnloadBundle;
};

struct __DefaultAssetBundleRef_Il2CppClass {
  Il2CppClass_1 _1;
  __DefaultAssetBundleRef_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DefaultAssetBundleRef_Il2CppVtbl vtbl;
};

class DefaultAssetBundleRef {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C20E18;
  static inline    __DefaultAssetBundleRef_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __DefaultAssetBundleRef_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DefaultAssetBundleRef_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __DefaultAssetBundleRef_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Dependencies;
  System_String* m_Name;
  int32_t m_NameHash;
  int32_t m_RefCount;
  ModdingAPI::Exposed::UnityEngine::AssetBundle* m_Bundle;
  ModdingAPI::Exposed::UnityEngine::AssetBundleCreateRequest* m_Request;
  int32_t m_State;

  // Member methods:
  void ::ctor(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9AEA0))(this, name);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9AEE0))(this);
  }
  bool IsLoaded() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9B030))(this);
  }
  bool IsValid() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9B060))(this);
  }
  bool Contains(System_String* name) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9B120))(this, name);
  }
  void LoadBundle() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9B240))(this);
  }
  void LoadBundleAsync() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9B380))(this);
  }
  void UnloadBundle(bool unloadAllLoadedObjects) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9B4C0))(this, unloadAllLoadedObjects);
  }
  ModdingAPI::Exposed::UnityEngine::Object_array* LoadAllAssets() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Object_array*(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9B5B0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Object_array* LoadAllAssets(ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Object_array*(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9B720))(this, type);
  }
  ModdingAPI::Exposed::UnityEngine::Object* LoadAsset(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Object*(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9B810))(this, name);
  }
  ModdingAPI::Exposed::UnityEngine::Object* LoadAsset(System_String* name, ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Object*(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*, System_String*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9B9B0))(this, name, type);
  }
  ModdingAPI::Exposed::AssetBundleRefRequest* LoadAssetAsync(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::AssetBundleRefRequest*(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9BAB0))(this, name);
  }
  ModdingAPI::Exposed::AssetBundleRefRequest* LoadAssetAsync(System_String* name, ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::AssetBundleRefRequest*(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*, System_String*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9BC50))(this, name, type);
  }
  System_String* CorrectAssetName(System_String* name) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9BE00))(this, name);
  }
  bool UpdateBundleLoad() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DefaultAssetBundleRef*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F9BEA0))(this);
  }
};
}