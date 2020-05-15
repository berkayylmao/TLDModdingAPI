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


namespace ModdingAPI::Exposed::Users {
struct __MultiplePermissionsCheckResult_Il2CppStaticFields {
};

struct __MultiplePermissionsCheckResult_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_SetNativePtr;
  VirtualInvokeData _5_GetNativePtr;
  VirtualInvokeData _6_Dispose;
};

struct __MultiplePermissionsCheckResult_Il2CppClass {
  Il2CppClass_1 _1;
  __MultiplePermissionsCheckResult_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MultiplePermissionsCheckResult_Il2CppVtbl vtbl;
};

class MultiplePermissionsCheckResult {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C571A8;
  static inline    __MultiplePermissionsCheckResult_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __MultiplePermissionsCheckResult_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MultiplePermissionsCheckResult_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MultiplePermissionsCheckResult_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t m_Self;
  ModdingAPI::Exposed::Users::PermissionCheckResultList* m_Items;
  System_String* m_XboxUserId;

  // Member methods:
  ModdingAPI::Exposed::Users::PermissionCheckResultList* get_Items() {
    return reinterpret_cast<ModdingAPI::Exposed::Users::PermissionCheckResultList*(__fastcall*)(ModdingAPI::Exposed::Users::MultiplePermissionsCheckResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E268E0))(this);
  }
  System_String* get_XboxUserId() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Users::MultiplePermissionsCheckResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E26B50))(this);
  }
  void ::ctor(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Users::MultiplePermissionsCheckResult*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, self);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Users::MultiplePermissionsCheckResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E26CC0))(this);
  }
  void SetNativePtr(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Users::MultiplePermissionsCheckResult*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, self);
  }
  intptr_t GetNativePtr() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Users::MultiplePermissionsCheckResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Users::MultiplePermissionsCheckResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E26D50))(this);
  }
  intptr_t _get_XboxUserId_b__3_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Users::MultiplePermissionsCheckResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E26E70))(this);
  }
};
}