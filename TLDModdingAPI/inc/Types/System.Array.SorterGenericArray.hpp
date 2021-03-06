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

namespace ModdingAPI::Exposed::System::Array {
struct __SorterGenericArray_Il2CppObject {
  ModdingAPI::Exposed::System::Array* keys;
  ModdingAPI::Exposed::System::Array* items;
  ModdingAPI::Exposed::System::Collections::IComparer* comparer;
};
struct __SorterGenericArray_Il2CppStaticFields {
};

struct __SorterGenericArray_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SorterGenericArray_Il2CppClass {
  Il2CppClass_1 _1;
  __SorterGenericArray_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SorterGenericArray_Il2CppVtbl vtbl;
};

class SorterGenericArray {
public:
  // Member fields:
  ModdingAPI::Exposed::System::Array* keys;
  ModdingAPI::Exposed::System::Array* items;
  ModdingAPI::Exposed::System::Collections::IComparer* comparer;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::System::Array* keys, ModdingAPI::Exposed::System::Array* items, ModdingAPI::Exposed::System::Collections::IComparer* comparer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Array::SorterGenericArray*, ModdingAPI::Exposed::System::Array*, ModdingAPI::Exposed::System::Array*, ModdingAPI::Exposed::System::Collections::IComparer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x35AD0))(this, keys, items, comparer);
  }
  void SwapIfGreaterWithItems(int32_t a, int32_t b) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Array::SorterGenericArray*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x35AE0))(this, a, b);
  }
  void Swap(int32_t i, int32_t j) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Array::SorterGenericArray*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x35AF0))(this, i, j);
  }
  void Sort(int32_t left, int32_t length) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Array::SorterGenericArray*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x35B00))(this, left, length);
  }
  void IntrospectiveSort(int32_t left, int32_t length) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Array::SorterGenericArray*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x35B00))(this, left, length);
  }
  void IntroSort(int32_t lo, int32_t hi, int32_t depthLimit) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Array::SorterGenericArray*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x35B10))(this, lo, hi, depthLimit);
  }
  int32_t PickPivotAndPartition(int32_t lo, int32_t hi) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Array::SorterGenericArray*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x35B20))(this, lo, hi);
  }
  void Heapsort(int32_t lo, int32_t hi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Array::SorterGenericArray*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x35B30))(this, lo, hi);
  }
  void DownHeap(int32_t i, int32_t n, int32_t lo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Array::SorterGenericArray*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x35B40))(this, i, n, lo);
  }
  void InsertionSort(int32_t lo, int32_t hi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Array::SorterGenericArray*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x35B50))(this, lo, hi);
  }

};
}