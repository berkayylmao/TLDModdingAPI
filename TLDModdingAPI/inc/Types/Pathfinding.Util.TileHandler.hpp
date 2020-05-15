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
#include "ModdingAPI.Exposed.Pathfinding.Int2.hpp"
#include "ModdingAPI.Exposed.Pathfinding.Int3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Bounds.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.Pathfinding.ClipperLib.IntPoint.hpp"


namespace ModdingAPI::Exposed::Pathfinding::Util {
struct __TileHandler_Il2CppStaticFields {
};

struct __TileHandler_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TileHandler_Il2CppClass {
  Il2CppClass_1 _1;
  __TileHandler_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TileHandler_Il2CppVtbl vtbl;
};

class TileHandler {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C518F8;
  static inline    __TileHandler_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TileHandler_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TileHandler_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TileHandler_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Pathfinding::RecastGraph* _graph;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* tileTypes;
  ModdingAPI::Exposed::Pathfinding::ClipperLib::Clipper* clipper;
  ModdingAPI::Exposed::System::Int32_array* cached_int_array;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* cached_Int3_int_dict;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* cached_Int2_int_dict;
  ModdingAPI::Exposed::Pathfinding::Util::TileHandler::TileType_array* activeTileTypes;
  ModdingAPI::Exposed::System::Int32_array* activeTileRotations;
  ModdingAPI::Exposed::System::Int32_array* activeTileOffsets;
  ModdingAPI::Exposed::System::Boolean_array* reloadedInBatch;
  bool isBatching;

  // Member methods:
  ModdingAPI::Exposed::Pathfinding::RecastGraph* get_graph() {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::RecastGraph*(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void ::ctor(ModdingAPI::Exposed::Pathfinding::RecastGraph* graph) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, ModdingAPI::Exposed::Pathfinding::RecastGraph*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2447960))(this, graph);
  }
  int32_t GetActiveRotation(ModdingAPI::Exposed::Pathfinding::Int2 p) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, ModdingAPI::Exposed::Pathfinding::Int2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2447DB0))(this, p);
  }
  ModdingAPI::Exposed::Pathfinding::Util::TileHandler::TileType* GetTileType(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::Util::TileHandler::TileType*(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2447E10))(this, index);
  }
  int32_t GetTileTypeCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2447EC0))(this);
  }
  ModdingAPI::Exposed::Pathfinding::Util::TileHandler::TileType* RegisterTileType(ModdingAPI::Exposed::UnityEngine::Mesh* source, ModdingAPI::Exposed::Pathfinding::Int3 centerOffset, int32_t width, int32_t depth) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::Util::TileHandler::TileType*(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, ModdingAPI::Exposed::UnityEngine::Mesh*, ModdingAPI::Exposed::Pathfinding::Int3, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2447F50))(this, source, centerOffset, width, depth);
  }
  void CreateTileTypesFromGraph() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2448250))(this);
  }
  bool StartBatchLoad() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24487B0))(this);
  }
  void EndBatchLoad() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2448A30))(this);
  }
  void CutPoly(ModdingAPI::Exposed::Pathfinding::Int3_array* verts, ModdingAPI::Exposed::System::Int32_array* tris, ModdingAPI::Exposed::Pathfinding::Int3_array* outVertsArr, ModdingAPI::Exposed::System::Int32_array* outTrisArr, int32_t outVCount, int32_t outTCount, ModdingAPI::Exposed::Pathfinding::Int3_array* extraShape, ModdingAPI::Exposed::Pathfinding::Int3 cuttingOffset, ModdingAPI::Exposed::UnityEngine::Bounds realBounds, int32_t mode, int32_t perturbate) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, ModdingAPI::Exposed::Pathfinding::Int3_array*, ModdingAPI::Exposed::System::Int32_array*, ModdingAPI::Exposed::Pathfinding::Int3_array*, ModdingAPI::Exposed::System::Int32_array*, int32_t, int32_t, ModdingAPI::Exposed::Pathfinding::Int3_array*, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::UnityEngine::Bounds, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2448DE0))(this, verts, tris, outVertsArr, outTrisArr, outVCount, outTCount, extraShape, cuttingOffset, realBounds, mode, perturbate);
  }
  void DelaunayRefinement(ModdingAPI::Exposed::Pathfinding::Int3_array* verts, ModdingAPI::Exposed::System::Int32_array* tris, int32_t vCount, int32_t tCount, bool delaunay, bool colinear, ModdingAPI::Exposed::Pathfinding::Int3 worldOffset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, ModdingAPI::Exposed::Pathfinding::Int3_array*, ModdingAPI::Exposed::System::Int32_array*, int32_t, int32_t, bool, bool, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x244D730))(this, verts, tris, vCount, tCount, delaunay, colinear, worldOffset);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 Point2D2V3(ModdingAPI::Exposed::Pathfinding::Poly2Tri::TriangulationPoint* p) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, ModdingAPI::Exposed::Pathfinding::Poly2Tri::TriangulationPoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x244E890))(this, p);
  }
  ModdingAPI::Exposed::Pathfinding::Int3 IntPoint2Int3(ModdingAPI::Exposed::Pathfinding::ClipperLib::IntPoint p) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::Int3(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, ModdingAPI::Exposed::Pathfinding::ClipperLib::IntPoint)>(Helpers::Memory::GetInstance().MakeAbsolute(0x244E990))(this, p);
  }
  void ClearTile(int32_t x, int32_t z) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x244E9B0))(this, x, z);
  }
  void ReloadInBounds(ModdingAPI::Exposed::UnityEngine::Bounds b) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x244EDB0))(this, b);
  }
  void ReloadTile(int32_t x, int32_t z) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x244F040))(this, x, z);
  }
  void CutShapeWithTile(int32_t x, int32_t z, ModdingAPI::Exposed::Pathfinding::Int3_array* shape, ModdingAPI::Exposed::Pathfinding::Int3_array* verts, ModdingAPI::Exposed::System::Int32_array* tris, int32_t vCount, int32_t tCount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, int32_t, int32_t, ModdingAPI::Exposed::Pathfinding::Int3_array*, ModdingAPI::Exposed::Pathfinding::Int3_array*, ModdingAPI::Exposed::System::Int32_array*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x244F180))(this, x, z, shape, verts, tris, vCount, tCount);
  }
  void LoadTile(ModdingAPI::Exposed::Pathfinding::Util::TileHandler::TileType* tile, int32_t x, int32_t z, int32_t rotation, int32_t yoffset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, ModdingAPI::Exposed::Pathfinding::Util::TileHandler::TileType*, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x244F600))(this, tile, x, z, rotation, yoffset);
  }
  bool _StartBatchLoad_b__20_0(bool force) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x244FC50))(this, force);
  }
  bool _EndBatchLoad_b__21_0(bool force) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Util::TileHandler*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x244FD20))(this, force);
  }
};
}