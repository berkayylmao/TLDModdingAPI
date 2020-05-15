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
struct __uConsoleInput_Il2CppStaticFields {
  bool m_ForceSubmit;
  bool m_ForceAutoComplete;
  bool m_ForceRecallUp;
  bool m_ForceRecallDown;
  bool m_ForceScrollLogUp;
  bool m_ForceScrollLogDown;
  ModdingAPI::Exposed::System::Char_array* m_DelimterChars;
  int32_t m_LastHistoryIndexRecalled;
  float m_TimeRecallUpPressed;
  float m_TimeRecallDownPressed;
  float m_TimeScrollUpPressed;
  float m_TimeScrollDownPressed;
  float m_CommandRepeatTimeSeconds;
};

struct __uConsoleInput_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __uConsoleInput_Il2CppClass {
  Il2CppClass_1 _1;
  __uConsoleInput_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __uConsoleInput_Il2CppVtbl vtbl;
};

class uConsoleInput {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C45060;
  static inline    __uConsoleInput_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __uConsoleInput_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__uConsoleInput_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __uConsoleInput_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::uConsoleInput*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> m_ForceSubmit = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ForceSubmit; }
  );
  static inline __CppStaticProperty<bool> m_ForceAutoComplete = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ForceAutoComplete; }
  );
  static inline __CppStaticProperty<bool> m_ForceRecallUp = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ForceRecallUp; }
  );
  static inline __CppStaticProperty<bool> m_ForceRecallDown = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ForceRecallDown; }
  );
  static inline __CppStaticProperty<bool> m_ForceScrollLogUp = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ForceScrollLogUp; }
  );
  static inline __CppStaticProperty<bool> m_ForceScrollLogDown = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_ForceScrollLogDown; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*> m_DelimterChars = __CppStaticProperty<ModdingAPI::Exposed::System::Char_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_DelimterChars; }
  );
  static inline __CppStaticProperty<int32_t> m_LastHistoryIndexRecalled = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_LastHistoryIndexRecalled; }
  );
  static inline __CppStaticProperty<float> m_TimeRecallUpPressed = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_TimeRecallUpPressed; }
  );
  static inline __CppStaticProperty<float> m_TimeRecallDownPressed = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_TimeRecallDownPressed; }
  );
  static inline __CppStaticProperty<float> m_TimeScrollUpPressed = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_TimeScrollUpPressed; }
  );
  static inline __CppStaticProperty<float> m_TimeScrollDownPressed = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_TimeScrollDownPressed; }
  );
  static inline __CppStaticProperty<float> m_CommandRepeatTimeSeconds = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_CommandRepeatTimeSeconds; }
  );

  // Static methods:
  static inline void Initialize() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CBDEC0))();
  }
  static inline void DoFrame() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CBDF60))();
  }
  static inline void SubmitCommand() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CBE1A0))();
  }
  static inline void AutoComplete() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CBE310))();
  }
  static inline void RecallCommandUp() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CBE5D0))();
  }
  static inline void RecallCommandDown() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CBE800))();
  }
  static inline void ProcessActivationInput() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CBEA20))();
  }
  static inline void ProcessSubmitInput() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CBEF50))();
  }
  static inline void ProcessAutoCompleteInput() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CBF230))();
  }
  static inline void ProcessHistoryInput() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CBF390))();
  }
  static inline void ProcessLogInput() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CBF9A0))();
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CC04B0))();
  }
};
}