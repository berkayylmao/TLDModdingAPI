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


namespace ModdingAPI::Exposed {
struct __UIRect_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Vector3_array* mSides;
};

struct __UIRect_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_isAnchoredHorizontally;
  VirtualInvokeData _5_get_isAnchoredVertically;
  VirtualInvokeData _6_get_canBeAnchored;
  VirtualInvokeData _12_Invalidate;
  VirtualInvokeData _13_GetSides;
  VirtualInvokeData _14_OnEnable;
  VirtualInvokeData _15_OnInit;
  VirtualInvokeData _16_OnDisable;
  VirtualInvokeData _19_ParentHasChanged;
  VirtualInvokeData _21_OnUpdate;
  VirtualInvokeData _65535__ctor;
};

struct __UIRect_Il2CppClass {
  Il2CppClass_1 _1;
  __UIRect_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UIRect_Il2CppVtbl vtbl;
};

class UIRect {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C39B88;
  static inline    __UIRect_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __UIRect_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__UIRect_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __UIRect_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UIRect::AnchorPoint* leftAnchor;
  ModdingAPI::Exposed::UIRect::AnchorPoint* rightAnchor;
  ModdingAPI::Exposed::UIRect::AnchorPoint* bottomAnchor;
  ModdingAPI::Exposed::UIRect::AnchorPoint* topAnchor;
  int32_t updateAnchors;
  ModdingAPI::Exposed::UnityEngine::GameObject* mGo;
  ModdingAPI::Exposed::UnityEngine::Transform* mTrans;
  ModdingAPI::Exposed::BetterList_T_* mChildren;
  bool mChanged;
  bool mStarted;
  bool mParentFound;
  bool mUpdateAnchors;
  int32_t mUpdateFrame;
  bool mAnchorsCached;
  ModdingAPI::Exposed::UIRoot* mRoot;
  ModdingAPI::Exposed::UIRect* mParent;
  bool mRootSet;
  ModdingAPI::Exposed::UnityEngine::Camera* mCam;
  float finalAlpha;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::GameObject* get_cachedGameObject() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D5C80))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Transform* get_cachedTransform() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Transform*(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D5D80))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Camera* get_anchorCamera() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Camera*(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D5E80))(this);
  }
  bool get_isFullyAnchored() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D5EB0))(this);
  }
  bool get_isAnchoredHorizontally() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D6040))(this);
  }
  bool get_isAnchoredVertically() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D6150))(this);
  }
  bool get_canBeAnchored() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(this);
  }
  ModdingAPI::Exposed::UIRect* get_parent() {
    return reinterpret_cast<ModdingAPI::Exposed::UIRect*(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D6260))(this);
  }
  ModdingAPI::Exposed::UIRoot* get_root() {
    return reinterpret_cast<ModdingAPI::Exposed::UIRoot*(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D6380))(this);
  }
  bool get_isAnchored() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D64B0))(this);
  }
  float get_cameraRayDistance() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D6660))(this);
  }
  void Invalidate(bool includeChildren) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D6C50))(this, includeChildren);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3_array* GetSides(ModdingAPI::Exposed::UnityEngine::Transform* relativeTo) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3_array*(__fastcall*)(ModdingAPI::Exposed::UIRect*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D6D00))(this, relativeTo);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetLocalPos(ModdingAPI::Exposed::UIRect::AnchorPoint* ac, ModdingAPI::Exposed::UnityEngine::Transform* trans) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UIRect*, ModdingAPI::Exposed::UIRect::AnchorPoint*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D70B0))(this, ac, trans);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D75A0))(this);
  }
  void OnInit() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D75F0))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D76E0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D77D0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D7810))(this);
  }
  void UpdateAnchors() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D7CB0))(this);
  }
  void SetAnchor(ModdingAPI::Exposed::UnityEngine::Transform* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D7CF0))(this, t);
  }
  void SetAnchor(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D7D80))(this, go);
  }
  void SetAnchor(ModdingAPI::Exposed::UnityEngine::GameObject* go, int32_t left, int32_t bottom, int32_t right, int32_t top) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*, ModdingAPI::Exposed::UnityEngine::GameObject*, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D7F10))(this, go, left, bottom, right, top);
  }
  void ResetAnchors() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D8180))(this);
  }
  void ResetAndUpdateAnchors() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D8510))(this);
  }
  void FindCameraFor(ModdingAPI::Exposed::UIRect::AnchorPoint* ap) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*, ModdingAPI::Exposed::UIRect::AnchorPoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D8560))(this, ap);
  }
  void ParentHasChanged() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D8750))(this);
  }
  void OnUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D8970))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3_array*> mSides = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->mSides; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x24D8DE0))();
  }
};
}