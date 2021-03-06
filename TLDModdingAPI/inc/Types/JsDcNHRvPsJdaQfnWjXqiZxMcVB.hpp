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
struct __JsDcNHRvPsJdaQfnWjXqiZxMcVB_Il2CppStaticFields {
};

struct __JsDcNHRvPsJdaQfnWjXqiZxMcVB_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __JsDcNHRvPsJdaQfnWjXqiZxMcVB_Il2CppClass {
  Il2CppClass_1 _1;
  __JsDcNHRvPsJdaQfnWjXqiZxMcVB_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __JsDcNHRvPsJdaQfnWjXqiZxMcVB_Il2CppVtbl vtbl;
};

class JsDcNHRvPsJdaQfnWjXqiZxMcVB {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C91E98;
  static inline    __JsDcNHRvPsJdaQfnWjXqiZxMcVB_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __JsDcNHRvPsJdaQfnWjXqiZxMcVB_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__JsDcNHRvPsJdaQfnWjXqiZxMcVB_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __JsDcNHRvPsJdaQfnWjXqiZxMcVB_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  int32_t yqCnHqAoKmgDVKPDzChtEkuTgey;
  int32_t uwAyqWIoVFYnWYeJXjpVJeFVEhed;
  ModdingAPI::Exposed::Rewired::Player* ddjvaCJoAMExceUxtPUKYihiOWO;
  ModdingAPI::Exposed::Rewired::Player_array* HwpBhRgmLtXtiEMJYDTccZPgcQql;
  ModdingAPI::Exposed::Rewired::Player_array* GWDAnXEWokGkUuwjXbGcszNEkoa;
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* CRuZUAKEIEcjmqMSLYfARbISSAr;
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* XKmghleOaSCXcVXwRbCTvIlcLctj;
  ModdingAPI::Exposed::Rewired::Data::ConfigVars* hgRPwApwXYvsdpUVQHHUDgDieOA;
  bool lUcIGCLIWkCmWeInmyFcCPqJaTE;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::Rewired::Data::ConfigVars* configVars) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, ModdingAPI::Exposed::Rewired::Data::ConfigVars*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31F420))(this, configVars);
  }
  int32_t get_gamePlayerCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311060))(this);
  }
  int32_t get_allPlayerCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311080))(this);
  }
  ModdingAPI::Exposed::Rewired::Player_array* get_AllPlayers_orig() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Player_array*(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  ModdingAPI::Exposed::Rewired::Player_array* get_Players_orig() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Player_array*(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* get_AllPlayers_readOnly() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319970))(this);
  }
  ModdingAPI::Exposed::System::Collections::Generic::IList_T_* get_Players_readOnly() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::IList_T_*(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335370))(this);
  }
  void hBrVVmrdIBdzlWHPriZmuajDAJY() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FA720))(this);
  }
  void UkdYhBjSlBVUHAVqwlUfICdtWUn(ModdingAPI::Exposed::Rewired::Joystick* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, ModdingAPI::Exposed::Rewired::Joystick*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FB050))(this, );
  }
  void hmxeyzNISLfmnbeKcbhKqLDTgnn(ModdingAPI::Exposed::Rewired::Joystick* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, ModdingAPI::Exposed::Rewired::Joystick*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FB2B0))(this, );
  }
  void qHwlhHyAqpFosgLygKRFyFolNVQD(int32_t , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FB2E0))(this, , );
  }
  ModdingAPI::Exposed::Rewired::Player* wflqtLPgUDaZKrkxXfoVcLdWaaH(int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Player*(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FB3A0))(this, );
  }
  ModdingAPI::Exposed::Rewired::Player* wflqtLPgUDaZKrkxXfoVcLdWaaH(System_String* ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Player*(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FB570))(this, );
  }
  ModdingAPI::Exposed::Rewired::Player* fHkMranOLNJaqLbfqWcqNLfOWnC() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Player*(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  int32_t HPRujbIjmREWXjKsBmBhbnoJYuy(System_String* ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FB9A0))(this, );
  }
  bool pXcJKjadguQCfRfllAgKcGQWHbZ(int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FBDA0))(this, );
  }
  ModdingAPI::Exposed::Rewired::Player_array* QCSMZrmgazSLCWctPJjdeBeuTRk(bool ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Player_array*(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FBDE0))(this, );
  }
  ModdingAPI::Exposed::System::String_array* SRoBwhbbzCPyUFEwNYlxOpnJcgJe(bool ) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FC040))(this, );
  }
  ModdingAPI::Exposed::System::String_array* GlvdpYJJjjVTNobCpjeUaPbgAmu(bool ) {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FC2F0))(this, );
  }
  ModdingAPI::Exposed::System::Int32_array* WxmCmFJnOilpziIVyHZNgiYHTqWv(bool ) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Int32_array*(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FC5A0))(this, );
  }
  bool TtPcxSgRDRbmAaZRFindPuAtapaU(ModdingAPI::Exposed::Rewired::Controller* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, ModdingAPI::Exposed::Rewired::Controller*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FC7D0))(this, );
  }
  bool TtPcxSgRDRbmAaZRFindPuAtapaU(int32_t , int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FC820))(this, , );
  }
  bool ySEBanFuUxHHZeywIaPLYoeHXsAf(int32_t , int32_t , int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FC900))(this, , , );
  }
  void VVWsTDiAZsckOJqpQhIvBoSGRlQr(ModdingAPI::Exposed::Rewired::Controller* , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, ModdingAPI::Exposed::Rewired::Controller*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FC950))(this, , );
  }
  void VVWsTDiAZsckOJqpQhIvBoSGRlQr(int32_t , int32_t , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FCA90))(this, , , );
  }
  bool bEheWJcEPtQlYAPeWLTTZnXIhFX(ModdingAPI::Exposed::Rewired::Joystick* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, ModdingAPI::Exposed::Rewired::Joystick*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FCBB0))(this, );
  }
  bool bEheWJcEPtQlYAPeWLTTZnXIhFX(int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FCCC0))(this, );
  }
  bool VgCciKDSBqgJhjULnTgjxfwBtBo(int32_t , int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FCDB0))(this, , );
  }
  void ZREgppDCHTglgsWjeZqBdVwxPDq(ModdingAPI::Exposed::Rewired::Joystick* , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, ModdingAPI::Exposed::Rewired::Joystick*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FCE00))(this, , );
  }
  void ZREgppDCHTglgsWjeZqBdVwxPDq(int32_t , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FCF50))(this, , );
  }
  bool iuXWpgbEGVycMFPQmlpyOUyaBZB(ModdingAPI::Exposed::Rewired::CustomController* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, ModdingAPI::Exposed::Rewired::CustomController*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FD030))(this, );
  }
  bool iuXWpgbEGVycMFPQmlpyOUyaBZB(int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FD110))(this, );
  }
  bool lyhyfMUcsPgQYQlmqefvCLrxlEg(int32_t , int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FD210))(this, , );
  }
  void UUZHQAJbrRVpwxoMBeFoTJDlIau(ModdingAPI::Exposed::Rewired::CustomController* , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, ModdingAPI::Exposed::Rewired::CustomController*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FD260))(this, , );
  }
  void UUZHQAJbrRVpwxoMBeFoTJDlIau(int32_t , bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FD3C0))(this, , );
  }
  bool KXNENtbjqIFFRJeIIbhpZvBjiLJh(ModdingAPI::Exposed::Rewired::Joystick* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, ModdingAPI::Exposed::Rewired::Joystick*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FD4C0))(this, );
  }
  bool KRFOveARiHoTPHSnvENDCGUkcDX(ModdingAPI::Exposed::Rewired::Joystick* ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, ModdingAPI::Exposed::Rewired::Joystick*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FD790))(this, );
  }
  int32_t ySrpgpejeKCXsBkzeUtIOfCtkehH() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FDA10))(this);
  }
  int32_t wfnnSHVWSSHzHkMoFhJALozuMMe(int32_t ) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::JsDcNHRvPsJdaQfnWjXqiZxMcVB*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7FDBE0))(this, );
  }
};
}