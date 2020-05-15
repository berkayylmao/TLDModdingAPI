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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed {
struct __UIDrawCall_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Action_T_* s_OnPostCreate;
  ModdingAPI::Exposed::BetterList_T_* mActiveList;
  ModdingAPI::Exposed::BetterList_T_* mInactiveList;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* mCache;
  ModdingAPI::Exposed::System::Int32_array* ClipRange;
  ModdingAPI::Exposed::System::Int32_array* ClipArgs;
};

struct __UIDrawCall_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __UIDrawCall_Il2CppClass {
  Il2CppClass_1 _1;
  __UIDrawCall_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UIDrawCall_Il2CppVtbl vtbl;
};

class UIDrawCall {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5EA08;
  static inline    __UIDrawCall_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __UIDrawCall_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__UIDrawCall_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __UIDrawCall_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t widgetCount;
  int32_t depthStart;
  int32_t depthEnd;
  ModdingAPI::Exposed::UIPanel* manager;
  ModdingAPI::Exposed::UIPanel* panel;
  ModdingAPI::Exposed::UnityEngine::Texture2D* clipTexture;
  bool alwaysOnScreen;
  ModdingAPI::Exposed::BetterList_T_* verts;
  ModdingAPI::Exposed::BetterList_T_* norms;
  ModdingAPI::Exposed::BetterList_T_* tans;
  ModdingAPI::Exposed::BetterList_T_* uvs;
  ModdingAPI::Exposed::BetterList_T_* cols;
  ModdingAPI::Exposed::UnityEngine::Material* mMaterial;
  ModdingAPI::Exposed::UnityEngine::Texture* mTexture;
  ModdingAPI::Exposed::UnityEngine::Shader* mShader;
  int32_t mClipCount;
  ModdingAPI::Exposed::UnityEngine::Transform* mTrans;
  ModdingAPI::Exposed::UnityEngine::Mesh* mMesh;
  ModdingAPI::Exposed::UnityEngine::MeshFilter* mFilter;
  ModdingAPI::Exposed::UnityEngine::MeshRenderer* mRenderer;
  ModdingAPI::Exposed::UnityEngine::Material* mDynamicMat;
  ModdingAPI::Exposed::System::Int32_array* mIndices;
  bool mRebuildMat;
  bool mLegacyShader;
  int32_t mRenderQueue;
  int32_t mTriangles;
  bool isDirty;
  bool mTextureClip;
  ModdingAPI::Exposed::UIDrawCall::OnRenderCallback* onRender;

  // Member methods:
  int32_t get_renderQueue() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85020))(this);
  }
  void set_renderQueue(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2571930))(this, value);
  }
  int32_t get_sortingOrder() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2571A20))(this);
  }
  void set_sortingOrder(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2571B40))(this, value);
  }
  int32_t get_finalRenderQueue() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2571C70))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Transform* get_cachedTransform() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Transform*(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2571D90))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* get_baseMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319940))(this);
  }
  void set_baseMaterial(ModdingAPI::Exposed::UnityEngine::Material* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2571E90))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Material* get_dynamicMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307710))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Texture* get_mainTexture() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture*(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319950))(this);
  }
  void set_mainTexture(ModdingAPI::Exposed::UnityEngine::Texture* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*, ModdingAPI::Exposed::UnityEngine::Texture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2571F60))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Shader* get_shader() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Shader*(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x321390))(this);
  }
  void set_shader(ModdingAPI::Exposed::UnityEngine::Shader* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*, ModdingAPI::Exposed::UnityEngine::Shader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2572040))(this, value);
  }
  int32_t get_triangles() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2572110))(this);
  }
  bool get_isClipped() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25721E0))(this);
  }
  void CreateMaterial() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25721F0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* RebuildMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2572FF0))(this);
  }
  void UpdateMaterials() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2573240))(this);
  }
  void UpdateGeometry(int32_t widgetCount) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2573480))(this, widgetCount);
  }
  ModdingAPI::Exposed::System::Int32_array* GenerateCachedIndexBuffer(int32_t vertexCount, int32_t indexCount) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2574290))(this, vertexCount, indexCount);
  }
  void OnWillRenderObject() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2574660))(this);
  }
  void SetClipping(int32_t index, ModdingAPI::Exposed::UnityEngine::Vector4 cr, ModdingAPI::Exposed::UnityEngine::Vector2 soft, float angle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector4, ModdingAPI::Exposed::UnityEngine::Vector2, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2574E30))(this, index, cr, soft, angle);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25751A0))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7DA100))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2575680))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25757C0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2576980))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Action_T_*> s_OnPostCreate = __CppStaticProperty<ModdingAPI::Exposed::System::Action_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_OnPostCreate; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::BetterList_T_*> mActiveList = __CppStaticProperty<ModdingAPI::Exposed::BetterList_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->mActiveList; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::BetterList_T_*> mInactiveList = __CppStaticProperty<ModdingAPI::Exposed::BetterList_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->mInactiveList; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> mCache = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->mCache; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> ClipRange = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->ClipRange; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> ClipArgs = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->ClipArgs; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::BetterList_T_* get_list() {
    return reinterpret_cast<ModdingAPI::Exposed::BetterList_T_*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2571750))();
  }
  static inline ModdingAPI::Exposed::BetterList_T_* get_activeList() {
    return reinterpret_cast<ModdingAPI::Exposed::BetterList_T_*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x25717F0))();
  }
  static inline ModdingAPI::Exposed::BetterList_T_* get_inactiveList() {
    return reinterpret_cast<ModdingAPI::Exposed::BetterList_T_*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2571890))();
  }
  static inline ModdingAPI::Exposed::UIDrawCall* Create(ModdingAPI::Exposed::UIPanel* panel, ModdingAPI::Exposed::UnityEngine::Material* mat, ModdingAPI::Exposed::UnityEngine::Texture* tex, ModdingAPI::Exposed::UnityEngine::Shader* shader) {
    return reinterpret_cast<ModdingAPI::Exposed::UIDrawCall*(__fastcall*)(ModdingAPI::Exposed::UIPanel*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Texture*, ModdingAPI::Exposed::UnityEngine::Shader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2575880))(panel, mat, tex, shader);
  }
  static inline ModdingAPI::Exposed::UIDrawCall* Create(System_String* name, ModdingAPI::Exposed::UIPanel* pan, ModdingAPI::Exposed::UnityEngine::Material* mat, ModdingAPI::Exposed::UnityEngine::Texture* tex, ModdingAPI::Exposed::UnityEngine::Shader* shader) {
    return reinterpret_cast<ModdingAPI::Exposed::UIDrawCall*(__fastcall*)(System_String*, ModdingAPI::Exposed::UIPanel*, ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Texture*, ModdingAPI::Exposed::UnityEngine::Shader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2575960))(name, pan, mat, tex, shader);
  }
  static inline ModdingAPI::Exposed::UIDrawCall* Create(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::UIDrawCall*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2575C30))(name);
  }
  static inline void ClearAll() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2576000))();
  }
  static inline void ReleaseAll() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x25762A0))();
  }
  static inline void ReleaseInactive() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2576340))();
  }
  static inline int32_t Count(ModdingAPI::Exposed::UIPanel* panel) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIPanel*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2576530))(panel);
  }
  static inline void Destroy(ModdingAPI::Exposed::UIDrawCall* dc) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIDrawCall*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25766D0))(dc);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2576E20))();
  }
};
}