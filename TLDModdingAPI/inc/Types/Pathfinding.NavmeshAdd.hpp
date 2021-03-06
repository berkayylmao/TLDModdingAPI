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
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Bounds.hpp"
#include "ModdingAPI.Exposed.Pathfinding.Int3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Bounds.hpp"


namespace ModdingAPI::Exposed::Pathfinding {
struct __NavmeshAdd_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* allCuts;
  ModdingAPI::Exposed::UnityEngine::Color GizmoColor;
};

struct __NavmeshAdd_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __NavmeshAdd_Il2CppClass {
  Il2CppClass_1 _1;
  __NavmeshAdd_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NavmeshAdd_Il2CppVtbl vtbl;
};

class NavmeshAdd {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3C4D0;
  static inline    __NavmeshAdd_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __NavmeshAdd_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__NavmeshAdd_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __NavmeshAdd_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t type;
  ModdingAPI::Exposed::UnityEngine::Mesh* mesh;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* verts;
  ModdingAPI::Exposed::System::Int32_array* tris;
  ModdingAPI::Exposed::UnityEngine::Vector2 rectangleSize;
  float meshScale;
  ModdingAPI::Exposed::UnityEngine::Vector3 center;
  ModdingAPI::Exposed::UnityEngine::Bounds bounds;
  bool useRotation;
  ModdingAPI::Exposed::UnityEngine::Transform* tr;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavmeshAdd*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D4C70))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavmeshAdd*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D4DC0))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavmeshAdd*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D4E20))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_Center() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavmeshAdd*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D4F70))(this);
  }
  void RebuildMesh() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavmeshAdd*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D5160))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Bounds GetBounds() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Bounds(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavmeshAdd*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D5590))(this);
  }
  void GetMesh(ModdingAPI::Exposed::Pathfinding::Int3 offset, ModdingAPI::Exposed::Pathfinding::Int3_array* vbuffer, ModdingAPI::Exposed::System::Int32_array* tbuffer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavmeshAdd*, ModdingAPI::Exposed::Pathfinding::Int3, ModdingAPI::Exposed::Pathfinding::Int3_array*, ModdingAPI::Exposed::System::Int32_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D6710))(this, offset, vbuffer, tbuffer);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavmeshAdd*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D7020))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> allCuts = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->allCuts; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color> GizmoColor = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Color>(
   []() { return &GetStaticClassInstance()->pStaticFields->GizmoColor; }
  );

  // Static methods:
  static inline void Add(ModdingAPI::Exposed::Pathfinding::NavmeshAdd* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavmeshAdd*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D46C0))(obj);
  }
  static inline void Remove(ModdingAPI::Exposed::Pathfinding::NavmeshAdd* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::NavmeshAdd*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D4780))(obj);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetAllInRange(ModdingAPI::Exposed::UnityEngine::Bounds b) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D4840))(b);
  }
  static inline bool Intersects(ModdingAPI::Exposed::UnityEngine::Bounds b1, ModdingAPI::Exposed::UnityEngine::Bounds b2) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Bounds, ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D4AF0))(b1, b2);
  }
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetAll() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D4BD0))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x25D7040))();
  }
};
}