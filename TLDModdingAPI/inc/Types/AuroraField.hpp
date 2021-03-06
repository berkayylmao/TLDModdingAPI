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
struct __AuroraField_Il2CppStaticFields {
  ModdingAPI::Exposed::AuroraFieldDataProxy* m_AuroraFieldDataProxy;
};

struct __AuroraField_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AuroraField_Il2CppClass {
  Il2CppClass_1 _1;
  __AuroraField_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AuroraField_Il2CppVtbl vtbl;
};

class AuroraField {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7B1C0;
  static inline    __AuroraField_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AuroraField_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AuroraField_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AuroraField_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float m_ChanceActive;
  bool m_IsStaticField;
  float m_Radius;
  bool m_IsActive;
  bool m_CanRollChance;
  ModdingAPI::Exposed::UnityEngine::Collider_array* m_Colliders;
  float m_ExtentRadius;
  int32_t m_ControlledComponents;
  float m_InvSqrRootOfTwo;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_InfluencedObjects;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_InfluencedAuroraElectrolizers;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_InfluencedAAuroraActivatedToggles;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1694E70))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1695160))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1695200))(this);
  }
  float GetExtentRadius() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x581030))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16952C0))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16953D0))(this, text);
  }
  void SetDynamic(bool isDynamic) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16954B0))(this, isDynamic);
  }
  void SetControlledComponents(int32_t controlledComponentFlags) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D890))(this, controlledComponentFlags);
  }
  bool DoesFieldControlComponents(int32_t flag) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AuroraField*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1695700))(this, flag);
  }
  void UnsetControlledComponents(int32_t flag) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1695710))(this, flag);
  }
  bool IsActive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x56ED00))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetClosestPointOnFieldExtent(ModdingAPI::Exposed::UnityEngine::Vector3 position, float margin) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::AuroraField*, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1695720))(this, position, margin);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetClosestPointOnFieldBorder(ModdingAPI::Exposed::UnityEngine::Vector3 position) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::AuroraField*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1695A60))(this, position);
  }
  void OnAuroraEnabled() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1695ED0))(this);
  }
  void OnAuroraDisabled() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1695FA0))(this);
  }
  bool Contains(ModdingAPI::Exposed::UnityEngine::Vector3 position) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AuroraField*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1696000))(this, position);
  }
  bool Contains(ModdingAPI::Exposed::UnityEngine::Vector3 position, float radius) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AuroraField*, ModdingAPI::Exposed::UnityEngine::Vector3, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1696350))(this, position, radius);
  }
  void Enable(bool enabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1696720))(this, enabled);
  }
  bool IsStaticField() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310EB0))(this);
  }
  void SetFieldActive(bool enabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16968F0))(this, enabled);
  }
  bool ShouldActivate() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1696A10))(this);
  }
  void ActivateElectrolizers(bool enabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1696AC0))(this, enabled);
  }
  void ActivateToggles(bool enabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1696D10))(this, enabled);
  }
  void OnFieldEnableChanged(bool enabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1696FF0))(this, enabled);
  }
  void ComputeRadiusExtent() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16970F0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraField*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1697460))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::AuroraFieldDataProxy*> m_AuroraFieldDataProxy = __CppStaticProperty<ModdingAPI::Exposed::AuroraFieldDataProxy*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_AuroraFieldDataProxy; }
  );

  // Static methods:
  static inline void ResetAllAuroraFieldLayerToDefault(ModdingAPI::Exposed::UnityEngine::GameObject* rootObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1696730))(rootObject);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x16976E0))();
  }
};
}