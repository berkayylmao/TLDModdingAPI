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


namespace ModdingAPI::Exposed::Marketplace {
struct __DownloadableContentPackage_Il2CppStaticFields {
};

struct __DownloadableContentPackage_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_SetNativePtr;
  VirtualInvokeData _5_GetNativePtr;
  VirtualInvokeData _6_Dispose;
};

struct __DownloadableContentPackage_Il2CppClass {
  Il2CppClass_1 _1;
  __DownloadableContentPackage_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DownloadableContentPackage_Il2CppVtbl vtbl;
};

class DownloadableContentPackage {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C690D0;
  static inline    __DownloadableContentPackage_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __DownloadableContentPackage_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__DownloadableContentPackage_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __DownloadableContentPackage_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t m_Self;
  System_String* m_ContentId;
  System_String* m_Description;
  System_String* m_DisplayName;
  System_String* m_MountPath;
  System_String* m_PackageFullName;
  System_String* m_ProductId;
  System_String* m_Publisher;
  System_String* m_TitleId;
  System_String* m_Version;

  // Member methods:
  System_String* get_ContentId() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CD170))(this);
  }
  uint32_t get_ContentType() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CD2E0))(this);
  }
  System_String* get_Description() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CD380))(this);
  }
  System_String* get_DisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CD4F0))(this);
  }
  bool get_IsMounted() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CD660))(this);
  }
  System_String* get_MountPath() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CD700))(this);
  }
  System_String* get_PackageFullName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CD870))(this);
  }
  System_String* get_ProductId() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CD9E0))(this);
  }
  System_String* get_Publisher() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CDB50))(this);
  }
  System_String* get_TitleId() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CDCC0))(this);
  }
  System_String* get_Version() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CDE30))(this);
  }
  System_String* Mount() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CDFA0))(this);
  }
  void UnMount() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CE2B0))(this);
  }
  bool CheckLicense(bool isTrial) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CE360))(this, isTrial);
  }
  void ::ctor(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, self);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CE420))(this);
  }
  void SetNativePtr(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, self);
  }
  intptr_t GetNativePtr() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CE4B0))(this);
  }
  intptr_t _get_ContentId_b__1_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CE5C0))(this);
  }
  intptr_t _get_Description_b__5_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CE660))(this);
  }
  intptr_t _get_DisplayName_b__7_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CE700))(this);
  }
  intptr_t _get_MountPath_b__11_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CE7A0))(this);
  }
  intptr_t _get_PackageFullName_b__13_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CE840))(this);
  }
  intptr_t _get_ProductId_b__15_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CE8E0))(this);
  }
  intptr_t _get_Publisher_b__17_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CE980))(this);
  }
  intptr_t _get_TitleId_b__19_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CEA20))(this);
  }
  intptr_t _get_Version_b__21_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::DownloadableContentPackage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21CEAC0))(this);
  }
};
}