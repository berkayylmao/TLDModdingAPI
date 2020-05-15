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
#include "ModdingAPI.Exposed.System.Globalization.InternalEncodingDataItem.hpp"
#include "ModdingAPI.Exposed.System.Globalization.InternalCodePageDataItem.hpp"


namespace ModdingAPI::Exposed::System::Globalization {
struct __EncodingTable_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Globalization::InternalEncodingDataItem_array* encodingDataPtr;
  ModdingAPI::Exposed::System::Globalization::InternalCodePageDataItem_array* codePageDataPtr;
  int32_t lastEncodingItem;
  ModdingAPI::Exposed::System::Collections::Hashtable* hashByName;
  ModdingAPI::Exposed::System::Collections::Hashtable* hashByCodePage;
};

struct __EncodingTable_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __EncodingTable_Il2CppClass {
  Il2CppClass_1 _1;
  __EncodingTable_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __EncodingTable_Il2CppVtbl vtbl;
};

class EncodingTable {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C22D90;
  static inline    __EncodingTable_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __EncodingTable_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__EncodingTable_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __EncodingTable_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Globalization::InternalEncodingDataItem_array*> encodingDataPtr = __CppStaticProperty<ModdingAPI::Exposed::System::Globalization::InternalEncodingDataItem_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->encodingDataPtr; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Globalization::InternalCodePageDataItem_array*> codePageDataPtr = __CppStaticProperty<ModdingAPI::Exposed::System::Globalization::InternalCodePageDataItem_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->codePageDataPtr; }
  );
  static inline __CppStaticProperty<int32_t> lastEncodingItem = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->lastEncodingItem; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*> hashByName = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*>(
   []() { return &GetStaticClassInstance()->pStaticFields->hashByName; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*> hashByCodePage = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Hashtable*>(
   []() { return &GetStaticClassInstance()->pStaticFields->hashByCodePage; }
  );

  // Static methods:
  static inline int32_t GetNumEncodingItems() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xF902B0))();
  }
  static inline ModdingAPI::Exposed::System::Globalization::InternalEncodingDataItem ENC(System_String* name, uint16_t cp) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::InternalEncodingDataItem(__fastcall*)(System_String*, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF90360))(name, cp);
  }
  static inline ModdingAPI::Exposed::System::Globalization::InternalCodePageDataItem MapCodePageDataItem(uint16_t cp, uint16_t fcp, System_String* names, uint32_t flags) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::InternalCodePageDataItem(__fastcall*)(uint16_t, uint16_t, System_String*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF90390))(cp, fcp, names, flags);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xF903C0))();
  }
  static inline int32_t internalGetCodePageFromName(System_String* name) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF98BB0))(name);
  }
  static inline int32_t GetCodePageFromName(System_String* name) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF990B0))(name);
  }
  static inline ModdingAPI::Exposed::System::Globalization::CodePageDataItem* GetCodePageDataItem(int32_t codepage) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::CodePageDataItem*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xF99280))(codepage);
  }
};
}