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


namespace ModdingAPI::Exposed {
struct __AkPlaylistArray_Il2CppStaticFields {
};

struct __AkPlaylistArray_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_setCPtr;
  VirtualInvokeData _6_Dispose;
};

struct __AkPlaylistArray_Il2CppClass {
  Il2CppClass_1 _1;
  __AkPlaylistArray_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AkPlaylistArray_Il2CppVtbl vtbl;
};

class AkPlaylistArray {
public:
  // Il2Cpp fields:
  __AkPlaylistArray_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t swigCPtr;
  bool swigCMemOwn;

  // Member methods:
  void ::ctor(intptr_t cPtr, bool cMemoryOwn) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, intptr_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1715ED0))(this, cPtr, cMemoryOwn);
  }
  void setCPtr(intptr_t cPtr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1715F70))(this, cPtr);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D7230))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D72B0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D74C0))(this);
  }
  ModdingAPI::Exposed::AkIterator* Begin() {
    return reinterpret_cast<ModdingAPI::Exposed::AkIterator*(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D75E0))(this);
  }
  ModdingAPI::Exposed::AkIterator* End() {
    return reinterpret_cast<ModdingAPI::Exposed::AkIterator*(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D77E0))(this);
  }
  ModdingAPI::Exposed::AkIterator* FindEx(ModdingAPI::Exposed::AkPlaylistItem* in_Item) {
    return reinterpret_cast<ModdingAPI::Exposed::AkIterator*(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, ModdingAPI::Exposed::AkPlaylistItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D79E0))(this, in_Item);
  }
  ModdingAPI::Exposed::AkIterator* Erase(ModdingAPI::Exposed::AkIterator* in_rIter) {
    return reinterpret_cast<ModdingAPI::Exposed::AkIterator*(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, ModdingAPI::Exposed::AkIterator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D7BF0))(this, in_rIter);
  }
  void Erase(uint32_t in_uIndex) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D7E00))(this, in_uIndex);
  }
  ModdingAPI::Exposed::AkIterator* EraseSwap(ModdingAPI::Exposed::AkIterator* in_rIter) {
    return reinterpret_cast<ModdingAPI::Exposed::AkIterator*(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, ModdingAPI::Exposed::AkIterator*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D7F30))(this, in_rIter);
  }
  int32_t Reserve(uint32_t in_ulReserve) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D8140))(this, in_ulReserve);
  }
  uint32_t Reserved() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D8270))(this);
  }
  void Term() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D8390))(this);
  }
  uint32_t Length() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D84B0))(this);
  }
  ModdingAPI::Exposed::AkPlaylistItem* Data() {
    return reinterpret_cast<ModdingAPI::Exposed::AkPlaylistItem*(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D85D0))(this);
  }
  bool IsEmpty() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D87E0))(this);
  }
  ModdingAPI::Exposed::AkPlaylistItem* Exists(ModdingAPI::Exposed::AkPlaylistItem* in_Item) {
    return reinterpret_cast<ModdingAPI::Exposed::AkPlaylistItem*(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, ModdingAPI::Exposed::AkPlaylistItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D8910))(this, in_Item);
  }
  ModdingAPI::Exposed::AkPlaylistItem* AddLast() {
    return reinterpret_cast<ModdingAPI::Exposed::AkPlaylistItem*(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D8B40))(this);
  }
  ModdingAPI::Exposed::AkPlaylistItem* AddLast(ModdingAPI::Exposed::AkPlaylistItem* in_rItem) {
    return reinterpret_cast<ModdingAPI::Exposed::AkPlaylistItem*(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, ModdingAPI::Exposed::AkPlaylistItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D8D50))(this, in_rItem);
  }
  ModdingAPI::Exposed::AkPlaylistItem* Last() {
    return reinterpret_cast<ModdingAPI::Exposed::AkPlaylistItem*(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D8F80))(this);
  }
  void RemoveLast() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D9180))(this);
  }
  int32_t Remove(ModdingAPI::Exposed::AkPlaylistItem* in_rItem) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, ModdingAPI::Exposed::AkPlaylistItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D92A0))(this, in_rItem);
  }
  int32_t RemoveSwap(ModdingAPI::Exposed::AkPlaylistItem* in_rItem) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, ModdingAPI::Exposed::AkPlaylistItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D93E0))(this, in_rItem);
  }
  void RemoveAll() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D9520))(this);
  }
  ModdingAPI::Exposed::AkPlaylistItem* ItemAtIndex(uint32_t uiIndex) {
    return reinterpret_cast<ModdingAPI::Exposed::AkPlaylistItem*(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D9640))(this, uiIndex);
  }
  ModdingAPI::Exposed::AkPlaylistItem* Insert(uint32_t in_uIndex) {
    return reinterpret_cast<ModdingAPI::Exposed::AkPlaylistItem*(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D9840))(this, in_uIndex);
  }
  bool GrowArray(uint32_t in_uGrowBy) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D9A60))(this, in_uGrowBy);
  }
  bool GrowArray() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D9B90))(this);
  }
  bool Resize(uint32_t in_uiSize) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D9CC0))(this, in_uiSize);
  }
  void Transfer(ModdingAPI::Exposed::AkPlaylistArray* in_rSource) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D9DF0))(this, in_rSource);
  }
  int32_t Copy(ModdingAPI::Exposed::AkPlaylistArray* in_rSource) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*, ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D9F80))(this, in_rSource);
  }

  // Static methods:
  static inline intptr_t getCPtr(ModdingAPI::Exposed::AkPlaylistArray* obj) {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::AkPlaylistArray*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D71A0))(obj);
  }
};
}