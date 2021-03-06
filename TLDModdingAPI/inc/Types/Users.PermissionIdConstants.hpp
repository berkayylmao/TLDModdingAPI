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


namespace ModdingAPI::Exposed::Users {
struct __PermissionIdConstants_Il2CppStaticFields {
  System_String* m_BroadcastWithTwitch;
  System_String* m_CommunicateUsingText;
  System_String* m_CommunicateUsingVideo;
  System_String* m_CommunicateUsingVoice;
  System_String* m_PlayMultiplayer;
  System_String* m_ViewTargetExerciseInfo;
  System_String* m_ViewTargetGameHistory;
  System_String* m_ViewTargetMusicHistory;
  System_String* m_ViewTargetMusicStatus;
  System_String* m_ViewTargetPresence;
  System_String* m_ViewTargetProfile;
  System_String* m_ViewTargetVideoHistory;
  System_String* m_ViewTargetVideoStatus;
};

struct __PermissionIdConstants_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __PermissionIdConstants_Il2CppClass {
  Il2CppClass_1 _1;
  __PermissionIdConstants_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PermissionIdConstants_Il2CppVtbl vtbl;
};

class PermissionIdConstants {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C8BBC0;
  static inline    __PermissionIdConstants_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __PermissionIdConstants_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PermissionIdConstants_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PermissionIdConstants_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Users::PermissionIdConstants*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<System_String*> m_BroadcastWithTwitch = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_BroadcastWithTwitch; }
  );
  static inline __CppStaticProperty<System_String*> m_CommunicateUsingText = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_CommunicateUsingText; }
  );
  static inline __CppStaticProperty<System_String*> m_CommunicateUsingVideo = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_CommunicateUsingVideo; }
  );
  static inline __CppStaticProperty<System_String*> m_CommunicateUsingVoice = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_CommunicateUsingVoice; }
  );
  static inline __CppStaticProperty<System_String*> m_PlayMultiplayer = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_PlayMultiplayer; }
  );
  static inline __CppStaticProperty<System_String*> m_ViewTargetExerciseInfo = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ViewTargetExerciseInfo; }
  );
  static inline __CppStaticProperty<System_String*> m_ViewTargetGameHistory = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ViewTargetGameHistory; }
  );
  static inline __CppStaticProperty<System_String*> m_ViewTargetMusicHistory = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ViewTargetMusicHistory; }
  );
  static inline __CppStaticProperty<System_String*> m_ViewTargetMusicStatus = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ViewTargetMusicStatus; }
  );
  static inline __CppStaticProperty<System_String*> m_ViewTargetPresence = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ViewTargetPresence; }
  );
  static inline __CppStaticProperty<System_String*> m_ViewTargetProfile = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ViewTargetProfile; }
  );
  static inline __CppStaticProperty<System_String*> m_ViewTargetVideoHistory = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ViewTargetVideoHistory; }
  );
  static inline __CppStaticProperty<System_String*> m_ViewTargetVideoStatus = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ViewTargetVideoStatus; }
  );

  // Static methods:
  static inline System_String* get_BroadcastWithTwitch() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E29ED0))();
  }
  static inline System_String* get_CommunicateUsingText() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E2A040))();
  }
  static inline System_String* get_CommunicateUsingVideo() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E2A1B0))();
  }
  static inline System_String* get_CommunicateUsingVoice() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E2A320))();
  }
  static inline System_String* get_PlayMultiplayer() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E2A490))();
  }
  static inline System_String* get_ViewTargetExerciseInfo() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E2A600))();
  }
  static inline System_String* get_ViewTargetGameHistory() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E2A770))();
  }
  static inline System_String* get_ViewTargetMusicHistory() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E2A8E0))();
  }
  static inline System_String* get_ViewTargetMusicStatus() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E2AA50))();
  }
  static inline System_String* get_ViewTargetPresence() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E2ABC0))();
  }
  static inline System_String* get_ViewTargetProfile() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E2AD30))();
  }
  static inline System_String* get_ViewTargetVideoHistory() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E2AEA0))();
  }
  static inline System_String* get_ViewTargetVideoStatus() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E2B010))();
  }
};
}