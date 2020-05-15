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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Color.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed {
struct __NGUITools_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::AudioListener* mListener;
  bool mLoaded;
  float mGlobalVolume;
  float mLastTimestamp;
  ModdingAPI::Exposed::UnityEngine::AudioClip* mLastClip;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* mSides;
};

struct __NGUITools_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __NGUITools_Il2CppClass {
  Il2CppClass_1 _1;
  __NGUITools_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __NGUITools_Il2CppVtbl vtbl;
};

class NGUITools {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C555D0;
  static inline    __NGUITools_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __NGUITools_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__NGUITools_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __NGUITools_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::AudioListener*> mListener = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::AudioListener*>(
   []() { return &GetStaticClassInstance()->pStaticFields->mListener; }
  );
  static inline __CppStaticProperty<bool> mLoaded = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->mLoaded; }
  );
  static inline __CppStaticProperty<float> mGlobalVolume = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->mGlobalVolume; }
  );
  static inline __CppStaticProperty<float> mLastTimestamp = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->mLastTimestamp; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::AudioClip*> mLastClip = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::AudioClip*>(
   []() { return &GetStaticClassInstance()->pStaticFields->mLastClip; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3_array*> mSides = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->mSides; }
  );

  // Static methods:
  static inline float get_soundVolume() {
    return reinterpret_cast<float(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D9FB20))();
  }
  static inline void set_soundVolume(float value) {
    reinterpret_cast<void(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D9FC80))(value);
  }
  static inline bool get_fileAccess() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))();
  }
  static inline ModdingAPI::Exposed::UnityEngine::AudioSource* PlaySound(ModdingAPI::Exposed::UnityEngine::AudioClip* clip) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AudioSource*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioClip*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D9FD80))(clip);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AudioSource* PlaySound(ModdingAPI::Exposed::UnityEngine::AudioClip* clip, float volume) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AudioSource*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioClip*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D9FE30))(clip, volume);
  }
  static inline ModdingAPI::Exposed::UnityEngine::AudioSource* PlaySound(ModdingAPI::Exposed::UnityEngine::AudioClip* clip, float volume, float pitch) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::AudioSource*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::AudioClip*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1D9FEF0))(clip, volume, pitch);
  }
  static inline int32_t RandomRange(int32_t min, int32_t max) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA0710))(min, max);
  }
  static inline System_String* GetHierarchy(ModdingAPI::Exposed::UnityEngine::GameObject* obj) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA0780))(obj);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Camera* FindCameraForLayer(int32_t layer) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Camera*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA0A70))(layer);
  }
  static inline void AddWidgetCollider(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA0E10))(go);
  }
  static inline void AddWidgetCollider(ModdingAPI::Exposed::UnityEngine::GameObject* go, bool considerInactive) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA0EB0))(go, considerInactive);
  }
  static inline void UpdateWidgetCollider(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA1300))(go);
  }
  static inline void UpdateWidgetCollider(ModdingAPI::Exposed::UnityEngine::GameObject* go, bool considerInactive) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA13A0))(go, considerInactive);
  }
  static inline void UpdateWidgetCollider(ModdingAPI::Exposed::UnityEngine::BoxCollider* box, bool considerInactive) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::BoxCollider*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA1560))(box, considerInactive);
  }
  static inline void UpdateWidgetCollider(ModdingAPI::Exposed::UnityEngine::BoxCollider2D* box, bool considerInactive) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::BoxCollider2D*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA1BC0))(box, considerInactive);
  }
  static inline System_String* GetTypeName(ModdingAPI::Exposed::UnityEngine::Object* obj) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Object*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA2000))(obj);
  }
  static inline void RegisterUndo(ModdingAPI::Exposed::UnityEngine::Object* obj, System_String* name) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Object*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(obj, name);
  }
  static inline void SetDirty(ModdingAPI::Exposed::UnityEngine::Object* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Object*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(obj);
  }
  static inline ModdingAPI::Exposed::UnityEngine::GameObject* AddChild(ModdingAPI::Exposed::UnityEngine::GameObject* parent) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA2170))(parent);
  }
  static inline ModdingAPI::Exposed::UnityEngine::GameObject* AddChild(ModdingAPI::Exposed::UnityEngine::GameObject* parent, bool undo) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA2210))(parent, undo);
  }
  static inline ModdingAPI::Exposed::UnityEngine::GameObject* AddChild(ModdingAPI::Exposed::UnityEngine::GameObject* parent, ModdingAPI::Exposed::UnityEngine::GameObject* prefab) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA2650))(parent, prefab);
  }
  static inline int32_t CalculateRaycastDepth(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA29E0))(go);
  }
  static inline int32_t CalculateNextDepth(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA2BC0))(go);
  }
  static inline int32_t CalculateNextDepth(ModdingAPI::Exposed::UnityEngine::GameObject* go, bool ignoreChildrenWithColliders) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA2D00))(go, ignoreChildrenWithColliders);
  }
  static inline int32_t AdjustDepth(ModdingAPI::Exposed::UnityEngine::GameObject* go, int32_t adjustment) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA2F60))(go, adjustment);
  }
  static inline void BringForward(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA3220))(go);
  }
  static inline void PushBack(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA3320))(go);
  }
  static inline void NormalizeDepths() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA3420))();
  }
  static inline void NormalizeWidgetDepths() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA34C0))();
  }
  static inline void NormalizeWidgetDepths(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA3560))(go);
  }
  static inline void NormalizeWidgetDepths(ModdingAPI::Exposed::UIWidget_array* list) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIWidget_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA3620))(list);
  }
  static inline void NormalizePanelDepths() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA3830))();
  }
  static inline ModdingAPI::Exposed::UIPanel* CreateUI(bool advanced3D) {
    return reinterpret_cast<ModdingAPI::Exposed::UIPanel*(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA3A70))(advanced3D);
  }
  static inline ModdingAPI::Exposed::UIPanel* CreateUI(bool advanced3D, int32_t layer) {
    return reinterpret_cast<ModdingAPI::Exposed::UIPanel*(__fastcall*)(bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA3B10))(advanced3D, layer);
  }
  static inline ModdingAPI::Exposed::UIPanel* CreateUI(ModdingAPI::Exposed::UnityEngine::Transform* trans, bool advanced3D, int32_t layer) {
    return reinterpret_cast<ModdingAPI::Exposed::UIPanel*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA3BC0))(trans, advanced3D, layer);
  }
  static inline void SetChildLayer(ModdingAPI::Exposed::UnityEngine::Transform* t, int32_t layer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA4C80))(t, layer);
  }
  static inline ModdingAPI::Exposed::UISprite* AddSprite(ModdingAPI::Exposed::UnityEngine::GameObject* go, ModdingAPI::Exposed::UIAtlas* atlas, System_String* spriteName) {
    return reinterpret_cast<ModdingAPI::Exposed::UISprite*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UIAtlas*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA4EB0))(go, atlas, spriteName);
  }
  static inline ModdingAPI::Exposed::UnityEngine::GameObject* GetRoot(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA5030))(go);
  }
  static inline void Destroy(ModdingAPI::Exposed::UnityEngine::Object* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Object*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA51E0))(obj);
  }
  static inline void DestroyImmediate(ModdingAPI::Exposed::UnityEngine::Object* obj) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Object*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA5470))(obj);
  }
  static inline void Broadcast(System_String* funcName) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA5540))(funcName);
  }
  static inline void Broadcast(System_String* funcName, Il2CppObject* param) {
    reinterpret_cast<void(__fastcall*)(System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA5710))(funcName, param);
  }
  static inline bool IsChild(ModdingAPI::Exposed::UnityEngine::Transform* parent, ModdingAPI::Exposed::UnityEngine::Transform* child) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA58F0))(parent, child);
  }
  static inline void Activate(ModdingAPI::Exposed::UnityEngine::Transform* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA5A70))(t);
  }
  static inline void Activate(ModdingAPI::Exposed::UnityEngine::Transform* t, bool compatibilityMode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA5B10))(t, compatibilityMode);
  }
  static inline void Deactivate(ModdingAPI::Exposed::UnityEngine::Transform* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA5E30))(t);
  }
  static inline void SetActive(ModdingAPI::Exposed::UnityEngine::GameObject* go, bool state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA5F90))(go, state);
  }
  static inline void SetActive(ModdingAPI::Exposed::UnityEngine::GameObject* go, bool state, bool compatibilityMode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA6040))(go, state, compatibilityMode);
  }
  static inline void CallCreatePanel(ModdingAPI::Exposed::UnityEngine::Transform* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA6260))(t);
  }
  static inline void SetActiveChildren(ModdingAPI::Exposed::UnityEngine::GameObject* go, bool state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA6410))(go, state);
  }
  static inline bool IsActive(ModdingAPI::Exposed::UnityEngine::Behaviour* mb) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Behaviour*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA6640))(mb);
  }
  static inline bool GetActive(ModdingAPI::Exposed::UnityEngine::Behaviour* mb) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Behaviour*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA67E0))(mb);
  }
  static inline bool GetActive(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA6980))(go);
  }
  static inline void SetActiveSelf(ModdingAPI::Exposed::UnityEngine::GameObject* go, bool state) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA6A70))(go, state);
  }
  static inline void SetLayer(ModdingAPI::Exposed::UnityEngine::GameObject* go, int32_t layer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA6AE0))(go, layer);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 Round(ModdingAPI::Exposed::UnityEngine::Vector3 v) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA6D60))(v);
  }
  static inline void MakePixelPerfect(ModdingAPI::Exposed::UnityEngine::Transform* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA6E80))(t);
  }
  static inline bool Save(System_String* fileName, ModdingAPI::Exposed::System::Byte_array* bytes) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA7290))(fileName, bytes);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* Load(System_String* fileName) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA7480))(fileName);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Color ApplyPMA(ModdingAPI::Exposed::UnityEngine::Color c) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA7590))(c);
  }
  static inline void MarkParentAsChanged(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA7600))(go);
  }
  static inline System_String* get_clipboard() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA7700))();
  }
  static inline void set_clipboard(System_String* value) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA7870))(value);
  }
  static inline System_String* EncodeColor(ModdingAPI::Exposed::UnityEngine::Color c) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA7B80))(c);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Color ParseColor(System_String* text, int32_t offset) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA7C30))(text, offset);
  }
  static inline System_String* StripSymbols(System_String* text) {
    return reinterpret_cast<System_String*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA7D00))(text);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* GetSides(ModdingAPI::Exposed::UnityEngine::Camera* cam) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA7DA0))(cam);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* GetSides(ModdingAPI::Exposed::UnityEngine::Camera* cam, float depth) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Camera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA7F30))(cam, depth);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* GetSides(ModdingAPI::Exposed::UnityEngine::Camera* cam, ModdingAPI::Exposed::UnityEngine::Transform* relativeTo) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Camera*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA7FE0))(cam, relativeTo);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* GetSides(ModdingAPI::Exposed::UnityEngine::Camera* cam, float depth, ModdingAPI::Exposed::UnityEngine::Transform* relativeTo) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Camera*, float, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA8180))(cam, depth, relativeTo);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* GetWorldCorners(ModdingAPI::Exposed::UnityEngine::Camera* cam) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA8E00))(cam);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* GetWorldCorners(ModdingAPI::Exposed::UnityEngine::Camera* cam, float depth) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Camera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA8F90))(cam, depth);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* GetWorldCorners(ModdingAPI::Exposed::UnityEngine::Camera* cam, ModdingAPI::Exposed::UnityEngine::Transform* relativeTo) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Camera*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA9040))(cam, relativeTo);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3_array* GetWorldCorners(ModdingAPI::Exposed::UnityEngine::Camera* cam, float depth, ModdingAPI::Exposed::UnityEngine::Transform* relativeTo) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Camera*, float, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA91E0))(cam, depth, relativeTo);
  }
  static inline System_String* GetFuncName(Il2CppObject* obj, System_String* method) {
    return reinterpret_cast<System_String*(__fastcall*)(Il2CppObject*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA9DB0))(obj, method);
  }
  static inline void ImmediatelyCreateDrawCalls(ModdingAPI::Exposed::UnityEngine::GameObject* root) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DA9F00))(root);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector2 get_screenSize() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DAA000))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1DAA0C0))();
  }
};
}