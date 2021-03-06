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


namespace ModdingAPI::Exposed::Holoville::HOTween::Core {
struct __ABSTweenComponent_Il2CppStaticFields {
};

struct __ABSTweenComponent_Il2CppVtbl {
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
  VirtualInvokeData _29_Reverse;
  VirtualInvokeData _30_Complete;
  VirtualInvokeData _31_WaitForCompletion;
  VirtualInvokeData _43_Startup;
  VirtualInvokeData _44_OnStart;
  VirtualInvokeData _45_OnPlay;
  VirtualInvokeData _65535__ctor;
};

struct __ABSTweenComponent_Il2CppClass {
  Il2CppClass_1 _1;
  __ABSTweenComponent_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ABSTweenComponent_Il2CppVtbl vtbl;
};

class ABSTweenComponent {
public:
  // Il2Cpp fields:
  __ABSTweenComponent_Il2CppClass* __pClassInstance;
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

  // Member methods:
  bool get_steadyIgnoreCallbacks() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151D00))(this);
  }
  void set_steadyIgnoreCallbacks(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151D10))(this, value);
  }
  System_String* get_id() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  int32_t get_intId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FED20))(this);
  }
  bool get_autoKillOnComplete() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x310EB0))(this);
  }
  float get_timeScale() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x56ECC0))(this);
  }
  void set_timeScale(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x88C920))(this, value);
  }
  int32_t get_loopType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F810))(this);
  }
  float get_duration() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151D20))(this);
  }
  float get_fullDuration() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3FFC40))(this);
  }
  float get_fullElapsed() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA07170))(this);
  }
  int32_t get_updateType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x36F820))(this);
  }
  int32_t get_completedLoops() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F1230))(this);
  }
  bool get_destroyed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151D30))(this);
  }
  bool get_isEmpty() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151D40))(this);
  }
  bool get_isPaused() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x57C620))(this);
  }
  bool get_isComplete() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151D50))(this);
  }
  bool get_isSequenced() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151D60))(this);
  }
  void Kill() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151D70))(this);
  }
  void Kill(bool p_autoRemoveFromHOTween) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151D90))(this, p_autoRemoveFromHOTween);
  }
  void Play() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151E50))(this);
  }
  void PlayIfPaused() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151EA0))(this);
  }
  void PlayForward() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151EE0))(this);
  }
  void PlayBackwards() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151F20))(this);
  }
  void Pause() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151F60))(this);
  }
  void Reverse(bool p_forcePlay) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151F80))(this, p_forcePlay);
  }
  void Complete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1151FF0))(this);
  }
  bool GoTo(float p_time, bool p_forceUpdate) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1152010))(this, p_time, p_forceUpdate);
  }
  bool GoTo(float p_time, bool p_forceUpdate, bool p_ignoreCallbacks) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*, float, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1152040))(this, p_time, p_forceUpdate, p_ignoreCallbacks);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* WaitForCompletion() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1152070))(this);
  }
  bool Update(float p_elapsed) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11521C0))(this, p_elapsed);
  }
  bool Update(float p_elapsed, bool p_forceUpdate) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11521F0))(this, p_elapsed, p_forceUpdate);
  }
  bool Update(float p_elapsed, bool p_forceUpdate, bool p_isStartupIteration) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*, float, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1152220))(this, p_elapsed, p_forceUpdate, p_isStartupIteration);
  }
  void Startup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1152250))(this);
  }
  void OnStart() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1152260))(this);
  }
  void OnUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1152430))(this);
  }
  void OnPluginUpdated(ModdingAPI::Exposed::Holoville::HOTween::Plugins::Core::ABSTweenPlugin* p_plugin) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*, ModdingAPI::Exposed::Holoville::HOTween::Plugins::Core::ABSTweenPlugin*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11525F0))(this, p_plugin);
  }
  void OnPause() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11527B0))(this);
  }
  void OnPlay() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1152980))(this);
  }
  void OnRewinded() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1152B50))(this);
  }
  void OnStepComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1152D10))(this);
  }
  void OnComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1152ED0))(this);
  }
  void OnCompleteDispatch() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1153010))(this);
  }
  void SetFullDuration() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11531B0))(this);
  }
  void SetElapsed() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11531E0))(this);
  }
  void SetLoops() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1153250))(this);
  }
  void ManageObjects(bool isPlay) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11533B0))(this, isPlay);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Core::ABSTweenComponent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11539D0))(this);
  }
};
}