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


namespace ModdingAPI::Exposed::TMPro {
struct __TMP_UpdateManager_Il2CppStaticFields {
  ModdingAPI::Exposed::TMPro::TMP_UpdateManager* s_Instance;
};

struct __TMP_UpdateManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __TMP_UpdateManager_Il2CppClass {
  Il2CppClass_1 _1;
  __TMP_UpdateManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TMP_UpdateManager_Il2CppVtbl vtbl;
};

class TMP_UpdateManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C25998;
  static inline    __TMP_UpdateManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __TMP_UpdateManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__TMP_UpdateManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __TMP_UpdateManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_LayoutRebuildQueue;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_LayoutQueueLookup;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_GraphicRebuildQueue;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_GraphicQueueLookup;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_InternalUpdateQueue;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_InternalUpdateLookup;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_UpdateManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAEC70))(this);
  }
  void InternalRegisterTextObjectForUpdate(ModdingAPI::Exposed::TMPro::TMP_Text* textObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_UpdateManager*, ModdingAPI::Exposed::TMPro::TMP_Text*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAF620))(this, textObject);
  }
  bool InternalRegisterTextElementForLayoutRebuild(ModdingAPI::Exposed::TMPro::TMP_Text* element) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_UpdateManager*, ModdingAPI::Exposed::TMPro::TMP_Text*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAF8A0))(this, element);
  }
  bool InternalRegisterTextElementForGraphicRebuild(ModdingAPI::Exposed::TMPro::TMP_Text* element) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_UpdateManager*, ModdingAPI::Exposed::TMPro::TMP_Text*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAFB40))(this, element);
  }
  void OnBeginFrameRendering(ModdingAPI::Exposed::UnityEngine::Camera_array* cameras) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_UpdateManager*, ModdingAPI::Exposed::UnityEngine::Camera_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAFC90))(this, cameras);
  }
  void OnCameraPreCull(ModdingAPI::Exposed::UnityEngine::Camera* cam) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_UpdateManager*, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAFC90))(this, cam);
  }
  void DoRebuilds() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_UpdateManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAFCA0))(this);
  }
  void InternalUnRegisterTextElementForGraphicRebuild(ModdingAPI::Exposed::TMPro::TMP_Text* element) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_UpdateManager*, ModdingAPI::Exposed::TMPro::TMP_Text*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAB02D0))(this, element);
  }
  void InternalUnRegisterTextElementForLayoutRebuild(ModdingAPI::Exposed::TMPro::TMP_Text* element) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_UpdateManager*, ModdingAPI::Exposed::TMPro::TMP_Text*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAB03C0))(this, element);
  }
  void InternalUnRegisterTextObjectForUpdate(ModdingAPI::Exposed::TMPro::TMP_Text* textObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_UpdateManager*, ModdingAPI::Exposed::TMPro::TMP_Text*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAB04B0))(this, textObject);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::TMPro::TMP_UpdateManager*> s_Instance = __CppStaticProperty<ModdingAPI::Exposed::TMPro::TMP_UpdateManager*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Instance; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::TMPro::TMP_UpdateManager* get_instance() {
    return reinterpret_cast<ModdingAPI::Exposed::TMPro::TMP_UpdateManager*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAEB00))();
  }
  static inline void RegisterTextObjectForUpdate(ModdingAPI::Exposed::TMPro::TMP_Text* textObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAF4D0))(textObject);
  }
  static inline void RegisterTextElementForLayoutRebuild(ModdingAPI::Exposed::TMPro::TMP_Text* element) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAF750))(element);
  }
  static inline void RegisterTextElementForGraphicRebuild(ModdingAPI::Exposed::TMPro::TMP_Text* element) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAAF9F0))(element);
  }
  static inline void UnRegisterTextObjectForUpdate(ModdingAPI::Exposed::TMPro::TMP_Text* textObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAB0090))(textObject);
  }
  static inline void UnRegisterTextElementForRebuild(ModdingAPI::Exposed::TMPro::TMP_Text* element) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_Text*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xAB00C0))(element);
  }
};
}