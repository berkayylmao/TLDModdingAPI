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
#include "ModdingAPI.Exposed.UnityEngine.RaycastHit.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.BreakDown.LayerInfo.hpp"


namespace ModdingAPI::Exposed {
struct __BreakDown_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_BreakDownObjects;
  bool m_CanBreakDownObjects;
  ModdingAPI::Exposed::BreakDownSaveData* m_BreakDownSaveData;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_BreakDownItemsToSerialize;
  ModdingAPI::Exposed::UnityEngine::RaycastHit_array* s_RaycastHit;
};

struct __BreakDown_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __BreakDown_Il2CppClass {
  Il2CppClass_1 _1;
  __BreakDown_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __BreakDown_Il2CppVtbl vtbl;
};

class BreakDown {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4F938;
  static inline    __BreakDown_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __BreakDown_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__BreakDown_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __BreakDown_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDisplayName;
  System_String* m_BreakDownAudio;
  float m_TimeCostHours;
  bool m_RequiresTool;
  bool m_ForceToPlayersFeet;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_UsableTools;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* m_YieldObject;
  ModdingAPI::Exposed::System::Int32_array* m_YieldObjectUnits;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_RendererList;
  bool m_PostLoadBreakdown;
  float m_CountdownToBreakdown;
  float m_CountdownToBreakdownTime;
  ModdingAPI::Exposed::UnityEngine::Collider_array* m_OverlapSphereColliders;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_LayerInfos;

  // Member methods:
  System_String* get_m_DisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35A0))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1811FF0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1812110))(this);
  }
  void ManualUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18128B0))(this);
  }
  System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18129B0))(this);
  }
  void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1812CB0))(this, text);
  }
  void DeserializeAdditive(System_String* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1812DE0))(this, text);
  }
  System_String* GetHoverText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35A0))(this);
  }
  bool ProcessInteraction() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1813A50))(this);
  }
  void DoBreakDown() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1813E20))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1814450))(this);
  }
  void SpawnYieldObjectsAndStickToGround() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1814A70))(this);
  }
  void SpawnYieldObjectsAndAddToInventory() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1815010))(this);
  }
  void DetachAttachedObjects() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18155D0))(this);
  }
  void StickSurfaceObjectsToGround() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1815710))(this);
  }
  bool ProcessRaycastResults(ModdingAPI::Exposed::UnityEngine::GameObject* targetObj, int32_t numHits, ModdingAPI::Exposed::UnityEngine::RaycastHit hitOut) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BreakDown*, ModdingAPI::Exposed::UnityEngine::GameObject*, int32_t, ModdingAPI::Exposed::UnityEngine::RaycastHit)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1817660))(this, targetObj, numHits, hitOut);
  }
  bool SphereCastForNearest(ModdingAPI::Exposed::UnityEngine::GameObject* targetObj, ModdingAPI::Exposed::UnityEngine::Vector3 startPos, float radius, ModdingAPI::Exposed::UnityEngine::RaycastHit hitOut) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BreakDown*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Vector3, float, ModdingAPI::Exposed::UnityEngine::RaycastHit)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1817990))(this, targetObj, startPos, radius, hitOut);
  }
  bool RayCastForNearest(ModdingAPI::Exposed::UnityEngine::GameObject* targetObj, ModdingAPI::Exposed::UnityEngine::Vector3 startPos, ModdingAPI::Exposed::UnityEngine::RaycastHit hitOut) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BreakDown*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::RaycastHit)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1817B50))(this, targetObj, startPos, hitOut);
  }
  void StickToGround(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1817D70))(this, go);
  }
  bool CanStickToGround(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::BreakDown*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1818A50))(this, go);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1818E90))(this);
  }
  void AddAlternateTools() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1818F50))(this);
  }
  ModdingAPI::Exposed::BreakDown::LayerInfo GetLayerInfo(ModdingAPI::Exposed::UnityEngine::Transform* transform) {
    return reinterpret_cast<ModdingAPI::Exposed::BreakDown::LayerInfo(__fastcall*)(ModdingAPI::Exposed::BreakDown*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18192D0))(this, transform);
  }
  void SaveLayerInfos(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1819580))(this, go);
  }
  void RestoreLayerInfos(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1819880))(this, go);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::BreakDown*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1819A10))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_BreakDownObjects = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_BreakDownObjects; }
  );
  static inline __CppStaticProperty<bool> m_CanBreakDownObjects = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_CanBreakDownObjects; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::BreakDownSaveData*> m_BreakDownSaveData = __CppStaticProperty<ModdingAPI::Exposed::BreakDownSaveData*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_BreakDownSaveData; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_BreakDownItemsToSerialize = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_BreakDownItemsToSerialize; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::RaycastHit_array*> s_RaycastHit = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::RaycastHit_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_RaycastHit; }
  );

  // Static methods:
  static inline void UpdateAll() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1812600))();
  }
  static inline System_String* SerializeAll() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1812F10))();
  }
  static inline void DeserializeAll(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1813470))(text);
  }
  static inline void DeserializeAllAdditive(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18136F0))(text);
  }
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1813970))();
  }
  static inline ModdingAPI::Exposed::BreakDown* FindBreakDownByPosition(ModdingAPI::Exposed::BreakDownSaveData* proxy) {
    return reinterpret_cast<ModdingAPI::Exposed::BreakDown*(__fastcall*)(ModdingAPI::Exposed::BreakDownSaveData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1814670))(proxy);
  }
  static inline ModdingAPI::Exposed::BreakDown* FindBreakDownByGuid(System_String* guid) {
    return reinterpret_cast<ModdingAPI::Exposed::BreakDown*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1814970))(guid);
  }
  static inline ModdingAPI::Exposed::StickToGround* GetStickToGroundInDirectParent(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<ModdingAPI::Exposed::StickToGround*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1817440))(go);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1819D00))();
  }
};
}