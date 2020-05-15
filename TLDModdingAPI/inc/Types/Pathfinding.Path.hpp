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


namespace ModdingAPI::Exposed::Pathfinding {
struct __Path_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Int32_array* ZeroTagPenalties;
};

struct __Path_Il2CppVtbl {
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
  VirtualInvokeData _12_Cleanup;
  VirtualInvokeData _65535__ctor;
};

struct __Path_Il2CppClass {
  Il2CppClass_1 _1;
  __Path_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Path_Il2CppVtbl vtbl;
};

class Path {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C842C0;
  static inline    __Path_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Path_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Path_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Path_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Pathfinding::PathHandler* _pathHandler_k__BackingField;
  ModdingAPI::Exposed::OnPathDelegate* callback;
  ModdingAPI::Exposed::OnPathDelegate* immediateCallback;
  int32_t state;
  Il2CppObject* stateLock;
  int32_t pathCompleteState;
  System_String* _errorLog;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* path;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* vectorPath;
  float maxFrameTime;
  ModdingAPI::Exposed::Pathfinding::PathNode* currentR;
  float duration;
  int32_t searchIterations;
  int32_t searchedNodes;
  ModdingAPI::Exposed::System::DateTime _callTime_k__BackingField;
  bool pooled;
  bool hasBeenReset;
  ModdingAPI::Exposed::Pathfinding::NNConstraint* nnConstraint;
  ModdingAPI::Exposed::Pathfinding::Path* next;
  int32_t heuristic;
  float heuristicScale;
  uint16_t _pathID_k__BackingField;
  ModdingAPI::Exposed::Pathfinding::GraphNode* hTargetNode;
  ModdingAPI::Exposed::Pathfinding::Int3 hTarget;
  int32_t enabledTags;
  ModdingAPI::Exposed::System::Int32_array* internalTagPenalties;
  ModdingAPI::Exposed::System::Int32_array* manualTagPenalties;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* claimed;
  bool releasedNotSilent;

  // Member methods:
  ModdingAPI::Exposed::Pathfinding::PathHandler* get_pathHandler() {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::PathHandler*(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void set_pathHandler(ModdingAPI::Exposed::Pathfinding::PathHandler* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, ModdingAPI::Exposed::Pathfinding::PathHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30D060))(this, value);
  }
  int32_t get_CompleteState() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8A0))(this);
  }
  void set_CompleteState(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36D8B0))(this, value);
  }
  bool get_error() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2541930))(this);
  }
  System_String* get_errorLog() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319960))(this);
  }
  ModdingAPI::Exposed::System::DateTime get_callTime() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319950))(this);
  }
  void set_callTime(ModdingAPI::Exposed::System::DateTime value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, ModdingAPI::Exposed::System::DateTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A40))(this, value);
  }
  bool get_recycled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7F6490))(this);
  }
  void set_recycled(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C5EC50))(this, value);
  }
  uint16_t get_pathID() {
    return reinterpret_cast<uint16_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2541940))(this);
  }
  void set_pathID(uint16_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, uint16_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2541950))(this, value);
  }
  ModdingAPI::Exposed::System::Int32_array* get_tagPenalties() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F4090))(this);
  }
  void set_tagPenalties(ModdingAPI::Exposed::System::Int32_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, ModdingAPI::Exposed::System::Int32_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2541960))(this, value);
  }
  bool get_FloodingPath() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(this);
  }
  float GetTotalLength() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2541A50))(this);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* WaitForPath() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2541BF0))(this);
  }
  uint32_t CalculateHScore(ModdingAPI::Exposed::Pathfinding::GraphNode* node) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, ModdingAPI::Exposed::Pathfinding::GraphNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2541D40))(this, node);
  }
  uint32_t GetTagPenalty(int32_t tag) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25421E0))(this, tag);
  }
  ModdingAPI::Exposed::Pathfinding::Int3 GetHTarget() {
    return reinterpret_cast<ModdingAPI::Exposed::Pathfinding::Int3(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2542220))(this);
  }
  bool CanTraverse(ModdingAPI::Exposed::Pathfinding::GraphNode* node) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, ModdingAPI::Exposed::Pathfinding::GraphNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2542240))(this, node);
  }
  uint32_t GetTraversalCost(ModdingAPI::Exposed::Pathfinding::GraphNode* node) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, ModdingAPI::Exposed::Pathfinding::GraphNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2542280))(this, node);
  }
  uint32_t GetConnectionSpecialCost(ModdingAPI::Exposed::Pathfinding::GraphNode* a, ModdingAPI::Exposed::Pathfinding::GraphNode* b, uint32_t currentCost) {
    return reinterpret_cast<uint32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, ModdingAPI::Exposed::Pathfinding::GraphNode*, ModdingAPI::Exposed::Pathfinding::GraphNode*, uint32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8358C0))(this, a, b, currentCost);
  }
  bool IsDone() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1088E60))(this);
  }
  void AdvanceState(int32_t s) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25422D0))(this, s);
  }
  int32_t GetState() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F810))(this);
  }
  void LogError(System_String* msg) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2542440))(this, msg);
  }
  void ForceLogError(System_String* msg) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25425F0))(this, msg);
  }
  void Log(System_String* msg) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25426B0))(this, msg);
  }
  void Error() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25427C0))(this);
  }
  void ErrorCheck() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25427D0))(this);
  }
  void OnEnterPool() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2542930))(this);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2542A30))(this);
  }
  bool HasExceededTime(int32_t searchedNodes, int64_t targetTime) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, int32_t, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2542E10))(this, searchedNodes, targetTime);
  }
  void Claim(Il2CppObject* o) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2542EC0))(this, o);
  }
  void ReleaseSilent(Il2CppObject* o) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2543030))(this, o);
  }
  void Release(Il2CppObject* o, bool silent) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, Il2CppObject*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2543040))(this, o, silent);
  }
  void Trace(ModdingAPI::Exposed::Pathfinding::PathNode* from) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, ModdingAPI::Exposed::Pathfinding::PathNode*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2543260))(this, from);
  }
  void DebugStringPrefix(int32_t logMode, ModdingAPI::Exposed::System::Text::StringBuilder* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, int32_t, ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25437C0))(this, logMode, text);
  }
  void DebugStringSuffix(int32_t logMode, ModdingAPI::Exposed::System::Text::StringBuilder* text) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, int32_t, ModdingAPI::Exposed::System::Text::StringBuilder*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2543990))(this, logMode, text);
  }
  System_String* DebugString(int32_t logMode) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2543C70))(this, logMode);
  }
  void ReturnPath() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2543D80))(this);
  }
  void PrepareBase(ModdingAPI::Exposed::Pathfinding::PathHandler* pathHandler) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*, ModdingAPI::Exposed::Pathfinding::PathHandler*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2543DA0))(this, pathHandler);
  }
  void Cleanup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::Path*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25441E0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*> ZeroTagPenalties = __CppStaticProperty<ModdingAPI::Exposed::System::Int32_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->ZeroTagPenalties; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2544420))();
  }
};
}