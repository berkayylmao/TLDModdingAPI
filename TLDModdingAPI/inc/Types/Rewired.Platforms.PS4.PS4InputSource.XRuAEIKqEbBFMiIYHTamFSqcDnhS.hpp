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
#include "ModdingAPI.Exposed.System.Nullable_T_.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Quaternion.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"


namespace ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource {
struct __XRuAEIKqEbBFMiIYHTamFSqcDnhS_Il2CppStaticFields {
  int32_t PLfFPUqIjKxIRqDqgeEnvMMGdme;
};

struct __XRuAEIKqEbBFMiIYHTamFSqcDnhS_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Update;
  VirtualInvokeData _5_get_supportsVibration;
  VirtualInvokeData _6_GetAxisValue;
  VirtualInvokeData _7_GetButtonValue;
  VirtualInvokeData _8_GetUserId;
  VirtualInvokeData _9_GetUserStatus;
  VirtualInvokeData _10_GetUserIsPrimary;
  VirtualInvokeData _11_GetUserColor;
  VirtualInvokeData _12_GetUserColorId;
  VirtualInvokeData _13_GetUserName;
  VirtualInvokeData _14_SetMotionSensorState;
  VirtualInvokeData _15_SetTiltCorrectionState;
  VirtualInvokeData _16_SetAngularVelocityDeadbandState;
  VirtualInvokeData _17_ResetOrientation;
  VirtualInvokeData _18_GetLastAcceleration;
  VirtualInvokeData _19_GetLastAccelerationRaw;
  VirtualInvokeData _20_GetLastGyro;
  VirtualInvokeData _21_GetLastGyroRaw;
  VirtualInvokeData _22_GetLastOrientation;
  VirtualInvokeData _23_GetLastOrientationRaw;
  VirtualInvokeData _25_get_vibrationMotorCount;
  VirtualInvokeData _26_SetVibration;
  VirtualInvokeData _27_GetVibration;
  VirtualInvokeData _28_StopVibration;
  VirtualInvokeData _29_SetLightColor;
  VirtualInvokeData _30_ResetLight;
  VirtualInvokeData _31_UpdateElementValues;
};

struct __XRuAEIKqEbBFMiIYHTamFSqcDnhS_Il2CppClass {
  Il2CppClass_1 _1;
  __XRuAEIKqEbBFMiIYHTamFSqcDnhS_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __XRuAEIKqEbBFMiIYHTamFSqcDnhS_Il2CppVtbl vtbl;
};

class XRuAEIKqEbBFMiIYHTamFSqcDnhS {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5E9B0;
  static inline    __XRuAEIKqEbBFMiIYHTamFSqcDnhS_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __XRuAEIKqEbBFMiIYHTamFSqcDnhS_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__XRuAEIKqEbBFMiIYHTamFSqcDnhS_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __XRuAEIKqEbBFMiIYHTamFSqcDnhS_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  bool _isConnected;
  System_String* _deviceName;
  System_String* _customName;
  ModdingAPI::Exposed::System::Nullable_T_ Joystick_qbbbdAdRgyAzIkwmNaaQhnCgBowD;
  int32_t Joystick_jgfPnAEctTWfPBegrbwLfYRRsNXO;
  ModdingAPI::Exposed::Rewired::Platforms::Custom::CustomInputSource::Axis_array* Joystick_ygKoSRPvlhFHNugDEHnHEFOaPysU;
  ModdingAPI::Exposed::Rewired::Platforms::Custom::CustomInputSource::Button_array* Joystick_KVNyFuTeDYMEfZfzXNZSFyiUjOz;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* Joystick_qRvwjQLeRXtQWAsIHTXHSDttcbM;
  ModdingAPI::Exposed::System::Collections::ObjectModel::ReadOnlyCollection_T_* Joystick_dFHovyHkekMsXyCKWzTPLFQzuLf;
  bool Joystick_QhKxQVMbciEjINDsdQowgZOEWOn;
  ModdingAPI::Exposed::Rewired::Controller::Extension* Joystick_mOyfABPQGnDTXmvUyuQvMOOPHRt;
  int32_t RQvCtWMSaXdtWuElfcQyltnGehm;
  int32_t zEEBNSjNgXJcMHkefSJlGmFWZILK;
  int32_t qWWYqwRCVxLNiBFzGYHscMKOjD;
  ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS::rSrbEdqJUzVCZLAAuKAdlNrScamH* nYojqtRYuTMwzmMbqOigMuAnrcH;
  int32_t oilQcqKchUHXcCwAqaokflxZfjE;
  ModdingAPI::Exposed::System::Single_array* NNfcnZCGPKPsCetJDSHSkSebZXSa;
  ModdingAPI::Exposed::Rewired::Platforms::PS4::Internal::LoggedInUser* cFPCzUUOBUmwHfGZxrgKeLeNjKFi;
  int32_t BKWeeAtaRjenxRXXISPPwMjqydU;
  ModdingAPI::Exposed::System::Func_T__TResult_* hzHbCLJOiwZjxxAZGpswEUOMhuM;
  ModdingAPI::Exposed::System::Action_T1__T2__T3_* MEvqUXrXKUsMTCgNypIZYDvKBbA;
  ModdingAPI::Exposed::System::Action_T1__T2__T3__T4_* ThNWxJefMkcHYpDfxxRTjWnozRB;
  ModdingAPI::Exposed::System::Action_T_* FuJzUysuoepwShgFcofoVmdZuyO;
  ModdingAPI::Exposed::System::Action_T1__T2_* sWuCMAiWLCMsgRPchsfKcXTDHuPc;
  ModdingAPI::Exposed::System::Action_T1__T2_* mrlJCRKbcjcMUgkDnFhOGBlqUkk;
  ModdingAPI::Exposed::System::Action_T1__T2_* CaqzTyFJoXNJQpsWcoVIUpWsBUu;
  ModdingAPI::Exposed::System::Action_T_* VJofpwAOsKQuRTkSHyLEBMZziqF;
  ModdingAPI::Exposed::System::Func_T__TResult_* jBBKooEkoMybzWRTqnhwDTatwXZ;
  ModdingAPI::Exposed::System::Func_T__TResult_* zAQFzSPnnyxNqNPmHLKKSdoXmKP;
  ModdingAPI::Exposed::System::Func_T__TResult_* ZTNnyHeikNLFuHucOghpHukvlmX;

  // Member methods:
  ModdingAPI::Exposed::Rewired::Platforms::PS4::Internal::LoggedInUser* get_user() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Platforms::PS4::Internal::LoggedInUser*(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76BB10))(this);
  }
  int32_t get_type() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5F1030))(this);
  }
  int32_t get_playerId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A00))(this);
  }
  int32_t get_handle() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A20))(this);
  }
  int32_t get_baseControllerType() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x48B440))(this);
  }
  bool get_IsConnectedNow() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76BBE0))(this);
  }
  void ::ctor(int32_t type, int32_t baseControllerType, System_String* name, int32_t playerId, int32_t unityJoystickId, int32_t handle, ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS::rSrbEdqJUzVCZLAAuKAdlNrScamH* capabilities) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*, int32_t, int32_t, System_String*, int32_t, int32_t, int32_t, ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS::rSrbEdqJUzVCZLAAuKAdlNrScamH*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76BC80))(this, type, baseControllerType, name, playerId, unityJoystickId, handle, capabilities);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76DD50))(this);
  }
  int32_t GetUserId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76DD70))(this);
  }
  int32_t GetUserStatus() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76DD90))(this);
  }
  bool GetUserIsPrimary() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76DDB0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Color GetUserColor() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76DDD0))(this);
  }
  int32_t GetUserColorId() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76DE70))(this);
  }
  System_String* GetUserName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76DE90))(this);
  }
  int32_t get_vibrationMotorCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76DEB0))(this);
  }
  void StopVibration() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76DED0))(this);
  }
  void SetVibration(int32_t , float ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76DF10))(this, , );
  }
  float GetVibration(int32_t ) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76DF70))(this, );
  }
  void SetMotionSensorState(bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76DFD0))(this, );
  }
  void SetTiltCorrectionState(bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76E080))(this, );
  }
  void SetAngularVelocityDeadbandState(bool ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76E130))(this, );
  }
  void ResetOrientation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76E1E0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetLastAcceleration() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76E280))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetLastAccelerationRaw() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76E3E0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetLastGyro() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76E4E0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 GetLastGyroRaw() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76E700))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion GetLastOrientation() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76E800))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Quaternion GetLastOrientationRaw() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Quaternion(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76E940))(this);
  }
  void SetLightColor(int32_t , int32_t , int32_t ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76EB30))(this, , , );
  }
  void ResetLight() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76EC00))(this);
  }
  void UpdateElementValues() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76ECA0))(this);
  }
  void bATiRxAzKvplUMGKGzucCTsjzmB() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76FA80))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<int32_t> PLfFPUqIjKxIRqDqgeEnvMMGdme = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->PLfFPUqIjKxIRqDqgeEnvMMGdme; }
  );

  // Static methods:
  static inline int32_t get_NextSystemId() {
    return reinterpret_cast<int32_t(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x76B790))();
  }
  static inline ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS* vDCnOMtiDgvdBHibTeByEtCPBLh(int32_t , int32_t , int32_t , int32_t ) {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::Platforms::PS4::PS4InputSource::XRuAEIKqEbBFMiIYHTamFSqcDnhS*(__fastcall*)(int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76B830))(, , , );
  }
  static inline int32_t pXTVOMFtAWGPSdVrFJTnENPOHkX(float ) {
    return reinterpret_cast<int32_t(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76FC90))();
  }
  static inline void PWVyfMIezbFKJBdYzYeWHuYOxmp(ModdingAPI::Exposed::UnityEngine::Vector3 ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76FCC0))();
  }
  static inline void FpXPCdXHcvlVJybRYgTjhGKUYukc(ModdingAPI::Exposed::UnityEngine::Vector3 ) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76FCC0))();
  }
  static inline bool YdjvRiPnfaEMXHzhEEUaaBjAGLgG(int32_t , int32_t ) {
    return reinterpret_cast<bool(__fastcall*)(int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x76FCF0))(, );
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))();
  }
};
}