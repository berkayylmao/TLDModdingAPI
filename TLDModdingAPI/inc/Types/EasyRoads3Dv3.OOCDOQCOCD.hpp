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
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector2.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed::EasyRoads3Dv3 {
struct __OOCDOQCOCD_Il2CppStaticFields {
};

struct __OOCDOQCOCD_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __OOCDOQCOCD_Il2CppClass {
  Il2CppClass_1 _1;
  __OOCDOQCOCD_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __OOCDOQCOCD_Il2CppVtbl vtbl;
};

class OOCDOQCOCD {
public:
  // Il2Cpp fields:
  __OOCDOQCOCD_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::EasyRoads3Dv3::OOCDOQCOCD*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static methods:
  static inline void OQCOCOQQCO(ModdingAPI::Exposed::System::Collections::Generic::List_T_* connections, ModdingAPI::Exposed::System::Collections::Generic::List_T_* mainLeftPoints, ModdingAPI::Exposed::System::Collections::Generic::List_T_* meshVecs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* meshUVs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* fullTris) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1139670))(connections, mainLeftPoints, meshVecs, meshUVs, fullTris);
  }
  static inline void OCODDQQQQC(ModdingAPI::Exposed::System::Collections::Generic::List_T_* connections, ModdingAPI::Exposed::System::Collections::Generic::List_T_* meshVecs, int32_t vecCount, ModdingAPI::Exposed::System::Collections::Generic::List_T_* connectionVecs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* connectionUVs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* connectionTris, ModdingAPI::Exposed::System::Collections::Generic::List_T_* triList, ModdingAPI::Exposed::System::Collections::Generic::List_T_* materialList) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x113B370))(connections, meshVecs, vecCount, connectionVecs, connectionUVs, connectionTris, triList, materialList);
  }
  static inline void OQDQDQOQDO(ModdingAPI::Exposed::System::Collections::Generic::List_T_* meshVecs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* connectionVecInts, ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShapeVecs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* roadShapeUVY) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x113CF00))(meshVecs, connectionVecInts, roadShapeVecs, roadShapeUVY);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector2 SetUV(ModdingAPI::Exposed::UnityEngine::Vector3 p1, ModdingAPI::Exposed::UnityEngine::Vector3 p2, ModdingAPI::Exposed::UnityEngine::Vector3 p3, ModdingAPI::Exposed::UnityEngine::Vector2 uv1, ModdingAPI::Exposed::UnityEngine::Vector2 uv2) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x113D6D0))(p1, p2, p3, uv1, uv2);
  }
  static inline bool OCCOQDODDD(int32_t nvert, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vert, float testx, float testy) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x113D840))(nvert, vert, testx, testy);
  }
  static inline bool ODOCQDODCO(int32_t nvert, ModdingAPI::Exposed::System::Collections::Generic::List_T_* vertx, ModdingAPI::Exposed::System::Collections::Generic::List_T_* verty, float testx, float testy) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x113DA50))(nvert, vertx, verty, testx, testy);
  }
  static inline bool ODOOQODCOO(ModdingAPI::Exposed::System::Collections::Generic::List_T_* vecs, ModdingAPI::Exposed::System::Collections::Generic::List_T_* edges, int32_t p1, int32_t p2, int32_t p3) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x113DC00))(vecs, edges, p1, p2, p3);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 OQQQDCODQD(ModdingAPI::Exposed::UnityEngine::Vector3 vA, ModdingAPI::Exposed::UnityEngine::Vector3 vB, ModdingAPI::Exposed::UnityEngine::Vector3 vPoint) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x113E2C0))(vA, vB, vPoint);
  }
};
}