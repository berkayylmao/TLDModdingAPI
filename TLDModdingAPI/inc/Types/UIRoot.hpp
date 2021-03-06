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
struct __UIRoot_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* list;
};

struct __UIRoot_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Awake;
  VirtualInvokeData _5_OnEnable;
  VirtualInvokeData _6_OnDisable;
  VirtualInvokeData _7_Start;
};

struct __UIRoot_Il2CppClass {
  Il2CppClass_1 _1;
  __UIRoot_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __UIRoot_Il2CppVtbl vtbl;
};

class UIRoot {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C595B8;
  static inline    __UIRoot_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __UIRoot_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__UIRoot_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __UIRoot_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool DO_UI_RESCALING;
  float m_AspectRatioForScaling;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_EmbeddedIcons;
  float m_AspectRatioOverride;
  int32_t scalingStyle;
  int32_t manualWidth;
  int32_t manualHeight;
  int32_t minimumHeight;
  int32_t maximumHeight;
  bool fitWidth;
  bool fitHeight;
  bool adjustByDPI;
  bool shrinkPortraitUI;
  int32_t manualHeightOriginal;
  ModdingAPI::Exposed::UnityEngine::Transform* mTrans;
  ModdingAPI::Exposed::BetterList_T_* mDynamicSymbolSpritePool;

  // Member methods:
  int32_t get_constraint() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2032520))(this);
  }
  int32_t get_activeScaling() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2032550))(this);
  }
  int32_t get_activeHeight() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2032560))(this);
  }
  float get_pixelSizeAdjustment() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2032940))(this);
  }
  float GetPixelSizeAdjustment(int32_t height) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UIRoot*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2032B30))(this, height);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2032C30))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2032EA0))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2032F60))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2033020))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2033240))(this);
  }
  void UpdateScale(bool updateAnchors) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRoot*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2033250))(this, updateAnchors);
  }
  float GetAspectRatioBonusSize() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2033610))(this);
  }
  ModdingAPI::Exposed::UISprite* GetDynamicSymbolSpriteFromPool() {
    return reinterpret_cast<ModdingAPI::Exposed::UISprite*(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20339F0))(this);
  }
  void ReturnDynamicSymbolSpriteToPool(ModdingAPI::Exposed::UISprite* uiSprite) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRoot*, ModdingAPI::Exposed::UISprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2033BD0))(this, uiSprite);
  }
  void InitDynamicSymbolSpritePool() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2033E20))(this);
  }
  void CreateDynamicSymbolSprite() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2033EA0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UIRoot*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2034170))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> list = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->list; }
  );

  // Static methods:
  static inline float GetPixelSizeAdjustment(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2032A30))(go);
  }
  static inline void Broadcast(System_String* funcName) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2033630))(funcName);
  }
  static inline void Broadcast(System_String* funcName, Il2CppObject* param) {
    reinterpret_cast<void(__fastcall*)(System_String*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x20337F0))(funcName, param);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x20342F0))();
  }
};
}