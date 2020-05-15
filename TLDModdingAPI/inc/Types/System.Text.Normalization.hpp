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


namespace ModdingAPI::Exposed::System::Text {
struct __Normalization_Il2CppStaticFields {
  uint8_t* props;
  int32_t* mappedChars;
  int16_t* charMapIndex;
  int16_t* helperIndex;
  uint16_t* mapIdxToComposite;
  uint8_t* combiningClass;
  Il2CppObject* forLock;
  bool isReady;
};

struct __Normalization_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Normalization_Il2CppClass {
  Il2CppClass_1 _1;
  __Normalization_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Normalization_Il2CppVtbl vtbl;
};

class Normalization {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C48060;
  static inline    __Normalization_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Normalization_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Normalization_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Normalization_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<uint8_t*> props = __CppStaticProperty<uint8_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->props; }
  );
  static inline __CppStaticProperty<int32_t*> mappedChars = __CppStaticProperty<int32_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->mappedChars; }
  );
  static inline __CppStaticProperty<int16_t*> charMapIndex = __CppStaticProperty<int16_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->charMapIndex; }
  );
  static inline __CppStaticProperty<int16_t*> helperIndex = __CppStaticProperty<int16_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->helperIndex; }
  );
  static inline __CppStaticProperty<uint16_t*> mapIdxToComposite = __CppStaticProperty<uint16_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->mapIdxToComposite; }
  );
  static inline __CppStaticProperty<uint8_t*> combiningClass = __CppStaticProperty<uint8_t*>(
   []() { return &GetStaticClassInstance()->pStaticFields->combiningClass; }
  );
  static inline __CppStaticProperty<Il2CppObject*> forLock = __CppStaticProperty<Il2CppObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->forLock; }
  );
  static inline __CppStaticProperty<bool> isReady = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->isReady; }
  );

  // Static methods:
  static inline uint32_t PropValue(int32_t cp) {
    return reinterpret_cast<uint32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB1E10))(cp);
  }
  static inline int32_t CharMapIdx(int32_t cp) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB1F90))(cp);
  }
  static inline uint8_t GetCombiningClass(int32_t c) {
    return reinterpret_cast<uint8_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB2110))(c);
  }
  static inline int32_t GetPrimaryCompositeFromMapIndex(int32_t src) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB2210))(src);
  }
  static inline int32_t GetPrimaryCompositeHelperIndex(int32_t cp) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB2310))(cp);
  }
  static inline System_String* Compose(System_String* source, int32_t checkType) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB2410))(source, checkType);
  }
  static inline ModdingAPI::Exposed::System::Text::StringBuilder* Combine(System_String* source, int32_t start, int32_t checkType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Text::StringBuilder*(__fastcall*)(System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB2570))(source, start, checkType);
  }
  static inline void Combine(ModdingAPI::Exposed::System::Text::StringBuilder* sb, int32_t i, int32_t checkType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB2790))(sb, i, checkType);
  }
  static inline int32_t CombineHangul(ModdingAPI::Exposed::System::Text::StringBuilder* sb, System_String* s, int32_t current) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB28F0))(sb, s, current);
  }
  static inline int32_t Fetch(ModdingAPI::Exposed::System::Text::StringBuilder* sb, System_String* s, int32_t i) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB2B00))(sb, s, i);
  }
  static inline int32_t TryComposeWithPreviousStarter(ModdingAPI::Exposed::System::Text::StringBuilder* sb, System_String* s, int32_t current) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB2B50))(sb, s, current);
  }
  static inline int32_t TryCompose(int32_t i, int32_t starter, int32_t candidate) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB2F80))(i, starter, candidate);
  }
  static inline System_String* Decompose(System_String* source, int32_t checkType) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB3150))(source, checkType);
  }
  static inline void Decompose(System_String* source, ModdingAPI::Exposed::System::Text::StringBuilder* sb, int32_t checkType) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB3240))(source, sb, checkType);
  }
  static inline void ReorderCanonical(System_String* src, ModdingAPI::Exposed::System::Text::StringBuilder* sb, int32_t start) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Text::StringBuilder*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB33F0))(src, sb, start);
  }
  static inline void DecomposeChar(ModdingAPI::Exposed::System::Text::StringBuilder* sb, ModdingAPI::Exposed::System::Int32_array* buf, System_String* s, int32_t i, int32_t checkType, int32_t start) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, ModdingAPI::Exposed::System::Int32_array*, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB37B0))(sb, buf, s, i, checkType, start);
  }
  static inline int32_t QuickCheck(wchar_t c, int32_t type) {
    return reinterpret_cast<int32_t(__fastcall*)(wchar_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB3AF0))(c, type);
  }
  static inline int32_t GetCanonicalHangul(int32_t s, ModdingAPI::Exposed::System::Int32_array* buf, int32_t bufIdx) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, ModdingAPI::Exposed::System::Int32_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB3CB0))(s, buf, bufIdx);
  }
  static inline int32_t GetCanonical(int32_t c, ModdingAPI::Exposed::System::Int32_array* buf, int32_t bufIdx, int32_t checkType) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, ModdingAPI::Exposed::System::Int32_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB3E00))(c, buf, bufIdx, checkType);
  }
  static inline System_String* Normalize(System_String* source, int32_t normalizationForm) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB4320))(source, normalizationForm);
  }
  static inline System_String* Normalize(System_String* source, int32_t type) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB4460))(source, type);
  }
  static inline void load_normalization_resource(intptr_t props, intptr_t mappedChars, intptr_t charMapIndex, intptr_t helperIndex, intptr_t mapIdxToComposite, intptr_t combiningClass) {
    reinterpret_cast<void(__fastcall*)(intptr_t, intptr_t, intptr_t, intptr_t, intptr_t, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB4720))(props, mappedChars, charMapIndex, helperIndex, mapIdxToComposite, combiningClass);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xEB4770))();
  }
};
}