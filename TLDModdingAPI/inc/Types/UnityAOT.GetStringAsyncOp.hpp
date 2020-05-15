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
#include "ModdingAPI.Exposed.System.Runtime.InteropServices.GCHandle.hpp"


namespace ModdingAPI::Exposed::UnityAOT {
struct __GetStringAsyncOp_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityAOT::GenericStringCallback* GetStringAsyncThunk;
};

struct __GetStringAsyncOp_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_Dispose;
};

struct __GetStringAsyncOp_Il2CppClass {
  Il2CppClass_1 _1;
  __GetStringAsyncOp_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __GetStringAsyncOp_Il2CppVtbl vtbl;
};

class GetStringAsyncOp {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7B6F0;
  static inline    __GetStringAsyncOp_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __GetStringAsyncOp_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__GetStringAsyncOp_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __GetStringAsyncOp_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  uint32_t Result;
  bool IsComplete;
  bool Success;
  ModdingAPI::Exposed::System::Runtime::InteropServices::GCHandle m_Handle;
  System_String* ResultObject;
  ModdingAPI::Exposed::UnityAOT::GetStringAsyncOp::GetStringAsyncCallback* Callback;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityAOT::GetStringAsyncOp::GetStringAsyncCallback* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityAOT::GetStringAsyncOp*, ModdingAPI::Exposed::UnityAOT::GetStringAsyncOp::GetStringAsyncCallback*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248C610))(this, callback);
  }
  void Complete(uint32_t result, System_String* lresult) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityAOT::GetStringAsyncOp*, uint32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248C6B0))(this, result, lresult);
  }
  ModdingAPI::Exposed::UnityAOT::GetStringAsyncOp* Validate(bool ok) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityAOT::GetStringAsyncOp*(__fastcall*)(ModdingAPI::Exposed::UnityAOT::GetStringAsyncOp*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248C770))(this, ok);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityAOT::GenericStringCallback*> GetStringAsyncThunk = __CppStaticProperty<ModdingAPI::Exposed::UnityAOT::GenericStringCallback*>(
   []() { return &GetStaticClassInstance()->pStaticFields->GetStringAsyncThunk; }
  );

  // Static methods:
  static inline void GetStringAsyncThunkImpl(uint32_t result, intptr_t lresult, intptr_t userData) {
    reinterpret_cast<void(__fastcall*)(uint32_t, intptr_t, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x248C830))(result, lresult, userData);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x248CA00))();
  }
};
}