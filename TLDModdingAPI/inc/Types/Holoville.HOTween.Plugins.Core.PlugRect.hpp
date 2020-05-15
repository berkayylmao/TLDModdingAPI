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
#include "ModdingAPI.Exposed.UnityEngine.Rect.hpp"


namespace ModdingAPI::Exposed::Holoville::HOTween::Plugins::Core {
struct __PlugRect_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Type_array* validPropTypes;
  ModdingAPI::Exposed::System::Type_array* validValueTypes;
};

struct __PlugRect_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_startVal;
  VirtualInvokeData _5_set_startVal;
  VirtualInvokeData _6_set_endVal;
  VirtualInvokeData _7_get_pluginId;
  VirtualInvokeData _8_Init;
  VirtualInvokeData _9_ValidateTarget;
  VirtualInvokeData _10_DoUpdate;
  VirtualInvokeData _11_Rewind;
  VirtualInvokeData _12_Complete;
  VirtualInvokeData _13_GetSpeedBasedDuration;
  VirtualInvokeData _14_SetChangeVal;
  VirtualInvokeData _15_SetIncremental;
  VirtualInvokeData _16_SetIncrementalRestart;
  VirtualInvokeData _17_SetValue;
  VirtualInvokeData _18_SetValue;
  VirtualInvokeData _19_SetValue;
  VirtualInvokeData _20_SetValue;
  VirtualInvokeData _21_SetValue;
  VirtualInvokeData _22_SetValue;
  VirtualInvokeData _23_SetValue;
  VirtualInvokeData _24_GetValue;
};

struct __PlugRect_Il2CppClass {
  Il2CppClass_1 _1;
  __PlugRect_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PlugRect_Il2CppVtbl vtbl;
};

class PlugRect {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C84050;
  static inline    __PlugRect_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __PlugRect_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PlugRect_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PlugRect_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  Il2CppObject* _startVal;
  Il2CppObject* _endVal;
  float _duration;
  bool ABSTweenPlugin__initialized;
  bool ABSTweenPlugin__easeReversed;
  System_String* _propName;
  ModdingAPI::Exposed::System::Type* targetType;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::EaseFunc* ease;
  bool isRelative;
  bool ignoreAccessor;
  int32_t ABSTweenPlugin_easeType;
  ModdingAPI::Exposed::Holoville::HOTween::Core::EaseInfo* ABSTweenPlugin_easeInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Core::Easing::EaseCurve* ABSTweenPlugin_easeCurve;
  bool wasStarted;
  bool ABSTweenPlugin_speedBasedDurationWasSet;
  int32_t ABSTweenPlugin_prevCompletedLoops;
  bool ABSTweenPlugin__useSpeedTransformAccessors;
  ModdingAPI::Exposed::UnityEngine::Transform* ABSTweenPlugin__transformTarget;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::HOAction_T_* ABSTweenPlugin__setTransformVector3;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::HOFunc_T_* ABSTweenPlugin__getTransformVector3;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::HOAction_T_* ABSTweenPlugin__setTransformQuaternion;
  ModdingAPI::Exposed::Holoville::HOTween::Core::TweenDelegate::HOFunc_T_* ABSTweenPlugin__getTransformQuaternion;
  ModdingAPI::Exposed::System::Reflection::PropertyInfo* propInfo;
  ModdingAPI::Exposed::System::Reflection::FieldInfo* fieldInfo;
  ModdingAPI::Exposed::Holoville::HOTween::Tweener* tweenObj;
  ModdingAPI::Exposed::UnityEngine::Rect typedStartVal;
  ModdingAPI::Exposed::UnityEngine::Rect typedEndVal;
  ModdingAPI::Exposed::UnityEngine::Rect diffChangeVal;

  // Member methods:
  Il2CppObject* get_startVal() {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Plugins::Core::PlugRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void set_startVal(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Plugins::Core::PlugRect*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1171720))(this, value);
  }
  void set_endVal(Il2CppObject* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Plugins::Core::PlugRect*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11718D0))(this, value);
  }
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Rect p_endVal, bool p_isRelative) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Plugins::Core::PlugRect*, ModdingAPI::Exposed::UnityEngine::Rect, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x11719A0))(this, p_endVal, p_isRelative);
  }
  float GetSpeedBasedDuration(float p_speed) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Plugins::Core::PlugRect*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1171A50))(this, p_speed);
  }
  void SetChangeVal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Plugins::Core::PlugRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1171B50))(this);
  }
  void SetIncremental(int32_t p_diffIncr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Plugins::Core::PlugRect*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1171C50))(this, p_diffIncr);
  }
  void SetIncrementalRestart() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Plugins::Core::PlugRect*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1171D10))(this);
  }
  void DoUpdate(float p_totElapsed) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Holoville::HOTween::Plugins::Core::PlugRect*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1171DE0))(this, p_totElapsed);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Type_array*> validPropTypes = __CppStaticProperty<ModdingAPI::Exposed::System::Type_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->validPropTypes; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Type_array*> validValueTypes = __CppStaticProperty<ModdingAPI::Exposed::System::Type_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->validValueTypes; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1171F60))();
  }
};
}