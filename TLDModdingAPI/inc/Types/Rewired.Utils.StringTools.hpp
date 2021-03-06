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
#include "ModdingAPI::Exposed::UnityEngine::Vector2.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Rect.hpp"
#include "ModdingAPI.Exposed.System.Guid.hpp"


namespace ModdingAPI::Exposed::Rewired::Utils {
struct __StringTools_Il2CppStaticFields {
  System_String* ocsbYbiVUBCBPHFmeXBqcMPEYiqp;
};

struct __StringTools_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __StringTools_Il2CppClass {
  Il2CppClass_1 _1;
  __StringTools_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __StringTools_Il2CppVtbl vtbl;
};

class StringTools {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6C7D0;
  static inline    __StringTools_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __StringTools_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__StringTools_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __StringTools_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<System_String*> ocsbYbiVUBCBPHFmeXBqcMPEYiqp = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->ocsbYbiVUBCBPHFmeXBqcMPEYiqp; }
  );

  // Static methods:
  static inline System_String* ToString(ModdingAPI::Exposed::System::Int32_array* inArray) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Int32_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1B900))(inArray);
  }
  static inline System_String* ToString(ModdingAPI::Exposed::System::Single_array* inArray) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Single_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1BA50))(inArray);
  }
  static inline System_String* ToString(ModdingAPI::Exposed::System::String_array* inArray) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1BBA0))(inArray);
  }
  static inline System_String* ToString(ModdingAPI::Exposed::System::Boolean_array* inArray) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Boolean_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1BCC0))(inArray);
  }
  static inline System_String* ToString(ModdingAPI::Exposed::System::Byte_array* inArray) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1BE60))(inArray);
  }
  static inline System_String* ToString(ModdingAPI::Exposed::System::Byte_array* inArray, System_String* stringOptions, int32_t maxItemsPerLine) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1BFF0))(inArray, stringOptions, maxItemsPerLine);
  }
  static inline System_String* ToString(ModdingAPI::Exposed::UnityEngine::Vector3_array* inArray) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1C220))(inArray);
  }
  static inline System_String* ToString(ModdingAPI::Exposed::System::Collections::Generic::List_T_* list) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1C380))(list);
  }
  static inline System_String* ToString(ModdingAPI::Exposed::UnityEngine::Vector2 v) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1C490))(v);
  }
  static inline System_String* ToString(ModdingAPI::Exposed::UnityEngine::Vector3 v) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1C560))(v);
  }
  static inline ModdingAPI::Exposed::System::String_array* Split(System_String* str, System_String* delimiter) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1C810))(str, delimiter);
  }
  static inline ModdingAPI::Exposed::System::String_array* SplitAndTrim(System_String* str, System_String* delimiter) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1C920))(str, delimiter);
  }
  static inline System_String* DecodeNewlines(System_String* s) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1CBC0))(s);
  }
  static inline System_String* EncodeNewlines(System_String* s) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1CC60))(s);
  }
  static inline System_String* ArrayToText(ModdingAPI::Exposed::System::String_array* sA) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1CD00))(sA);
  }
  static inline ModdingAPI::Exposed::System::String_array* TextToArray(System_String* s) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1CE60))(s);
  }
  static inline System_String* StringToString(System_String* s) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1CF60))(s);
  }
  static inline int32_t StringToInt(System_String* s) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1CFE0))(s);
  }
  static inline float StringToFloat(System_String* s) {
    return reinterpret_cast<float(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1D020))(s);
  }
  static inline bool StringToBoolean(System_String* s) {
    return reinterpret_cast<bool(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1D110))(s);
  }
  static inline ModdingAPI::Exposed::UnityEngine::KeyCode StringToKeyCode(System_String* s) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::KeyCode(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1D1C0))(s);
  }
  static inline ModdingAPI::Exposed::System::Enum* StringToEnum(System_String* str, ModdingAPI::Exposed::System::Type* type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Enum*(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1D2D0))(str, type);
  }
  static inline System_String* ToStringWithCount(System_String* s) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1D3D0))(s);
  }
  static inline ModdingAPI::Exposed::System::Char_array* StringToCharArray(System_String* s) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Char_array*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1D5A0))(s);
  }
  static inline System_String* CharArrayToString(ModdingAPI::Exposed::System::Char_array* c) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Char_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1D5B0))(c);
  }
  static inline System_String* CSVEncode(System_String* s) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1D5D0))(s);
  }
  static inline System_String* CSVDecode(System_String* s) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1D6D0))(s);
  }
  static inline ModdingAPI::Exposed::System::String_array* CSVToArray(System_String* s) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1D9E0))(s);
  }
  static inline System_String* TimeToString(int32_t seconds) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1DF80))(seconds);
  }
  static inline System_String* TimeToString(float seconds) {
    return reinterpret_cast<System_String*(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1E020))(seconds);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1E400))();
  }
  static inline System_String* CleanUpFileName(System_String* name) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1E610))(name);
  }
  static inline System_String* StripTrailingNumbers(System_String* name) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1E730))(name);
  }
  static inline System_String* StripTrailingNumbers(System_String* name, int32_t number) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1E7E0))(name, number);
  }
  static inline System_String* VerifyName(System_String* name, int32_t indexInNameList, ModdingAPI::Exposed::System::String_array* names, bool cleanUpIllegalFileChars) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::String_array*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1E9D0))(name, indexInNameList, names, cleanUpIllegalFileChars);
  }
  static inline System_String* VerifyName(System_String* name, int32_t indexInNameList, ModdingAPI::Exposed::System::String_array* names, bool cleanUpIllegalFileChars, bool allowBlank) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::String_array*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1EAB0))(name, indexInNameList, names, cleanUpIllegalFileChars, allowBlank);
  }
  static inline System_String* IterateName(System_String* name, int32_t indexInNameList, ModdingAPI::Exposed::System::String_array* names) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1EF90))(name, indexInNameList, names);
  }
  static inline System_String* ToString(ModdingAPI::Exposed::UnityEngine::Rect rect) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rect)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1F280))(rect);
  }
  static inline ModdingAPI::Exposed::System::Guid ToGuid(System_String* guid) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1F4E0))(guid);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* GetBytes(System_String* str) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1F5D0))(str);
  }
  static inline System_String* GetString(ModdingAPI::Exposed::System::Byte_array* bytes) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1F6B0))(bytes);
  }
  static inline System_String* ByteShiftEncode(System_String* source, int16_t shift) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1F7A0))(source, shift);
  }
  static inline System_String* GetNullTerminatedUnicodeString(ModdingAPI::Exposed::System::Byte_array* bytes) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1FA80))(bytes);
  }
  static inline System_String* SanitizeDeviceString(System_String* text) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1FC30))(text);
  }
  static inline System_String* ReplaceChar(System_String* string, int32_t index, wchar_t replacement) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, int32_t, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1FD40))(string, index, replacement);
  }
  static inline System_String* AddSpacesToSentence(System_String* text, bool preserveAcronyms) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA1FDC0))(text, preserveAcronyms);
  }
  static inline System_String* WriteVar(System_String* name, Il2CppObject* value) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA20210))(name, value);
  }
  static inline System_String* WriteVar(System_String* name, Il2CppObject* value, wchar_t delimiter) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*, Il2CppObject*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA202C0))(name, value, delimiter);
  }
  static inline void WriteVar(ModdingAPI::Exposed::System::Text::StringBuilder* sb, System_String* name, Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA205B0))(sb, name, value);
  }
  static inline void WriteVar(ModdingAPI::Exposed::System::Text::StringBuilder* sb, System_String* name, Il2CppObject* value, wchar_t delimiter) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Text::StringBuilder*, System_String*, Il2CppObject*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA20750))(sb, name, value, delimiter);
  }
  static inline System_String* Trim(System_String* str) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA20880))(str);
  }
  static inline System_String* VariableNameToDisplayName(System_String* fieldName) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA208A0))(fieldName);
  }
  static inline int32_t CountChars(System_String* text, wchar_t character) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*, wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA20D60))(text, character);
  }
};
}