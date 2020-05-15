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
struct __BoxSector_Il2CppStaticFields {
};

struct __BoxSector_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __BoxSector_Il2CppClass {
  Il2CppClass_1 _1;
  __BoxSector_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __BoxSector_Il2CppVtbl vtbl;
};

class BoxSector {
public:
  // Il2Cpp fields:
  __BoxSector_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_GameObjects;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_VisibilityList;
  ModdingAPI::Exposed::UnityEngine::BoxCollider* m_LocalCollider;
  ModdingAPI::Exposed::BoxSectorManager* m_MyManager;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BoxSector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1810430))(this);
  }
  void GetBoxManager() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BoxSector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1810570))(this);
  }
  void Show(int32_t cullMode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BoxSector*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1810640))(this, cullMode);
  }
  void Hide(int32_t cullMode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BoxSector*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1810870))(this, cullMode);
  }
  void OnTriggerEnter(ModdingAPI::Exposed::UnityEngine::Collider* other) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BoxSector*, ModdingAPI::Exposed::UnityEngine::Collider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1810AA0))(this, other);
  }
  void OnTriggerExit(ModdingAPI::Exposed::UnityEngine::Collider* other) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BoxSector*, ModdingAPI::Exposed::UnityEngine::Collider*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1810C00))(this, other);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BoxSector*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }
};
}