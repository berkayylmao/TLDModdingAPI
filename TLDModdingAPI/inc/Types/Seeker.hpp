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
struct __Seeker_Il2CppStaticFields {
};

struct __Seeker_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData _5_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
};

struct __Seeker_Il2CppClass {
  Il2CppClass_1 _1;
  __Seeker_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Seeker_Il2CppVtbl vtbl;
};

class Seeker {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C5AB48;
  static inline    Seeker* _pStaticObjectInstance = nullptr;

public:
// Singleton object getter:
  static inline Seeker* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (Seeker**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

  // Il2Cpp fields:
  __Seeker_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool drawGizmos;
  bool detailedGizmos;
  ModdingAPI::Exposed::Pathfinding::StartEndModifier* startEndModifier;
  int32_t traversableTags;
  ModdingAPI::Exposed::Pathfinding::TagMask* traversableTagsCompatibility;
  ModdingAPI::Exposed::System::Int32_array* tagPenalties;
  ModdingAPI::Exposed::OnPathDelegate* pathCallback;
  ModdingAPI::Exposed::OnPathDelegate* preProcessPath;
  ModdingAPI::Exposed::OnPathDelegate* postProcessPath;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* lastCompletedVectorPath;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* lastCompletedNodePath;
  ModdingAPI::Exposed::Pathfinding::Path* path;
  ModdingAPI::Exposed::Pathfinding::Path* prevPath;
  ModdingAPI::Exposed::OnPathDelegate* onPathDelegate;
  ModdingAPI::Exposed::OnPathDelegate* onPartialPathDelegate;
  ModdingAPI::Exposed::OnPathDelegate* tmpPathCallback;
  uint32_t lastPathID;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* modifiers;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C412C0))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C41780))(this);
  }
  ModdingAPI::Exposed::Pathfinding::Path* GetCurrentPath() {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::Path*(__fastcall*)(ModdingAPI::Exposed::Seeker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319930))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C41850))(this);
  }
  void ReleaseClaimedPath() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C41940))(this);
  }
  void RegisterModifier(ModdingAPI::Exposed::Pathfinding::IPathModifier* mod) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::Pathfinding::IPathModifier*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C41970))(this, mod);
  }
  void DeregisterModifier(ModdingAPI::Exposed::Pathfinding::IPathModifier* mod) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::Pathfinding::IPathModifier*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C41BB0))(this, mod);
  }
  void PostProcess(ModdingAPI::Exposed::Pathfinding::Path* p) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C41C50))(this, p);
  }
  void RunModifiers(int32_t pass, ModdingAPI::Exposed::Pathfinding::Path* p) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*, int32_t, ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C41C60))(this, pass, p);
  }
  bool IsDone() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Seeker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C41ED0))(this);
  }
  void OnPathComplete(ModdingAPI::Exposed::Pathfinding::Path* p) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C41EF0))(this, p);
  }
  void OnPathComplete(ModdingAPI::Exposed::Pathfinding::Path* p, bool runModifiers, bool sendCallbacks) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::Pathfinding::Path*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C41F10))(this, p, runModifiers, sendCallbacks);
  }
  void OnPartialPathComplete(ModdingAPI::Exposed::Pathfinding::Path* p) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C420D0))(this, p);
  }
  void OnMultiPathComplete(ModdingAPI::Exposed::Pathfinding::Path* p) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C420F0))(this, p);
  }
  ModdingAPI::Exposed::Pathfinding::ABPath* GetNewPath(ModdingAPI::Exposed::UnityEngine::Vector3 start, ModdingAPI::Exposed::UnityEngine::Vector3 end) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::ABPath*(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C42110))(this, start, end);
  }
  ModdingAPI::Exposed::Pathfinding::Path* StartPath(ModdingAPI::Exposed::UnityEngine::Vector3 start, ModdingAPI::Exposed::UnityEngine::Vector3 end) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::Path*(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C42160))(this, start, end);
  }
  ModdingAPI::Exposed::Pathfinding::Path* StartPath(ModdingAPI::Exposed::UnityEngine::Vector3 start, ModdingAPI::Exposed::UnityEngine::Vector3 end, ModdingAPI::Exposed::OnPathDelegate* callback) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::Path*(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::OnPathDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C421D0))(this, start, end, callback);
  }
  ModdingAPI::Exposed::Pathfinding::Path* StartPath(ModdingAPI::Exposed::UnityEngine::Vector3 start, ModdingAPI::Exposed::UnityEngine::Vector3 end, ModdingAPI::Exposed::OnPathDelegate* callback, int32_t graphMask) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::Path*(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::OnPathDelegate*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C42250))(this, start, end, callback, graphMask);
  }
  ModdingAPI::Exposed::Pathfinding::Path* StartPath(ModdingAPI::Exposed::Pathfinding::Path* p, ModdingAPI::Exposed::OnPathDelegate* callback, int32_t graphMask) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::Path*(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::Pathfinding::Path*, ModdingAPI::Exposed::OnPathDelegate*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C422D0))(this, p, callback, graphMask);
  }
  void StartPathInternal(ModdingAPI::Exposed::Pathfinding::Path* p, ModdingAPI::Exposed::OnPathDelegate* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::Pathfinding::Path*, ModdingAPI::Exposed::OnPathDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C42400))(this, p, callback);
  }
  ModdingAPI::Exposed::Pathfinding::MultiTargetPath* StartMultiTargetPath(ModdingAPI::Exposed::UnityEngine::Vector3 start, ModdingAPI::Exposed::UnityEngine::Vector3_array* endPoints, bool pathsForAll, ModdingAPI::Exposed::OnPathDelegate* callback, int32_t graphMask) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::MultiTargetPath*(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3_array*, bool, ModdingAPI::Exposed::OnPathDelegate*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C42530))(this, start, endPoints, pathsForAll, callback, graphMask);
  }
  ModdingAPI::Exposed::Pathfinding::MultiTargetPath* StartMultiTargetPath(ModdingAPI::Exposed::UnityEngine::Vector3_array* startPoints, ModdingAPI::Exposed::UnityEngine::Vector3 end, bool pathsForAll, ModdingAPI::Exposed::OnPathDelegate* callback, int32_t graphMask) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::MultiTargetPath*(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::UnityEngine::Vector3, bool, ModdingAPI::Exposed::OnPathDelegate*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C425B0))(this, startPoints, end, pathsForAll, callback, graphMask);
  }
  ModdingAPI::Exposed::Pathfinding::MultiTargetPath* StartMultiTargetPath(ModdingAPI::Exposed::Pathfinding::MultiTargetPath* p, ModdingAPI::Exposed::OnPathDelegate* callback, int32_t graphMask) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::MultiTargetPath*(__fastcall*)(ModdingAPI::Exposed::Seeker*, ModdingAPI::Exposed::Pathfinding::MultiTargetPath*, ModdingAPI::Exposed::OnPathDelegate*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C42630))(this, p, callback, graphMask);
  }
  void OnDrawGizmos() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C42950))(this);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Seeker*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C42D80))(this);
  }
};
}