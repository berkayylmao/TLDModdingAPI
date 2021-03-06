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


namespace ModdingAPI::Exposed::SWS {
struct __Messages_Il2CppStaticFields {
};

struct __Messages_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Messages_Il2CppClass {
  Il2CppClass_1 _1;
  __Messages_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Messages_Il2CppVtbl vtbl;
};

class Messages {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C56A78;
  static inline    __Messages_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Messages_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Messages_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Messages_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* list;

  // Member methods:
  void Initialize(int32_t size) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SWS::Messages*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB36E0))(this, size);
  }
  ModdingAPI::Exposed::SWS::MessageOptions* AddEmptyToOption(ModdingAPI::Exposed::SWS::MessageOptions* opt) {
    return reinterpret_cast<ModdingAPI::Exposed::SWS::MessageOptions*(__fastcall*)(ModdingAPI::Exposed::SWS::Messages*, ModdingAPI::Exposed::SWS::MessageOptions*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB38F0))(this, opt);
  }
  void FillOptionWithValues(ModdingAPI::Exposed::SWS::MessageOptions* opt) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SWS::Messages*, ModdingAPI::Exposed::SWS::MessageOptions*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB3BD0))(this, opt);
  }
  ModdingAPI::Exposed::SWS::MessageOptions* GetMessageOption(int32_t waypoint) {
    return reinterpret_cast<ModdingAPI::Exposed::SWS::MessageOptions*(__fastcall*)(ModdingAPI::Exposed::SWS::Messages*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB3F20))(this, waypoint);
  }
  void Execute(ModdingAPI::Exposed::UnityEngine::MonoBehaviour* mono, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SWS::Messages*, ModdingAPI::Exposed::UnityEngine::MonoBehaviour*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB3FE0))(this, mono, index);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SWS::Messages*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AB45A0))(this);
  }
};
}