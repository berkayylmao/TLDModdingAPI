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
#include "ModdingAPI.Exposed.UnityEngine.Playables.PlayableHandle.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Playables.Playable.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Playables.PlayableGraph.hpp"

namespace ModdingAPI::Exposed::UnityEngine::Playables {
struct __PlayableHandle_Il2CppObject {
  intptr_t m_Handle;
  uint32_t m_Version;
};
struct __PlayableHandle_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle m_Null;
};

struct __PlayableHandle_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Equals;
};

struct __PlayableHandle_Il2CppClass {
  Il2CppClass_1 _1;
  __PlayableHandle_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PlayableHandle_Il2CppVtbl vtbl;
};

class PlayableHandle {
  static constexpr uint64_t _rvaClassInstance     = 0x3C7E098;
  static inline    __PlayableHandle_Il2CppClass* _pStaticClassInstance = nullptr;

public:
  // Static class getter:
  static inline __PlayableHandle_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PlayableHandle_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Member fields:
  intptr_t m_Handle;
  uint32_t m_Version;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Playables::Playable GetInput(int32_t inputPort) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::Playable(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x443C0))(this, inputPort);
  }
  bool SetInputWeight(int32_t inputIndex, float weight) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x443F0))(this, inputIndex, weight);
  }
  float GetInputWeight(int32_t inputIndex) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44450))(this, inputIndex);
  }
  bool Equals(Il2CppObject* p) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x444A0))(this, p);
  }
  bool Equals(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44580))(this, other);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x445A0))(this);
  }
  bool CheckInputBounds(int32_t inputIndex) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x445B0))(this, inputIndex);
  }
  bool CheckInputBounds(int32_t inputIndex, bool acceptAny) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x445C0))(this, inputIndex, acceptAny);
  }
  bool IsValid() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x445D0))(this);
  }
  ModdingAPI::Exposed::System::Type* GetPlayableType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x445E0))(this);
  }
  void SetScriptInstance(Il2CppObject* scriptInstance) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x445F0))(this, scriptInstance);
  }
  int32_t GetPlayState() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44600))(this);
  }
  void Play() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44610))(this);
  }
  void Pause() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44620))(this);
  }
  void SetSpeed(double value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44630))(this, value);
  }
  double GetTime() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44640))(this);
  }
  void SetTime(double value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44650))(this, value);
  }
  double GetDuration() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44660))(this);
  }
  void SetDuration(double value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44670))(this, value);
  }
  void SetPropagateSetTime(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44680))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph GetGraph() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44690))(this);
  }
  int32_t GetInputCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x446C0))(this);
  }
  void SetInputCount(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x446D0))(this, value);
  }
  void SetInputWeight(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle input, float weight) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x446E0))(this, input, weight);
  }
  double GetPreviousTime() {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44700))(this);
  }
  void SetTraversalMode(int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44710))(this, mode);
  }
  Il2CppObject* GetScriptInstance() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44720))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle GetInputHandle(int32_t index) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x443C0))(this, index);
  }
  void SetInputWeightFromIndex(int32_t index, float weight) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44730))(this, index, weight);
  }
  float GetInputWeightFromIndex(int32_t index) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x44740))(this, index);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle get_Null() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x107A580))();
  }
  static inline bool CompareVersion(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle lhs, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle rhs) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107A7F0))(lhs, rhs);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x107BD80))();
  }
  static inline bool IsValid_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107BE10))(_unity_self);
  }
  static inline ModdingAPI::Exposed::System::Type* GetPlayableType_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107BE60))(_unity_self);
  }
  static inline void SetScriptInstance_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self, Il2CppObject* scriptInstance) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107BEB0))(_unity_self, scriptInstance);
  }
  static inline int32_t GetPlayState_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107BF10))(_unity_self);
  }
  static inline void Play_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107BF60))(_unity_self);
  }
  static inline void Pause_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107BFB0))(_unity_self);
  }
  static inline void SetSpeed_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self, double value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C000))(_unity_self, value);
  }
  static inline double GetTime_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C060))(_unity_self);
  }
  static inline void SetTime_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self, double value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C0B0))(_unity_self, value);
  }
  static inline double GetDuration_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C110))(_unity_self);
  }
  static inline void SetDuration_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self, double value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, double)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C160))(_unity_self, value);
  }
  static inline void SetPropagateSetTime_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self, bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C1C0))(_unity_self, value);
  }
  static inline void GetGraph_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, ModdingAPI::Exposed::UnityEngine::Playables::PlayableGraph)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C220))(_unity_self, ret);
  }
  static inline int32_t GetInputCount_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C280))(_unity_self);
  }
  static inline void SetInputCount_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self, int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C2D0))(_unity_self, value);
  }
  static inline void SetInputWeight_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle input, float weight) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C330))(_unity_self, input, weight);
  }
  static inline double GetPreviousTime_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self) {
    return reinterpret_cast<double(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C3A0))(_unity_self);
  }
  static inline void SetTraversalMode_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self, int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C3F0))(_unity_self, mode);
  }
  static inline Il2CppObject* GetScriptInstance_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C450))(_unity_self);
  }
  static inline void GetInputHandle_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self, int32_t index, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, int32_t, ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C4A0))(_unity_self, index, ret);
  }
  static inline void SetInputWeightFromIndex_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self, int32_t index, float weight) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C510))(_unity_self, index, weight);
  }
  static inline float GetInputWeightFromIndex_Injected(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle _unity_self, int32_t index) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Playables::PlayableHandle, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x107C580))(_unity_self, index);
  }

};
}