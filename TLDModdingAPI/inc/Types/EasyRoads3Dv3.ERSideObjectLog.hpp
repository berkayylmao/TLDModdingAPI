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
struct __ERSideObjectLog_Il2CppStaticFields {
};

struct __ERSideObjectLog_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ERSideObjectLog_Il2CppClass {
  Il2CppClass_1 _1;
  __ERSideObjectLog_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ERSideObjectLog_Il2CppVtbl vtbl;
};

class ERSideObjectLog {
public:
  // Il2Cpp fields:
  __ERSideObjectLog_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* QOQDQOOQDDQOOQ;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* ints;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadPresets;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* crossingCornerPresets;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* sidewalkPresets;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* textureData;
  int32_t updateInt;

  // Member methods:
  void AddRoadPreset(ModdingAPI::Exposed::System::Collections::Generic::List_T_* sceneSideObjects, ModdingAPI::Exposed::System::Collections::Generic::List_T_* projectSideObjects, ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD* sourcePreset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERSideObjectLog*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x704730))(this, sceneSideObjects, projectSideObjects, sourcePreset);
  }
  void UpdateRoadPreset(ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD* sourcePreset, int32_t element, ModdingAPI::Exposed::System::Collections::Generic::List_T_* sceneSideObjects, ModdingAPI::Exposed::System::Collections::Generic::List_T_* projectSideObjects) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERSideObjectLog*, ModdingAPI::Exposed::EasyRoads3Dv3::QDQDOOQQDQODD*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7048F0))(this, sourcePreset, element, sceneSideObjects, projectSideObjects);
  }
  void UpdateTextureList(int32_t element, ModdingAPI::Exposed::UnityEngine::Texture2D* _texture, float _roadWidth, float _leftOffset, float _rightOffset, float _leftInnerOffset, float _rightInnerOffset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERSideObjectLog*, int32_t, ModdingAPI::Exposed::UnityEngine::Texture2D*, float, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x705C10))(this, element, _texture, _roadWidth, _leftOffset, _rightOffset, _leftInnerOffset, _rightInnerOffset);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::ERSideObjectLog*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x705E40))(this);
  }
};
}