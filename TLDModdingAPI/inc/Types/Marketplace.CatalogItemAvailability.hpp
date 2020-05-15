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
struct __CatalogItemAvailability_Il2CppStaticFields {
};

struct __CatalogItemAvailability_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_SetNativePtr;
  VirtualInvokeData _5_GetNativePtr;
  VirtualInvokeData _6_Dispose;
};

struct __CatalogItemAvailability_Il2CppClass {
  Il2CppClass_1 _1;
  __CatalogItemAvailability_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CatalogItemAvailability_Il2CppVtbl vtbl;
};

class CatalogItemAvailability {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4B988;
  static inline    __CatalogItemAvailability_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CatalogItemAvailability_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CatalogItemAvailability_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CatalogItemAvailability_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t m_Self;
  ModdingAPI::Exposed::Marketplace::AcceptablePaymentInstrumentTypesList* m_AcceptablePaymentInstrumentTypes;
  System_String* m_AvailabilityDescription;
  System_String* m_AvailabilityTitle;
  System_String* m_ContentId;
  System_String* m_CurrencyCode;
  System_String* m_DisplayListPrice;
  System_String* m_DisplayPrice;
  System_String* m_DistributionType;
  System_String* m_OfferDisplayDataJson;
  System_String* m_OfferId;
  System_String* m_PromotionalText;
  System_String* m_SignedOffer;

  // Member methods:
  ModdingAPI::Exposed::Marketplace::AcceptablePaymentInstrumentTypesList* get_AcceptablePaymentInstrumentTypes() {
    return reinterpret_cast<ModdingAPI::Exposed::Marketplace::AcceptablePaymentInstrumentTypesList*(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C1D90))(this);
  }
  System_String* get_AvailabilityDescription() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C2000))(this);
  }
  System_String* get_AvailabilityTitle() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C2170))(this);
  }
  uint32_t get_ConsumableQuantity() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C22E0))(this);
  }
  System_String* get_ContentId() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C2380))(this);
  }
  System_String* get_CurrencyCode() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C24F0))(this);
  }
  System_String* get_DisplayListPrice() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C2660))(this);
  }
  System_String* get_DisplayPrice() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C27D0))(this);
  }
  System_String* get_DistributionType() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C2940))(this);
  }
  bool get_IsPurchasable() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C2AB0))(this);
  }
  double get_ListPrice() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C2B50))(this);
  }
  System_String* get_OfferDisplayDataJson() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C2BF0))(this);
  }
  System_String* get_OfferId() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C2D60))(this);
  }
  double get_Price() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C2ED0))(this);
  }
  System_String* get_PromotionalText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C2F70))(this);
  }
  System_String* get_SignedOffer() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C30E0))(this);
  }
  void ::ctor(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, self);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C3250))(this);
  }
  void SetNativePtr(intptr_t self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, self);
  }
  intptr_t GetNativePtr() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C32E0))(this);
  }
  intptr_t _get_AvailabilityDescription_b__3_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C33F0))(this);
  }
  intptr_t _get_AvailabilityTitle_b__5_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C3490))(this);
  }
  intptr_t _get_ContentId_b__9_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C3530))(this);
  }
  intptr_t _get_CurrencyCode_b__11_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C35D0))(this);
  }
  intptr_t _get_DisplayListPrice_b__13_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C3670))(this);
  }
  intptr_t _get_DisplayPrice_b__15_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C3710))(this);
  }
  intptr_t _get_DistributionType_b__17_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C37B0))(this);
  }
  intptr_t _get_OfferDisplayDataJson_b__23_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C3850))(this);
  }
  intptr_t _get_OfferId_b__25_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C38F0))(this);
  }
  intptr_t _get_PromotionalText_b__29_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C3990))(this);
  }
  intptr_t _get_SignedOffer_b__31_0() {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::Marketplace::CatalogItemAvailability*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21C3A30))(this);
  }
};
}