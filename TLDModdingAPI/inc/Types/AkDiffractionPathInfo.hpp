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
struct __AkDiffractionPathInfo_Il2CppStaticFields {
};

struct __AkDiffractionPathInfo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_setCPtr;
  VirtualInvokeData _6_Dispose;
};

struct __AkDiffractionPathInfo_Il2CppClass {
  Il2CppClass_1 _1;
  __AkDiffractionPathInfo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AkDiffractionPathInfo_Il2CppVtbl vtbl;
};

class AkDiffractionPathInfo {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C72968;
  static inline    __AkDiffractionPathInfo_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AkDiffractionPathInfo_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AkDiffractionPathInfo_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AkDiffractionPathInfo_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t swigCPtr;
  bool swigCMemOwn;

  // Member methods:
  void ::ctor(intptr_t cPtr, bool cMemoryOwn) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*, intptr_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1715ED0))(this, cPtr, cMemoryOwn);
  }
  void setCPtr(intptr_t cPtr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1715F70))(this, cPtr);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x251F560))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x251F5E0))(this);
  }
  void set_virtualPos(ModdingAPI::Exposed::AkTransform* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*, ModdingAPI::Exposed::AkTransform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x251F7F0))(this, value);
  }
  ModdingAPI::Exposed::AkTransform* get_virtualPos() {
    return reinterpret_cast<ModdingAPI::Exposed::AkTransform*(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x251F930))(this);
  }
  void set_nodeCount(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x251FB40))(this, value);
  }
  uint32_t get_nodeCount() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x251FC70))(this);
  }
  void set_diffraction(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x251FD90))(this, value);
  }
  float get_diffraction() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x251FEC0))(this);
  }
  void set_totLength(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x251FFE0))(this, value);
  }
  float get_totLength() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2520110))(this);
  }
  void set_obstructionValue(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2520230))(this, value);
  }
  float get_obstructionValue() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2520360))(this);
  }
  ModdingAPI::Exposed::AkVector* GetNodes(uint32_t idx) {
    return reinterpret_cast<ModdingAPI::Exposed::AkVector*(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2520510))(this, idx);
  }
  float GetAngles(uint32_t idx) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2520730))(this, idx);
  }
  void Clone(ModdingAPI::Exposed::AkDiffractionPathInfo* other) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*, ModdingAPI::Exposed::AkDiffractionPathInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2520860))(this, other);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2520980))(this);
  }

  // Static methods:
  static inline intptr_t getCPtr(ModdingAPI::Exposed::AkDiffractionPathInfo* obj) {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::AkDiffractionPathInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x251F4D0))(obj);
  }
  static inline int32_t GetSizeOf() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2520480))();
  }
};
}