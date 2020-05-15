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
#include "ModdingAPI.Exposed.Mono.Globalization.Unicode.SimpleCollator.Context.hpp"


namespace ModdingAPI::Exposed::Mono::Globalization::Unicode {
struct __SimpleCollator_Il2CppStaticFields {
  bool QuickCheckDisabled;
  ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator* invariant;
};

struct __SimpleCollator_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SimpleCollator_Il2CppClass {
  Il2CppClass_1 _1;
  __SimpleCollator_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SimpleCollator_Il2CppVtbl vtbl;
};

class SimpleCollator {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C23000;
  static inline    __SimpleCollator_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __SimpleCollator_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SimpleCollator_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SimpleCollator_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Globalization::TextInfo* textInfo;
  ModdingAPI::Exposed::Mono::Globalization::Unicode::CodePointIndexer* cjkIndexer;
  ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction_array* contractions;
  ModdingAPI::Exposed::Mono::Globalization::Unicode::Level2Map_array* level2Maps;
  ModdingAPI::Exposed::System::Byte_array* unsafeFlags;
  uint8_t* cjkCatTable;
  uint8_t* cjkLv1Table;
  uint8_t* cjkLv2Table;
  ModdingAPI::Exposed::Mono::Globalization::Unicode::CodePointIndexer* cjkLv2Indexer;
  int32_t lcid;
  bool frenchSort;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Globalization::CultureInfo* culture) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB6640))(this, culture);
  }
  void SetCJKTable(ModdingAPI::Exposed::System::Globalization::CultureInfo* culture, ModdingAPI::Exposed::Mono::Globalization::Unicode::CodePointIndexer* cjkIndexer, uint8_t* catTable, uint8_t* lv1Table, ModdingAPI::Exposed::Mono::Globalization::Unicode::CodePointIndexer* lv2Indexer, uint8_t* lv2Table) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, ModdingAPI::Exposed::System::Globalization::CultureInfo*, ModdingAPI::Exposed::Mono::Globalization::Unicode::CodePointIndexer*, uint8_t*, uint8_t*, ModdingAPI::Exposed::Mono::Globalization::Unicode::CodePointIndexer*, uint8_t*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB6AD0))(this, culture, cjkIndexer, catTable, lv1Table, lv2Indexer, lv2Table);
  }
  uint8_t Category(int32_t cp) {
    return reinterpret_cast<uint8_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB6D40))(this, cp);
  }
  uint8_t Level1(int32_t cp) {
    return reinterpret_cast<uint8_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB6E30))(this, cp);
  }
  uint8_t Level2(int32_t cp, int32_t ext) {
    return reinterpret_cast<uint8_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB6F20))(this, cp, ext);
  }
  ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction* GetContraction(System_String* s, int32_t start, int32_t end) {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction*(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB71D0))(this, s, start, end);
  }
  ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction* GetContraction(System_String* s, int32_t start, int32_t end, ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction_array* clist) {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction*(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t, ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB7300))(this, s, start, end, clist);
  }
  ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction* GetTailContraction(System_String* s, int32_t start, int32_t end) {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction*(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB7470))(this, s, start, end);
  }
  ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction* GetTailContraction(System_String* s, int32_t start, int32_t end, ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction_array* clist) {
    return reinterpret_cast<ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction*(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t, ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB75A0))(this, s, start, end, clist);
  }
  int32_t FilterOptions(int32_t i, int32_t opt) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB7820))(this, i, opt);
  }
  int32_t GetExtenderType(int32_t i) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB7B30))(this, i);
  }
  int32_t FilterExtender(int32_t i, int32_t ext, int32_t opt) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB7C00))(this, i, ext, opt);
  }
  bool IsSafe(int32_t i) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB7EE0))(this, i);
  }
  ModdingAPI::Exposed::System::Globalization::SortKey* GetSortKey(System_String* s, int32_t options) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::SortKey*(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB7F60))(this, s, options);
  }
  ModdingAPI::Exposed::System::Globalization::SortKey* GetSortKey(System_String* s, int32_t start, int32_t length, int32_t options) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::SortKey*(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB7F90))(this, s, start, length, options);
  }
  void GetSortKey(System_String* s, int32_t start, int32_t end, ModdingAPI::Exposed::Mono::Globalization::Unicode::SortKeyBuffer* buf, int32_t opt) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t, ModdingAPI::Exposed::Mono::Globalization::Unicode::SortKeyBuffer*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB8160))(this, s, start, end, buf, opt);
  }
  void FillSortKeyRaw(int32_t i, int32_t ext, ModdingAPI::Exposed::Mono::Globalization::Unicode::SortKeyBuffer* buf, int32_t opt) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, int32_t, int32_t, ModdingAPI::Exposed::Mono::Globalization::Unicode::SortKeyBuffer*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB8580))(this, i, ext, buf, opt);
  }
  void FillSurrogateSortKeyRaw(int32_t i, ModdingAPI::Exposed::Mono::Globalization::Unicode::SortKeyBuffer* buf) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, int32_t, ModdingAPI::Exposed::Mono::Globalization::Unicode::SortKeyBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB8A70))(this, i, buf);
  }
  int32_t Compare(System_String* s1, int32_t idx1, int32_t len1, System_String* s2, int32_t idx2, int32_t len2, int32_t options) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB8B20))(this, s1, idx1, len1, s2, idx2, len2, options);
  }
  void ClearBuffer(uint8_t* buffer, int32_t size) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, uint8_t*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB8C20))(this, buffer, size);
  }
  int32_t CompareInternal(System_String* s1, int32_t idx1, int32_t len1, System_String* s2, int32_t idx2, int32_t len2, bool targetConsumed, bool sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context ctx) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t, System_String*, int32_t, int32_t, bool, bool, bool, bool, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB8C40))(this, s1, idx1, len1, s2, idx2, len2, targetConsumed, sourceConsumed, skipHeadingExtenders, immediateBreakup, ctx);
  }
  int32_t CompareFlagPair(bool b1, bool b2) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB9FD0))(this, b1, b2);
  }
  bool IsPrefix(System_String* src, System_String* target, int32_t opt) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB9FF0))(this, src, target, opt);
  }
  bool IsPrefix(System_String* s, System_String* target, int32_t start, int32_t length, int32_t opt) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBA030))(this, s, target, start, length, opt);
  }
  bool IsPrefix(System_String* s, System_String* target, int32_t start, int32_t length, bool skipHeadingExtenders, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context ctx) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, System_String*, int32_t, int32_t, bool, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBA130))(this, s, target, start, length, skipHeadingExtenders, ctx);
  }
  bool IsSuffix(System_String* src, System_String* target, int32_t opt) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBA1B0))(this, src, target, opt);
  }
  bool IsSuffix(System_String* s, System_String* target, int32_t start, int32_t length, int32_t opt) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBA270))(this, s, target, start, length, opt);
  }
  int32_t QuickIndexOf(System_String* s, System_String* target, int32_t start, int32_t length, bool testWasUnable) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, System_String*, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBA340))(this, s, target, start, length, testWasUnable);
  }
  int32_t IndexOf(System_String* s, System_String* target, int32_t start, int32_t length, int32_t opt) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBA4B0))(this, s, target, start, length, opt);
  }
  int32_t IndexOfOrdinal(System_String* s, System_String* target, int32_t start, int32_t length) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBA7E0))(this, s, target, start, length);
  }
  int32_t IndexOfOrdinal(System_String* s, wchar_t target, int32_t start, int32_t length) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, wchar_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBA8C0))(this, s, target, start, length);
  }
  int32_t IndexOfSortKey(System_String* s, int32_t start, int32_t length, uint8_t* sortkey, wchar_t target, int32_t ti, bool noLv4, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context ctx) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t, uint8_t*, wchar_t, int32_t, bool, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBA940))(this, s, start, length, sortkey, target, ti, noLv4, ctx);
  }
  int32_t IndexOf(System_String* s, System_String* target, int32_t start, int32_t length, uint8_t* targetSortKey, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context ctx) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, System_String*, int32_t, int32_t, uint8_t*, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBAA00))(this, s, target, start, length, targetSortKey, ctx);
  }
  int32_t LastIndexOf(System_String* s, System_String* target, int32_t start, int32_t length, int32_t opt) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, System_String*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBAF60))(this, s, target, start, length, opt);
  }
  int32_t LastIndexOfOrdinal(System_String* s, System_String* target, int32_t start, int32_t length) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBB150))(this, s, target, start, length);
  }
  int32_t LastIndexOfSortKey(System_String* s, int32_t start, int32_t orgStart, int32_t length, uint8_t* sortkey, int32_t ti, bool noLv4, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context ctx) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t, int32_t, uint8_t*, int32_t, bool, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBB2A0))(this, s, start, orgStart, length, sortkey, ti, noLv4, ctx);
  }
  int32_t LastIndexOf(System_String* s, System_String* target, int32_t start, int32_t length, uint8_t* targetSortKey, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context ctx) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, System_String*, int32_t, int32_t, uint8_t*, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBB370))(this, s, target, start, length, targetSortKey, ctx);
  }
  bool MatchesForward(System_String* s, int32_t idx, int32_t end, int32_t ti, uint8_t* sortkey, bool noLv4, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context ctx) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t, int32_t, uint8_t*, bool, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBB8B0))(this, s, idx, end, ti, sortkey, noLv4, ctx);
  }
  bool MatchesForwardCore(System_String* s, int32_t idx, int32_t end, int32_t ti, uint8_t* sortkey, bool noLv4, int32_t ext, ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction* ct, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context ctx) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t, int32_t, uint8_t*, bool, int32_t, ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction*, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBBA80))(this, s, idx, end, ti, sortkey, noLv4, ext, ct, ctx);
  }
  bool MatchesPrimitive(int32_t opt, uint8_t* source, int32_t si, int32_t ext, uint8_t* target, int32_t ti, bool noLv4) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, int32_t, uint8_t*, int32_t, int32_t, uint8_t*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBBEB0))(this, opt, source, si, ext, target, ti, noLv4);
  }
  bool MatchesBackward(System_String* s, int32_t idx, int32_t end, int32_t orgStart, int32_t ti, uint8_t* sortkey, bool noLv4, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context ctx) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t, int32_t, int32_t, uint8_t*, bool, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBC100))(this, s, idx, end, orgStart, ti, sortkey, noLv4, ctx);
  }
  bool MatchesBackwardCore(System_String* s, int32_t idx, int32_t end, int32_t orgStart, int32_t ti, uint8_t* sortkey, bool noLv4, int32_t ext, ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction* ct, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context ctx) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*, System_String*, int32_t, int32_t, int32_t, int32_t, uint8_t*, bool, int32_t, ModdingAPI::Exposed::Mono::Globalization::Unicode::Contraction*, ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator::Context)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBC2E0))(this, s, idx, end, orgStart, ti, sortkey, noLv4, ext, ct, ctx);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> QuickCheckDisabled = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->QuickCheckDisabled; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*> invariant = __CppStaticProperty<ModdingAPI::Exposed::Mono::Globalization::Unicode::SimpleCollator*>(
   []() { return &GetStaticClassInstance()->pStaticFields->invariant; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Globalization::CultureInfo* GetNeutralCulture(ModdingAPI::Exposed::System::Globalization::CultureInfo* info) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Globalization::CultureInfo*(__fastcall*)(ModdingAPI::Exposed::System::Globalization::CultureInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB6CA0))(info);
  }
  static inline bool IsHalfKana(int32_t cp, int32_t opt) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB7100))(cp, opt);
  }
  static inline uint8_t ToDashTypeValue(int32_t ext, int32_t opt) {
    return reinterpret_cast<uint8_t(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB7BE0))(ext, opt);
  }
  static inline bool IsIgnorable(int32_t i, int32_t opt) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xDB7E00))(i, opt);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xDBC940))();
  }
};
}