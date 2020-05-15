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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector2.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Color.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"


namespace ModdingAPI::Exposed::Pathfinding::RVO::Sampled {
struct __Agent_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Diagnostics::Stopwatch* watch1;
  ModdingAPI::Exposed::System::Diagnostics::Stopwatch* watch2;
  float DesiredVelocityWeight;
  float DesiredVelocityScale;
  float GlobalIncompressibility;
};

struct __Agent_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_InterpolatedPosition;
  VirtualInvokeData _5_get_Position;
  VirtualInvokeData _6_SetYPosition;
  VirtualInvokeData _7_get_DesiredVelocity;
  VirtualInvokeData _8_set_DesiredVelocity;
  VirtualInvokeData _9_get_Velocity;
  VirtualInvokeData _10_set_Velocity;
  VirtualInvokeData _11_get_Locked;
  VirtualInvokeData _12_set_Locked;
  VirtualInvokeData _13_get_Radius;
  VirtualInvokeData _14_set_Radius;
  VirtualInvokeData _15_get_Height;
  VirtualInvokeData _16_set_Height;
  VirtualInvokeData _17_get_MaxSpeed;
  VirtualInvokeData _18_set_MaxSpeed;
  VirtualInvokeData _19_get_NeighbourDist;
  VirtualInvokeData _20_set_NeighbourDist;
  VirtualInvokeData _21_get_AgentTimeHorizon;
  VirtualInvokeData _22_set_AgentTimeHorizon;
  VirtualInvokeData _23_get_ObstacleTimeHorizon;
  VirtualInvokeData _24_set_ObstacleTimeHorizon;
  VirtualInvokeData _25_get_Layer;
  VirtualInvokeData _26_set_Layer;
  VirtualInvokeData _27_get_CollidesWith;
  VirtualInvokeData _28_set_CollidesWith;
  VirtualInvokeData _29_get_DebugDraw;
  VirtualInvokeData _30_set_DebugDraw;
  VirtualInvokeData _31_get_MaxNeighbours;
  VirtualInvokeData _32_set_MaxNeighbours;
  VirtualInvokeData _33_get_NeighbourObstacles;
  VirtualInvokeData _34_Teleport;
};

struct __Agent_Il2CppClass {
  Il2CppClass_1 _1;
  __Agent_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Agent_Il2CppVtbl vtbl;
};

class Agent {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C60A08;
  static inline    __Agent_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Agent_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Agent_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Agent_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Vector3 smoothPos;
  ModdingAPI::Exposed::UnityEngine::Vector3 _Position_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Vector3 _DesiredVelocity_k__BackingField;
  float radius;
  float height;
  float maxSpeed;
  float neighbourDist;
  float agentTimeHorizon;
  float obstacleTimeHorizon;
  float weight;
  bool locked;
  int32_t layer;
  int32_t collidesWith;
  int32_t maxNeighbours;
  ModdingAPI::Exposed::UnityEngine::Vector3 position;
  ModdingAPI::Exposed::UnityEngine::Vector3 desiredVelocity;
  ModdingAPI::Exposed::UnityEngine::Vector3 prevSmoothPos;
  int32_t _Layer_k__BackingField;
  int32_t _CollidesWith_k__BackingField;
  bool _Locked_k__BackingField;
  float _Radius_k__BackingField;
  float _Height_k__BackingField;
  float _MaxSpeed_k__BackingField;
  float _NeighbourDist_k__BackingField;
  float _AgentTimeHorizon_k__BackingField;
  float _ObstacleTimeHorizon_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Vector3 _Velocity_k__BackingField;
  bool _DebugDraw_k__BackingField;
  int32_t _MaxNeighbours_k__BackingField;
  ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent* next;
  ModdingAPI::Exposed::UnityEngine::Vector3 velocity;
  ModdingAPI::Exposed::UnityEngine::Vector3 newVelocity;
  ModdingAPI::Exposed::Pathfinding::RVO::Simulator* simulator;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* neighbours;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* neighbourDists;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* obstaclesBuffered;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* obstacles;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* obstacleDists;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Vector3 get_Position() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x155C9B0))(this);
  }
  void set_Position(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2550720))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_InterpolatedPosition() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B780))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_DesiredVelocity() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x155CA50))(this);
  }
  void set_DesiredVelocity(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B7A0))(this, value);
  }
  void Teleport(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B7B0))(this, pos);
  }
  void SetYPosition(float yCoordinate) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B7E0))(this, yCoordinate);
  }
  int32_t get_Layer() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307630))(this);
  }
  void set_Layer(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A50))(this, value);
  }
  int32_t get_CollidesWith() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A60))(this);
  }
  void set_CollidesWith(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A70))(this, value);
  }
  bool get_Locked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187F620))(this);
  }
  void set_Locked(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B830))(this, value);
  }
  float get_Radius() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1ED7E80))(this);
  }
  void set_Radius(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B840))(this, value);
  }
  float get_Height() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B850))(this);
  }
  void set_Height(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B860))(this, value);
  }
  float get_MaxSpeed() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C97620))(this);
  }
  void set_MaxSpeed(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B870))(this, value);
  }
  float get_NeighbourDist() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F1780))(this);
  }
  void set_NeighbourDist(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B880))(this, value);
  }
  float get_AgentTimeHorizon() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1C91720))(this);
  }
  void set_AgentTimeHorizon(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B890))(this, value);
  }
  float get_ObstacleTimeHorizon() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B8A0))(this);
  }
  void set_ObstacleTimeHorizon(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B8B0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_Velocity() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B8C0))(this);
  }
  void set_Velocity(ModdingAPI::Exposed::UnityEngine::Vector3 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B8E0))(this, value);
  }
  bool get_DebugDraw() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B900))(this);
  }
  void set_DebugDraw(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B910))(this, value);
  }
  int32_t get_MaxNeighbours() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307720))(this);
  }
  void set_MaxNeighbours(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B920))(this, value);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* get_NeighbourObstacles() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Vector3 pos) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255B930))(this, pos);
  }
  void BufferSwitch() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255BFC0))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255C070))(this);
  }
  void Interpolate(float t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255C1D0))(this, t);
  }
  void CalculateNeighbours() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255C310))(this);
  }
  float Sqr(float x) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255C4D0))(this, x);
  }
  float InsertAgentNeighbour(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent* agent, float rangeSq) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255C4E0))(this, agent, rangeSq);
  }
  void InsertObstacleNeighbour(ModdingAPI::Exposed::Pathfinding::RVO::ObstacleVertex* ob1, float rangeSq) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, ModdingAPI::Exposed::Pathfinding::RVO::ObstacleVertex*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255C9A0))(this, ob1, rangeSq);
  }
  void CalculateVelocity(ModdingAPI::Exposed::Pathfinding::RVO::Simulator::WorkerContext* context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, ModdingAPI::Exposed::Pathfinding::RVO::Simulator::WorkerContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255DC70))(this, context);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 Trace(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent::VO_array* vos, int32_t voCount, ModdingAPI::Exposed::UnityEngine::Vector2 p, float cutoff, float score) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent*, ModdingAPI::Exposed::Pathfinding::RVO::Sampled::Agent::VO_array*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector2, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25603C0))(this, vos, voCount, p, cutoff, score);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Diagnostics::Stopwatch*> watch1 = __CppStaticProperty<ModdingAPI::Exposed::System::Diagnostics::Stopwatch*>(
   []() { return &GetStaticClassInstance()->pStaticFields->watch1; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Diagnostics::Stopwatch*> watch2 = __CppStaticProperty<ModdingAPI::Exposed::System::Diagnostics::Stopwatch*>(
   []() { return &GetStaticClassInstance()->pStaticFields->watch2; }
  );
  static inline __CppStaticProperty<float> DesiredVelocityWeight = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->DesiredVelocityWeight; }
  );
  static inline __CppStaticProperty<float> DesiredVelocityScale = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->DesiredVelocityScale; }
  );
  static inline __CppStaticProperty<float> GlobalIncompressibility = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->GlobalIncompressibility; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 To3D(ModdingAPI::Exposed::UnityEngine::Vector2 p) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255CDD0))(p);
  }
  static inline void DrawCircle(ModdingAPI::Exposed::UnityEngine::Vector2 _p, float radius, ModdingAPI::Exposed::UnityEngine::Color col) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, float, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255CE00))(_p, radius, col);
  }
  static inline void DrawCircle(ModdingAPI::Exposed::UnityEngine::Vector2 _p, float radius, float a0, float a1, ModdingAPI::Exposed::UnityEngine::Color col) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, float, float, float, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255CEF0))(_p, radius, a0, a1, col);
  }
  static inline void DrawVO(ModdingAPI::Exposed::UnityEngine::Vector2 circleCenter, float radius, ModdingAPI::Exposed::UnityEngine::Vector2 origin) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, float, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255D200))(circleCenter, radius, origin);
  }
  static inline void DrawCross(ModdingAPI::Exposed::UnityEngine::Vector2 p, float size) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255D8A0))(p, size);
  }
  static inline void DrawCross(ModdingAPI::Exposed::UnityEngine::Vector2 p, ModdingAPI::Exposed::UnityEngine::Color col, float size) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Color, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x255D980))(p, col, size);
  }
  static inline ModdingAPI::Exposed::UnityEngine::Color Rainbow(float v) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2560360))(v);
  }
  static inline bool IntersectionFactor(ModdingAPI::Exposed::UnityEngine::Vector2 start1, ModdingAPI::Exposed::UnityEngine::Vector2 dir1, ModdingAPI::Exposed::UnityEngine::Vector2 start2, ModdingAPI::Exposed::UnityEngine::Vector2 dir2, float factor) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2560A00))(start1, dir1, start2, dir2, factor);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2560A90))();
  }
};
}