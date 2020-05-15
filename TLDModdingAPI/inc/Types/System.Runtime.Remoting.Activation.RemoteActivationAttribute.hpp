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


namespace ModdingAPI::Exposed::System::Runtime::Remoting::Activation {
struct __RemoteActivationAttribute_Il2CppStaticFields {
};

struct __RemoteActivationAttribute_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_TypeId;
  VirtualInvokeData _5_Match;
  VirtualInvokeData _6_IsDefaultAttribute;
  VirtualInvokeData _7_GetPropertiesForNewContext;
  VirtualInvokeData _8_IsContextOK;
};

struct __RemoteActivationAttribute_Il2CppClass {
  Il2CppClass_1 _1;
  __RemoteActivationAttribute_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RemoteActivationAttribute_Il2CppVtbl vtbl;
};

class RemoteActivationAttribute {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C55A10;
  static inline    __RemoteActivationAttribute_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RemoteActivationAttribute_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RemoteActivationAttribute_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RemoteActivationAttribute_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::IList* _contextProperties;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Collections::IList* contextProperties) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Activation::RemoteActivationAttribute*, ModdingAPI::Exposed::System::Collections::IList*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, contextProperties);
  }
  bool IsContextOK(ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context* ctx, ModdingAPI::Exposed::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Activation::RemoteActivationAttribute*, ModdingAPI::Exposed::System::Runtime::Remoting::Contexts::Context*, ModdingAPI::Exposed::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this, ctx, ctor);
  }
  void GetPropertiesForNewContext(ModdingAPI::Exposed::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctor) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Runtime::Remoting::Activation::RemoteActivationAttribute*, ModdingAPI::Exposed::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x73C560))(this, ctor);
  }
};
}