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
struct __AkAudioFormat_Il2CppStaticFields {
};

struct __AkAudioFormat_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_setCPtr;
  VirtualInvokeData _6_Dispose;
};

struct __AkAudioFormat_Il2CppClass {
  Il2CppClass_1 _1;
  __AkAudioFormat_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AkAudioFormat_Il2CppVtbl vtbl;
};

class AkAudioFormat {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C55E70;
  static inline    __AkAudioFormat_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AkAudioFormat_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AkAudioFormat_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AkAudioFormat_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t swigCPtr;
  bool swigCMemOwn;

  // Member methods:
  void ::ctor(intptr_t cPtr, bool cMemoryOwn) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*, intptr_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1715ED0))(this, cPtr, cMemoryOwn);
  }
  void setCPtr(intptr_t cPtr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1715F70))(this, cPtr);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2502F30))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2502FB0))(this);
  }
  void set_uSampleRate(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25031C0))(this, value);
  }
  uint32_t get_uSampleRate() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25032F0))(this);
  }
  void set_channelConfig(ModdingAPI::Exposed::AkChannelConfig* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*, ModdingAPI::Exposed::AkChannelConfig*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2503410))(this, value);
  }
  ModdingAPI::Exposed::AkChannelConfig* get_channelConfig() {
    return reinterpret_cast<ModdingAPI::Exposed::AkChannelConfig*(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2503550))(this);
  }
  void set_uBitsPerSample(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2503760))(this, value);
  }
  uint32_t get_uBitsPerSample() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2503890))(this);
  }
  void set_uBlockAlign(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25039B0))(this, value);
  }
  uint32_t get_uBlockAlign() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2503AE0))(this);
  }
  void set_uTypeID(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2503C00))(this, value);
  }
  uint32_t get_uTypeID() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2503D30))(this);
  }
  void set_uInterleaveID(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2503E50))(this, value);
  }
  uint32_t get_uInterleaveID() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2503F80))(this);
  }
  uint32_t GetNumChannels() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25040A0))(this);
  }
  uint32_t GetBitsPerSample() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25041C0))(this);
  }
  uint32_t GetBlockAlign() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25042E0))(this);
  }
  uint32_t GetTypeID() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2504400))(this);
  }
  uint32_t GetInterleaveID() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2504520))(this);
  }
  void SetAll(uint32_t in_uSampleRate, ModdingAPI::Exposed::AkChannelConfig* in_channelConfig, uint32_t in_uBitsPerSample, uint32_t in_uBlockAlign, uint32_t in_uTypeID, uint32_t in_uInterleaveID) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*, uint32_t, ModdingAPI::Exposed::AkChannelConfig*, uint32_t, uint32_t, uint32_t, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2504640))(this, in_uSampleRate, in_channelConfig, in_uBitsPerSample, in_uBlockAlign, in_uTypeID, in_uInterleaveID);
  }
  bool IsChannelConfigSupported() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25047B0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25048E0))(this);
  }

  // Static methods:
  static inline intptr_t getCPtr(ModdingAPI::Exposed::AkAudioFormat* obj) {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::AkAudioFormat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2502EA0))(obj);
  }
};
}