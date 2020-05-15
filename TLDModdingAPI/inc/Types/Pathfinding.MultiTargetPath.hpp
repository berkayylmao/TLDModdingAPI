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
#include "ModdingAPI.Exposed.System.DateTime.hpp"
#include "ModdingAPI.Exposed.Pathfinding.Int3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"


namespace ModdingAPI::Exposed::Pathfinding {
struct __MultiTargetPath_Il2CppStaticFields {
};

struct __MultiTargetPath_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_FloodingPath;
  VirtualInvokeData _5_GetConnectionSpecialCost;
  VirtualInvokeData _6_OnEnterPool;
  VirtualInvokeData _7_Reset;
  VirtualInvokeData _8_Trace;
  VirtualInvokeData _9_DebugString;
  VirtualInvokeData _10_ReturnPath;
  VirtualInvokeData _11_Prepare;
  VirtualInvokeData _12_Cleanup;
  VirtualInvokeData _13_Initialize;
  VirtualInvokeData _14_CalculateStep;
  VirtualInvokeData _15_get_hasEndPoint;
  VirtualInvokeData _16_CompletePathIfStartIsValidTarget;
};

struct __MultiTargetPath_Il2CppClass {
  Il2CppClass_1 _1;
  __MultiTargetPath_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __MultiTargetPath_Il2CppVtbl vtbl;
};

class MultiTargetPath {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C32F88;
  static inline    MultiTargetPath* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C67070;
  static inline    __MultiTargetPath_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline MultiTargetPath* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (MultiTargetPath**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __MultiTargetPath_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__MultiTargetPath_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __MultiTargetPath_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Pathfinding::PathHandler* Path__pathHandler_k__BackingField;
  ModdingAPI::Exposed::OnPathDelegate* callback;
  ModdingAPI::Exposed::OnPathDelegate* immediateCallback;
  int32_t Path_state;
  Il2CppObject* Path_stateLock;
  int32_t Path_pathCompleteState;
  System_String* Path__errorLog;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* path;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* vectorPath;
  float maxFrameTime;
  ModdingAPI::Exposed::Pathfinding::PathNode* currentR;
  float duration;
  int32_t searchIterations;
  int32_t searchedNodes;
  ModdingAPI::Exposed::System::DateTime Path__callTime_k__BackingField;
  bool pooled;
  bool hasBeenReset;
  ModdingAPI::Exposed::Pathfinding::NNConstraint* nnConstraint;
  ModdingAPI::Exposed::Pathfinding::Path* next;
  int32_t heuristic;
  float heuristicScale;
  uint16_t Path__pathID_k__BackingField;
  ModdingAPI::Exposed::Pathfinding::GraphNode* hTargetNode;
  ModdingAPI::Exposed::Pathfinding::Int3 hTarget;
  int32_t enabledTags;
  ModdingAPI::Exposed::System::Int32_array* internalTagPenalties;
  ModdingAPI::Exposed::System::Int32_array* manualTagPenalties;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* Path_claimed;
  bool Path_releasedNotSilent;
  bool recalcStartEndCosts;
  ModdingAPI::Exposed::Pathfinding::GraphNode* startNode;
  ModdingAPI::Exposed::Pathfinding::GraphNode* endNode;
  ModdingAPI::Exposed::Pathfinding::GraphNode* startHint;
  ModdingAPI::Exposed::Pathfinding::GraphNode* endHint;
  ModdingAPI::Exposed::UnityEngine::Vector3 originalStartPoint;
  ModdingAPI::Exposed::UnityEngine::Vector3 originalEndPoint;
  ModdingAPI::Exposed::UnityEngine::Vector3 startPoint;
  ModdingAPI::Exposed::UnityEngine::Vector3 endPoint;
  ModdingAPI::Exposed::Pathfinding::Int3 startIntPoint;
  bool calculatePartial;
  ModdingAPI::Exposed::Pathfinding::PathNode* partialBestTarget;
  ModdingAPI::Exposed::System::Int32_array* endNodeCosts;
  ModdingAPI::Exposed::OnPathDelegate_array* callbacks;
  ModdingAPI::Exposed::Pathfinding::GraphNode_array* targetNodes;
  int32_t targetNodeCount;
  ModdingAPI::Exposed::System::Boolean_array* targetsFound;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* targetPoints;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* originalTargetPoints;
  ModdingAPI::Exposed::System::Collections::Generic::List_T__array* vectorPaths;
  ModdingAPI::Exposed::System::Collections::Generic::List_T__array* nodePaths;
  bool pathsForAll;
  int32_t chosenTarget;
  int32_t sequentialTarget;
  int32_t heuristicMode;
  bool inverted;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C6120))(this);
  }
  void Setup(ModdingAPI::Exposed::UnityEngine::Vector3 start, ModdingAPI::Exposed::UnityEngine::Vector3_array* targets, ModdingAPI::Exposed::OnPathDelegate_array* callbackDelegates, ModdingAPI::Exposed::OnPathDelegate* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::OnPathDelegate_array*, ModdingAPI::Exposed::OnPathDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C62B0))(this, start, targets, callbackDelegates, callback);
  }
  void OnEnterPool() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C6540))(this);
  }
  void ChooseShortestPath() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C6720))(this);
  }
  void SetPathParametersForReturn(int32_t target) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C68B0))(this, target);
  }
  void ReturnPath() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C6B00))(this);
  }
  void FoundTarget(ModdingAPI::Exposed::Pathfinding::PathNode* nodeR, int32_t i) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*, ModdingAPI::Exposed::Pathfinding::PathNode*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C6DD0))(this, nodeR, i);
  }
  void RebuildOpenList() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C7040))(this);
  }
  void Prepare() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C7160))(this);
  }
  void RecalculateHTarget(bool firstTime) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C78C0))(this, firstTime);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C85E0))(this);
  }
  void Cleanup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C88C0))(this);
  }
  void ResetFlags() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C8970))(this);
  }
  void CalculateStep(int64_t targetTick) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C8A20))(this, targetTick);
  }
  void Trace(ModdingAPI::Exposed::Pathfinding::PathNode* node) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*, ModdingAPI::Exposed::Pathfinding::PathNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C8CB0))(this, node);
  }
  System_String* DebugString(int32_t logMode) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Pathfinding::MultiTargetPath*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C9000))(this, logMode);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::Pathfinding::MultiTargetPath* Construct(ModdingAPI::Exposed::UnityEngine::Vector3_array* startPoints, ModdingAPI::Exposed::UnityEngine::Vector3 target, ModdingAPI::Exposed::OnPathDelegate_array* callbackDelegates, ModdingAPI::Exposed::OnPathDelegate* callback) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::MultiTargetPath*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::OnPathDelegate_array*, ModdingAPI::Exposed::OnPathDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C6150))(startPoints, target, callbackDelegates, callback);
  }
  static inline ModdingAPI::Exposed::Pathfinding::MultiTargetPath* Construct(ModdingAPI::Exposed::UnityEngine::Vector3 start, ModdingAPI::Exposed::UnityEngine::Vector3_array* targets, ModdingAPI::Exposed::OnPathDelegate_array* callbackDelegates, ModdingAPI::Exposed::OnPathDelegate* callback) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::MultiTargetPath*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::OnPathDelegate_array*, ModdingAPI::Exposed::OnPathDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25C61A0))(start, targets, callbackDelegates, callback);
  }
};
}