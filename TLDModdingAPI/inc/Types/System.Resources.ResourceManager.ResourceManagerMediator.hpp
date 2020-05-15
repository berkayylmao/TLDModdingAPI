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


namespace ModdingAPI::Exposed::System::Resources::ResourceManager {
struct __ResourceManagerMediator_Il2CppStaticFields {
};

struct __ResourceManagerMediator_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ResourceManagerMediator_Il2CppClass {
  Il2CppClass_1 _1;
  __ResourceManagerMediator_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ResourceManagerMediator_Il2CppVtbl vtbl;
};

class ResourceManagerMediator {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C55B98;
  static inline    __ResourceManagerMediator_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ResourceManagerMediator_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ResourceManagerMediator_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ResourceManagerMediator_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Resources::ResourceManager* _rm;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Resources::ResourceManager* rm) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*, ModdingAPI::Exposed::System::Resources::ResourceManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C380))(this, rm);
  }
  System_String* get_ModuleDir() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5C2BE0))(this);
  }
  ModdingAPI::Exposed::System::Type* get_LocationInfo() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C440))(this);
  }
  ModdingAPI::Exposed::System::Type* get_UserResourceSet() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C460))(this);
  }
  System_String* get_BaseNameField() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48B2F0))(this);
  }
  ModdingAPI::Exposed::System::Globalization::CultureInfo* get_NeutralResourcesCulture() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::CultureInfo*(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C480))(this);
  }
  System_String* GetResourceFileName(ModdingAPI::Exposed::System::Globalization::CultureInfo* culture) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*, ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C4A0))(this, culture);
  }
  bool get_LookedForSatelliteContractVersion() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C4D0))(this);
  }
  void set_LookedForSatelliteContractVersion(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C4F0))(this, value);
  }
  ModdingAPI::Exposed::System::Version* get_SatelliteContractVersion() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Version*(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F9D0))(this);
  }
  void set_SatelliteContractVersion(ModdingAPI::Exposed::System::Version* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*, ModdingAPI::Exposed::System::Version*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C510))(this, value);
  }
  ModdingAPI::Exposed::System::Version* ObtainSatelliteContractVersion(ModdingAPI::Exposed::System::Reflection::Assembly* a) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Version*(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*, ModdingAPI::Exposed::System::Reflection::Assembly*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C530))(this, a);
  }
  int32_t get_FallbackLoc() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C5D0))(this);
  }
  ModdingAPI::Exposed::System::Reflection::RuntimeAssembly* get_CallingAssembly() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::RuntimeAssembly*(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C5F0))(this);
  }
  ModdingAPI::Exposed::System::Reflection::RuntimeAssembly* get_MainAssembly() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Reflection::RuntimeAssembly*(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C610))(this);
  }
  System_String* get_BaseName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Resources::ResourceManager::ResourceManagerMediator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x72C6F0))(this);
  }
};
}