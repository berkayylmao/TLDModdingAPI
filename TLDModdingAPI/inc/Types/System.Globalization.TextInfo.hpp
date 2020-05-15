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
#include "ModdingAPI.Exposed.System.Nullable_T_.hpp"
#include "ModdingAPI.Exposed.System.Runtime.Serialization.StreamingContext.hpp"


namespace ModdingAPI::Exposed::System::Globalization {
struct __TextInfo_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Globalization::TextInfo* s_Invariant;
};

struct __TextInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
  VirtualInvokeData _6_Clone;
  VirtualInvokeData _7_ToLower;
  VirtualInvokeData _8_ToLower;
  VirtualInvokeData _9_ToUpper;
  VirtualInvokeData _10_ToUpper;
};

struct __TextInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __TextInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TextInfo_Il2CppVtbl vtbl;
};

class TextInfo {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C1FCF0;
  static inline    __TextInfo_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TextInfo_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TextInfo_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TextInfo_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* m_listSeparator;
  bool m_isReadOnly;
  System_String* m_cultureName;
  ModdingAPI::Exposed::System::Globalization::CultureData* m_cultureData;
  System_String* m_textInfoName;
  ModdingAPI::Exposed::System::Nullable_T_ m_IsAsciiCasingSameAsInvariant;
  System_String* customCultureName;
  int32_t m_nDataItem;
  bool m_useUserOverride;
  int32_t m_win32LangID;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Globalization::CultureData* cultureData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, ModdingAPI::Exposed::System::Globalization::CultureData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87780))(this, cultureData);
  }
  void OnDeserializing(ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext ctx) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA877B0))(this, ctx);
  }
  void OnDeserialized() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA877C0))(this);
  }
  void OnDeserialized(ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext ctx) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87920))(this, ctx);
  }
  void OnSerializing(ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext ctx) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87930))(this, ctx);
  }
  System_String* get_CultureName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  Il2CppObject* Clone() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87CA0))(this);
  }
  void SetReadOnlyState(bool readOnly) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5161B0))(this, readOnly);
  }
  wchar_t ToLower(wchar_t c) {
    return reinterpret_cast<wchar_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87E40))(this, c);
  }
  System_String* ToLower(System_String* str) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87EA0))(this, str);
  }
  wchar_t ToUpper(wchar_t c) {
    return reinterpret_cast<wchar_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88050))(this, c);
  }
  System_String* ToUpper(System_String* str) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA880B0))(this, str);
  }
  bool get_IsAsciiCasingSameAsInvariant() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88270))(this);
  }
  bool Equals(Il2CppObject* obj) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88430))(this, obj);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88520))(this);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88550))(this);
  }
  void System::Runtime::Serialization::IDeserializationCallback::OnDeserialization(Il2CppObject* sender) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87920))(this, sender);
  }
  int32_t GetCaseInsensitiveHashCode(System_String* str) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA885F0))(this, str);
  }
  int32_t GetCaseInsensitiveHashCode(System_String* str, bool forceRandomizedHashing, int64_t additionalEntropy) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, System_String*, bool, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88610))(this, str, forceRandomizedHashing, additionalEntropy);
  }
  int32_t GetInvariantCaseInsensitiveHashCode(System_String* str) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88840))(this, str);
  }
  System_String* ToUpperInternal(System_String* str) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88990))(this, str);
  }
  System_String* ToLowerInternal(System_String* str) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88AA0))(this, str);
  }
  wchar_t ToUpperInternal(wchar_t c) {
    return reinterpret_cast<wchar_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88BB0))(this, c);
  }
  wchar_t ToLowerInternal(wchar_t c) {
    return reinterpret_cast<wchar_t(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA89350))(this, c);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Globalization::TextInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA89C10))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Globalization::TextInfo*> s_Invariant = __CppStaticProperty<ModdingAPI::Exposed::System::Globalization::TextInfo*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Invariant; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Globalization::TextInfo* get_Invariant() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::TextInfo*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA875D0))();
  }
  static inline int32_t GetHashCodeOrdinalIgnoreCase(System_String* s) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87A10))(s);
  }
  static inline int32_t GetHashCodeOrdinalIgnoreCase(System_String* s, bool forceRandomizedHashing, int64_t additionalEntropy) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*, bool, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87A50))(s, forceRandomizedHashing, additionalEntropy);
  }
  static inline int32_t CompareOrdinalIgnoreCase(System_String* str1, System_String* str2) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87AB0))(str1, str2);
  }
  static inline int32_t CompareOrdinalIgnoreCaseEx(System_String* strA, int32_t indexA, System_String* strB, int32_t indexB, int32_t lengthA, int32_t lengthB) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*, int32_t, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87B00))(strA, indexA, strB, indexB, lengthA, lengthB);
  }
  static inline int32_t IndexOfStringOrdinalIgnoreCase(System_String* source, System_String* value, int32_t startIndex, int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87B10))(source, value, startIndex, count);
  }
  static inline int32_t LastIndexOfStringOrdinalIgnoreCase(System_String* source, System_String* value, int32_t startIndex, int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA87BE0))(source, value, startIndex, count);
  }
  static inline wchar_t ToLowerAsciiInvariant(wchar_t c) {
    return reinterpret_cast<wchar_t(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88030))(c);
  }
  static inline wchar_t ToUpperAsciiInvariant(wchar_t c) {
    return reinterpret_cast<wchar_t(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88240))(c);
  }
  static inline bool IsAscii(wchar_t c) {
    return reinterpret_cast<bool(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA88260))(c);
  }
  static inline int32_t InternalCompareStringOrdinalIgnoreCase(System_String* strA, int32_t indexA, System_String* strB, int32_t indexB, int32_t lenA, int32_t lenB) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*, int32_t, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA89A40))(strA, indexA, strB, indexB, lenA, lenB);
  }
};
}