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


namespace ModdingAPI::Exposed::Mono::Net {
struct __CFProxy_Il2CppStaticFields {
  intptr_t kCFProxyAutoConfigurationJavaScriptKey;
  intptr_t kCFProxyAutoConfigurationURLKey;
  intptr_t kCFProxyHostNameKey;
  intptr_t kCFProxyPasswordKey;
  intptr_t kCFProxyPortNumberKey;
  intptr_t kCFProxyTypeKey;
  intptr_t kCFProxyUsernameKey;
  intptr_t kCFProxyTypeAutoConfigurationURL;
  intptr_t kCFProxyTypeAutoConfigurationJavaScript;
  intptr_t kCFProxyTypeFTP;
  intptr_t kCFProxyTypeHTTP;
  intptr_t kCFProxyTypeHTTPS;
  intptr_t kCFProxyTypeSOCKS;
};

struct __CFProxy_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CFProxy_Il2CppClass {
  Il2CppClass_1 _1;
  __CFProxy_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CFProxy_Il2CppVtbl vtbl;
};

class CFProxy {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C81710;
  static inline    __CFProxy_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CFProxy_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CFProxy_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CFProxy_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Mono::Net::CFDictionary* settings;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::Mono::Net::CFDictionary* settings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Net::CFProxy*, ModdingAPI::Exposed::Mono::Net::CFDictionary*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, settings);
  }
  intptr_t get_AutoConfigurationJavaScript() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::CFProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3A830))(this);
  }
  intptr_t get_AutoConfigurationUrl() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::CFProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3A920))(this);
  }
  System_String* get_HostName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::CFProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3AA10))(this);
  }
  System_String* get_Password() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::CFProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3AB10))(this);
  }
  int32_t get_Port() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::CFProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3AC10))(this);
  }
  int32_t get_ProxyType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Net::CFProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3AE20))(this);
  }
  System_String* get_Username() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Mono::Net::CFProxy*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3B100))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<intptr_t> kCFProxyAutoConfigurationJavaScriptKey = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyAutoConfigurationJavaScriptKey; }
  );
  static inline __CppStaticProperty<intptr_t> kCFProxyAutoConfigurationURLKey = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyAutoConfigurationURLKey; }
  );
  static inline __CppStaticProperty<intptr_t> kCFProxyHostNameKey = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyHostNameKey; }
  );
  static inline __CppStaticProperty<intptr_t> kCFProxyPasswordKey = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyPasswordKey; }
  );
  static inline __CppStaticProperty<intptr_t> kCFProxyPortNumberKey = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyPortNumberKey; }
  );
  static inline __CppStaticProperty<intptr_t> kCFProxyTypeKey = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyTypeKey; }
  );
  static inline __CppStaticProperty<intptr_t> kCFProxyUsernameKey = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyUsernameKey; }
  );
  static inline __CppStaticProperty<intptr_t> kCFProxyTypeAutoConfigurationURL = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyTypeAutoConfigurationURL; }
  );
  static inline __CppStaticProperty<intptr_t> kCFProxyTypeAutoConfigurationJavaScript = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyTypeAutoConfigurationJavaScript; }
  );
  static inline __CppStaticProperty<intptr_t> kCFProxyTypeFTP = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyTypeFTP; }
  );
  static inline __CppStaticProperty<intptr_t> kCFProxyTypeHTTP = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyTypeHTTP; }
  );
  static inline __CppStaticProperty<intptr_t> kCFProxyTypeHTTPS = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyTypeHTTPS; }
  );
  static inline __CppStaticProperty<intptr_t> kCFProxyTypeSOCKS = __CppStaticProperty<intptr_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->kCFProxyTypeSOCKS; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3A3E0))();
  }
  static inline int32_t CFProxyTypeToEnum(intptr_t type) {
    return reinterpret_cast<int32_t(__fastcall*)(intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xC3A640))(type);
  }
};
}