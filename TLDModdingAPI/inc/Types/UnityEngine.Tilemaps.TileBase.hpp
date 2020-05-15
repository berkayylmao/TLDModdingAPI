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
#include "ModdingAPI.Exposed.UnityEngine.Vector3Int.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Tilemaps.TileData.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Tilemaps.TileAnimationData.hpp"


namespace ModdingAPI::Exposed::UnityEngine::Tilemaps {
struct __TileBase_Il2CppStaticFields {
};

struct __TileBase_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_RefreshTile;
  VirtualInvokeData _5_GetTileData;
  VirtualInvokeData _6_GetTileAnimationData;
  VirtualInvokeData _7_StartUp;
};

struct __TileBase_Il2CppClass {
  Il2CppClass_1 _1;
  __TileBase_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TileBase_Il2CppVtbl vtbl;
};

class TileBase {
public:
  // Il2Cpp fields:
  __TileBase_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Tilemaps::TileBase*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E050))(this);
  }
  void RefreshTile(ModdingAPI::Exposed::UnityEngine::Vector3Int position, ModdingAPI::Exposed::UnityEngine::Tilemaps::ITilemap* tilemap) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Tilemaps::TileBase*, ModdingAPI::Exposed::UnityEngine::Vector3Int, ModdingAPI::Exposed::UnityEngine::Tilemaps::ITilemap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x158FC50))(this, position, tilemap);
  }
  void GetTileData(ModdingAPI::Exposed::UnityEngine::Vector3Int position, ModdingAPI::Exposed::UnityEngine::Tilemaps::ITilemap* tilemap, ModdingAPI::Exposed::UnityEngine::Tilemaps::TileData tileData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Tilemaps::TileBase*, ModdingAPI::Exposed::UnityEngine::Vector3Int, ModdingAPI::Exposed::UnityEngine::Tilemaps::ITilemap*, ModdingAPI::Exposed::UnityEngine::Tilemaps::TileData)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, position, tilemap, tileData);
  }
  ModdingAPI::Exposed::UnityEngine::Tilemaps::TileData GetTileDataNoRef(ModdingAPI::Exposed::UnityEngine::Vector3Int position, ModdingAPI::Exposed::UnityEngine::Tilemaps::ITilemap* tilemap) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Tilemaps::TileData(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Tilemaps::TileBase*, ModdingAPI::Exposed::UnityEngine::Vector3Int, ModdingAPI::Exposed::UnityEngine::Tilemaps::ITilemap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x158FCE0))(this, position, tilemap);
  }
  bool GetTileAnimationData(ModdingAPI::Exposed::UnityEngine::Vector3Int position, ModdingAPI::Exposed::UnityEngine::Tilemaps::ITilemap* tilemap, ModdingAPI::Exposed::UnityEngine::Tilemaps::TileAnimationData tileAnimationData) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Tilemaps::TileBase*, ModdingAPI::Exposed::UnityEngine::Vector3Int, ModdingAPI::Exposed::UnityEngine::Tilemaps::ITilemap*, ModdingAPI::Exposed::UnityEngine::Tilemaps::TileAnimationData)>(Helpers::Memory::GetInstance().MakeAbsolute(0x67FC90))(this, position, tilemap, tileAnimationData);
  }
  ModdingAPI::Exposed::UnityEngine::Tilemaps::TileAnimationData GetTileAnimationDataNoRef(ModdingAPI::Exposed::UnityEngine::Vector3Int position, ModdingAPI::Exposed::UnityEngine::Tilemaps::ITilemap* tilemap) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Tilemaps::TileAnimationData(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Tilemaps::TileBase*, ModdingAPI::Exposed::UnityEngine::Vector3Int, ModdingAPI::Exposed::UnityEngine::Tilemaps::ITilemap*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x158FDB0))(this, position, tilemap);
  }
  bool StartUp(ModdingAPI::Exposed::UnityEngine::Vector3Int position, ModdingAPI::Exposed::UnityEngine::Tilemaps::ITilemap* tilemap, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Tilemaps::TileBase*, ModdingAPI::Exposed::UnityEngine::Vector3Int, ModdingAPI::Exposed::UnityEngine::Tilemaps::ITilemap*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x67FC90))(this, position, tilemap, go);
  }
};
}