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
struct __InventoryServicePlugin_Il2CppStaticFields {
};

struct __InventoryServicePlugin_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __InventoryServicePlugin_Il2CppClass {
  Il2CppClass_1 _1;
  __InventoryServicePlugin_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __InventoryServicePlugin_Il2CppVtbl vtbl;
};

class InventoryServicePlugin {
public:
  // Il2Cpp fields:
  __InventoryServicePlugin_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::InventoryServicePlugin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static methods:
  static inline bool InventoryService_ConsumeInventoryItemAsync(int32_t userId, intptr_t item, uint32_t quantityToConsume, System_String* transactionId, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback* callback, intptr_t userData) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, intptr_t, uint32_t, System_String*, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21D46B0))(userId, item, quantityToConsume, transactionId, callback, userData);
  }
  static inline bool InventoryService_GetInventoryItemAsync(int32_t userId, intptr_t inventoryItem, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback* callback, intptr_t userData) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, intptr_t, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21D47B0))(userId, inventoryItem, callback, userData);
  }
  static inline bool InventoryService_GetInventoryItemsAsync(int32_t userId, int32_t mediaItemType, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback* callback, intptr_t userData) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, int32_t, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21D4880))(userId, mediaItemType, callback, userData);
  }
  static inline bool InventoryService_GetInventoryItemsAsyncEx(int32_t userId, int32_t mediaItemType, int32_t inventoryItemState, int32_t inventoryItemAvailability, System_String* inventoryItemContainerId, uint32_t maxItems, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback* callback, intptr_t userData) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, int32_t, int32_t, int32_t, System_String*, uint32_t, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21D4950))(userId, mediaItemType, inventoryItemState, inventoryItemAvailability, inventoryItemContainerId, maxItems, callback, userData);
  }
  static inline bool InventoryService_GetInventoryItemsForAllUsersAsync(int32_t userId, int32_t mediaItemType, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback* callback, intptr_t userData) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, int32_t, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21D4A60))(userId, mediaItemType, callback, userData);
  }
  static inline bool InventoryService_GetInventoryItemsForAllUsersAsyncEx(int32_t userId, int32_t mediaItemType, int32_t inventoryItemState, int32_t inventoryItemAvailability, System_String* inventoryItemContainerId, uint32_t maxItems, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback* callback, intptr_t userData) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, int32_t, int32_t, int32_t, System_String*, uint32_t, ModdingAPI::Exposed::UnityAOT::ObjectResultCallback*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21D4B30))(userId, mediaItemType, inventoryItemState, inventoryItemAvailability, inventoryItemContainerId, maxItems, callback, userData);
  }
};
}