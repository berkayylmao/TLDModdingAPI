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
#include "ModdingAPI.Exposed.UnityEngine.KeyCode.hpp"
#include "ModdingAPI.Exposed.Rewired.ElementAssignmentConflictCheck.hpp"
#include "ModdingAPI.Exposed.Rewired.ElementAssignment.hpp"

namespace ModdingAPI::Exposed::Rewired {
struct __ElementAssignment_Il2CppObject {
  int32_t type;
  int32_t elementMapId;
  int32_t elementIdentifierId;
  int32_t axisRange;
  ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey;
  int32_t modifierKeyFlags;
  int32_t actionId;
  int32_t axisContribution;
  bool invert;
};
struct __ElementAssignment_Il2CppStaticFields {
};

struct __ElementAssignment_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ElementAssignment_Il2CppClass {
  Il2CppClass_1 _1;
  __ElementAssignment_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ElementAssignment_Il2CppVtbl vtbl;
};

class ElementAssignment {
public:
  // Member fields:
  int32_t type;
  int32_t elementMapId;
  int32_t elementIdentifierId;
  int32_t axisRange;
  ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey;
  int32_t modifierKeyFlags;
  int32_t actionId;
  int32_t axisContribution;
  bool invert;

  // Member methods:
  void ::ctor(int32_t elementAssignmentType, int32_t elementIdentifierId, int32_t axisRange, ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey, int32_t modifierKeyFlags, int32_t actionId, int32_t axisContribution, bool invert, int32_t elementMapId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*, int32_t, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::KeyCode, int32_t, int32_t, int32_t, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A240))(this, elementAssignmentType, elementIdentifierId, axisRange, keyboardKey, modifierKeyFlags, actionId, axisContribution, invert, elementMapId);
  }
  void ::ctor(int32_t controllerType, int32_t elementType, int32_t elementIdentifierId, int32_t axisRange, ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey, int32_t modifierKeyFlags, int32_t actionId, int32_t axisContribution, bool invert, int32_t elementMapId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*, int32_t, int32_t, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::KeyCode, int32_t, int32_t, int32_t, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A280))(this, controllerType, elementType, elementIdentifierId, axisRange, keyboardKey, modifierKeyFlags, actionId, axisContribution, invert, elementMapId);
  }
  void ::ctor(int32_t elementAssignmentType, int32_t elementIdentifierId, int32_t axisRange, ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey, int32_t modifierKeyFlags, int32_t actionId, int32_t axisContribution, bool invert) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*, int32_t, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::KeyCode, int32_t, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A300))(this, elementAssignmentType, elementIdentifierId, axisRange, keyboardKey, modifierKeyFlags, actionId, axisContribution, invert);
  }
  void ::ctor(int32_t controllerType, int32_t elementType, int32_t elementIdentifierId, int32_t axisRange, ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey, int32_t modifierKeyFlags, int32_t actionId, int32_t axisContribution, bool invert) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*, int32_t, int32_t, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::KeyCode, int32_t, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A340))(this, controllerType, elementType, elementIdentifierId, axisRange, keyboardKey, modifierKeyFlags, actionId, axisContribution, invert);
  }
  void ::ctor(int32_t elementIdentifierId, int32_t actionId, bool invert) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A3C0))(this, elementIdentifierId, actionId, invert);
  }
  void ::ctor(int32_t elementIdentifierId, int32_t actionId, bool invert, int32_t elementMapId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*, int32_t, int32_t, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A3F0))(this, elementIdentifierId, actionId, invert, elementMapId);
  }
  void ::ctor(int32_t elementIdentifierId, int32_t axisRange, int32_t actionId, int32_t axisContribution) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A420))(this, elementIdentifierId, axisRange, actionId, axisContribution);
  }
  void ::ctor(int32_t elementIdentifierId, int32_t axisRange, int32_t actionId, int32_t axisContribution, int32_t elementMapId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*, int32_t, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A450))(this, elementIdentifierId, axisRange, actionId, axisContribution, elementMapId);
  }
  void ::ctor(int32_t elementIdentifierId, int32_t actionId, int32_t axisContribution) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A480))(this, elementIdentifierId, actionId, axisContribution);
  }
  void ::ctor(int32_t elementIdentifierId, int32_t actionId, int32_t axisContribution, int32_t elementMapId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A4B0))(this, elementIdentifierId, actionId, axisContribution, elementMapId);
  }
  void ::ctor(ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey, int32_t modifierKeyFlags, int32_t actionId, int32_t axisContribution) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*, ModdingAPI::Exposed::UnityEngine::KeyCode, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A4E0))(this, keyboardKey, modifierKeyFlags, actionId, axisContribution);
  }
  void ::ctor(ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey, int32_t modifierKeyFlags, int32_t actionId, int32_t axisContribution, int32_t elementMapId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*, ModdingAPI::Exposed::UnityEngine::KeyCode, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A4F0))(this, keyboardKey, modifierKeyFlags, actionId, axisContribution, elementMapId);
  }
  ModdingAPI::Exposed::Rewired::ElementAssignmentConflictCheck ToElementAssignmentConflictCheck() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignmentConflictCheck(__fastcall*)(ModdingAPI::Exposed::Rewired::ElementAssignment*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A560))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::Rewired::ElementAssignment CompleteAssignment(int32_t elementAssignmentType, int32_t elementIdentifierId, int32_t axisRange, ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey, int32_t modifierKeyFlags, int32_t actionId, int32_t axisContribution, bool invert, int32_t elementMapId) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignment(__fastcall*)(int32_t, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::KeyCode, int32_t, int32_t, int32_t, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7CFA00))(elementAssignmentType, elementIdentifierId, axisRange, keyboardKey, modifierKeyFlags, actionId, axisContribution, invert, elementMapId);
  }
  static inline ModdingAPI::Exposed::Rewired::ElementAssignment CompleteAssignment(int32_t controllerType, int32_t elementType, int32_t elementIdentifierId, int32_t axisRange, ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey, int32_t modifierKeyFlags, int32_t actionId, int32_t axisContribution, bool invert, int32_t elementMapId) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignment(__fastcall*)(int32_t, int32_t, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::KeyCode, int32_t, int32_t, int32_t, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7CFA80))(controllerType, elementType, elementIdentifierId, axisRange, keyboardKey, modifierKeyFlags, actionId, axisContribution, invert, elementMapId);
  }
  static inline ModdingAPI::Exposed::Rewired::ElementAssignment CompleteAssignment(int32_t elementAssignmentType, int32_t elementIdentifierId, int32_t axisRange, ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey, int32_t modifierKeyFlags, int32_t actionId, int32_t axisContribution, bool invert) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignment(__fastcall*)(int32_t, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::KeyCode, int32_t, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7CFB40))(elementAssignmentType, elementIdentifierId, axisRange, keyboardKey, modifierKeyFlags, actionId, axisContribution, invert);
  }
  static inline ModdingAPI::Exposed::Rewired::ElementAssignment CompleteAssignment(int32_t controllerType, int32_t elementType, int32_t elementIdentifierId, int32_t axisRange, ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey, int32_t modifierKeyFlags, int32_t actionId, int32_t axisContribution, bool invert) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignment(__fastcall*)(int32_t, int32_t, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::KeyCode, int32_t, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7CFBB0))(controllerType, elementType, elementIdentifierId, axisRange, keyboardKey, modifierKeyFlags, actionId, axisContribution, invert);
  }
  static inline ModdingAPI::Exposed::Rewired::ElementAssignment FullAxisAssignment(int32_t elementIdentifierId, int32_t actionId, bool invert) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignment(__fastcall*)(int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7CFC70))(elementIdentifierId, actionId, invert);
  }
  static inline ModdingAPI::Exposed::Rewired::ElementAssignment FullAxisAssignment(int32_t elementIdentifierId, int32_t actionId, bool invert, int32_t elementMapId) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignment(__fastcall*)(int32_t, int32_t, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7CFCD0))(elementIdentifierId, actionId, invert, elementMapId);
  }
  static inline ModdingAPI::Exposed::Rewired::ElementAssignment SplitAxisAssignment(int32_t elementIdentifierId, int32_t axisRange, int32_t actionId, int32_t axisContribution) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignment(__fastcall*)(int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7CFD30))(elementIdentifierId, axisRange, actionId, axisContribution);
  }
  static inline ModdingAPI::Exposed::Rewired::ElementAssignment SplitAxisAssignment(int32_t elementIdentifierId, int32_t axisRange, int32_t actionId, int32_t axisContribution, int32_t elementMapId) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignment(__fastcall*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7CFD90))(elementIdentifierId, axisRange, actionId, axisContribution, elementMapId);
  }
  static inline ModdingAPI::Exposed::Rewired::ElementAssignment ButtonAssignment(int32_t elementIdentifierId, int32_t actionId, int32_t axisContribution) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignment(__fastcall*)(int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7CFDF0))(elementIdentifierId, actionId, axisContribution);
  }
  static inline ModdingAPI::Exposed::Rewired::ElementAssignment ButtonAssignment(int32_t elementIdentifierId, int32_t actionId, int32_t axisContribution, int32_t elementMapId) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignment(__fastcall*)(int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7CFE50))(elementIdentifierId, actionId, axisContribution, elementMapId);
  }
  static inline ModdingAPI::Exposed::Rewired::ElementAssignment KeyboardKeyAssignment(ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey, int32_t modifierKeyFlags, int32_t actionId, int32_t axisContribution) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignment(__fastcall*)(ModdingAPI::Exposed::UnityEngine::KeyCode, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7CFEB0))(keyboardKey, modifierKeyFlags, actionId, axisContribution);
  }
  static inline ModdingAPI::Exposed::Rewired::ElementAssignment KeyboardKeyAssignment(ModdingAPI::Exposed::UnityEngine::KeyCode keyboardKey, int32_t modifierKeyFlags, int32_t actionId, int32_t axisContribution, int32_t elementMapId) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::ElementAssignment(__fastcall*)(ModdingAPI::Exposed::UnityEngine::KeyCode, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7CFF50))(keyboardKey, modifierKeyFlags, actionId, axisContribution, elementMapId);
  }

};
}