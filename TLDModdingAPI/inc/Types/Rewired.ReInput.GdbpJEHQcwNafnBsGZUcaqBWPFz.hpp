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


namespace ModdingAPI::Exposed::Rewired::ReInput {
struct __GdbpJEHQcwNafnBsGZUcaqBWPFz_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Func_TResult_* NpQBrabQvgEHUZYrToXspauHssw;
  ModdingAPI::Exposed::System::Func_TResult_* AbccOMJhkNUbmgBUZIbpZQHxjTLe;
  ModdingAPI::Exposed::System::Func_TResult_* yAxbHHpEOWrwSAGoRPMXGqXDGGqe;
  ModdingAPI::Exposed::System::Func_TResult_* xBiNDZGEgIcxJhShqnafncKaXgr;
  ModdingAPI::Exposed::System::Func_TResult_* YufoPSjyeqQyflEcBhOzjaJNZKc;
  ModdingAPI::Exposed::System::Func_TResult_* IwjhtXwkkqCDuWEuWvVwkTkcCqK;
};

struct __GdbpJEHQcwNafnBsGZUcaqBWPFz_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __GdbpJEHQcwNafnBsGZUcaqBWPFz_Il2CppClass {
  Il2CppClass_1 _1;
  __GdbpJEHQcwNafnBsGZUcaqBWPFz_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __GdbpJEHQcwNafnBsGZUcaqBWPFz_Il2CppVtbl vtbl;
};

class GdbpJEHQcwNafnBsGZUcaqBWPFz {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C91960;
  static inline    __GdbpJEHQcwNafnBsGZUcaqBWPFz_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __GdbpJEHQcwNafnBsGZUcaqBWPFz_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__GdbpJEHQcwNafnBsGZUcaqBWPFz_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __GdbpJEHQcwNafnBsGZUcaqBWPFz_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::ValueWatcher_T_* KShvrVrCnOFasCEgliDCYlMuNbF;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::ValueWatcher_T_* IURqUWCrGQZYQEfWfHaJtaqaJlf;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::ValueWatcher_T_* pszGFgsUAvOAiLBAeDFQGJYuKDY;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::ValueWatcher_T_* tUBdrLZVhNMNcpEwwFVPoneiKuO;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::ValueWatcher_T_* sPKbeQvRWoHAmqTHbTBeTVTbJMQ;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::ValueWatcher_T_* GcTQtPNOoOfYkgMSqoejlrOxytV;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::ValueWatcher_T_* sntCAMcvxIDaTWjKmYqHbdfIRJkN;
  int32_t VcFHLzyqURbrTBtTVxwCYCCxVFU;
  ModdingAPI::Exposed::Rewired::Utils::Classes::Utility::ValueWatcher_array* KQfRqkfrtIgGQexqUxSZpPrmAHs;

  // Member methods:
  int32_t get_currentFrame() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::GdbpJEHQcwNafnBsGZUcaqBWPFz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383900))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::GdbpJEHQcwNafnBsGZUcaqBWPFz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x99CB60))(this);
  }
  void lBXBlwpAWWQAqLCbKGiyXWcglwu() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::GdbpJEHQcwNafnBsGZUcaqBWPFz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x99E5A0))(this);
  }
  void kETfTEpxsjBCMoFOLEvKcBrfwMqF() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ReInput::GdbpJEHQcwNafnBsGZUcaqBWPFz*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x99E680))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Func_TResult_*> NpQBrabQvgEHUZYrToXspauHssw = __CppStaticProperty<ModdingAPI::Exposed::System::Func_TResult_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->NpQBrabQvgEHUZYrToXspauHssw; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Func_TResult_*> AbccOMJhkNUbmgBUZIbpZQHxjTLe = __CppStaticProperty<ModdingAPI::Exposed::System::Func_TResult_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->AbccOMJhkNUbmgBUZIbpZQHxjTLe; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Func_TResult_*> yAxbHHpEOWrwSAGoRPMXGqXDGGqe = __CppStaticProperty<ModdingAPI::Exposed::System::Func_TResult_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->yAxbHHpEOWrwSAGoRPMXGqXDGGqe; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Func_TResult_*> xBiNDZGEgIcxJhShqnafncKaXgr = __CppStaticProperty<ModdingAPI::Exposed::System::Func_TResult_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->xBiNDZGEgIcxJhShqnafncKaXgr; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Func_TResult_*> YufoPSjyeqQyflEcBhOzjaJNZKc = __CppStaticProperty<ModdingAPI::Exposed::System::Func_TResult_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->YufoPSjyeqQyflEcBhOzjaJNZKc; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Func_TResult_*> IwjhtXwkkqCDuWEuWvVwkTkcCqK = __CppStaticProperty<ModdingAPI::Exposed::System::Func_TResult_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->IwjhtXwkkqCDuWEuWvVwkTkcCqK; }
  );

  // Static methods:
  static inline bool eYOcTBaJXIaeYeFEbCfoYApfjRC() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x99E720))();
  }
  static inline bool aHVSnrVuunnnkHQcihSHsVjhDPy() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x99E770))();
  }
  static inline int32_t vouHqIevByUDMkiTabXhkGuAGjQ() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x99E7C0))();
  }
  static inline float skrAKLtECKZHaXkXeezASukGfDZ() {
    return reinterpret_cast<float(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x99E810))();
  }
  static inline bool IFKDSnCmQjeUECMMtHaCriDAtuHu() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x99E860))();
  }
  static inline System_String* EyUsnguxcrcWamqOdHGbxagsEZRc() {
    return reinterpret_cast<System_String*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x99E8B0))();
  }
};
}