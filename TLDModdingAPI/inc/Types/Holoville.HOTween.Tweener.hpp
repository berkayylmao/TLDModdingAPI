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


namespace ModdingAPI::Exposed::Holoville::HOTween {
struct __Tweener_Il2CppStaticFields {
};

struct __Tweener_Il2CppVtbl {
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

struct __Tweener_Il2CppClass {
  Il2CppClass_1 _1;
  __Tweener_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Tweener_Il2CppVtbl vtbl;
};

class Tweener {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C847C8;
  static inline    __Tweener_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Tweener_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Tweener_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Tweener_Il2CppClass* __pClassInstance;
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
  float _elapsedDelay;
  int32_t _easeType;
  ModdingAPI::Exposed::UnityEngine::AnimationCurve* _easeAnimationCurve;
  float _easeOvershootOrAmplitude;
  float _easePeriod;
  bool _pixelPerfect;
  bool _speedBased;
  float _delay;
  float delayCount;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallback* onPluginOverwritten;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::TweenCallbackWParms* onPluginOverwrittenWParms;
  ModdingAPI::Exposed::System::Object_array* onPluginOverwrittenParms;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* plugins;
  Il2CppObject* _target;
  bool isPartialled;
  int32_t _originalEaseType;
  ModdingAPI::Exposed::Holoville::HOTween::Plugins::PlugVector3Path* pv3Path;
  bool _isFrom_k__BackingField;

  // Member methods:
  bool get_isFrom() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4012F0))(this);
  }
  void set_isFrom(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x401300))(this, value);
  }
  float get_easeOvershootOrAmplitude() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x79CEB0))(this);
  }
  float get_easePeriod() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F4550))(this);
  }
  Il2CppObject* get_target() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153E4A0))(this);
  }
  bool get_pixelPerfect() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153E4B0))(this);
  }
  bool get_speedBased() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153E4C0))(this);
  }
  void ::ctor(Il2CppObject* p_target, float p_duration, ModdingAPI::Exposed::Holoville::HOTween::TweenParms* p_parms) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, Il2CppObject*, float, ModdingAPI::Exposed::Holoville::HOTween::TweenParms*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153E4D0))(this, p_target, p_duration, p_parms);
  }
  void Kill(bool p_autoRemoveFromHOTween) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153E720))(this, p_autoRemoveFromHOTween);
  }
  void Play(bool p_skipDelay) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153E910))(this, p_skipDelay);
  }
  void PlayForward(bool p_skipDelay) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153E990))(this, p_skipDelay);
  }
  void Rewind() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153EA00))(this);
  }
  void Rewind(bool p_skipDelay) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153EA10))(this, p_skipDelay);
  }
  void Restart() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153EA20))(this);
  }
  void Restart(bool p_skipDelay) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153EA50))(this, p_skipDelay);
  }
  void RestartIncremental() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153EA80))(this);
  }
  void Complete(bool p_autoRemoveFromHOTween) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153EBA0))(this, p_autoRemoveFromHOTween);
  }
  bool IsTweening(Il2CppObject* p_target) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153EC30))(this, p_target);
  }
  bool IsTweening(System_String* p_id) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153EC60))(this, p_id);
  }
  bool IsTweening(int32_t p_id) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153ECD0))(this, p_id);
  }
  bool IsLinkedTo(Il2CppObject* p_target) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153ED00))(this, p_target);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetTweenTargets() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153ED20))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetTweensById(System_String* p_id) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153EE90))(this, p_id);
  }
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* GetTweensByIntId(int32_t p_intId) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153F030))(this, p_intId);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetPointOnPath(float t) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153F1B0))(this, t);
  }
  ModdingAPI::Exposed::Holoville::HOTween::Tweener* UsePartialPath(int32_t p_waypointId0, int32_t p_waypointId1) {
    return reinterpret_cast<ModdingAPI::Exposed::Holoville::HOTween::Tweener*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153F320))(this, p_waypointId0, p_waypointId1);
  }
  ModdingAPI::Exposed::Holoville::HOTween::Tweener* UsePartialPath(int32_t p_waypointId0, int32_t p_waypointId1, float p_newDuration, int32_t p_newEaseType) {
    return reinterpret_cast<ModdingAPI::Exposed::Holoville::HOTween::Tweener*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, int32_t, int32_t, float, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153F360))(this, p_waypointId0, p_waypointId1, p_newDuration, p_newEaseType);
  }
  ModdingAPI::Exposed::Holoville::HOTween::Plugins::PlugVector3Path* GetPlugVector3PathPlugin() {
    return reinterpret_cast<ModdingAPI::Exposed::Holoville::HOTween::Plugins::PlugVector3Path*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153F670))(this);
  }
  bool Update(float p_shortElapsed, bool p_forceUpdate, bool p_isStartupIteration, bool p_ignoreCallbacks) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, float, bool, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153F790))(this, p_shortElapsed, p_forceUpdate, p_isStartupIteration, p_ignoreCallbacks);
  }
  bool Update(float p_shortElapsed, bool p_forceUpdate, bool p_isStartupIteration, bool p_ignoreCallbacks, bool p_ignoreDelay) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, float, bool, bool, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153F7C0))(this, p_shortElapsed, p_forceUpdate, p_isStartupIteration, p_ignoreCallbacks, p_ignoreDelay);
  }
  void SetIncremental(int32_t p_diffIncr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153FD50))(this, p_diffIncr);
  }
  bool GoTo(float p_time, bool p_play, bool p_forceUpdate, bool p_ignoreCallbacks) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, float, bool, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153FE60))(this, p_time, p_play, p_forceUpdate, p_ignoreCallbacks);
  }
  void Rewind(bool p_play, bool p_skipDelay) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x153FF60))(this, p_play, p_skipDelay);
  }
  void SkipDelay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1540200))(this);
  }
  void Startup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1540230))(this);
  }
  void Startup(bool p_force) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1540240))(this, p_force);
  }
  void OnStart() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1540480))(this);
  }
  void OnPlay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15405A0))(this);
  }
  void FillPluginsList(ModdingAPI::Exposed::System::Collections::Generic::List_T_* p_plugs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Tweener*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15405F0))(this, p_plugs);
  }

  // Static methods:
  static inline int32_t ConvertWaypointIdToPathId(ModdingAPI::Exposed::Holoville::HOTween::Plugins::PlugVector3Path* p_plugVector3Path, int32_t p_waypointId, bool p_isStartingWp) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Plugins::PlugVector3Path*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1540700))(p_plugVector3Path, p_waypointId, p_isStartingWp);
  }
};
}