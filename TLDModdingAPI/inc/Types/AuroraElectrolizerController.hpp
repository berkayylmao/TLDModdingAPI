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
struct __AuroraElectrolizerController_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* s_AuroraElectrolizerControllerList;
};

struct __AuroraElectrolizerController_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __AuroraElectrolizerController_Il2CppClass {
  Il2CppClass_1 _1;
  __AuroraElectrolizerController_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AuroraElectrolizerController_Il2CppVtbl vtbl;
};

class AuroraElectrolizerController {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C34E50;
  static inline    __AuroraElectrolizerController_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AuroraElectrolizerController_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AuroraElectrolizerController_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AuroraElectrolizerController_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ControlVolumeList;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ArtParent;
  System_String* m_Id;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraElectrolizerController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC86A0))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraElectrolizerController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC8840))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraElectrolizerController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC8900))(this);
  }
  void PopulateVolumes() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraElectrolizerController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC8B20))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Renderer* FindRenderer(ModdingAPI::Exposed::UnityEngine::GameObject* obj) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Renderer*(__fastcall*)(ModdingAPI::Exposed::AuroraElectrolizerController*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC91A0))(this, obj);
  }
  void SetPowerState(System_String* volumeName, bool isActive) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraElectrolizerController*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC92D0))(this, volumeName, isActive);
  }
  void SetPowerState(int32_t volumeID, bool isActive) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraElectrolizerController*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC94D0))(this, volumeID, isActive);
  }
  void SetPowerStateAll(bool isActive) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraElectrolizerController*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC9640))(this, isActive);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraElectrolizerController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FCA260))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::AuroraElectrolizerController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> s_AuroraElectrolizerControllerList = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_AuroraElectrolizerControllerList; }
  );

  // Static methods:
  static inline System_String* SerializeAll() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC97A0))();
  }
  static inline void DeserializeAll(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FC9ED0))(text);
  }
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FCA4A0))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1FCA580))();
  }
};
}