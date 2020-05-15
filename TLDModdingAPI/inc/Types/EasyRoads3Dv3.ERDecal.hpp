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


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __ERDecal_Il2CppStaticFields {
};

struct __ERDecal_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ERDecal_Il2CppClass {
  Il2CppClass_1 _1;
  __ERDecal_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ERDecal_Il2CppVtbl vtbl;
};

class ERDecal {
public:
  // Il2Cpp fields:
  __ERDecal_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t id;
  System_String* name;
  double roadType1;
  double roadType2;
  int32_t connection;
  ModdingAPI::Exposed::UnityEngine::GameObject* decalPrefab;
  float baseWidth;
  float meshWidth;
  float scale;
  ModdingAPI::Exposed::UnityEngine::Vector3 localScale;
  int32_t priority;
  bool collapsed;
  float heightOffset;

  // Member methods:
  void Init(ModdingAPI::Exposed::UnityEngine::GameObject* prefab, float baseWidth) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERDecal*, ModdingAPI::Exposed::UnityEngine::GameObject*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4C6640))(this, prefab, baseWidth);
  }
  void ODCDDQCCOC() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERDecal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4C6860))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERDecal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4C7470))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::EasyRoads3Dv3::ERDecal* CreateInstance(ModdingAPI::Exposed::UnityEngine::GameObject* prefab, float baseWidth) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERDecal*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4C66D0))(prefab, baseWidth);
  }
  static inline void CopyDecal(ModdingAPI::Exposed::EasyRoads3Dv3::ERDecalClass* source, ModdingAPI::Exposed::EasyRoads3Dv3::ERDecal* target) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERDecalClass*, ModdingAPI::Exposed::EasyRoads3Dv3::ERDecal*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4C67E0))(source, target);
  }
  static inline ModdingAPI::Exposed::EasyRoads3Dv3::ERDecal* OCOQQQDOOQ(int32_t id, ModdingAPI::Exposed::System::Collections::Generic::List_T_* decalPresets) {
    return reinterpret_cast<ModdingAPI::Exposed::EasyRoads3Dv3::ERDecal*(__fastcall*)(int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4C6AF0))(id, decalPresets);
  }
  static inline ModdingAPI::Exposed::System::String_array* OCDODDDCCD(ModdingAPI::Exposed::System::Collections::Generic::List_T_* decals, System_String* firstItem, int32_t id1, int32_t id2, int32_t _index1, int32_t _index2) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, System_String*, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4C6CC0))(decals, firstItem, id1, id2, _index1, _index2);
  }
  static inline ModdingAPI::Exposed::UnityEngine::GameObject_array* OCDOODQOQD(ModdingAPI::Exposed::System::Collections::Generic::List_T_* decals, ModdingAPI::Exposed::System::Collections::Generic::List_T_* priority, ModdingAPI::Exposed::System::Collections::Generic::List_T_* scale) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject_array*(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4C7090))(decals, priority, scale);
  }
};
}