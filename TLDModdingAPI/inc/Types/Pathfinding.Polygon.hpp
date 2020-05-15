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
#include "ModdingAPI::Exposed::Pathfinding::Int3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"
#include "ModdingAPI::Exposed::Pathfinding::Int2.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector2.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Bounds.hpp"


namespace ModdingAPI::Exposed::Pathfinding {
struct __Polygon_Il2CppStaticFields {
};

struct __Polygon_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Polygon_Il2CppClass {
  Il2CppClass_1 _1;
  __Polygon_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Polygon_Il2CppVtbl vtbl;
};

class Polygon {
public:
  // Il2Cpp fields:
  __Polygon_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline int64_t TriangleArea2(ModdingAPI::Exposed::Pathfinding::Int3 a, ModdingAPI::Exposed::Pathfinding::Int3 b, ModdingAPI::Exposed::Pathfinding::Int3 c) {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2452680))(a, b, c);
  }
  static inline float TriangleArea2(ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b, ModdingAPI::Exposed::UnityEngine::Vector3 c) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2551810))(a, b, c);
  }
  static inline int64_t TriangleArea(ModdingAPI::Exposed::Pathfinding::Int3 a, ModdingAPI::Exposed::Pathfinding::Int3 b, ModdingAPI::Exposed::Pathfinding::Int3 c) {
    return reinterpret_cast<int64_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2452680))(a, b, c);
  }
  static inline float TriangleArea(ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b, ModdingAPI::Exposed::UnityEngine::Vector3 c) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2551810))(a, b, c);
  }
  static inline bool ContainsPoint(ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b, ModdingAPI::Exposed::UnityEngine::Vector3 c, ModdingAPI::Exposed::UnityEngine::Vector3 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2551870))(a, b, c, p);
  }
  static inline bool ContainsPointXZ(ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b, ModdingAPI::Exposed::UnityEngine::Vector3 c, ModdingAPI::Exposed::UnityEngine::Vector3 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2551870))(a, b, c, p);
  }
  static inline bool ContainsPoint(ModdingAPI::Exposed::Pathfinding::Int3 a, ModdingAPI::Exposed::Pathfinding::Int3 b, ModdingAPI::Exposed::Pathfinding::Int3 c, ModdingAPI::Exposed::Pathfinding::Int3 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2551980))(a, b, c, p);
  }
  static inline bool ContainsPointXZ(ModdingAPI::Exposed::Pathfinding::Int3 a, ModdingAPI::Exposed::Pathfinding::Int3 b, ModdingAPI::Exposed::Pathfinding::Int3 c, ModdingAPI::Exposed::Pathfinding::Int3 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2551AD0))(a, b, c, p);
  }
  static inline bool ContainsPoint(ModdingAPI::Exposed::Pathfinding::Int2 a, ModdingAPI::Exposed::Pathfinding::Int2 b, ModdingAPI::Exposed::Pathfinding::Int2 c, ModdingAPI::Exposed::Pathfinding::Int2 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int2, ModdingAPI::Exposed::Pathfinding::Int2, ModdingAPI::Exposed::Pathfinding::Int2, ModdingAPI::Exposed::Pathfinding::Int2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2551C20))(a, b, c, p);
  }
  static inline bool ContainsPoint(ModdingAPI::Exposed::UnityEngine::Vector3_array* polyPoints, ModdingAPI::Exposed::UnityEngine::Vector3 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2551CF0))(polyPoints, p);
  }
  static inline bool ContainsPoint(ModdingAPI::Exposed::UnityEngine::Vector2_array* polyPoints, ModdingAPI::Exposed::UnityEngine::Vector2 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2_array*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2551D20))(polyPoints, p);
  }
  static inline bool ContainsPointXZ(ModdingAPI::Exposed::UnityEngine::Vector3_array* polyPoints, ModdingAPI::Exposed::UnityEngine::Vector3 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2551EA0))(polyPoints, p);
  }
  static inline bool LeftNotColinear(ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b, ModdingAPI::Exposed::UnityEngine::Vector3 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552070))(a, b, p);
  }
  static inline bool Left(ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b, ModdingAPI::Exposed::UnityEngine::Vector3 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25520E0))(a, b, p);
  }
  static inline bool Left(ModdingAPI::Exposed::UnityEngine::Vector2 a, ModdingAPI::Exposed::UnityEngine::Vector2 b, ModdingAPI::Exposed::UnityEngine::Vector2 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552150))(a, b, p);
  }
  static inline bool Left(ModdingAPI::Exposed::Pathfinding::Int3 a, ModdingAPI::Exposed::Pathfinding::Int3 b, ModdingAPI::Exposed::Pathfinding::Int3 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24529D0))(a, b, p);
  }
  static inline bool LeftNotColinear(ModdingAPI::Exposed::Pathfinding::Int3 a, ModdingAPI::Exposed::Pathfinding::Int3 b, ModdingAPI::Exposed::Pathfinding::Int3 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2452810))(a, b, p);
  }
  static inline bool Left(ModdingAPI::Exposed::Pathfinding::Int2 a, ModdingAPI::Exposed::Pathfinding::Int2 b, ModdingAPI::Exposed::Pathfinding::Int2 p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int2, ModdingAPI::Exposed::Pathfinding::Int2, ModdingAPI::Exposed::Pathfinding::Int2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2452900))(a, b, p);
  }
  static inline bool IsClockwiseMargin(ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b, ModdingAPI::Exposed::UnityEngine::Vector3 c) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25521B0))(a, b, c);
  }
  static inline bool IsClockwise(ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b, ModdingAPI::Exposed::UnityEngine::Vector3 c) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552220))(a, b, c);
  }
  static inline bool IsClockwise(ModdingAPI::Exposed::Pathfinding::Int3 a, ModdingAPI::Exposed::Pathfinding::Int3 b, ModdingAPI::Exposed::Pathfinding::Int3 c) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2452810))(a, b, c);
  }
  static inline bool IsClockwiseMargin(ModdingAPI::Exposed::Pathfinding::Int3 a, ModdingAPI::Exposed::Pathfinding::Int3 b, ModdingAPI::Exposed::Pathfinding::Int3 c) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24529D0))(a, b, c);
  }
  static inline bool IsClockwiseMargin(ModdingAPI::Exposed::Pathfinding::Int2 a, ModdingAPI::Exposed::Pathfinding::Int2 b, ModdingAPI::Exposed::Pathfinding::Int2 c) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int2, ModdingAPI::Exposed::Pathfinding::Int2, ModdingAPI::Exposed::Pathfinding::Int2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2452900))(a, b, c);
  }
  static inline bool IsColinear(ModdingAPI::Exposed::Pathfinding::Int3 a, ModdingAPI::Exposed::Pathfinding::Int3 b, ModdingAPI::Exposed::Pathfinding::Int3 c) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2452B80))(a, b, c);
  }
  static inline bool IsColinearAlmost(ModdingAPI::Exposed::Pathfinding::Int3 a, ModdingAPI::Exposed::Pathfinding::Int3 b, ModdingAPI::Exposed::Pathfinding::Int3 c) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2452CB0))(a, b, c);
  }
  static inline bool IsColinear(ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b, ModdingAPI::Exposed::UnityEngine::Vector3 c) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552290))(a, b, c);
  }
  static inline bool IntersectsUnclamped(ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b, ModdingAPI::Exposed::UnityEngine::Vector3 a2, ModdingAPI::Exposed::UnityEngine::Vector3 b2) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552310))(a, b, a2, b2);
  }
  static inline bool Intersects(ModdingAPI::Exposed::Pathfinding::Int2 start1, ModdingAPI::Exposed::Pathfinding::Int2 end1, ModdingAPI::Exposed::Pathfinding::Int2 start2, ModdingAPI::Exposed::Pathfinding::Int2 end2) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int2, ModdingAPI::Exposed::Pathfinding::Int2, ModdingAPI::Exposed::Pathfinding::Int2, ModdingAPI::Exposed::Pathfinding::Int2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25523E0))(start1, end1, start2, end2);
  }
  static inline bool Intersects(ModdingAPI::Exposed::Pathfinding::Int3 start1, ModdingAPI::Exposed::Pathfinding::Int3 end1, ModdingAPI::Exposed::Pathfinding::Int3 start2, ModdingAPI::Exposed::Pathfinding::Int3 end2) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25524E0))(start1, end1, start2, end2);
  }
  static inline bool Intersects(ModdingAPI::Exposed::UnityEngine::Vector3 start1, ModdingAPI::Exposed::UnityEngine::Vector3 end1, ModdingAPI::Exposed::UnityEngine::Vector3 start2, ModdingAPI::Exposed::UnityEngine::Vector3 end2) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552560))(start1, end1, start2, end2);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 IntersectionPointOptimized(ModdingAPI::Exposed::UnityEngine::Vector3 start1, ModdingAPI::Exposed::UnityEngine::Vector3 dir1, ModdingAPI::Exposed::UnityEngine::Vector3 start2, ModdingAPI::Exposed::UnityEngine::Vector3 dir2) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25525E0))(start1, dir1, start2, dir2);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 IntersectionPointOptimized(ModdingAPI::Exposed::UnityEngine::Vector3 start1, ModdingAPI::Exposed::UnityEngine::Vector3 dir1, ModdingAPI::Exposed::UnityEngine::Vector3 start2, ModdingAPI::Exposed::UnityEngine::Vector3 dir2, bool intersects) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25527A0))(start1, dir1, start2, dir2, intersects);
  }
  static inline bool IntersectionFactorRaySegment(ModdingAPI::Exposed::Pathfinding::Int3 start1, ModdingAPI::Exposed::Pathfinding::Int3 end1, ModdingAPI::Exposed::Pathfinding::Int3 start2, ModdingAPI::Exposed::Pathfinding::Int3 end2) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552850))(start1, end1, start2, end2);
  }
  static inline bool IntersectionFactor(ModdingAPI::Exposed::Pathfinding::Int3 start1, ModdingAPI::Exposed::Pathfinding::Int3 end1, ModdingAPI::Exposed::Pathfinding::Int3 start2, ModdingAPI::Exposed::Pathfinding::Int3 end2, float factor1, float factor2) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24537C0))(start1, end1, start2, end2, factor1, factor2);
  }
  static inline bool IntersectionFactor(ModdingAPI::Exposed::UnityEngine::Vector3 start1, ModdingAPI::Exposed::UnityEngine::Vector3 end1, ModdingAPI::Exposed::UnityEngine::Vector3 start2, ModdingAPI::Exposed::UnityEngine::Vector3 end2, float factor1, float factor2) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552A20))(start1, end1, start2, end2, factor1, factor2);
  }
  static inline float IntersectionFactorRay(ModdingAPI::Exposed::Pathfinding::Int3 start1, ModdingAPI::Exposed::Pathfinding::Int3 end1, ModdingAPI::Exposed::Pathfinding::Int3 start2, ModdingAPI::Exposed::Pathfinding::Int3 end2) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552AB0))(start1, end1, start2, end2);
  }
  static inline float IntersectionFactor(ModdingAPI::Exposed::UnityEngine::Vector3 start1, ModdingAPI::Exposed::UnityEngine::Vector3 end1, ModdingAPI::Exposed::UnityEngine::Vector3 start2, ModdingAPI::Exposed::UnityEngine::Vector3 end2) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552C80))(start1, end1, start2, end2);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 IntersectionPoint(ModdingAPI::Exposed::UnityEngine::Vector3 start1, ModdingAPI::Exposed::UnityEngine::Vector3 end1, ModdingAPI::Exposed::UnityEngine::Vector3 start2, ModdingAPI::Exposed::UnityEngine::Vector3 end2) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2453EF0))(start1, end1, start2, end2);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 IntersectionPoint(ModdingAPI::Exposed::UnityEngine::Vector3 start1, ModdingAPI::Exposed::UnityEngine::Vector3 end1, ModdingAPI::Exposed::UnityEngine::Vector3 start2, ModdingAPI::Exposed::UnityEngine::Vector3 end2, bool intersects) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552E00))(start1, end1, start2, end2, intersects);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector2 IntersectionPoint(ModdingAPI::Exposed::UnityEngine::Vector2 start1, ModdingAPI::Exposed::UnityEngine::Vector2 end1, ModdingAPI::Exposed::UnityEngine::Vector2 start2, ModdingAPI::Exposed::UnityEngine::Vector2 end2) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24541D0))(start1, end1, start2, end2);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector2 IntersectionPoint(ModdingAPI::Exposed::UnityEngine::Vector2 start1, ModdingAPI::Exposed::UnityEngine::Vector2 end1, ModdingAPI::Exposed::UnityEngine::Vector2 start2, ModdingAPI::Exposed::UnityEngine::Vector2 end2, bool intersects) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552EB0))(start1, end1, start2, end2, intersects);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 SegmentIntersectionPoint(ModdingAPI::Exposed::UnityEngine::Vector3 start1, ModdingAPI::Exposed::UnityEngine::Vector3 end1, ModdingAPI::Exposed::UnityEngine::Vector3 start2, ModdingAPI::Exposed::UnityEngine::Vector3 end2, bool intersects) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552EC0))(start1, end1, start2, end2, intersects);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* ConvexHull(ModdingAPI::Exposed::UnityEngine::Vector3_array* points) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552F70))(points);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* ConvexHullXZ(ModdingAPI::Exposed::UnityEngine::Vector3_array* points) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2552F80))(points);
  }
  static inline bool LineIntersectsBounds(ModdingAPI::Exposed::UnityEngine::Bounds bounds, ModdingAPI::Exposed::UnityEngine::Vector3 a, ModdingAPI::Exposed::UnityEngine::Vector3 b) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2553390))(bounds, a, b);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* Subdivide(ModdingAPI::Exposed::UnityEngine::Vector3_array* path, int32_t subdivisions) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25533F0))(path, subdivisions);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 ClosestPointOnTriangle(ModdingAPI::Exposed::UnityEngine::Vector3_array* triangle, ModdingAPI::Exposed::UnityEngine::Vector3 point) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2553760))(triangle, point);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 ClosestPointOnTriangle(ModdingAPI::Exposed::UnityEngine::Vector3 tr0, ModdingAPI::Exposed::UnityEngine::Vector3 tr1, ModdingAPI::Exposed::UnityEngine::Vector3 tr2, ModdingAPI::Exposed::UnityEngine::Vector3 point) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2553860))(tr0, tr1, tr2, point);
  }
  static inline float DistanceSegmentSegment3D(ModdingAPI::Exposed::UnityEngine::Vector3 s1, ModdingAPI::Exposed::UnityEngine::Vector3 e1, ModdingAPI::Exposed::UnityEngine::Vector3 s2, ModdingAPI::Exposed::UnityEngine::Vector3 e2) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2553DA0))(s1, e1, s2, e2);
  }
};
}