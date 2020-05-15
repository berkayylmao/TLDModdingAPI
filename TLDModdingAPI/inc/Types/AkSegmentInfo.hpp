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
struct __AkSegmentInfo_Il2CppStaticFields {
};

struct __AkSegmentInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_setCPtr;
  VirtualInvokeData _6_Dispose;
};

struct __AkSegmentInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __AkSegmentInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AkSegmentInfo_Il2CppVtbl vtbl;
};

class AkSegmentInfo {
public:
  // Il2Cpp fields:
  __AkSegmentInfo_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t swigCPtr;
  bool swigCMemOwn;

  // Member methods:
  void ::ctor(intptr_t cPtr, bool cMemoryOwn) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*, intptr_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1715ED0))(this, cPtr, cMemoryOwn);
  }
  void setCPtr(intptr_t cPtr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1715F70))(this, cPtr);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23E9AD0))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23E9B50))(this);
  }
  void set_iCurrentPosition(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23E9D60))(this, value);
  }
  int32_t get_iCurrentPosition() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23E9E90))(this);
  }
  void set_iPreEntryDuration(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23E9FB0))(this, value);
  }
  int32_t get_iPreEntryDuration() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EA0E0))(this);
  }
  void set_iActiveDuration(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EA200))(this, value);
  }
  int32_t get_iActiveDuration() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EA330))(this);
  }
  void set_iPostExitDuration(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EA450))(this, value);
  }
  int32_t get_iPostExitDuration() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EA580))(this);
  }
  void set_iRemainingLookAheadTime(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EA6A0))(this, value);
  }
  int32_t get_iRemainingLookAheadTime() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EA7D0))(this);
  }
  void set_fBeatDuration(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EA8F0))(this, value);
  }
  float get_fBeatDuration() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EAA20))(this);
  }
  void set_fBarDuration(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EAB40))(this, value);
  }
  float get_fBarDuration() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EAC70))(this);
  }
  void set_fGridDuration(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EAD90))(this, value);
  }
  float get_fGridDuration() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EAEC0))(this);
  }
  void set_fGridOffset(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EAFE0))(this, value);
  }
  float get_fGridOffset() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EB110))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23EB230))(this);
  }

  // Static methods:
  static inline intptr_t getCPtr(ModdingAPI::Exposed::AkSegmentInfo* obj) {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::AkSegmentInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23E9A40))(obj);
  }
};
}