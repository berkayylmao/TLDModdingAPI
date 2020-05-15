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
struct __AkBank_Il2CppStaticFields {
};

struct __AkBank_Il2CppVtbl {
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

struct __AkBank_Il2CppClass {
  Il2CppClass_1 _1;
  __AkBank_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AkBank_Il2CppVtbl vtbl;
};

class AkBank {
public:
  // Il2Cpp fields:
  __AkBank_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool AkUnityEventHandler_didDestroy;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* triggerList;
  bool useOtherObject;
  ModdingAPI::Exposed::AK::Wwise::Bank* data;
  bool decodeBank;
  bool loadAsynchronous;
  bool saveDecodedBank;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* unloadTriggerList;
  ModdingAPI::Exposed::System::Byte_array* valueGuid;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkBank*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x250B260))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkBank*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x250B480))(this);
  }
  void HandleEvent(ModdingAPI::Exposed::UnityEngine::GameObject* in_gameObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkBank*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x250B5C0))(this, in_gameObject);
  }
  void UnloadBank(ModdingAPI::Exposed::UnityEngine::GameObject* in_gameObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkBank*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x250B7A0))(this, in_gameObject);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkBank*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x250B880))(this);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkBank*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkBank*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AkBank*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x250BAB0))(this);
  }
};
}