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


namespace ModdingAPI::Exposed::Rewired::InputManagers {
struct __Initializer_Il2CppStaticFields {
  ModdingAPI::Exposed::Rewired::PlatformInitializer* instance;
};

struct __Initializer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Initialize;
  VirtualInvokeData _5_CreateTool;
};

struct __Initializer_Il2CppClass {
  Il2CppClass_1 _1;
  __Initializer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Initializer_Il2CppVtbl vtbl;
};

class Initializer {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C91758;
  static inline    __Initializer_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Initializer_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Initializer_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Initializer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  Il2CppObject* Initialize(ModdingAPI::Exposed::Rewired::Data::ConfigVars* configVars) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::Initializer*, ModdingAPI::Exposed::Rewired::Data::ConfigVars*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3D0820))(this, configVars);
  }
  ModdingAPI::Exposed::Rewired::Interfaces::IElementIdentifierTool* CreateTool(System_String* inputSourceString) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Interfaces::IElementIdentifierTool*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::Initializer*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3D0BB0))(this, inputSourceString);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManagers::Initializer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::Rewired::PlatformInitializer*> instance = __CppStaticProperty<ModdingAPI::Exposed::Rewired::PlatformInitializer*>(
   []() { return &GetStaticClassInstance()->pStaticFields->instance; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::Rewired::PlatformInitializer* GetPlatformInitializer() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::PlatformInitializer*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x3D06B0))();
  }
};
}