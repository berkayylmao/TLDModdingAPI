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


namespace ModdingAPI::Exposed::Holoville::HOTween {
struct __Sequence_Il2CppStaticFields {
};

struct __Sequence_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_steadyIgnoreCallbacks;
  VirtualInvokeData _5_set_steadyIgnoreCallbacks;
  VirtualInvokeData _6_get_id;
  VirtualInvokeData _7_get_intId;
  VirtualInvokeData _8_get_autoKillOnComplete;
  VirtualInvokeData _9_get_timeScale;
  VirtualInvokeData _10_set_timeScale;
  VirtualInvokeData _11_get_loopType;
  VirtualInvokeData _12_get_duration;
  VirtualInvokeData _13_get_fullDuration;
  VirtualInvokeData _14_get_fullElapsed;
  VirtualInvokeData _15_get_updateType;
  VirtualInvokeData _16_get_completedLoops;
  VirtualInvokeData _17_get_isEmpty;
  VirtualInvokeData _18_get_isPaused;
  VirtualInvokeData _19_get_isComplete;
  VirtualInvokeData _20_get_isSequenced;
  VirtualInvokeData _21_Kill;
  VirtualInvokeData _22_Kill;
  VirtualInvokeData _23_Play;
  VirtualInvokeData _24_PlayForward;
  VirtualInvokeData _25_PlayBackwards;
  VirtualInvokeData _26_Pause;
  VirtualInvokeData _27_Rewind;
  VirtualInvokeData _28_Restart;
  VirtualInvokeData _29_Reverse;
  VirtualInvokeData _30_Complete;
  VirtualInvokeData _31_WaitForCompletion;
  VirtualInvokeData _32_IsTweening;
  VirtualInvokeData _33_IsTweening;
  VirtualInvokeData _34_IsTweening;
  VirtualInvokeData _35_IsLinkedTo;
  VirtualInvokeData _36_GetTweenTargets;
  VirtualInvokeData _37_GetTweensById;
  VirtualInvokeData _38_GetTweensByIntId;
  VirtualInvokeData _39_Complete;
  VirtualInvokeData _40_Update;
  VirtualInvokeData _41_SetIncremental;
  VirtualInvokeData _42_GoTo;
  VirtualInvokeData _43_Startup;
  VirtualInvokeData _44_OnStart;
  VirtualInvokeData _45_OnPlay;
  VirtualInvokeData _46_FillPluginsList;
};

struct __Sequence_Il2CppClass {
  Il2CppClass_1 _1;
  __Sequence_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Sequence_Il2CppVtbl vtbl;
};

class Sequence {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C83FE8;
  static inline    __Sequence_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Sequence_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Sequence_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Sequence_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* _id;
  int32_t _intId;
  bool _autoKillOnComplete;
  bool _enabled;
  float _timeScale;
  int32_t _loops;
  int32_t _loopType;
  int32_t _updateType;
  bool _isPaused;
  bool ignoreCallbacks;
  bool _steadyIgnoreCallbacks;
  ModdingAPI::Exposed::Holoville::HOTween::Sequence* contSequence;
  bool startupDone;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallback* onStart;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallbackWParms* onStartWParms;
  ModdingAPI::Exposed::System::Object_array* onStartParms;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallback* onUpdate;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallbackWParms* onUpdateWParms;
  ModdingAPI::Exposed::System::Object_array* onUpdateParms;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallback* onPluginUpdated;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallbackWParms* onPluginUpdatedWParms;
  ModdingAPI::Exposed::System::Object_array* onPluginUpdatedParms;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallback* onPause;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallbackWParms* onPauseWParms;
  ModdingAPI::Exposed::System::Object_array* onPauseParms;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallback* onPlay;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallbackWParms* onPlayWParms;
  ModdingAPI::Exposed::System::Object_array* onPlayParms;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallback* onRewinded;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallbackWParms* onRewindedWParms;
  ModdingAPI::Exposed::System::Object_array* onRewindedParms;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallback* onStepComplete;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallbackWParms* onStepCompleteWParms;
  ModdingAPI::Exposed::System::Object_array* onStepCompleteParms;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallback* onComplete;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallbackWParms* onCompleteWParms;
  ModdingAPI::Exposed::System::Object_array* onCompleteParms;
  int32_t _completedLoops;
  float _duration;
  float _originalDuration;
  float _originalNonSpeedBasedDuration;
  float _fullDuration;
  float _elapsed;
  float _fullElapsed;
  bool _destroyed;
  bool _isEmpty;
  bool _isReversed;
  bool _isLoopingBack;
  bool _hasStarted;
  bool _isComplete;
  float prevFullElapsed;
  int32_t prevCompletedLoops;
  bool manageBehaviours;
  bool manageGameObjects;
  ModdingAPI::Exposed::UnityEngine::Behaviour_array* managedBehavioursOn;
  ModdingAPI::Exposed::UnityEngine::Behaviour_array* managedBehavioursOff;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* managedGameObjectsOn;
  ModdingAPI::Exposed::UnityEngine::GameObject_array* managedGameObjectsOff;
  ModdingAPI::Exposed::System::Boolean_array* managedBehavioursOriginalState;
  ModdingAPI::Exposed::System::Boolean_array* managedGameObjectsOriginalState;
  bool hasCallbacks;
  int32_t prevIncrementalCompletedLoops;
  float prevElapsed;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* items;

  // Member methods:
  bool get_steadyIgnoreCallbacks() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151D00))(this);
  }
  void set_steadyIgnoreCallbacks(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1179510))(this, value);
  }
  void Kill(bool p_autoRemoveFromHOTween) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1179630))(this, p_autoRemoveFromHOTween);
  }
  void Rewind() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1179780))(this);
  }
  void Restart() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1179790))(this);
  }
  bool IsTweening(Il2CppObject* p_target) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1179800))(this, p_target);
  }
  bool IsTweening(System_String* p_id) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1179930))(this, p_id);
  }
  bool IsTweening(int32_t p_id) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1179AB0))(this, p_id);
  }
  bool IsLinkedTo(Il2CppObject* p_target) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1179BF0))(this, p_target);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetTweenTargets() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1179D20))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetTweenersByTarget(Il2CppObject* p_target) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1179F80))(this, p_target);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetTweensById(System_String* p_id) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x117A230))(this, p_id);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetTweensByIntId(int32_t p_intId) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x117A4D0))(this, p_intId);
  }
  void Remove(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent* p_tween) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x117A750))(this, p_tween);
  }
  void Complete(bool p_autoRemoveFromHOTween) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x117A8A0))(this, p_autoRemoveFromHOTween);
  }
  bool Update(float p_shortElapsed, bool p_forceUpdate, bool p_isStartupIteration, bool p_ignoreCallbacks) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, float, bool, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x117A920))(this, p_shortElapsed, p_forceUpdate, p_isStartupIteration, p_ignoreCallbacks);
  }
  void SetIncremental(int32_t p_diffIncr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x117B4C0))(this, p_diffIncr);
  }
  bool GoTo(float p_time, bool p_play, bool p_forceUpdate, bool p_ignoreCallbacks) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, float, bool, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x117B5F0))(this, p_time, p_play, p_forceUpdate, p_ignoreCallbacks);
  }
  void Rewind(bool p_play) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x117B6F0))(this, p_play);
  }
  void TweenStartupIteration() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x117B940))(this);
  }
  void Startup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x117BB70))(this);
  }
  void FillPluginsList(ModdingAPI::Exposed::System::Collections::Generic::List_T_* p_plugs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Sequence*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x117BB90))(this, p_plugs);
  }
};
}