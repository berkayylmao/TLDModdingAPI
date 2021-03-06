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
struct __AkAudioListener_Il2CppStaticFields {
  ModdingAPI::Exposed::AkAudioListener::DefaultListenerList* defaultListeners;
};

struct __AkAudioListener_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AkAudioListener_Il2CppClass {
  Il2CppClass_1 _1;
  __AkAudioListener_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AkAudioListener_Il2CppVtbl vtbl;
};

class AkAudioListener {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C5CC48;
  static inline    AkAudioListener* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C825C0;
  static inline    __AkAudioListener_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline AkAudioListener* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (AkAudioListener**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __AkAudioListener_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AkAudioListener_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AkAudioListener_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  uint64_t akGameObjectID;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* EmittersToStartListeningTo;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* EmittersToStopListeningTo;
  bool isDefaultListener;
  int32_t listenerId;

  // Member methods:
  void StartListeningToEmitter(ModdingAPI::Exposed::AkGameObj* emitter) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioListener*, ModdingAPI::Exposed::AkGameObj*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2506EF0))(this, emitter);
  }
  void StopListeningToEmitter(ModdingAPI::Exposed::AkGameObj* emitter) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioListener*, ModdingAPI::Exposed::AkGameObj*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2506FB0))(this, emitter);
  }
  void SetIsDefaultListener(bool isDefault) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioListener*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2507070))(this, isDefault);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioListener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2507190))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioListener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25072D0))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioListener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25073A0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioListener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2507470))(this);
  }
  uint64_t GetAkGameObjectID() {
    return reinterpret_cast<uint64_t(__fastcall*)(ModdingAPI::Exposed::AkAudioListener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void Migrate14() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioListener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2507690))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkAudioListener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25077B0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::AkAudioListener::DefaultListenerList*> defaultListeners = __CppStaticProperty<ModdingAPI::Exposed::AkAudioListener::DefaultListenerList*>(
   []() { return &GetStaticClassInstance()->pStaticFields->defaultListeners; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::AkAudioListener::DefaultListenerList* get_DefaultListeners() {
    return reinterpret_cast<ModdingAPI::Exposed::AkAudioListener::DefaultListenerList*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2506E50))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x25079E0))();
  }
};
}