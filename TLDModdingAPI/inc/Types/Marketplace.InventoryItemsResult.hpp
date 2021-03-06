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
struct __InventoryItemsResult_Il2CppStaticFields {
};

struct __InventoryItemsResult_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_SetNativePtr;
  VirtualInvokeData _5_GetNativePtr;
  VirtualInvokeData _6_Dispose;
};

struct __InventoryItemsResult_Il2CppClass {
  Il2CppClass_1 _1;
  __InventoryItemsResult_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __InventoryItemsResult_Il2CppVtbl vtbl;
};

class InventoryItemsResult {
public:
  // Il2Cpp fields:
  __InventoryItemsResult_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t m_Self;
  ModdingAPI::Exposed::Marketplace::InventoryItemList* m_Items;

  // Member methods:
  ModdingAPI::Exposed::Marketplace::InventoryItemList* get_Items() {
    return reinterpret_cast<ModdingAPI::Exposed::Marketplace::InventoryItemList*(__fastcall*)(ModdingAPI::Exposed::Marketplace::InventoryItemsResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21D25A0))(this);
  }
  uint32_t get_TotalItems() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::InventoryItemsResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21D2810))(this);
  }
  void ::ctor(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::InventoryItemsResult*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, self);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::InventoryItemsResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21D28B0))(this);
  }
  void SetNativePtr(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::InventoryItemsResult*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, self);
  }
  intptr_t GetNativePtr() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::InventoryItemsResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::InventoryItemsResult*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21D2940))(this);
  }
};
}