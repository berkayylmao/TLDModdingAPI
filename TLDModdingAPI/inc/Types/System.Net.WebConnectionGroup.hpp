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
#include "ModdingAPI.Exposed.System.TimeSpan.hpp"
#include "ModdingAPI.Exposed.System.DateTime.hpp"


namespace ModdingAPI::Exposed::System::Net {
struct __WebConnectionGroup_Il2CppStaticFields {
};

struct __WebConnectionGroup_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __WebConnectionGroup_Il2CppClass {
  Il2CppClass_1 _1;
  __WebConnectionGroup_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __WebConnectionGroup_Il2CppVtbl vtbl;
};

class WebConnectionGroup {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3EC80;
  static inline    __WebConnectionGroup_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __WebConnectionGroup_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__WebConnectionGroup_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __WebConnectionGroup_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Net::ServicePoint* sPoint;
  System_String* name;
  ModdingAPI::Exposed::System::Collections::Generic::LinkedList_T_* connections;
  ModdingAPI::Exposed::System::Collections::Queue* queue;
  bool closing;
  ModdingAPI::Exposed::System::EventHandler* ConnectionClosed;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Net::ServicePoint* sPoint, System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup*, ModdingAPI::Exposed::System::Net::ServicePoint*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFE560))(this, sPoint, name);
  }
  void add_ConnectionClosed(ModdingAPI::Exposed::System::EventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup*, ModdingAPI::Exposed::System::EventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFE790))(this, value);
  }
  void remove_ConnectionClosed(ModdingAPI::Exposed::System::EventHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup*, ModdingAPI::Exposed::System::EventHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFE880))(this, value);
  }
  ModdingAPI::Exposed::System::Net::WebConnection* GetConnection(ModdingAPI::Exposed::System::Net::HttpWebRequest* request, bool created) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Net::WebConnection*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup*, ModdingAPI::Exposed::System::Net::HttpWebRequest*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFE970))(this, request, created);
  }
  ModdingAPI::Exposed::System::Net::WebConnectionGroup::ConnectionState* FindIdleConnection() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Net::WebConnectionGroup::ConnectionState*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFECF0))(this);
  }
  ModdingAPI::Exposed::System::Net::WebConnection* CreateOrReuseConnection(ModdingAPI::Exposed::System::Net::HttpWebRequest* request, bool created) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Net::WebConnection*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup*, ModdingAPI::Exposed::System::Net::HttpWebRequest*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFEF20))(this, request, created);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  ModdingAPI::Exposed::System::Collections::Queue* get_Queue() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Queue*(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  bool TryRecycle(ModdingAPI::Exposed::System::TimeSpan maxIdleTime, ModdingAPI::Exposed::System::DateTime idleSince) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnectionGroup*, ModdingAPI::Exposed::System::TimeSpan, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFF1F0))(this, maxIdleTime, idleSince);
  }

  // Static methods:
  static inline void PrepareSharingNtlm(ModdingAPI::Exposed::System::Net::WebConnection* cnc, ModdingAPI::Exposed::System::Net::HttpWebRequest* request) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Net::WebConnection*, ModdingAPI::Exposed::System::Net::HttpWebRequest*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFEA80))(cnc, request);
  }
};
}