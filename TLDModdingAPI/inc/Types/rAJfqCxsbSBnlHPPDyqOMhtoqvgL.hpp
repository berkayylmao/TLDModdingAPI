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
#include "ModdingAPI::Exposed::System::Guid.hpp"


namespace ModdingAPI::Exposed {
struct __rAJfqCxsbSBnlHPPDyqOMhtoqvgL_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Guid_array* tHOUMAgBZyNvFvOxLYjmbJFyXEI;
  ModdingAPI::Exposed::System::String_array* LlCCwREIigqPSeINhejDKLrgcFHi;
  ModdingAPI::Exposed::System::String_array* FnWIDqJhjzACHSZIKUSxvBGSurM;
};

struct __rAJfqCxsbSBnlHPPDyqOMhtoqvgL_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_deviceCount;
  VirtualInvokeData _5_get_primaryInputManager;
  VirtualInvokeData _6_get_inputSource;
  VirtualInvokeData _7_get_inputSourceType;
  VirtualInvokeData _8_Initialize;
  VirtualInvokeData _9_Update;
  VirtualInvokeData _10_OnDestroy;
  VirtualInvokeData _11_SystemDeviceConnected;
  VirtualInvokeData _12_SystemDeviceDisconnected;
  VirtualInvokeData _13_UpdateControllerData;
  VirtualInvokeData _14_GetInputDataUpdateDelegate;
  VirtualInvokeData _15_SetUnityJoystickId;
  VirtualInvokeData _16_GetUnifiedMouseSource;
  VirtualInvokeData _17_GetUnifiedKeyboardSource;
};

struct __rAJfqCxsbSBnlHPPDyqOMhtoqvgL_Il2CppClass {
  Il2CppClass_1 _1;
  __rAJfqCxsbSBnlHPPDyqOMhtoqvgL_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __rAJfqCxsbSBnlHPPDyqOMhtoqvgL_Il2CppVtbl vtbl;
};

class rAJfqCxsbSBnlHPPDyqOMhtoqvgL {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6C270;
  static inline    __rAJfqCxsbSBnlHPPDyqOMhtoqvgL_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __rAJfqCxsbSBnlHPPDyqOMhtoqvgL_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__rAJfqCxsbSBnlHPPDyqOMhtoqvgL_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __rAJfqCxsbSBnlHPPDyqOMhtoqvgL_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Action_T_* _DeviceConnectedEvent;
  ModdingAPI::Exposed::System::Action_T_* _DeviceDisconnectedEvent;
  ModdingAPI::Exposed::System::Action_T_* _UpdateControllerInfoEvent;
  ModdingAPI::Exposed::System::Action* _SystemDeviceConnectedEvent;
  ModdingAPI::Exposed::System::Action* _SystemDeviceDisconnectedEvent;
  ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL::pKHYxljsDJqTLGDEncXbEHyrGHOi_array* oWAefgIuJyRtcFYMImHKbfvRsrHe;
  bool XJyjNKPxqTSIqUTaRhnnMhbzKrE;
  ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL::FGtTfiQZUyXLPQesMKHSSwghuve* bOIdRtKprjiGJziPSwfORjVfaqN;
  ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL::wEGDJXqgCYyrrnrpMzGxRyUzxoY* rkiCobimNWJvSdfmiedxdEdlQWms;
  ModdingAPI::Exposed::YlogsubuAoaRmtkUViTKiwPBVTo_T_* bhixsoTQMWmcZzEggzlaVbHyRNR;
  ModdingAPI::Exposed::System::Boolean_array* hhYphEXdGSnGTUWPDIaybdxtjpi;
  ModdingAPI::Exposed::System::Boolean_array* YKoFPneQQbxlICkKfyJhFizOoBt;
  bool fWzqecISxPaLOSPrEHJAWJIaOxc;
  bool HfvGazeLDjIvfttvUtaESTDwLzRB;
  int32_t DsODUMFRwnkYCEnuNAQxHCDPeCI;
  int32_t yEHHTMlZwISpySejlXknTnBcTCr;
  int32_t ELxpqipDJfmZgwYUavxREssKmsS;
  ModdingAPI::Exposed::System::Action_T1__T2_* ZLpuTQLcMckdKcfdownLInDlDrD;
  bool KCtPUYvbUqwvSwpERWAhoAYCCAJ;
  ModdingAPI::Exposed::System::Func_T__TResult_* uTfmOacRsvJPZmrnUFIcMmGNmjA;
  ModdingAPI::Exposed::System::Func_TResult_* htQaqZACjFCrGHfRVbKQlehAkMuW;

  // Member methods:
  void ::ctor(bool isWin10AUHack, int32_t updateLoop, ModdingAPI::Exposed::System::Func_T__TResult_* getHardwareJoystickMap_InputManager, ModdingAPI::Exposed::System::Func_TResult_* getNewJoystickId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*, bool, int32_t, ModdingAPI::Exposed::System::Func_T__TResult_*, ModdingAPI::Exposed::System::Func_TResult_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x31F9B0))(this, isWin10AUHack, updateLoop, getHardwareJoystickMap_InputManager, getNewJoystickId);
  }
  int32_t get_deviceCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x320100))(this);
  }
  ModdingAPI::Exposed::Rewired::PlatformInputManager* get_primaryInputManager() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::PlatformInputManager*(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3201B0))(this);
  }
  ModdingAPI::Exposed::Rewired::Interfaces::IInputSource* get_inputSource() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Interfaces::IInputSource*(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  int32_t get_inputSourceType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3201C0))(this);
  }
  void Initialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3201D0))(this);
  }
  void Update(int32_t currentUpdateLoop) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x320C40))(this, currentUpdateLoop);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x320DA0))(this);
  }
  ModdingAPI::Exposed::System::Action_T1__T2_* GetInputDataUpdateDelegate() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Action_T1__T2_*(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x321390))(this);
  }
  void UpdateControllerData(int32_t assignedControllerId, ModdingAPI::Exposed::Rewired::ControllerDataUpdater* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*, int32_t, ModdingAPI::Exposed::Rewired::ControllerDataUpdater*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3213A0))(this, assignedControllerId, data);
  }
  void SystemDeviceConnected() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3213F0))(this);
  }
  void SystemDeviceDisconnected() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x321430))(this);
  }
  void SetUnityJoystickId(int32_t joystickId, int32_t unityJoystickId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, joystickId, unityJoystickId);
  }
  ModdingAPI::Exposed::Rewired::Interfaces::IUnifiedMouseSource* GetUnifiedMouseSource() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Interfaces::IUnifiedMouseSource*(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  ModdingAPI::Exposed::Rewired::Interfaces::IUnifiedKeyboardSource* GetUnifiedKeyboardSource() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Interfaces::IUnifiedKeyboardSource*(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077B0))(this);
  }
  bool HsTxojBOfMovrfGTURWLGdOMiPp() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3214A0))(this);
  }
  void buQcMVJUBwKzFcpdFaysWTNElzFH(bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3215E0))(this, );
  }
  void xIyZRaySodITOHNkuLrmTJUOqdme() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3216E0))(this);
  }
  void ywTXNuTFEDNFTaeyOAQtBJQnrsTg() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x321790))(this);
  }
  void gwPOCybleEDaGIMWZkXatuslscP() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3218F0))(this);
  }
  void KPheJHlvdUrCurgXAOvbygbWGRh() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x321CD0))(this);
  }
  void JUJAbGkAQZpkUpLwNbXbkKNxkSUq() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x321DB0))(this);
  }
  bool daidcXDKvPdiHeLACqPABdvNgegN() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x321EA0))(this);
  }
  ModdingAPI::Exposed::System::Boolean_array* lejRLfFsyFniJJkGuHDmidnLqfZ() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Boolean_array*(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x322060))(this);
  }
  void ZwujWFuZYjqTZwAefeLtxPJxMIq(ModdingAPI::Exposed::System::Boolean_array* ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*, ModdingAPI::Exposed::System::Boolean_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x322130))(this, );
  }
  bool uXjFPmfdWSGeyzFLPmoaFfYhRWv(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL::pKHYxljsDJqTLGDEncXbEHyrGHOi* , bool ) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL*, ModdingAPI::Exposed::rAJfqCxsbSBnlHPPDyqOMhtoqvgL::pKHYxljsDJqTLGDEncXbEHyrGHOi*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3225B0))(this, , );
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Guid_array*> tHOUMAgBZyNvFvOxLYjmbJFyXEI = __CppStaticProperty<ModdingAPI::Exposed::System::Guid_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->tHOUMAgBZyNvFvOxLYjmbJFyXEI; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::String_array*> LlCCwREIigqPSeINhejDKLrgcFHi = __CppStaticProperty<ModdingAPI::Exposed::System::String_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->LlCCwREIigqPSeINhejDKLrgcFHi; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::String_array*> FnWIDqJhjzACHSZIKUSxvBGSurM = __CppStaticProperty<ModdingAPI::Exposed::System::String_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->FnWIDqJhjzACHSZIKUSxvBGSurM; }
  );

  // Static methods:
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x3230C0))();
  }
  static inline bool CaXhAIEpAEgVtYuUkNSFHSHXDFzA(System_String* , System_String* , System_String* , ModdingAPI::Exposed::System::Guid ) {
    return reinterpret_cast<bool(__fastcall*)(System_String*, System_String*, System_String*, ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3233A0))(, , , );
  }
};
}