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

namespace ModdingAPI::Exposed::Rewired {
struct __PlayerSaveData_Il2CppObject {
  ModdingAPI::Exposed::Rewired::JoystickMapSaveData_array* rmXTnCzYQhdzaCUhQgSUoJGnYfr;
  ModdingAPI::Exposed::Rewired::KeyboardMapSaveData_array* ROvRAmRFdcAHVfsvfsthcHLvOaLt;
  ModdingAPI::Exposed::Rewired::MouseMapSaveData_array* hmkSYreQEYjljnwuzTotZEPWBube;
  ModdingAPI::Exposed::Rewired::CustomControllerMapSaveData_array* tBdTdlBNlVHiTgHWFdKdlJrkhjPo;
  ModdingAPI::Exposed::Rewired::InputBehavior_array* UFrDjrYbTsxcInnzVAVpmCwCWmT;
};
struct __PlayerSaveData_Il2CppStaticFields {
};

struct __PlayerSaveData_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __PlayerSaveData_Il2CppClass {
  Il2CppClass_1 _1;
  __PlayerSaveData_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PlayerSaveData_Il2CppVtbl vtbl;
};

class PlayerSaveData {
public:
  // Member fields:
  ModdingAPI::Exposed::Rewired::JoystickMapSaveData_array* rmXTnCzYQhdzaCUhQgSUoJGnYfr;
  ModdingAPI::Exposed::Rewired::KeyboardMapSaveData_array* ROvRAmRFdcAHVfsvfsthcHLvOaLt;
  ModdingAPI::Exposed::Rewired::MouseMapSaveData_array* hmkSYreQEYjljnwuzTotZEPWBube;
  ModdingAPI::Exposed::Rewired::CustomControllerMapSaveData_array* tBdTdlBNlVHiTgHWFdKdlJrkhjPo;
  ModdingAPI::Exposed::Rewired::InputBehavior_array* UFrDjrYbTsxcInnzVAVpmCwCWmT;

  // Member methods:
  ModdingAPI::Exposed::Rewired::JoystickMapSaveData_array* get_joystickMapSaveData() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::JoystickMapSaveData_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6590))(this);
  }
  ModdingAPI::Exposed::Rewired::KeyboardMapSaveData_array* get_keyboardMapSaveData() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::KeyboardMapSaveData_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3370))(this);
  }
  ModdingAPI::Exposed::Rewired::MouseMapSaveData_array* get_mouseMapSaveData() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::MouseMapSaveData_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6360))(this);
  }
  ModdingAPI::Exposed::Rewired::CustomControllerMapSaveData_array* get_customControllerMapSaveData() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::CustomControllerMapSaveData_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2BD0))(this);
  }
  ModdingAPI::Exposed::Rewired::InputBehavior_array* get_inputBehaviors() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::InputBehavior_array*(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2BE0))(this);
  }
  int32_t get_joystickMapCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14C80))(this);
  }
  int32_t get_keyboardMapCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14C90))(this);
  }
  int32_t get_mouseMapCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14CA0))(this);
  }
  int32_t get_customControllerMapCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14CB0))(this);
  }
  int32_t get_inputBehaviorCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14CC0))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_* get_AllControllerMapSaveData() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IEnumerable_T_*(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14CD0))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::JoystickMapSaveData_array* joystickMapSaveData, ModdingAPI::Exposed::Rewired::KeyboardMapSaveData_array* keyboardMapSaveData, ModdingAPI::Exposed::Rewired::MouseMapSaveData_array* mouseMapSaveData, ModdingAPI::Exposed::Rewired::CustomControllerMapSaveData_array* customControllerMapSaveData, ModdingAPI::Exposed::System::Collections::Generic::IList_T_* inputBehaviors) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::PlayerSaveData*, ModdingAPI::Exposed::Rewired::JoystickMapSaveData_array*, ModdingAPI::Exposed::Rewired::KeyboardMapSaveData_array*, ModdingAPI::Exposed::Rewired::MouseMapSaveData_array*, ModdingAPI::Exposed::Rewired::CustomControllerMapSaveData_array*, ModdingAPI::Exposed::System::Collections::Generic::IList_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14CE0))(this, joystickMapSaveData, keyboardMapSaveData, mouseMapSaveData, customControllerMapSaveData, inputBehaviors);
  }

};
}