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


namespace ModdingAPI::Exposed::System::Globalization {
struct __RegionInfo_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Globalization::RegionInfo* currentRegion;
};

struct __RegionInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_CurrencyEnglishName;
  VirtualInvokeData _5_get_CurrencySymbol;
  VirtualInvokeData _6_get_DisplayName;
  VirtualInvokeData _7_get_EnglishName;
  VirtualInvokeData _8_get_GeoId;
  VirtualInvokeData _9_get_IsMetric;
  VirtualInvokeData _10_get_ISOCurrencySymbol;
  VirtualInvokeData _11_get_NativeName;
  VirtualInvokeData _12_get_CurrencyNativeName;
  VirtualInvokeData _13_get_Name;
  VirtualInvokeData _14_get_ThreeLetterISORegionName;
  VirtualInvokeData _15_get_ThreeLetterWindowsRegionName;
  VirtualInvokeData _16_get_TwoLetterISORegionName;
};

struct __RegionInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __RegionInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RegionInfo_Il2CppVtbl vtbl;
};

class RegionInfo {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C95A28;
  static inline    __RegionInfo_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RegionInfo_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RegionInfo_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RegionInfo_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t regionId;
  System_String* iso2Name;
  System_String* iso3Name;
  System_String* win3Name;
  System_String* englishName;
  System_String* nativeName;
  System_String* currencySymbol;
  System_String* isoCurrencySymbol;
  System_String* currencyEnglishName;
  System_String* currencyNativeName;

  // Member methods:
  void ::ctor(int32_t culture) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85800))(this, culture);
  }
  void ::ctor(System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85920))(this, name);
  }
  void ::ctor(ModdingAPI::Exposed::System::Globalization::CultureInfo* ci) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*, ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85A70))(this, ci);
  }
  bool GetByTerritory(ModdingAPI::Exposed::System::Globalization::CultureInfo* ci) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*, ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85BD0))(this, ci);
  }
  bool construct_internal_region_from_name(System_String* name) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85CD0))(this, name);
  }
  System_String* get_CurrencyEnglishName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A440))(this);
  }
  System_String* get_CurrencySymbol() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319960))(this);
  }
  System_String* get_DisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  System_String* get_EnglishName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  int32_t get_GeoId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311060))(this);
  }
  bool get_IsMetric() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85CE0))(this);
  }
  System_String* get_ISOCurrencySymbol() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319980))(this);
  }
  System_String* get_NativeName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  System_String* get_CurrencyNativeName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383960))(this);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  System_String* get_ThreeLetterISORegionName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  System_String* get_ThreeLetterWindowsRegionName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  System_String* get_TwoLetterISORegionName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  bool Equals(Il2CppObject* value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85DC0))(this, value);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85F00))(this);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::RegionInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85F40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Globalization::RegionInfo*> currentRegion = __CppStaticProperty<ModdingAPI::Exposed::System::Globalization::RegionInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->currentRegion; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Globalization::RegionInfo* get_CurrentRegion() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::RegionInfo*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85510))();
  }
  static inline void ClearCachedData() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85F60))();
  }
};
}