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
struct __GearManager_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Gear;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_DroppedDecoys;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_GearCategory;
  float m_DecayScale;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_GearToDestroy;
  int32_t m_CurrentIndex;
  int32_t m_NumProcessPerFrame;
};

struct __GearManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __GearManager_Il2CppClass {
  Il2CppClass_1 _1;
  __GearManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __GearManager_Il2CppVtbl vtbl;
};

class GearManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C3E250;
  static inline    __GearManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __GearManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__GearManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __GearManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GearManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_Gear = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_Gear; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_DroppedDecoys = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_DroppedDecoys; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*> m_GearCategory = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::GameObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_GearCategory; }
  );
  static inline __CppStaticProperty<float> m_DecayScale = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_DecayScale; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_GearToDestroy = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_GearToDestroy; }
  );
  static inline __CppStaticProperty<int32_t> m_CurrentIndex = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_CurrentIndex; }
  );
  static inline __CppStaticProperty<int32_t> m_NumProcessPerFrame = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_NumProcessPerFrame; }
  );

  // Static methods:
  static inline void Add(ModdingAPI::Exposed::GearItem* gi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E09A80))(gi);
  }
  static inline void Reset() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E09CC0))();
  }
  static inline void DeleteAllActive() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E09FF0))();
  }
  static inline void DestroyGearObject(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0A340))(go);
  }
  static inline System_String* Serialize() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0A870))();
  }
  static inline void Deserialize(System_String* text) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0AD20))(text);
  }
  static inline void Deserialize(System_String* text, ModdingAPI::Exposed::System::Collections::Generic::List_T_* loadedItems) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0ADC0))(text, loadedItems);
  }
  static inline void MaybeAddToDroppedDecoys(ModdingAPI::Exposed::GearItem* gi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0B2D0))(gi);
  }
  static inline void RemovedFromDroppedDecoys(ModdingAPI::Exposed::GearItem* gi) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0B460))(gi);
  }
  static inline bool ShouldDeleteActiveGearItem(ModdingAPI::Exposed::GearItem* gi) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0B580))(gi);
  }
  static inline void DestroyNextUpdate(ModdingAPI::Exposed::GearItem* gearItem, bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GearItem*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0B7C0))(gearItem, value);
  }
  static inline void DestroyMarkedObjects() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0B930))();
  }
  static inline void Update() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0BB00))();
  }
  static inline void UpdateAll() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0BC60))();
  }
  static inline void UpdateItems(int32_t start, int32_t endExclusive) {
    reinterpret_cast<void(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0BD20))(start, endExclusive);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E0BF10))();
  }
};
}