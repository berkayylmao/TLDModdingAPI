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
struct __JumpManager_Il2CppStaticFields {
  uint32_t SAVE_SLOT;
  ModdingAPI::Exposed::JumpManager* s_Instance;
  System_String* s_DataPath;
};

struct __JumpManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __JumpManager_Il2CppClass {
  Il2CppClass_1 _1;
  __JumpManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __JumpManager_Il2CppVtbl vtbl;
};

class JumpManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C944B0;
  static inline    __JumpManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __JumpManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__JumpManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __JumpManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool m_AllowCreation;
  System_String* m_LastJumpFile;
  int32_t m_State;
  ModdingAPI::Exposed::JumpLoadThread* m_JumpLoadThread;
  ModdingAPI::Exposed::SlotData* m_LoadSlotData;
  ModdingAPI::Exposed::SaveSlotInfo* m_LoadSlotInfo;
  int32_t m_SaveStage;
  System_String* m_SaveName;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JumpManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187ADA0))(this);
  }
  void OnLoadComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JumpManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187BBF0))(this);
  }
  void OnLoadSetup() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JumpManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187BFD0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<uint32_t> SAVE_SLOT = __CppStaticProperty<uint32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->SAVE_SLOT; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::JumpManager*> s_Instance = __CppStaticProperty<ModdingAPI::Exposed::JumpManager*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Instance; }
  );
  static inline __CppStaticProperty<System_String*> s_DataPath = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_DataPath; }
  );

  // Static methods:
  static inline bool CanReload() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x187AE40))();
  }
  static inline void ClearLoadThread() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x187AED0))();
  }
  static inline bool Create(System_String* name) {
    return reinterpret_cast<bool(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187AF60))(name);
  }
  static inline System_String* GetDataPath() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x187AFF0))();
  }
  static inline int32_t GetState() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x187B1A0))();
  }
  static inline ModdingAPI::Exposed::JumpData* Import(System_String* path) {
    return reinterpret_cast<ModdingAPI::Exposed::JumpData*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187B230))(path);
  }
  static inline void Instantiate() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x187B390))();
  }
  static inline ModdingAPI::Exposed::JumpManager* Instance() {
    return reinterpret_cast<ModdingAPI::Exposed::JumpManager*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))();
  }
  static inline bool IsCreationAllowed() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x187B5B0))();
  }
  static inline bool IsAsyncLoading() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x187B640))();
  }
  static inline bool Load(ModdingAPI::Exposed::JumpData* jump) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JumpData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187B6D0))(jump);
  }
  static inline void Reload() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x187B760))();
  }
  static inline bool Rename(System_String* path, System_String* name) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187B820))(path, name);
  }
  static inline void SetCreationAllowed(bool allow) {
    reinterpret_cast<void(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187BA10))(allow);
  }
  static inline void StartJumpLoadAsync(ModdingAPI::Exposed::JumpLoadCompleteDelegate* onComplete) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JumpLoadCompleteDelegate*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187BAA0))(onComplete);
  }
  static inline void StopJumpLoadAsync() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x187BB30))();
  }
  static inline void CreateFromCurrentSave(System_String* name) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187C650))(name);
  }
  static inline System_String* CreateJumpFilePath(int32_t mode, int32_t xpmode, int32_t episode) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187C920))(mode, xpmode, episode);
  }
  static inline System_String* GetEpisodeName(int32_t episode) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187CDB0))(episode);
  }
  static inline System_String* GetExperienceModeName(int32_t mode) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187CE90))(mode);
  }
  static inline ModdingAPI::Exposed::System::Collections::IEnumerator* OnSavingCoroutine() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x187CFC0))();
  }
  static inline void Validate(System_String* path) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187D100))(path);
  }
  static inline ModdingAPI::Exposed::SlotData* WriteDataForJump(ModdingAPI::Exposed::JumpData* jump) {
    return reinterpret_cast<ModdingAPI::Exposed::SlotData*(__fastcall*)(ModdingAPI::Exposed::JumpData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x187D1E0))(jump);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x187D440))();
  }
};
}