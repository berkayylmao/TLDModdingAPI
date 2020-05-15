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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"

namespace ModdingAPI::Exposed {
struct __SnowImprint_Il2CppObject {
  uint8_t m_P0;
  uint8_t m_P1;
  uint8_t m_P2;
  uint8_t m_P3;
  uint8_t m_P4;
  uint8_t m_P5;
  uint8_t m_P6;
  uint8_t m_P7;
  uint8_t m_P8;
  char m_N0D;
  char m_N1D;
  char m_N2D;
  uint32_t m_MiscInfo;
};
struct __SnowImprint_Il2CppStaticFields {
};

struct __SnowImprint_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __SnowImprint_Il2CppClass {
  Il2CppClass_1 _1;
  __SnowImprint_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __SnowImprint_Il2CppVtbl vtbl;
};

class SnowImprint {
  static constexpr uint64_t _rvaClassInstance     = 0x3C20190;
  static inline    __SnowImprint_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Static class getter:
  static inline __SnowImprint_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__SnowImprint_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  uint8_t m_P0;
  uint8_t m_P1;
  uint8_t m_P2;
  uint8_t m_P3;
  uint8_t m_P4;
  uint8_t m_P5;
  uint8_t m_P6;
  uint8_t m_P7;
  uint8_t m_P8;
  char m_N0D;
  char m_N1D;
  char m_N2D;
  uint32_t m_MiscInfo;

  // Member methods:
  void ::ctor(int32_t type, ModdingAPI::Exposed::UnityEngine::Vector3 pos, ModdingAPI::Exposed::UnityEngine::Vector3 normal, float yRotation, float depth, bool flip, int32_t variant) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, float, float, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DE930))(this, type, pos, normal, yRotation, depth, flip, variant);
  }
  void ::ctor(ModdingAPI::Exposed::System::Collections::Generic::List_T_* serializedList, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DE9B0))(this, serializedList, index);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_Position() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::SnowImprint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DE9C0))(this);
  }
  void set_Position(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DE9F0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_Normal() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::SnowImprint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEA70))(this);
  }
  void set_Normal(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEAE0))(this, value);
  }
  float get_Depth() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::SnowImprint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEB40))(this);
  }
  void set_Depth(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEB70))(this, value);
  }
  float get_InitialSnowDepth() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::SnowImprint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEBB0))(this);
  }
  void set_InitialSnowDepth(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEBF0))(this, value);
  }
  float get_Angle() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::SnowImprint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEC00))(this);
  }
  void set_Angle(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEC20))(this, value);
  }
  int32_t get_Type() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::SnowImprint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEC30))(this);
  }
  void set_Type(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEC40))(this, value);
  }
  int32_t get_VariantIndex() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::SnowImprint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEC50))(this);
  }
  void set_VariantIndex(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEC60))(this, value);
  }
  bool get_Flip() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::SnowImprint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEC80))(this);
  }
  void set_Flip(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DEC90))(this, value);
  }
  bool get_HasHeightMap() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::SnowImprint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DECB0))(this);
  }
  void set_HasHeightMap(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DECC0))(this, value);
  }
  bool get_HasBumpDecal() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::SnowImprint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DECE0))(this);
  }
  void set_HasBumpDecal(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DECF0))(this, value);
  }
  float FloatFromBytes(uint8_t b0, uint8_t b1, uint8_t b2) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, uint8_t, uint8_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DED10))(this, b0, b1, b2);
  }
  void FloatToBytes(float f, uint8_t b0, uint8_t b1, uint8_t b2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, float, uint8_t, uint8_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DED50))(this, f, b0, b1, b2);
  }
  void AddForSerialize(ModdingAPI::Exposed::System::Collections::Generic::List_T_* list) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::SnowImprint*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DED60))(this, list);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::SnowImprint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DED70))(this);
  }

};
}