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


namespace ModdingAPI::Exposed::NodeCanvas::Tasks::Actions {
struct __Action_PlayVideo_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_OnMovieCompleteCallbacks;
};

struct __Action_PlayVideo_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_NodeCanvas_Framework_ISubParametersContainer_GetSubParameters;
  VirtualInvokeData _5_Duplicate;
  VirtualInvokeData _6_OnCreate;
  VirtualInvokeData _7_OnValidate;
  VirtualInvokeData _8_get_agentType;
  VirtualInvokeData _9_get_info;
  VirtualInvokeData _10_OnInit;
  VirtualInvokeData _11_OnDrawGizmos;
  VirtualInvokeData _12_OnDrawGizmosSelected;
  VirtualInvokeData _13_OnExecute;
  VirtualInvokeData _14_OnUpdate;
  VirtualInvokeData _15_OnStop;
  VirtualInvokeData _16_OnStop;
  VirtualInvokeData _17_OnPause;
};

struct __Action_PlayVideo_Il2CppClass {
  Il2CppClass_1 _1;
  __Action_PlayVideo_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Action_PlayVideo_Il2CppVtbl vtbl;
};

class Action_PlayVideo {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8F680;
  static inline    __Action_PlayVideo_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Action_PlayVideo_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Action_PlayVideo_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Action_PlayVideo_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool Task__isDisabled;
  ModdingAPI::Exposed::NodeCanvas::Framework::Internal::TaskAgentParameter* Task_overrideAgent;
  ModdingAPI::Exposed::NodeCanvas::Framework::IBlackboard* Task__blackboard;
  ModdingAPI::Exposed::NodeCanvas::Framework::ITaskSystem* Task__ownerSystem;
  ModdingAPI::Exposed::UnityEngine::Component* Task_current;
  System_String* Task__taskName;
  System_String* Task__taskDescription;
  System_String* Task__obsoleteInfo;
  System_String* Task__firstWarningMessage_k__BackingField;
  int32_t ActionTask_status;
  float ActionTask_startedTime;
  float ActionTask_pausedTime;
  bool ActionTask_latch;
  bool ActionTask__isPaused;
  bool _ignoreSaveCheck;
  bool waitForComplete;
  System_String* videoPath;
  bool stopAllPlayerAudio;
  bool fadeOutOnStart;
  bool fadeInOnComplete;
  bool blackOutOnComplete;
  float fadeSeconds;

  // Member methods:
  System_String* get_info() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::Action_PlayVideo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1798B30))(this);
  }
  void OnExecute() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::Action_PlayVideo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1798BF0))(this);
  }
  void ProcessOnMovieCompleteCallback() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::Action_PlayVideo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1798E20))(this);
  }
  void PlayMovie() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::Action_PlayVideo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1798F50))(this);
  }
  void OnMovieComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::Action_PlayVideo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1799100))(this);
  }
  void OnFadeInComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::Action_PlayVideo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1799310))(this);
  }
  void OnActionComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::Action_PlayVideo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1799320))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::Action_PlayVideo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1799470))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_OnMovieCompleteCallbacks = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_OnMovieCompleteCallbacks; }
  );

  // Static methods:
  static inline void RegisterOnActionMovieCompleteCallback(ModdingAPI::Exposed::System::Action* onMovieCompleteCallback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Action*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x17988F0))(onMovieCompleteCallback);
  }
  static inline void UnRegisterOnActionMovieCompleteCallback(ModdingAPI::Exposed::System::Action* onMovieCompleteCallback) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Action*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1798A10))(onMovieCompleteCallback);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1799490))();
  }
};
}