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


namespace ModdingAPI::Exposed::System::Threading {
struct __SynchronizationContext_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Type* s_cachedPreparedType1;
  ModdingAPI::Exposed::System::Type* s_cachedPreparedType2;
  ModdingAPI::Exposed::System::Type* s_cachedPreparedType3;
  ModdingAPI::Exposed::System::Type* s_cachedPreparedType4;
  ModdingAPI::Exposed::System::Type* s_cachedPreparedType5;
};

struct __SynchronizationContext_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Send;
  VirtualInvokeData _5_Post;
  VirtualInvokeData _6_CreateCopy;
};

struct __SynchronizationContext_Il2CppClass {
  Il2CppClass_1 _1;
  __SynchronizationContext_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SynchronizationContext_Il2CppVtbl vtbl;
};

class SynchronizationContext {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C5D9E0;
  static inline    SynchronizationContext* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5BF50;
  static inline    __SynchronizationContext_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline SynchronizationContext* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (SynchronizationContext**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __SynchronizationContext_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SynchronizationContext_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __SynchronizationContext_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t _props;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::SynchronizationContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void Send(ModdingAPI::Exposed::System::Threading::SendOrPostCallback* d, Il2CppObject* state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::SynchronizationContext*, ModdingAPI::Exposed::System::Threading::SendOrPostCallback*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD87AD0))(this, d, state);
  }
  void Post(ModdingAPI::Exposed::System::Threading::SendOrPostCallback* d, Il2CppObject* state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::SynchronizationContext*, ModdingAPI::Exposed::System::Threading::SendOrPostCallback*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD87B00))(this, d, state);
  }
  ModdingAPI::Exposed::System::Threading::SynchronizationContext* CreateCopy() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::SynchronizationContext*(__fastcall*)(ModdingAPI::Exposed::System::Threading::SynchronizationContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD87D00))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Type*> s_cachedPreparedType1 = __CppStaticProperty<ModdingAPI::Exposed::System::Type*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_cachedPreparedType1; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Type*> s_cachedPreparedType2 = __CppStaticProperty<ModdingAPI::Exposed::System::Type*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_cachedPreparedType2; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Type*> s_cachedPreparedType3 = __CppStaticProperty<ModdingAPI::Exposed::System::Type*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_cachedPreparedType3; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Type*> s_cachedPreparedType4 = __CppStaticProperty<ModdingAPI::Exposed::System::Type*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_cachedPreparedType4; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Type*> s_cachedPreparedType5 = __CppStaticProperty<ModdingAPI::Exposed::System::Type*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_cachedPreparedType5; }
  );

  // Static methods:
  static inline void SetSynchronizationContext(ModdingAPI::Exposed::System::Threading::SynchronizationContext* syncContext) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::SynchronizationContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xD87C60))(syncContext);
  }
  static inline ModdingAPI::Exposed::System::Threading::SynchronizationContext* get_Current() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::SynchronizationContext*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xD87CA0))();
  }
  static inline ModdingAPI::Exposed::System::Threading::SynchronizationContext* get_CurrentNoFlow() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::SynchronizationContext*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xD87CD0))();
  }
  static inline ModdingAPI::Exposed::System::Threading::SynchronizationContext* GetThreadLocalContext() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::SynchronizationContext*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))();
  }
};
}