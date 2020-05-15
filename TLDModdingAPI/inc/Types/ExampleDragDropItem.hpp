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


namespace ModdingAPI::Exposed {
struct __ExampleDragDropItem_Il2CppStaticFields {
};

struct __ExampleDragDropItem_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Start;
  VirtualInvokeData _5_OnPress;
  VirtualInvokeData _6_Update;
  VirtualInvokeData _7_OnDragStart;
  VirtualInvokeData _8_StartDragging;
  VirtualInvokeData _9_OnDrag;
  VirtualInvokeData _10_OnDragEnd;
  VirtualInvokeData _11_OnDragDropStart;
  VirtualInvokeData _12_OnDragDropMove;
  VirtualInvokeData _13_OnDragDropRelease;
  VirtualInvokeData _14_OnDragDropEnd;
};

struct __ExampleDragDropItem_Il2CppClass {
  Il2CppClass_1 _1;
  __ExampleDragDropItem_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ExampleDragDropItem_Il2CppVtbl vtbl;
};

class ExampleDragDropItem {
public:
  // Il2Cpp fields:
  __ExampleDragDropItem_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  int32_t restriction;
  bool cloneOnDrag;
  float pressAndHoldDelay;
  bool interactable;
  ModdingAPI::Exposed::UnityEngine::Transform* mTrans;
  ModdingAPI::Exposed::UnityEngine::Transform* mParent;
  ModdingAPI::Exposed::UnityEngine::Collider* mCollider;
  ModdingAPI::Exposed::UnityEngine::Collider2D* mCollider2D;
  ModdingAPI::Exposed::UIButton* mButton;
  ModdingAPI::Exposed::UIRoot* mRoot;
  ModdingAPI::Exposed::UIGrid* mGrid;
  ModdingAPI::Exposed::UITable* mTable;
  float mDragStartTime;
  ModdingAPI::Exposed::UIDragScrollView* mDragScrollView;
  bool mPressed;
  bool mDragging;
  ModdingAPI::Exposed::UICamera::MouseOrTouch* mTouch;
  ModdingAPI::Exposed::UnityEngine::GameObject* prefab;

  // Member methods:
  void OnDragDropRelease(ModdingAPI::Exposed::UnityEngine::GameObject* surface) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ExampleDragDropItem*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x19143C0))(this, surface);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::ExampleDragDropItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1914950))(this);
  }
};
}