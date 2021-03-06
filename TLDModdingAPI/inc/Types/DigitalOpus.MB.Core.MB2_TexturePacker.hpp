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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI.Exposed.DigitalOpus.MB.Core.AtlasPadding.hpp"


namespace ModdingAPI::Exposed::DigitalOpus::MB::Core {
struct __MB2_TexturePacker_Il2CppStaticFields {
};

struct __MB2_TexturePacker_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _65535__ctor;
};

struct __MB2_TexturePacker_Il2CppClass {
  Il2CppClass_1 _1;
  __MB2_TexturePacker_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MB2_TexturePacker_Il2CppVtbl vtbl;
};

class MB2_TexturePacker {
public:
  // Il2Cpp fields:
  __MB2_TexturePacker_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t LOG_LEVEL;
  bool atlasMustBePowerOfTwo;

  // Member methods:
  bool ScaleAtlasToFitMaxDim(ModdingAPI::Exposed::UnityEngine::Vector2 rootWH, ModdingAPI::Exposed::System::Collections::Generic::List_T_* images, int32_t maxDimensionX, int32_t maxDimensionY, ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPadding padding, int32_t minImageSizeX, int32_t minImageSizeY, int32_t masterImageSizeX, int32_t masterImageSizeY, int32_t outW, int32_t outH, float padX, float padY, int32_t newMinSizeX, int32_t newMinSizeY) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePacker*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, int32_t, ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPadding, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float, float, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F5C6C0))(this, rootWH, images, maxDimensionX, maxDimensionY, padding, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY, outW, outH, padX, padY, newMinSizeX, newMinSizeY);
  }
  void normalizeRects(ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult* rr, ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPadding padding) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePacker*, ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPackingResult*, ModdingAPI::Exposed::DigitalOpus::MB::Core::AtlasPadding)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F5CB80))(this, rr, padding);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB2_TexturePacker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F5CD30))(this);
  }

  // Static methods:
  static inline int32_t RoundToNearestPositivePowerOfTwo(int32_t x) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F5C4E0))(x);
  }
  static inline int32_t CeilToNearestPowerOfTwo(int32_t x) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F5C5D0))(x);
  }
};
}