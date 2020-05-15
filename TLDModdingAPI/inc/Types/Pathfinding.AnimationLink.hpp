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


namespace ModdingAPI::Exposed::Pathfinding {
struct __AnimationLink_Il2CppStaticFields {
};

struct __AnimationLink_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_OnEnable;
  VirtualInvokeData _5_OnDisable;
  VirtualInvokeData _6_OnPostScan;
  VirtualInvokeData _7_OnPreScan;
  VirtualInvokeData _8_OnLatePostScan;
  VirtualInvokeData _9_OnPostCacheLoad;
  VirtualInvokeData _10_OnGraphsPreUpdate;
  VirtualInvokeData _11_OnGraphsPostUpdate;
  VirtualInvokeData _12_OnDrawGizmosSelected;
};

struct __AnimationLink_Il2CppClass {
  Il2CppClass_1 _1;
  __AnimationLink_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AnimationLink_Il2CppVtbl vtbl;
};

class AnimationLink {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7A590;
  static inline    __AnimationLink_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AnimationLink_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AnimationLink_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AnimationLink_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::Pathfinding::GraphModifier* GraphModifier_prev;
  ModdingAPI::Exposed::Pathfinding::GraphModifier* GraphModifier_next;
  ModdingAPI::Exposed::UnityEngine::Transform* end;
  float costFactor;
  bool oneWay;
  ModdingAPI::Exposed::Pathfinding::PointNode* NodeLink2_startNode;
  ModdingAPI::Exposed::Pathfinding::PointNode* NodeLink2_endNode;
  ModdingAPI::Exposed::Pathfinding::MeshNode* NodeLink2_connectedNode1;
  ModdingAPI::Exposed::Pathfinding::MeshNode* NodeLink2_connectedNode2;
  ModdingAPI::Exposed::UnityEngine::Vector3 NodeLink2_clamped1;
  ModdingAPI::Exposed::UnityEngine::Vector3 NodeLink2_clamped2;
  bool NodeLink2_postScanCalled;
  System_String* clip;
  float animSpeed;
  bool reverseAnim;
  ModdingAPI::Exposed::UnityEngine::GameObject* referenceMesh;
  ModdingAPI::Exposed::Pathfinding::AnimationLink::LinkClip_array* sequence;
  System_String* boneRoot;

  // Member methods:
  void CalculateOffsets(ModdingAPI::Exposed::System::Collections::Generic::List_T_* trace, ModdingAPI::Exposed::UnityEngine::Vector3 endPosition) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::AnimationLink*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20A4FC0))(this, trace, endPosition);
  }
  void OnDrawGizmosSelected() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::AnimationLink*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20A6020))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::AnimationLink*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20A6240))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Transform* SearchRec(ModdingAPI::Exposed::UnityEngine::Transform* tr, System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Transform*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Transform*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20A4DE0))(tr, name);
  }
};
}