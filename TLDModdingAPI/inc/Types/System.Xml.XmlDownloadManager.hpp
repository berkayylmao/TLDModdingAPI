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


namespace ModdingAPI::Exposed::System::Xml {
struct __XmlDownloadManager_Il2CppStaticFields {
};

struct __XmlDownloadManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __XmlDownloadManager_Il2CppClass {
  Il2CppClass_1 _1;
  __XmlDownloadManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XmlDownloadManager_Il2CppVtbl vtbl;
};

class XmlDownloadManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C81B10;
  static inline    __XmlDownloadManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XmlDownloadManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XmlDownloadManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XmlDownloadManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::Hashtable* connections;

  // Member methods:
  ModdingAPI::Exposed::System::IO::Stream* GetStream(ModdingAPI::Exposed::System::Uri* uri, ModdingAPI::Exposed::System::Net::ICredentials* credentials, ModdingAPI::Exposed::System::Net::IWebProxy* proxy, ModdingAPI::Exposed::System::Net::Cache::RequestCachePolicy* cachePolicy) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IO::Stream*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDownloadManager*, ModdingAPI::Exposed::System::Uri*, ModdingAPI::Exposed::System::Net::ICredentials*, ModdingAPI::Exposed::System::Net::IWebProxy*, ModdingAPI::Exposed::System::Net::Cache::RequestCachePolicy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8CA660))(this, uri, credentials, proxy, cachePolicy);
  }
  ModdingAPI::Exposed::System::IO::Stream* GetNonFileStream(ModdingAPI::Exposed::System::Uri* uri, ModdingAPI::Exposed::System::Net::ICredentials* credentials, ModdingAPI::Exposed::System::Net::IWebProxy* proxy, ModdingAPI::Exposed::System::Net::Cache::RequestCachePolicy* cachePolicy) {
    return reinterpret_cast<ModdingAPI::Exposed::System::IO::Stream*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDownloadManager*, ModdingAPI::Exposed::System::Uri*, ModdingAPI::Exposed::System::Net::ICredentials*, ModdingAPI::Exposed::System::Net::IWebProxy*, ModdingAPI::Exposed::System::Net::Cache::RequestCachePolicy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8CA870))(this, uri, credentials, proxy, cachePolicy);
  }
  void Remove(System_String* host) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDownloadManager*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8CB010))(this, host);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_* GetStreamAsync(ModdingAPI::Exposed::System::Uri* uri, ModdingAPI::Exposed::System::Net::ICredentials* credentials, ModdingAPI::Exposed::System::Net::IWebProxy* proxy, ModdingAPI::Exposed::System::Net::Cache::RequestCachePolicy* cachePolicy) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDownloadManager*, ModdingAPI::Exposed::System::Uri*, ModdingAPI::Exposed::System::Net::ICredentials*, ModdingAPI::Exposed::System::Net::IWebProxy*, ModdingAPI::Exposed::System::Net::Cache::RequestCachePolicy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8CB1E0))(this, uri, credentials, proxy, cachePolicy);
  }
  ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_* GetNonFileStreamAsync(ModdingAPI::Exposed::System::Uri* uri, ModdingAPI::Exposed::System::Net::ICredentials* credentials, ModdingAPI::Exposed::System::Net::IWebProxy* proxy, ModdingAPI::Exposed::System::Net::Cache::RequestCachePolicy* cachePolicy) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::Tasks::Task_TResult_*(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDownloadManager*, ModdingAPI::Exposed::System::Uri*, ModdingAPI::Exposed::System::Net::ICredentials*, ModdingAPI::Exposed::System::Net::IWebProxy*, ModdingAPI::Exposed::System::Net::Cache::RequestCachePolicy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8CB590))(this, uri, credentials, proxy, cachePolicy);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Xml::XmlDownloadManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
};
}