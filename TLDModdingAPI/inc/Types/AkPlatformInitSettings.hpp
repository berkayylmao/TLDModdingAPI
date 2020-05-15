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
struct __AkPlatformInitSettings_Il2CppStaticFields {
};

struct __AkPlatformInitSettings_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_setCPtr;
  VirtualInvokeData _6_Dispose;
};

struct __AkPlatformInitSettings_Il2CppClass {
  Il2CppClass_1 _1;
  __AkPlatformInitSettings_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AkPlatformInitSettings_Il2CppVtbl vtbl;
};

class AkPlatformInitSettings {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C60A70;
  static inline    __AkPlatformInitSettings_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AkPlatformInitSettings_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AkPlatformInitSettings_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AkPlatformInitSettings_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t swigCPtr;
  bool swigCMemOwn;

  // Member methods:
  void ::ctor(intptr_t cPtr, bool cMemoryOwn) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*, intptr_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1715ED0))(this, cPtr, cMemoryOwn);
  }
  void setCPtr(intptr_t cPtr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1715F70))(this, cPtr);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D4640))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D46C0))(this);
  }
  void set_threadLEngine(ModdingAPI::Exposed::AkThreadProperties* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*, ModdingAPI::Exposed::AkThreadProperties*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D48D0))(this, value);
  }
  ModdingAPI::Exposed::AkThreadProperties* get_threadLEngine() {
    return reinterpret_cast<ModdingAPI::Exposed::AkThreadProperties*(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D4A10))(this);
  }
  void set_threadOutputMgr(ModdingAPI::Exposed::AkThreadProperties* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*, ModdingAPI::Exposed::AkThreadProperties*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D4C20))(this, value);
  }
  ModdingAPI::Exposed::AkThreadProperties* get_threadOutputMgr() {
    return reinterpret_cast<ModdingAPI::Exposed::AkThreadProperties*(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D4D60))(this);
  }
  void set_threadBankManager(ModdingAPI::Exposed::AkThreadProperties* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*, ModdingAPI::Exposed::AkThreadProperties*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D4F70))(this, value);
  }
  ModdingAPI::Exposed::AkThreadProperties* get_threadBankManager() {
    return reinterpret_cast<ModdingAPI::Exposed::AkThreadProperties*(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D50B0))(this);
  }
  void set_threadMonitor(ModdingAPI::Exposed::AkThreadProperties* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*, ModdingAPI::Exposed::AkThreadProperties*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D52C0))(this, value);
  }
  ModdingAPI::Exposed::AkThreadProperties* get_threadMonitor() {
    return reinterpret_cast<ModdingAPI::Exposed::AkThreadProperties*(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D5400))(this);
  }
  void set_uLEngineDefaultPoolSize(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D5610))(this, value);
  }
  uint32_t get_uLEngineDefaultPoolSize() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D5740))(this);
  }
  void set_fLEngineDefaultPoolRatioThreshold(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D5860))(this, value);
  }
  float get_fLEngineDefaultPoolRatioThreshold() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D5990))(this);
  }
  void set_uNumRefillsInVoice(uint16_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D5AB0))(this, value);
  }
  uint16_t get_uNumRefillsInVoice() {
    return reinterpret_cast<uint16_t(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D5BE0))(this);
  }
  void set_uSampleRate(uint32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D5D00))(this, value);
  }
  uint32_t get_uSampleRate() {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D5E30))(this);
  }
  void set_eAudioAPI(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D5F50))(this, value);
  }
  int32_t get_eAudioAPI() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D6080))(this);
  }
  void set_bGlobalFocus(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D61A0))(this, value);
  }
  bool get_bGlobalFocus() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D62D0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D6400))(this);
  }

  // Static methods:
  static inline intptr_t getCPtr(ModdingAPI::Exposed::AkPlatformInitSettings* obj) {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::AkPlatformInitSettings*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x23D45B0))(obj);
  }
};
}