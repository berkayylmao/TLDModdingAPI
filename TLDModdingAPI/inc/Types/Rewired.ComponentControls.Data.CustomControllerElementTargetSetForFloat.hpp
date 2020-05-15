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


namespace ModdingAPI::Exposed::Rewired::ComponentControls::Data {
struct __CustomControllerElementTargetSetForFloat_Il2CppStaticFields {
};

struct __CustomControllerElementTargetSetForFloat_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_targetCount;
  VirtualInvokeData _5_get_Item;
  VirtualInvokeData _6_ClearElementCaches;
};

struct __CustomControllerElementTargetSetForFloat_Il2CppClass {
  Il2CppClass_1 _1;
  __CustomControllerElementTargetSetForFloat_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CustomControllerElementTargetSetForFloat_Il2CppVtbl vtbl;
};

class CustomControllerElementTargetSetForFloat {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6BA68;
  static inline    __CustomControllerElementTargetSetForFloat_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CustomControllerElementTargetSetForFloat_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CustomControllerElementTargetSetForFloat_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CustomControllerElementTargetSetForFloat_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool _splitValue;
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget* _target;
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget* _positiveTarget;
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget* _negativeTarget;

  // Member methods:
  bool get_splitValue() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33C2C0))(this);
  }
  void set_splitValue(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30CFB0))(this, value);
  }
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_target() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_positiveTarget() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_negativeTarget() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  int32_t get_targetCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9FF0A0))(this);
  }
  ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_Item(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget*(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9FF0B0))(this, index);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9FF1E0))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget* target) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*, ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9FF830))(this, target);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget* positiveTarget, ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget* negativeTarget) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*, ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget*, ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTarget*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9FFE90))(this, positiveTarget, negativeTarget);
  }
  void ClearElementCaches() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA004F0))(this);
  }
};
}