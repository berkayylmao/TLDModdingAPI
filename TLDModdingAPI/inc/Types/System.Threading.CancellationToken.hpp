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
#include "ModdingAPI.Exposed.System.Threading.CancellationTokenRegistration.hpp"
#include "ModdingAPI.Exposed.System.Threading.CancellationToken.hpp"

namespace ModdingAPI::Exposed::System::Threading {
struct __CancellationToken_Il2CppObject {
  ModdingAPI::Exposed::System::Threading::CancellationTokenSource* m_source;
};
struct __CancellationToken_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Action_T_* s_ActionToActionObjShunt;
};

struct __CancellationToken_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CancellationToken_Il2CppClass {
  Il2CppClass_1 _1;
  __CancellationToken_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CancellationToken_Il2CppVtbl vtbl;
};

class CancellationToken {
  static constexpr uint64_t _rvaClassInstance     = 0x3C79E58;
  static inline    __CancellationToken_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Static class getter:
  static inline __CancellationToken_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CancellationToken_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  ModdingAPI::Exposed::System::Threading::CancellationTokenSource* m_source;

  // Member methods:
  bool get_IsCancellationRequested() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationToken*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44CF0))(this);
  }
  bool get_CanBeCanceled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationToken*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44D10))(this);
  }
  void ::ctor(ModdingAPI::Exposed::System::Threading::CancellationTokenSource* source) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationToken*, ModdingAPI::Exposed::System::Threading::CancellationTokenSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2C00))(this, source);
  }
  ModdingAPI::Exposed::System::Threading::CancellationTokenRegistration InternalRegisterWithoutEC(ModdingAPI::Exposed::System::Action_T_* callback, Il2CppObject* state) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::CancellationTokenRegistration(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationToken*, ModdingAPI::Exposed::System::Action_T_*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44D30))(this, callback, state);
  }
  ModdingAPI::Exposed::System::Threading::CancellationTokenRegistration Register(ModdingAPI::Exposed::System::Action_T_* callback, Il2CppObject* state, bool useSynchronizationContext, bool useExecutionContext) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::CancellationTokenRegistration(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationToken*, ModdingAPI::Exposed::System::Action_T_*, Il2CppObject*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44D70))(this, callback, state, useSynchronizationContext, useExecutionContext);
  }
  bool Equals(ModdingAPI::Exposed::System::Threading::CancellationToken other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationToken*, ModdingAPI::Exposed::System::Threading::CancellationToken)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44DC0))(this, other);
  }
  bool Equals(Il2CppObject* other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationToken*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44DD0))(this, other);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationToken*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44EA0))(this);
  }
  void ThrowIfCancellationRequested() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationToken*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44F80))(this);
  }
  void ThrowIfSourceDisposed() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationToken*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44FB0))(this);
  }
  void ThrowOperationCanceledException() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Threading::CancellationToken*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44FC0))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::Threading::CancellationToken get_None() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Threading::CancellationToken(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))();
  }
  static inline void ActionToActionObjShunt(Il2CppObject* obj) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x108E7A0))(obj);
  }
  static inline void ThrowObjectDisposedException() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x108ECB0))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x108ED20))();
  }

};
}