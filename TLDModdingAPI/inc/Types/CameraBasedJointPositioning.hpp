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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __CameraBasedJointPositioning_Il2CppStaticFields {
};

struct __CameraBasedJointPositioning_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CameraBasedJointPositioning_Il2CppClass {
  Il2CppClass_1 _1;
  __CameraBasedJointPositioning_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CameraBasedJointPositioning_Il2CppVtbl vtbl;
};

class CameraBasedJointPositioning {
public:
  // Il2Cpp fields:
  __CameraBasedJointPositioning_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_Joint;
  float m_Camera_MaxAngle;
  float m_Camera_MinAngle;
  float m_Camera_CenterAngle;
  float m_Joint_MaxAngle;
  float m_Joint_MinAngle;
  float m_Joint_CenterAngle;
  float m_JointAngleMinDifferenceForUpdate;
  float m_JointRotationMaxDegreesPerSecond;
  bool m_ApplyCameraMotionToJoint;
  System_String* m_Layer;
  float m_LayerWeight;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_CameraBone;
  float m_LastAngle;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_JointPositionAtStart;
  bool m_Enabled;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_StandingPositionOffset;
  int32_t m_LayerIndex;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_PositionToRestore;
  bool m_HasSetPositionToRestore;
  bool m_WasStruggling;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_SavedJoints;

  // Member methods:
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC4FB0))(this);
  }
  bool CanApplyCameraMotionToJoint() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC5270))(this);
  }
  void UpdateJoint() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC5370))(this);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1CD0))(this);
  }
  void Enable(bool enabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC5900))(this, enabled);
  }
  void Restore() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC5D10))(this);
  }
  void Save(System_String* saveName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC5E40))(this, saveName);
  }
  void Load(System_String* saveName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC5F80))(this, saveName);
  }
  float GetAngleFromPercentageOfAngleRange(float min, float max, float value, float outMin, float outMax) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*, float, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC63A0))(this, min, max, value, outMin, outMax);
  }
  float GetShoulderRotation() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC64A0))(this);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC6740))(this);
  }
  void ResetForStruggle() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC6990))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::CameraBasedJointPositioning*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1EC6C70))(this);
  }
};
}