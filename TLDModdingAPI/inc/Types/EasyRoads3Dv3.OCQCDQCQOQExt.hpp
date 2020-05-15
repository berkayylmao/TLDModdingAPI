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


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __OCQCDQCQOQExt_Il2CppStaticFields {
};

struct __OCQCDQCQOQExt_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __OCQCDQCQOQExt_Il2CppClass {
  Il2CppClass_1 _1;
  __OCQCDQCQOQExt_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __OCQCDQCQOQExt_Il2CppVtbl vtbl;
};

class OCQCDQCQOQExt {
public:
  // Il2Cpp fields:
  __OCQCDQCQOQExt_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::OCQCDQCQOQExt*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static methods:
  static inline void ODDDQODDQQ(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase* scr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x399980))(scr);
  }
  static inline ModdingAPI::Exposed::System::String_array* GetMatchingPrefabs(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* scr, ModdingAPI::Exposed::System::String_array* prefabs, ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs_array* prefs, int32_t type) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, ModdingAPI::Exposed::System::String_array*, ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x39A660))(scr, prefabs, prefs, type);
  }
  static inline bool OQCDDODDDC(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* road, bool left, bool right) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x39AE30))(road, left, right);
  }
  static inline bool OCDQQOQOQO(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* prefab, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* road, int32_t marker, int32_t connection) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x39B0F0))(prefab, road, marker, connection);
  }
  static inline bool OODCDQQDDC(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs* prefab, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad* road, int32_t marker, int32_t connection) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERCrossingPrefabs*, ModdingAPI::Exposed::EasyRoads3Dv3::ERModularRoad*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x39B730))(prefab, road, marker, connection);
  }
};
}