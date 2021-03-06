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
#include "ModdingAPI.Exposed.UnityEngine.Bounds.hpp"
#include "ModdingAPI.Exposed.Pathfinding.NNInfo.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Ray.hpp"


namespace ModdingAPI::Exposed {
struct __AstarPath_Il2CppStaticFields {
  bool LoadAsyncEnabled;
  int32_t Distribution;
  System_String* Branch;
  bool HasPro;
  ModdingAPI::Exposed::AstarPath* active;
  ModdingAPI::Exposed::System::Action* OnAwakeSettings;
  ModdingAPI::Exposed::OnGraphDelegate* OnGraphPreScan;
  ModdingAPI::Exposed::OnGraphDelegate* OnGraphPostScan;
  ModdingAPI::Exposed::OnPathDelegate* OnPathPreSearch;
  ModdingAPI::Exposed::OnPathDelegate* OnPathPostSearch;
  ModdingAPI::Exposed::OnScanDelegate* OnPreScan;
  ModdingAPI::Exposed::OnScanDelegate* OnPostScan;
  ModdingAPI::Exposed::OnScanDelegate* OnLatePostScan;
  ModdingAPI::Exposed::OnScanDelegate* OnGraphsUpdated;
  ModdingAPI::Exposed::System::Action* On65KOverflow;
  ModdingAPI::Exposed::System::Action* OnThreadSafeCallback;
  ModdingAPI::Exposed::System::Threading::Thread_array* threads;
  ModdingAPI::Exposed::Pathfinding::PathThreadInfo_array* threadInfos;
  ModdingAPI::Exposed::System::Collections::IEnumerator* threadEnumerator;
  ModdingAPI::Exposed::Pathfinding::Util::LockFreeStack* pathReturnStack;
  bool isEditor;
  Il2CppObject* safeUpdateLock;
  int32_t waitForPathDepth;
};

struct __AstarPath_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AstarPath_Il2CppClass {
  Il2CppClass_1 _1;
  __AstarPath_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AstarPath_Il2CppVtbl vtbl;
};

class AstarPath {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C875A0;
  static inline    AstarPath* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C72AA8;
  static inline    __AstarPath_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline AstarPath* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (AstarPath**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __AstarPath_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AstarPath_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AstarPath_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::Pathfinding::AstarData* astarData;
  bool showNavGraphs;
  bool showUnwalkableNodes;
  int32_t debugMode;
  float debugFloor;
  float debugRoof;
  bool manualDebugFloorRoof;
  bool showSearchTree;
  float unwalkableNodeDebugSize;
  int32_t logPathResults;
  float maxNearestNodeDistance;
  bool scanOnStartup;
  bool fullGetNearestSearch;
  bool prioritizeGraphs;
  float prioritizeGraphsLimit;
  ModdingAPI::Exposed::Pathfinding::AstarColor* colorSettings;
  ModdingAPI::Exposed::System::String_array* tagNames;
  int32_t heuristic;
  float heuristicScale;
  int32_t threadCount;
  float maxFrameTime;
  int32_t minAreaSize;
  bool limitGraphUpdates;
  float maxGraphUpdateFreq;
  bool m_AwakeCalled;
  float lastScanTime;
  ModdingAPI::Exposed::Pathfinding::Path* debugPath;
  System_String* inGameDebugPath;
  bool _isScanning_k__BackingField;
  bool graphUpdateRoutineRunning;
  bool isRegisteredForUpdate;
  bool workItemsQueued;
  bool queuedWorkItemFloodFill;
  ModdingAPI::Exposed::System::Action* OnDrawGizmosCallback;
  ModdingAPI::Exposed::System::Action* OnUnloadGizmoMeshes;
  ModdingAPI::Exposed::System::Action* OnGraphsWillBeUpdated;
  ModdingAPI::Exposed::System::Action* OnGraphsWillBeUpdated2;
  ModdingAPI::Exposed::System::Collections::Generic::Queue_T_* graphUpdateQueue;
  ModdingAPI::Exposed::System::Collections::Generic::Stack_T_* floodStack;
  ModdingAPI::Exposed::Pathfinding::ThreadControlQueue* pathQueue;
  ModdingAPI::Exposed::System::Threading::Thread* graphUpdateThread;
  ModdingAPI::Exposed::Pathfinding::EuclideanEmbedding* euclideanEmbedding;
  int32_t nextNodeIndex;
  ModdingAPI::Exposed::System::Collections::Generic::Stack_T_* nodeIndexPool;
  ModdingAPI::Exposed::Pathfinding::Path* pathReturnPop;
  ModdingAPI::Exposed::System::Collections::Generic::Queue_T_* graphUpdateQueueAsync;
  ModdingAPI::Exposed::System::Collections::Generic::Queue_T_* graphUpdateQueueRegular;
  bool showGraphs;
  uint32_t lastUniqueAreaIndex;
  ModdingAPI::Exposed::System::Threading::AutoResetEvent* graphUpdateAsyncEvent;
  ModdingAPI::Exposed::System::Threading::ManualResetEvent* processingGraphUpdatesAsync;
  float lastGraphUpdate;
  uint16_t nextFreePathID;
  ModdingAPI::Exposed::System::Collections::Generic::Queue_T_* workItems;
  bool processingWorkItems;

  // Member methods:
  ModdingAPI::Exposed::System::Type_array* get_graphTypes() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type_array*(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9BE1A0))(this);
  }
  ModdingAPI::Exposed::Pathfinding::NavGraph_array* get_graphs() {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::NavGraph_array*(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB04C0))(this);
  }
  void set_graphs(ModdingAPI::Exposed::Pathfinding::NavGraph_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::Pathfinding::NavGraph_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB0630))(this, value);
  }
  float get_maxNearestNodeDistanceSqr() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB07A0))(this);
  }
  ModdingAPI::Exposed::Pathfinding::PathHandler* get_debugPathData() {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::PathHandler*(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB07B0))(this);
  }
  bool get_isScanning() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3199F0))(this);
  }
  void set_isScanning(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAFE170))(this, value);
  }
  bool get_IsAnyGraphUpdatesQueued() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB0BD0))(this);
  }
  ModdingAPI::Exposed::System::String_array* GetTagNames() {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB0C60))(this);
  }
  uint16_t GetNextPathID() {
    return reinterpret_cast<uint16_t(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB10D0))(this);
  }
  void OnDrawGizmos() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB1220))(this);
  }
  bool DrawUnwalkableNode(ModdingAPI::Exposed::Pathfinding::GraphNode* node) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::Pathfinding::GraphNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB1A80))(this, node);
  }
  void LogPathResults(ModdingAPI::Exposed::Pathfinding::Path* p) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB1F60))(this, p);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB2060))(this);
  }
  void PerformBlockingActions(bool force, bool unblockOnComplete) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB22F0))(this, force, unblockOnComplete);
  }
  void QueueWorkItemFloodFill() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB2490))(this);
  }
  void EnsureValidFloodFill() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB2560))(this);
  }
  void AddWorkItem(ModdingAPI::Exposed::AstarPath::AstarWorkItem* itm) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::AstarPath::AstarWorkItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB2580))(this, itm);
  }
  int32_t ProcessWorkItems(bool force) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AstarPath*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB2660))(this, force);
  }
  void QueueGraphUpdates() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB2900))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* DelayedGraphUpdate() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB2C10))(this);
  }
  void UpdateGraphs(ModdingAPI::Exposed::UnityEngine::Bounds bounds, float t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::UnityEngine::Bounds, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB2D60))(this, bounds, t);
  }
  void UpdateGraphs(ModdingAPI::Exposed::Pathfinding::GraphUpdateObject* ob, float t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::Pathfinding::GraphUpdateObject*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB2EF0))(this, ob, t);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* UpdateGraphsInteral(ModdingAPI::Exposed::Pathfinding::GraphUpdateObject* ob, float t) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::Pathfinding::GraphUpdateObject*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB3070))(this, ob, t);
  }
  void UpdateGraphs(ModdingAPI::Exposed::UnityEngine::Bounds bounds) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::UnityEngine::Bounds)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB31F0))(this, bounds);
  }
  void UpdateGraphs(ModdingAPI::Exposed::Pathfinding::GraphUpdateObject* ob) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::Pathfinding::GraphUpdateObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB3360))(this, ob);
  }
  void FlushGraphUpdates() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB36B0))(this);
  }
  void FlushWorkItems(bool unblockOnComplete, bool block) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB3760))(this, unblockOnComplete, block);
  }
  void QueueGraphUpdatesInternal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB37B0))(this);
  }
  bool ProcessGraphUpdates(bool force) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AstarPath*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB3BB0))(this, force);
  }
  void ProcessGraphUpdatesAsync(Il2CppObject* _astar) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB4220))(this, _astar);
  }
  void FlushThreadSafeCallbacks() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB45C0))(this);
  }
  void AwakeManual() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB48F0))(this);
  }
  void VerifyIntegrity() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB5800))(this);
  }
  void SetUpReferences() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB5B10))(this);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB5F00))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB6090))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB60B0))(this);
  }
  void FloodFill(ModdingAPI::Exposed::Pathfinding::GraphNode* seed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::Pathfinding::GraphNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB6700))(this, seed);
  }
  void FloodFill(ModdingAPI::Exposed::Pathfinding::GraphNode* seed, uint32_t area) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::Pathfinding::GraphNode*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB6730))(this, seed, area);
  }
  void FloodFill() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB6A40))(this);
  }
  int32_t GetNewNodeIndex() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB73D0))(this);
  }
  void InitializeNode(ModdingAPI::Exposed::Pathfinding::GraphNode* node) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::Pathfinding::GraphNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB74C0))(this, node);
  }
  void DestroyNode(ModdingAPI::Exposed::Pathfinding::GraphNode* node) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::Pathfinding::GraphNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB76E0))(this, node);
  }
  void BlockUntilPathQueueBlocked() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB79B0))(this);
  }
  void Scan() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB7AF0))(this);
  }
  void ScanLoop(ModdingAPI::Exposed::OnScanStatus* statusCallback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::OnScanStatus*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB7B00))(this, statusCallback);
  }
  void InterruptPathfinding() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBA050))(this);
  }
  void OnApplicationQuit() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBA560))(this);
  }
  void ReturnPaths(bool timeSlice) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBA800))(this, timeSlice);
  }
  ModdingAPI::Exposed::Pathfinding::NNInfo GetNearest(ModdingAPI::Exposed::UnityEngine::Vector3 position) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::NNInfo(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBB2D0))(this, position);
  }
  ModdingAPI::Exposed::Pathfinding::NNInfo GetNearest(ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::Pathfinding::NNConstraint* constraint) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::NNInfo(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::Pathfinding::NNConstraint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBB350))(this, position, constraint);
  }
  ModdingAPI::Exposed::Pathfinding::NNInfo GetNearest(ModdingAPI::Exposed::UnityEngine::Vector3 position, ModdingAPI::Exposed::Pathfinding::NNConstraint* constraint, ModdingAPI::Exposed::Pathfinding::GraphNode* hint) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::NNInfo(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::Pathfinding::NNConstraint*, ModdingAPI::Exposed::Pathfinding::GraphNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBB3B0))(this, position, constraint, hint);
  }
  ModdingAPI::Exposed::Pathfinding::GraphNode* GetNearest(ModdingAPI::Exposed::UnityEngine::Ray ray) {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::GraphNode*(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::UnityEngine::Ray)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBB930))(this, ray);
  }
  bool UnloadGraphs() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBBDC0))(this);
  }
  void LoadGraphs() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBC070))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AstarPath*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBC1D0))(this);
  }
  bool _OnDrawGizmos_b__101_0(ModdingAPI::Exposed::Pathfinding::GraphNode* node) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::AstarPath*, ModdingAPI::Exposed::Pathfinding::GraphNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBCD80))(this, node);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> LoadAsyncEnabled = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->LoadAsyncEnabled; }
  );
  static inline __CppStaticProperty<int32_t> Distribution = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->Distribution; }
  );
  static inline __CppStaticProperty<System_String*> Branch = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->Branch; }
  );
  static inline __CppStaticProperty<bool> HasPro = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->HasPro; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::AstarPath*> active = __CppStaticProperty<ModdingAPI::Exposed::AstarPath*>(
   []() { return &GetStaticClassInstance()->pStaticFields->active; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Action*> OnAwakeSettings = __CppStaticProperty<ModdingAPI::Exposed::System::Action*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnAwakeSettings; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::OnGraphDelegate*> OnGraphPreScan = __CppStaticProperty<ModdingAPI::Exposed::OnGraphDelegate*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnGraphPreScan; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::OnGraphDelegate*> OnGraphPostScan = __CppStaticProperty<ModdingAPI::Exposed::OnGraphDelegate*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnGraphPostScan; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::OnPathDelegate*> OnPathPreSearch = __CppStaticProperty<ModdingAPI::Exposed::OnPathDelegate*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnPathPreSearch; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::OnPathDelegate*> OnPathPostSearch = __CppStaticProperty<ModdingAPI::Exposed::OnPathDelegate*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnPathPostSearch; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::OnScanDelegate*> OnPreScan = __CppStaticProperty<ModdingAPI::Exposed::OnScanDelegate*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnPreScan; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::OnScanDelegate*> OnPostScan = __CppStaticProperty<ModdingAPI::Exposed::OnScanDelegate*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnPostScan; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::OnScanDelegate*> OnLatePostScan = __CppStaticProperty<ModdingAPI::Exposed::OnScanDelegate*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnLatePostScan; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::OnScanDelegate*> OnGraphsUpdated = __CppStaticProperty<ModdingAPI::Exposed::OnScanDelegate*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnGraphsUpdated; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Action*> On65KOverflow = __CppStaticProperty<ModdingAPI::Exposed::System::Action*>(
   []() { return &GetStaticClassInstance()->pStaticFields->On65KOverflow; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Action*> OnThreadSafeCallback = __CppStaticProperty<ModdingAPI::Exposed::System::Action*>(
   []() { return &GetStaticClassInstance()->pStaticFields->OnThreadSafeCallback; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Threading::Thread_array*> threads = __CppStaticProperty<ModdingAPI::Exposed::System::Threading::Thread_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->threads; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Pathfinding::PathThreadInfo_array*> threadInfos = __CppStaticProperty<ModdingAPI::Exposed::Pathfinding::PathThreadInfo_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->threadInfos; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::IEnumerator*> threadEnumerator = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::IEnumerator*>(
   []() { return &GetStaticClassInstance()->pStaticFields->threadEnumerator; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::Pathfinding::Util::LockFreeStack*> pathReturnStack = __CppStaticProperty<ModdingAPI::Exposed::Pathfinding::Util::LockFreeStack*>(
   []() { return &GetStaticClassInstance()->pStaticFields->pathReturnStack; }
  );
  static inline __CppStaticProperty<bool> isEditor = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->isEditor; }
  );
  static inline __CppStaticProperty<Il2CppObject*> safeUpdateLock = __CppStaticProperty<Il2CppObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->safeUpdateLock; }
  );
  static inline __CppStaticProperty<int32_t> waitForPathDepth = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->waitForPathDepth; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Version* get_Version() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Version*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB0310))();
  }
  static inline int32_t get_NumParallelThreads() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB07D0))();
  }
  static inline bool get_IsUsingMultithreading() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB08C0))();
  }
  static inline ModdingAPI::Exposed::System::String_array* FindTagNames() {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB0E20))();
  }
  static inline void AstarLog(System_String* s) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB1C60))(s);
  }
  static inline void AstarLogError(System_String* s) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB1DC0))(s);
  }
  static inline int32_t CalculateThreadCount(int32_t count) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB4690))(count);
  }
  static inline void WaitForPath(ModdingAPI::Exposed::Pathfinding::Path* p) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB94B0))(p);
  }
  static inline void RegisterSafeUpdate(ModdingAPI::Exposed::System::Action* callback, bool threadSafe) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Action*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB9AA0))(callback, threadSafe);
  }
  static inline void RegisterSafeUpdate(ModdingAPI::Exposed::System::Action* callback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Action*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FB9B40))(callback);
  }
  static inline void StartPath(ModdingAPI::Exposed::Pathfinding::Path* p, bool pushToFront) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBA080))(p, pushToFront);
  }
  static inline void CalculatePathsThreaded(Il2CppObject* _threadInfo) {
    reinterpret_cast<void(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBAA10))(_threadInfo);
  }
  static inline ModdingAPI::Exposed::System::Collections::IEnumerator* CalculatePaths(Il2CppObject* _threadInfo) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBB180))(_threadInfo);
  }
  static inline bool IsLoadingGraphsPending() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBBC50))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FBCAD0))();
  }
};
}