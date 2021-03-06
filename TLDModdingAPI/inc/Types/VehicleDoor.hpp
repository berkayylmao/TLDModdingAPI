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
struct __VehicleDoor_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_VehicleDoors;
};

struct __VehicleDoor_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __VehicleDoor_Il2CppClass {
  Il2CppClass_1 _1;
  __VehicleDoor_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __VehicleDoor_Il2CppVtbl vtbl;
};

class VehicleDoor {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2C090;
  static inline    __VehicleDoor_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __VehicleDoor_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__VehicleDoor_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __VehicleDoor_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::LocalizedString* m_LocalizedDisplayName;
  System_String* m_OpenAudio;
  System_String* m_CloseAudio;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_CameraDummy;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_ExitPoint;
  ModdingAPI::Exposed::UnityEngine::BoxCollider* m_ItemDropBox;
  ModdingAPI::Exposed::Bed* m_Bed;
  bool m_BlockSavingWhileInside;
  bool m_IsBeingInteractedWith;
  float m_InteractTimer;
  int32_t m_RestoreControlMode;

  // Member methods:
  System_String* get_m_DisplayName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::VehicleDoor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15E35A0))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::VehicleDoor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18C0B50))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::VehicleDoor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18C0EB0))(this);
  }
  void UpdateDoor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::VehicleDoor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18C1150))(this);
  }
  bool StartInteract() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::VehicleDoor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18C12A0))(this);
  }
  void Cancel() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::VehicleDoor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18C16F0))(this);
  }
  void ProgressBarStarted() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::VehicleDoor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void ProcessInteraction() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::VehicleDoor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18C1890))(this);
  }
  System_String* GetHoverText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::VehicleDoor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x18C19F0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::VehicleDoor*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_VehicleDoors = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_VehicleDoors; }
  );

  // Static methods:
  static inline void UpdateAll() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x18C0F70))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x18C1AF0))();
  }
};
}