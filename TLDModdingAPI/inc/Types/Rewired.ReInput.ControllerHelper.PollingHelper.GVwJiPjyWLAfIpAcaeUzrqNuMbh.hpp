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
#include "ModdingAPI.Exposed.Rewired.ControllerPollingInfo.hpp"


namespace ModdingAPI::Exposed::Rewired::ReInput::ControllerHelper::PollingHelper {
struct __GVwJiPjyWLAfIpAcaeUzrqNuMbh_Il2CppStaticFields {
};

struct __GVwJiPjyWLAfIpAcaeUzrqNuMbh_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_System_IDisposable_Dispose;
  VirtualInvokeData _5_System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator;
  VirtualInvokeData _6_System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData _7_System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current;
  VirtualInvokeData _8_MoveNext;
  VirtualInvokeData _9_System_Collections_IEnumerator_get_Current;
  VirtualInvokeData _10_System_Collections_IEnumerator_Reset;
};

struct __GVwJiPjyWLAfIpAcaeUzrqNuMbh_Il2CppClass {
  Il2CppClass_1 _1;
  __GVwJiPjyWLAfIpAcaeUzrqNuMbh_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __GVwJiPjyWLAfIpAcaeUzrqNuMbh_Il2CppVtbl vtbl;
};

class GVwJiPjyWLAfIpAcaeUzrqNuMbh {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5DFF8;
  static inline    __GVwJiPjyWLAfIpAcaeUzrqNuMbh_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __GVwJiPjyWLAfIpAcaeUzrqNuMbh_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__GVwJiPjyWLAfIpAcaeUzrqNuMbh_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __GVwJiPjyWLAfIpAcaeUzrqNuMbh_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Rewired::ControllerPollingInfo LcdbthgpWNPDwvfPmRsLBqQsKpe;
  int32_t TwzSXKiOmzLJOojNHinuXBoBCDr;
  int32_t yGqFFQNYIZGXzrVksIpJRaozTPW;
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* UgmrpJoDCSfpyywhfLWJFLeJGuM;
  int32_t iepCRtsUFfFeqIJoyakkxOFjYV;
  ModdingAPI::Exposed::Rewired::ControllerPollingInfo fdlJmjldusTFATiOqmgyjPYVnTQ;
  ModdingAPI::Exposed::Rewired::ReInput::ControllerHelper::PollingHelper* BaZyFZeWGSKVHjKimGGQMKWiBVMF;
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerator_T_* oqVbKzJdBodoJcDuqEEZaGNepAi;

  // Member methods:
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerator_T_* System::Collections::Generic::IEnumerable_Rewired::ControllerPollingInfo_::GetEnumerator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerator_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::ControllerHelper::PollingHelper::GVwJiPjyWLAfIpAcaeUzrqNuMbh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x994F90))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* System::Collections::IEnumerable::GetEnumerator() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::ControllerHelper::PollingHelper::GVwJiPjyWLAfIpAcaeUzrqNuMbh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9951A0))(this);
  }
  bool MoveNext() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::ControllerHelper::PollingHelper::GVwJiPjyWLAfIpAcaeUzrqNuMbh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9951B0))(this);
  }
  ModdingAPI::Exposed::Rewired::ControllerPollingInfo System::Collections::Generic::IEnumerator_Rewired::ControllerPollingInfo_::get_Current() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ControllerPollingInfo(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::ControllerHelper::PollingHelper::GVwJiPjyWLAfIpAcaeUzrqNuMbh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x758E20))(this);
  }
  void System::Collections::IEnumerator::Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::ControllerHelper::PollingHelper::GVwJiPjyWLAfIpAcaeUzrqNuMbh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x995500))(this);
  }
  void System::IDisposable::Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::ControllerHelper::PollingHelper::GVwJiPjyWLAfIpAcaeUzrqNuMbh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x995550))(this);
  }
  Il2CppObject* System::Collections::IEnumerator::get_Current() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::ControllerHelper::PollingHelper::GVwJiPjyWLAfIpAcaeUzrqNuMbh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x995590))(this);
  }
  void ::ctor(int32_t __1__state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::ControllerHelper::PollingHelper::GVwJiPjyWLAfIpAcaeUzrqNuMbh*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x758F50))(this, __1__state);
  }
  void SdptkJInkhgWZiLuKBqzkPkLKfu() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::ControllerHelper::PollingHelper::GVwJiPjyWLAfIpAcaeUzrqNuMbh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x995640))(this);
  }
};
}