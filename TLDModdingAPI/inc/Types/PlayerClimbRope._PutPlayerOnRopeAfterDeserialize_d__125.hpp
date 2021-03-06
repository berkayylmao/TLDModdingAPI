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


namespace ModdingAPI::Exposed::PlayerClimbRope {
struct ___PutPlayerOnRopeAfterDeserialize_d__125_Il2CppStaticFields {
};

struct ___PutPlayerOnRopeAfterDeserialize_d__125_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData _5_System_IDisposable_Dispose;
  VirtualInvokeData _6_MoveNext;
  VirtualInvokeData _7_System_Collections_IEnumerator_get_Current;
  VirtualInvokeData _8_System_Collections_IEnumerator_Reset;
};

struct ___PutPlayerOnRopeAfterDeserialize_d__125_Il2CppClass {
  Il2CppClass_1 _1;
  ___PutPlayerOnRopeAfterDeserialize_d__125_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  ___PutPlayerOnRopeAfterDeserialize_d__125_Il2CppVtbl vtbl;
};

class _PutPlayerOnRopeAfterDeserialize_d__125 {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C4C168;
  static inline    _PutPlayerOnRopeAfterDeserialize_d__125* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C642A0;
  static inline    ___PutPlayerOnRopeAfterDeserialize_d__125_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline _PutPlayerOnRopeAfterDeserialize_d__125* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (_PutPlayerOnRopeAfterDeserialize_d__125**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline ___PutPlayerOnRopeAfterDeserialize_d__125_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (___PutPlayerOnRopeAfterDeserialize_d__125_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  ___PutPlayerOnRopeAfterDeserialize_d__125_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t __1__state;
  Il2CppObject* __2__current;
  ModdingAPI::Exposed::PlayerClimbRopeProxy* saveProxy;
  ModdingAPI::Exposed::PlayerClimbRope* __4__this;

  // Member methods:
  void ::ctor(int32_t __1__state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayerClimbRope::_PutPlayerOnRopeAfterDeserialize_d__125*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311070))(this, __1__state);
  }
  void System::IDisposable::Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayerClimbRope::_PutPlayerOnRopeAfterDeserialize_d__125*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  bool MoveNext() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::PlayerClimbRope::_PutPlayerOnRopeAfterDeserialize_d__125*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEDCE0))(this);
  }
  Il2CppObject* System::Collections::Generic::IEnumerator_System::Object_::get_Current() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::PlayerClimbRope::_PutPlayerOnRopeAfterDeserialize_d__125*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void System::Collections::IEnumerator::Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::PlayerClimbRope::_PutPlayerOnRopeAfterDeserialize_d__125*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEDED0))(this);
  }
  Il2CppObject* System::Collections::IEnumerator::get_Current() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::PlayerClimbRope::_PutPlayerOnRopeAfterDeserialize_d__125*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
};
}