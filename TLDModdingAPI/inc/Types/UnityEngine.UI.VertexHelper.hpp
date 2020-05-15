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
#include "ModdingAPI.Exposed.UnityEngine.Vector4.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.UIVertex.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Color32.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed::UnityEngine::UI {
struct __VertexHelper_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Vector4 s_DefaultTangent;
  ModdingAPI::Exposed::UnityEngine::Vector3 s_DefaultNormal;
};

struct __VertexHelper_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
};

struct __VertexHelper_Il2CppClass {
  Il2CppClass_1 _1;
  __VertexHelper_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __VertexHelper_Il2CppVtbl vtbl;
};

class VertexHelper {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C275F0;
  static inline    __VertexHelper_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __VertexHelper_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__VertexHelper_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __VertexHelper_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Positions;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Colors;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Uv0S;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Uv1S;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Uv2S;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Uv3S;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Normals;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Tangents;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Indices;
  bool m_ListsInitalized;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1586470))(this);
  }
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Mesh* m) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::UnityEngine::Mesh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1586480))(this, m);
  }
  void InitializeListIfRequired() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15867F0))(this);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15874D0))(this);
  }
  void Clear() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1588200))(this);
  }
  int32_t get_currentVertCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1588440))(this);
  }
  int32_t get_currentIndexCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15884D0))(this);
  }
  void PopulateUIVertex(ModdingAPI::Exposed::UnityEngine::UIVertex vertex, int32_t i) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::UnityEngine::UIVertex, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1588560))(this, vertex, i);
  }
  void SetUIVertex(ModdingAPI::Exposed::UnityEngine::UIVertex vertex, int32_t i) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::UnityEngine::UIVertex, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15887D0))(this, vertex, i);
  }
  void FillMesh(ModdingAPI::Exposed::UnityEngine::Mesh* mesh) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::UnityEngine::Mesh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1588AD0))(this, mesh);
  }
  void AddVert(ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Color32 color, ModdingAPI::Exposed::UnityEngine::Vector2 uv0, ModdingAPI::Exposed::UnityEngine::Vector2 uv1, ModdingAPI::Exposed::UnityEngine::Vector2 uv2, ModdingAPI::Exposed::UnityEngine::Vector2 uv3, ModdingAPI::Exposed::UnityEngine::Vector3 normal, ModdingAPI::Exposed::UnityEngine::Vector4 tangent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Color32, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1588FB0))(this, position, color, uv0, uv1, uv2, uv3, normal, tangent);
  }
  void AddVert(ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Color32 color, ModdingAPI::Exposed::UnityEngine::Vector2 uv0, ModdingAPI::Exposed::UnityEngine::Vector2 uv1, ModdingAPI::Exposed::UnityEngine::Vector3 normal, ModdingAPI::Exposed::UnityEngine::Vector4 tangent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Color32, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1589480))(this, position, color, uv0, uv1, normal, tangent);
  }
  void AddVert(ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::UnityEngine::Color32 color, ModdingAPI::Exposed::UnityEngine::Vector2 uv0) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Color32, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15895F0))(this, position, color, uv0);
  }
  void AddVert(ModdingAPI::Exposed::UnityEngine::UIVertex v) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::UnityEngine::UIVertex)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1589760))(this, v);
  }
  void AddTriangle(int32_t idx0, int32_t idx1, int32_t idx2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15897F0))(this, idx0, idx1, idx2);
  }
  void AddUIVertexQuad(ModdingAPI::Exposed::UnityEngine::UIVertex_array* verts) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::UnityEngine::UIVertex_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1589A40))(this, verts);
  }
  void AddUIVertexStream(ModdingAPI::Exposed::System::Collections::Generic::List_T_* verts, ModdingAPI::Exposed::System::Collections::Generic::List_T_* indices) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1589C90))(this, verts, indices);
  }
  void AddUIVertexTriangleStream(ModdingAPI::Exposed::System::Collections::Generic::List_T_* verts) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1589E30))(this, verts);
  }
  void GetUIVertexStream(ModdingAPI::Exposed::System::Collections::Generic::List_T_* stream) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1589F80))(this, stream);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector4> s_DefaultTangent = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector4>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_DefaultTangent; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3> s_DefaultNormal = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_DefaultNormal; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x158A090))();
  }
};
}