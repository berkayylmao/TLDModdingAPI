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


namespace ModdingAPI::Exposed {
struct __AkEvent_Il2CppStaticFields {
};

struct __AkEvent_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_HandleEvent;
  VirtualInvokeData _5_Awake;
  VirtualInvokeData _6_Start;
  VirtualInvokeData _7_OnDestroy;
  VirtualInvokeData _8_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData _9_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
};

struct __AkEvent_Il2CppClass {
  Il2CppClass_1 _1;
  __AkEvent_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AkEvent_Il2CppVtbl vtbl;
};

class AkEvent {
public:
  // Il2Cpp fields:
  __AkEvent_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool AkUnityEventHandler_didDestroy;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* triggerList;
  bool useOtherObject;
  int32_t actionOnEventType;
  int32_t curveInterpolation;
  bool enableActionOnEvent;
  ModdingAPI::Exposed::AK::Wwise::Event* data;
  ModdingAPI::Exposed::AkEventCallbackData* m_callbackData;
  uint32_t playingId;
  ModdingAPI::Exposed::UnityEngine::GameObject* soundEmitterObject;
  float transitionDuration;
  ModdingAPI::Exposed::System::Byte_array* valueGuid;

  // Member methods:
  int32_t get_eventID() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::AkEvent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x25250B0))(this);
  }
  void Callback(Il2CppObject* in_cookie, int32_t in_type, ModdingAPI::Exposed::AkCallbackInfo* in_info) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkEvent*, Il2CppObject*, int32_t, ModdingAPI::Exposed::AkCallbackInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2525110))(this, in_cookie, in_type, in_info);
  }
  void HandleEvent(ModdingAPI::Exposed::UnityEngine::GameObject* in_gameObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkEvent*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2525430))(this, in_gameObject);
  }
  void Stop(int32_t _transitionDuration) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkEvent*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2525700))(this, _transitionDuration);
  }
  void Stop(int32_t _transitionDuration, int32_t _curveInterpolation) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkEvent*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2525740))(this, _transitionDuration, _curveInterpolation);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkEvent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkEvent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkEvent*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2525780))(this);
  }
};
}