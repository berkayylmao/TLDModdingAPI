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
#include "ModdingAPI.Exposed.UnityEngine.SceneManagement.Scene.hpp"


namespace ModdingAPI::Exposed::Rewired {
struct __InputManager_Il2CppStaticFields {
};

struct __InputManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_OnInitialized;
  VirtualInvokeData _5_OnDeinitialized;
  VirtualInvokeData _6_DetectPlatform;
  VirtualInvokeData _7_CheckRecompile;
  VirtualInvokeData _8_GetExternalTools;
};

struct __InputManager_Il2CppClass {
  Il2CppClass_1 _1;
  __InputManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __InputManager_Il2CppVtbl vtbl;
};

class InputManager {
public:
  // Il2Cpp fields:
  __InputManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool InputManager_Base__dontDestroyOnLoad;
  ModdingAPI::Exposed::Rewired::Data::UserData* InputManager_Base__userData;
  ModdingAPI::Exposed::Rewired::Data::ControllerDataFiles* InputManager_Base__controllerDataFiles;
  bool isCompiling;
  bool InputManager_Base_initialized;
  bool InputManager_Base_criticalError;
  int32_t editorPlatform;
  int32_t platform;
  int32_t webplayerPlatform;
  bool isEditor;
  bool _detectedPlatformInEditor;
  int32_t scriptingBackend;
  int32_t scriptingAPILevel;
  bool InputManager_Base__duplicateRIMError;
  bool InputManager_Base__isAwake;
  bool ignoreRecompile;

  // Member methods:
  void OnInitialized() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2172F80))(this);
  }
  void OnDeinitialized() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x21730F0))(this);
  }
  void DetectPlatform() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2173100))(this);
  }
  void CheckRecompile() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  ModdingAPI::Exposed::Rewired::Utils::Interfaces::IExternalTools* GetExternalTools() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Utils::Interfaces::IExternalTools*(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2173220))(this);
  }
  bool CheckDeviceName(System_String* searchPattern, System_String* deviceName, System_String* deviceModel) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManager*, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2173360))(this, searchPattern, deviceName, deviceModel);
  }
  void SubscribeEvents() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2172F80))(this);
  }
  void UnsubscribeEvents() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2173460))(this);
  }
  void OnSceneLoaded(ModdingAPI::Exposed::UnityEngine::SceneManagement::Scene scene, int32_t mode) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManager*, ModdingAPI::Exposed::UnityEngine::SceneManagement::Scene, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x574F20))(this, scene, mode);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::InputManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x575840))(this);
  }
};
}