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
struct __Knowledge_Il2CppStaticFields {
};

struct __Knowledge_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Knowledge_Il2CppClass {
  Il2CppClass_1 _1;
  __Knowledge_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Knowledge_Il2CppVtbl vtbl;
};

class Knowledge {
public:
  // Il2Cpp fields:
  __Knowledge_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t m_KnowledgeCategory;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedName;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDescription;

  // Member methods:
  System_String* get_m_Description() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Knowledge*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1843B40))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Knowledge*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  System_String* GetLocID() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Knowledge*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x81D630))(this);
  }
  void UnlockWithNotification(System_String* subTitle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Knowledge*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1883A70))(this, subTitle);
  }
  void UnlockSilent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Knowledge*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1883AC0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Knowledge*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static methods:
  static inline void Unlock(System_String* nameLocID, System_String* descLocID, int32_t category, System_String* subTitle) {
    reinterpret_cast<void(__fastcall*)(System_String*, System_String*, int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1883BE0))(nameLocID, descLocID, category, subTitle);
  }
  static inline void UnlockSilent(System_String* nameLocID, System_String* descLocID, int32_t category) {
    reinterpret_cast<void(__fastcall*)(System_String*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1883DA0))(nameLocID, descLocID, category);
  }
  static inline int32_t GetKnowledgeCategoryFromName(System_String* name) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1883F90))(name);
  }
  static inline System_String* GetLocalizedKnowledgeCategoryName(int32_t category) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1884180))(category);
  }
};
}