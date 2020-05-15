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
#include "ModdingAPI.Exposed.Affliction.hpp"

namespace ModdingAPI::Exposed {
struct __Affliction_Il2CppObject {
  System_String* m_Cause;
  int32_t m_AfflictionType;
  int32_t m_Location;
  int32_t m_Id;
  bool m_IsValid;
};
struct __Affliction_Il2CppStaticFields {
  int32_t AfflictionBodyAreaCount;
  int32_t AfflictionTypesCount;
  ModdingAPI::Exposed::Affliction InvalidAffliction;
};

struct __Affliction_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Affliction_Il2CppClass {
  Il2CppClass_1 _1;
  __Affliction_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Affliction_Il2CppVtbl vtbl;
};

class Affliction {
  static constexpr uint64_t _rvaClassInstance     = 0x3C22360;
  static inline    __Affliction_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Static class getter:
  static inline __Affliction_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Affliction_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  System_String* m_Cause;
  int32_t m_AfflictionType;
  int32_t m_Location;
  int32_t m_Id;
  bool m_IsValid;

  // Member methods:
  void ::ctor(int32_t afflictionType, System_String* causeLocalizationId, int32_t location, int32_t id) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Affliction*, int32_t, System_String*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D64B0))(this, afflictionType, causeLocalizationId, location, id);
  }
  void ::ctor(System_String* cause) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Affliction*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D64C0))(this, cause);
  }
  bool IsValid() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Affliction*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA7D0))(this);
  }
  bool CompareTo(ModdingAPI::Exposed::Affliction toCompare) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Affliction*, ModdingAPI::Exposed::Affliction)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D64E0))(this, toCompare);
  }
  bool CompareTo(ModdingAPI::Exposed::AfflictionButton* toCompare) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Affliction*, ModdingAPI::Exposed::AfflictionButton*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D6520))(this, toCompare);
  }

  // Static methods:
  static inline System_String* GetDisplayNameLocId(int32_t affType) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1709470))(affType);
  }
  static inline System_String* SpriteNameFromAfflictionType(int32_t affType) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17095B0))(affType);
  }
  static inline System_String* LocalizedNameFromAfflictionType(int32_t affType, int32_t index) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17096F0))(affType, index);
  }
  static inline System_String* GetDescriptionLocId(int32_t affType) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1709880))(affType);
  }
  static inline System_String* GetDisplayName(int32_t affType) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17099C0))(affType);
  }
  static inline bool IsBeneficial(int32_t affType) {
    return reinterpret_cast<bool(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1709BB0))(affType);
  }
  static inline bool IsRisk(int32_t affType) {
    return reinterpret_cast<bool(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1709C60))(affType);
  }
  static inline bool AfflictionTypeIsBuff(int32_t affType) {
    return reinterpret_cast<bool(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1709CC0))(affType);
  }
  static inline bool IsBadAffliction(int32_t affType) {
    return reinterpret_cast<bool(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1709CE0))(affType);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1709E00))();
  }

};
}