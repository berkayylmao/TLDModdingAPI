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
struct __AkImageSourceSettings_Il2CppStaticFields {
};

struct __AkImageSourceSettings_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_setCPtr;
  VirtualInvokeData _6_Dispose;
};

struct __AkImageSourceSettings_Il2CppClass {
  Il2CppClass_1 _1;
  __AkImageSourceSettings_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AkImageSourceSettings_Il2CppVtbl vtbl;
};

class AkImageSourceSettings {
public:
  // Il2Cpp fields:
  __AkImageSourceSettings_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t swigCPtr;
  bool swigCMemOwn;

  // Member methods:
  void ::ctor(intptr_t cPtr, bool cMemoryOwn) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkImageSourceSettings*, intptr_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1715ED0))(this, cPtr, cMemoryOwn);
  }
  void setCPtr(intptr_t cPtr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkImageSourceSettings*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1715F70))(this, cPtr);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkImageSourceSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25315D0))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkImageSourceSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2531650))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkImageSourceSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2531860))(this);
  }
  void ::ctor(ModdingAPI::Exposed::AkVector* in_sourcePosition, float in_fDistanceScalingFactor, float in_fLevel) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkImageSourceSettings*, ModdingAPI::Exposed::AkVector*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2531980))(this, in_sourcePosition, in_fDistanceScalingFactor, in_fLevel);
  }
  void SetOneTexture(uint32_t in_texture) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkImageSourceSettings*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2531AF0))(this, in_texture);
  }
  void SetName(System_String* in_pName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkImageSourceSettings*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2531C20))(this, in_pName);
  }
  void set_params_(ModdingAPI::Exposed::AkImageSourceParams* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkImageSourceSettings*, ModdingAPI::Exposed::AkImageSourceParams*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2531E20))(this, value);
  }
  ModdingAPI::Exposed::AkImageSourceParams* get_params_() {
    return reinterpret_cast<ModdingAPI::Exposed::AkImageSourceParams*(__fastcall*)(ModdingAPI::Exposed::AkImageSourceSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2531FB0))(this);
  }

  // Static methods:
  static inline intptr_t getCPtr(ModdingAPI::Exposed::AkImageSourceSettings* obj) {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::AkImageSourceSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2531540))(obj);
  }
};
}