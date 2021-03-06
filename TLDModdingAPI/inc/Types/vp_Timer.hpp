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
struct __vp_Timer_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::GameObject* m_GameObject;
};

struct __vp_Timer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __vp_Timer_Il2CppClass {
  Il2CppClass_1 _1;
  __vp_Timer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __vp_Timer_Il2CppVtbl vtbl;
};

class vp_Timer {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C34600;
  static inline    __vp_Timer_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __vp_Timer_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__vp_Timer_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __vp_Timer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::vp_Timer::Callback* m_Function;
  ModdingAPI::Exposed::vp_Timer::ArgCallback* m_ArgFunction;
  Il2CppObject* m_Arguments;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Iterations;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_Timer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void Cancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_Timer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2013D00))(this);
  }
  void CancelInvoke(System_String* methodName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_Timer*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2013EB0))(this, methodName);
  }
  void CancelInvoke() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_Timer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2013EB0))(this);
  }
  void CancelInstance() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_Timer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2013EC0))(this);
  }
  void Schedule(float time, ModdingAPI::Exposed::vp_Timer::Callback* function) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_Timer*, float, ModdingAPI::Exposed::vp_Timer::Callback*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2014000))(this, time, function);
  }
  void Schedule(float time, ModdingAPI::Exposed::vp_Timer::ArgCallback* function, Il2CppObject* args) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_Timer*, float, ModdingAPI::Exposed::vp_Timer::ArgCallback*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20140B0))(this, time, function, args);
  }
  void Execute() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_Timer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2014180))(this);
  }
  void ArgExecute() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_Timer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2014230))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_Timer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20142E0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*> m_GameObject = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_GameObject; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::vp_Timer* In(float time, ModdingAPI::Exposed::vp_Timer::Callback* function, int32_t iterations, float interval) {
    return reinterpret_cast<ModdingAPI::Exposed::vp_Timer*(__fastcall*)(float, ModdingAPI::Exposed::vp_Timer::Callback*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2013640))(time, function, iterations, interval);
  }
  static inline ModdingAPI::Exposed::vp_Timer* In(float time, ModdingAPI::Exposed::vp_Timer::ArgCallback* function, Il2CppObject* args, int32_t iterations, float interval) {
    return reinterpret_cast<ModdingAPI::Exposed::vp_Timer*(__fastcall*)(float, ModdingAPI::Exposed::vp_Timer::ArgCallback*, Il2CppObject*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2013730))(time, function, args, iterations, interval);
  }
  static inline ModdingAPI::Exposed::vp_Timer* In(float time, ModdingAPI::Exposed::vp_Timer::Callback* func, ModdingAPI::Exposed::vp_Timer::ArgCallback* argFunc, Il2CppObject* args, int32_t iterations, float interval) {
    return reinterpret_cast<ModdingAPI::Exposed::vp_Timer*(__fastcall*)(float, ModdingAPI::Exposed::vp_Timer::Callback*, ModdingAPI::Exposed::vp_Timer::ArgCallback*, Il2CppObject*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2013820))(time, func, argFunc, args, iterations, interval);
  }
  static inline void Cancel(ModdingAPI::Exposed::vp_Timer* timer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_Timer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2013C40))(timer);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))();
  }
};
}