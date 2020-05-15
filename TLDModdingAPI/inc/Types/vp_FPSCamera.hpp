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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector4.hpp"
#include "ModdingAPI.Exposed.vp_FPSCamera.RecoilSpring.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Quaternion.hpp"


namespace ModdingAPI::Exposed {
struct __vp_FPSCamera_Il2CppStaticFields {
  bool m_DebugCamera;
  bool m_DisableAmbientSway;
};

struct __vp_FPSCamera_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Init;
  VirtualInvokeData _5_AllowState;
  VirtualInvokeData _6_Refresh;
};

struct __vp_FPSCamera_Il2CppClass {
  Il2CppClass_1 _1;
  __vp_FPSCamera_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __vp_FPSCamera_Il2CppVtbl vtbl;
};

class vp_FPSCamera {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C5E090;
  static inline    __vp_FPSCamera_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __vp_FPSCamera_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__vp_FPSCamera_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __vp_FPSCamera_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  bool Persist;
  ModdingAPI::Exposed::vp_StateManager* m_StateManager;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* States;
  ModdingAPI::Exposed::vp_StateInfo* m_DefaultState;
  bool m_Initialized;
  ModdingAPI::Exposed::UnityEngine::CharacterController* Controller;
  ModdingAPI::Exposed::PanViewCamera* m_PanViewCamera;
  ModdingAPI::Exposed::UnityEngine::Vector2 TouchSensitivity;
  float GamepadDeadzone;
  float GamepadDeadZonePower;
  float GamepadSensitivity;
  float GamepadTimeToMaxVelocity;
  float GamepadTimeActiveResetAfterTimeInactive;
  ModdingAPI::Exposed::UnityEngine::Vector2 GamepadMinVelocity;
  ModdingAPI::Exposed::UnityEngine::Vector2 GamepadMaxVelocity;
  int32_t GamepadHistorySize;
  ModdingAPI::Exposed::UnityEngine::Vector2_array* GamepadHistory;
  int32_t GamepadHistoryCount;
  float GamepadTimeActiveResetOnAngleDifferenceDegrees;
  float m_MaxAmbientSwayAngleDegrees;
  float m_AmbientSwaySpeed;
  float m_MaxAmbientAimingSwayAngleDegrees;
  float m_AmbientAimingSwaySpeed;
  float GamepadTimeActive;
  float GamepadTimeInactive;
  float m_MouseSensitivity;
  float m_UnzoomedMouseSensitivity;
  float m_ZoomedMouseSensitivity;
  int32_t MouseSmoothSteps;
  float MouseSmoothWeight;
  bool MouseAcceleration;
  float MouseAccelerationThreshold;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_MouseMove;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_MouseSmoothBuffer;
  float m_RenderingFieldOfView;
  float m_UnzoomedFieldOfView;
  float RenderingFieldOfViewTest;
  float RenderingZoomDamping;
  float m_FinalZoomTime;
  ModdingAPI::Exposed::UnityEngine::Vector3 PositionOffset;
  float PositionGroundLimit;
  float PositionSpringStiffness;
  float PositionSpringDamping;
  float PositionSpring2Stiffness;
  float PositionSpring2Damping;
  float PositionKneeling;
  ModdingAPI::Exposed::vp_Spring* m_PositionSpring;
  ModdingAPI::Exposed::vp_Spring* m_PositionSpring2;
  ModdingAPI::Exposed::UnityEngine::Vector2 RotationPitchLimit;
  ModdingAPI::Exposed::UnityEngine::Vector2 RotationYawLimit;
  float m_Pitch;
  float m_Yaw;
  float RotationSpringStiffness;
  float RotationSpringDamping;
  float RotationKneeling;
  float RotationStrafeRoll;
  ModdingAPI::Exposed::vp_Spring* m_RotationSpring;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_InitialRotation;
  float m_BasePitch;
  float m_BaseRoll;
  float ShakeSpeed;
  ModdingAPI::Exposed::UnityEngine::Vector3 ShakeAmplitude;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_Shake;
  ModdingAPI::Exposed::UnityEngine::Vector4 BobRate;
  ModdingAPI::Exposed::UnityEngine::Vector4 BobAmplitude;
  float BobInputVelocityScale;
  float BobMaxInputVelocity;
  ModdingAPI::Exposed::vp_FPSCamera::BobStepDelegate* BobStepCallback;
  float BobStepThreshold;
  float RecoilMinVelocity;
  float RecoilPitchDamping;
  float RecoilPitchStiffness;
  float RecoilYawDamping;
  float RecoilYawStiffness;
  float m_OffsetY;
  ModdingAPI::Exposed::UnityEngine::Camera* m_WeaponCamera;
  ModdingAPI::Exposed::UnityEngine::Camera* m_Camera;
  float m_LastUpBob;
  bool m_BobWasElevating;
  float m_HighestFallSpeed;
  bool m_WasGroundedLastFrame;
  float m_EarthQuakeTime;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_EarthQuakeMagnitude;
  float m_EarthQuakeWeaponShakeFactor;
  float m_EarthQuakeCameraRollFactor;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Weapons;
  int32_t m_CurrentWeaponID;
  ModdingAPI::Exposed::vp_FPSWeapon* m_CurrentWeapon;
  ModdingAPI::Exposed::vp_FPSShooter* m_CurrentShooter;
  float m_SwitchWeaponTimer;
  float m_ShowWeaponTimer;
  ModdingAPI::Exposed::UnityEngine::AudioListener* m_AudioListener;
  bool m_OverlayWasActive;
  ModdingAPI::Exposed::CameraPathAnimator_array* m_CameraPathAnimators;
  ModdingAPI::Exposed::UnityEngine::Vector2 DefaultRotationPitchLimit;
  ModdingAPI::Exposed::UnityEngine::Vector2 DefaultRotationYawLimit;
  float m_NearClipPlane;
  bool _IsZoomed_k__BackingField;
  bool m_FirstFrame;
  int32_t m_NumUpdates;
  bool m_UseRootOrientation;
  bool m_LockRotationLimit;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_LockedRotationPitchLimit;
  ModdingAPI::Exposed::UnityEngine::Vector2 m_LockedRotationYawLimit;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_AmbientSwayAngles;
  float m_DeadZoneDampenScale;
  float m_DeadZoneTime;
  bool m_UpdateForcesAndSprings;
  int32_t m_PendingWeaponId;
  ModdingAPI::Exposed::GearItem* m_PendingGearItem;
  bool m_WeaponSwitchInProgress;
  bool m_ForceIndoorFovAllowed;
  float m_TargetPitch;
  float m_CurrentPitch;
  float m_TargetYaw;
  float m_CurrentYaw;
  float m_YawPitchDampingFactor;
  bool m_UseUnscaledTime;
  ModdingAPI::Exposed::vp_FPSCamera::RecoilSpring m_RecoilSpring;

  // Member methods:
  float get_MouseSensitivity() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F3BB0))(this);
  }
  void set_MouseSensitivity(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEF90))(this, value);
  }
  int32_t get_CurrentWeaponID() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CCFD70))(this);
  }
  ModdingAPI::Exposed::vp_FPSWeapon* get_CurrentWeapon() {
    return reinterpret_cast<ModdingAPI::Exposed::vp_FPSWeapon*(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CCFD80))(this);
  }
  ModdingAPI::Exposed::vp_FPSShooter* get_CurrentShooter() {
    return reinterpret_cast<ModdingAPI::Exposed::vp_FPSShooter*(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CCFD90))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector3 get_PositionSpring() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CCFDA0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_Angle() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CCFDD0))(this);
  }
  void set_Angle(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CCFDF0))(this, value);
  }
  bool get_IsZoomed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CCFF40))(this);
  }
  void set_IsZoomed(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CCFF50))(this, value);
  }
  void SetUseRootOrientation(bool useRootOrientation) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD0070))(this, useRootOrientation);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD0080))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD0CD0))(this);
  }
  void SetFOVFromOptions(float newFOV) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD0E40))(this, newFOV);
  }
  void SetMouseSensitivityFromOptions(float newMouseSensitivity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD0F50))(this, newMouseSensitivity);
  }
  void SetZoomSensitivityFromOptions(float newMouseSensitivity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD0F70))(this, newMouseSensitivity);
  }
  void Init() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD0F80))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD1110))(this);
  }
  void InitWeaponsArray() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD1960))(this);
  }
  void SetUpdateForcesAndStrings(bool update) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD1C50))(this, update);
  }
  void UpdateCameraRotation() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD1C60))(this);
  }
  void LateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD29D0))(this);
  }
  void DoLateUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD2EC0))(this);
  }
  void FixedUpdate() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD34A0))(this);
  }
  void UpdateForces(float time, float smoothDeltaTime) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD4060))(this, time, smoothDeltaTime);
  }
  void SetWasGroundedLastFrame(bool wasGroundedLastFrame) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD4300))(this, wasGroundedLastFrame);
  }
  void DetectFallingImpact(float smoothDeltaTime) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD4310))(this, smoothDeltaTime);
  }
  void DoCameraCollision() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD45D0))(this);
  }
  void ApplyFallImpact(float impact, bool weaponOnly) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD4FB0))(this, impact, weaponOnly);
  }
  void AddForce(ModdingAPI::Exposed::UnityEngine::Vector3 force) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD52B0))(this, force);
  }
  void AddForce(float x, float y, float z) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD52F0))(this, x, y, z);
  }
  void AddForce2(ModdingAPI::Exposed::UnityEngine::Vector3 force) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD5340))(this, force);
  }
  void AddForce2(float x, float y, float z) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD5380))(this, x, y, z);
  }
  void AddRollForce(float force) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD53D0))(this, force);
  }
  void AddRotationForce(ModdingAPI::Exposed::UnityEngine::Vector3 force) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD5420))(this, force);
  }
  void AddRotationForce(float x, float y, float z) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD5460))(this, x, y, z);
  }
  void SetPitchLimit(ModdingAPI::Exposed::UnityEngine::Vector2 limit) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADB310))(this, limit);
  }
  void SetYawLimit(ModdingAPI::Exposed::UnityEngine::Quaternion baseRotation, ModdingAPI::Exposed::UnityEngine::Vector2 limit) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD54B0))(this, baseRotation, limit);
  }
  void SetPitchLimitFromBase(ModdingAPI::Exposed::UnityEngine::Quaternion baseRotation, ModdingAPI::Exposed::UnityEngine::Vector2 limit) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, ModdingAPI::Exposed::UnityEngine::Quaternion, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD5660))(this, baseRotation, limit);
  }
  bool IsRotationLimitLocked() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD5850))(this);
  }
  void LockRotationLimit() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD5860))(this);
  }
  void UnlockRotationLimit() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD5880))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetMouseDelta() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD5970))(this);
  }
  float CalculateClampedYaw(float delta, float orginalYaw, float yaw) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD6490))(this, delta, orginalYaw, yaw);
  }
  void UpdateMouseLook(ModdingAPI::Exposed::UnityEngine::Vector2 input) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD6860))(this, input);
  }
  void AddToYaw(float angle) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD6A60))(this, angle);
  }
  void UpdateZoom(float time) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD6AD0))(this, time);
  }
  void ToggleZoom(bool enabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD6D30))(this, enabled);
  }
  float GetUnzoomedFieldOfView() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1AA8550))(this);
  }
  void Zoom() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD6EA0))(this);
  }
  void SnapZoom() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD70D0))(this);
  }
  void UpdateShakes() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD7190))(this);
  }
  void UpdateAmbientSway() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD7370))(this);
  }
  void DoBob(float speed, float time) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD7570))(this, speed, time);
  }
  void DetectBobStep(float speed, float upBob) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD7A70))(this, speed, upBob);
  }
  void DoSwaying(ModdingAPI::Exposed::UnityEngine::Vector3 velocity) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD7B90))(this, velocity);
  }
  void UpdateEarthQuake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD7D90))(this);
  }
  void DoEarthQuake(float x, float y, float duration, float weaponShakeFactor, float cameraRollFactor) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float, float, float, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD82C0))(this, x, y, duration, weaponShakeFactor, cameraRollFactor);
  }
  void StopEarthQuake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD8300))(this);
  }
  void DoBomb(float force) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD8310))(this, force);
  }
  void DoBomb(ModdingAPI::Exposed::UnityEngine::Vector3 positionForce, float minRollForce, float maxRollForce, ModdingAPI::Exposed::UnityEngine::Vector2 earthQuakeForce, float earthQuakeTime, float earthQuakeWeaponShakeFactor, float earthQuakeCameraRollFactor, ModdingAPI::Exposed::UnityEngine::Vector3 weaponPositionForce, ModdingAPI::Exposed::UnityEngine::Vector3 weaponRotationForce) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, ModdingAPI::Exposed::UnityEngine::Vector3, float, float, ModdingAPI::Exposed::UnityEngine::Vector2, float, float, float, ModdingAPI::Exposed::UnityEngine::Vector3, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD85A0))(this, positionForce, minRollForce, maxRollForce, earthQuakeForce, earthQuakeTime, earthQuakeWeaponShakeFactor, earthQuakeCameraRollFactor, weaponPositionForce, weaponRotationForce);
  }
  void DoStomp(float force) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD8780))(this, force);
  }
  void DoAttackHit(float shakeForce, float rollForce) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD8920))(this, shakeForce, rollForce);
  }
  void Refresh() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD8BC0))(this);
  }
  void SetAngle(float yaw, float pitch) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD9040))(this, yaw, pitch);
  }
  void SnapSprings() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD9060))(this);
  }
  void StopSprings() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD9260))(this);
  }
  void UnWieldCurrentWeapon() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD92B0))(this);
  }
  void SwitchWeapon(int32_t weaponID, ModdingAPI::Exposed::GearItem* gearItem) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, int32_t, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD92C0))(this, weaponID, gearItem);
  }
  void DoSwitchWeapon() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD9960))(this);
  }
  void HidePrevious() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD9AA0))(this);
  }
  void ShowNext() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CD9EC0))(this);
  }
  void OnWeaponUnequipped() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDA3D0))(this);
  }
  void OnWeaponEquipped() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDA3E0))(this);
  }
  void CancelWeaponSwitch() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDA400))(this);
  }
  bool WeaponSwitchInProgress() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDA420))(this);
  }
  bool UseUnscaledTime() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDA5E0))(this);
  }
  void ForceUnscaledTime(bool useUnscaleTime) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDA5F0))(this, useUnscaleTime);
  }
  ModdingAPI::Exposed::UnityEngine::GameObject* GetFPSMeshGameObject(int32_t weaponID) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDA600))(this, weaponID);
  }
  void DeactivateAllWeapons() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDA720))(this);
  }
  void SetWeapon(int32_t weaponID, ModdingAPI::Exposed::GearItem* gearItem) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, int32_t, ModdingAPI::Exposed::GearItem*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDAA90))(this, weaponID, gearItem);
  }
  void DeactivateWhenSilent(ModdingAPI::Exposed::UnityEngine::Transform* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDB9B0))(this, t);
  }
  void SetWeaponLayer(int32_t layer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDC130))(this, layer);
  }
  void EnableEffectsForWeapon(int32_t weaponID, bool enable, bool hardStop) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, int32_t, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDC270))(this, weaponID, enable, hardStop);
  }
  int32_t GetWeaponIDFromName(System_String* name) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDC590))(this, name);
  }
  ModdingAPI::Exposed::vp_FPSWeapon* GetWeaponFromID(int32_t weaponID) {
    return reinterpret_cast<ModdingAPI::Exposed::vp_FPSWeapon*(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDC770))(this, weaponID);
  }
  bool PanViewCameraIsDetached() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDC920))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Camera* GetWeaponCamera() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Camera*(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDC9F0))(this);
  }
  void SetNearPlaneOverride(float nearPlane) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDCB20))(this, nearPlane);
  }
  float GetNearPlaneOverride() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDCB30))(this);
  }
  void StopNearPlaneOverride() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDCB40))(this);
  }
  bool AnimatedCameraPathIsPlaying() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDCC60))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 ComputeJoystickInput(float deltaTime) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDCDD0))(this, deltaTime);
  }
  void MaybeResetCurrentWeapon() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDD500))(this);
  }
  void DumpWeaponIds() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDD5D0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::vp_FPSCamera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CDD9D0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<bool> m_DebugCamera = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_DebugCamera; }
  );
  static inline __CppStaticProperty<bool> m_DisableAmbientSway = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_DisableAmbientSway; }
  );

  // Static methods:
  static inline bool GetDisableAmbientSway() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CCFF60))();
  }
  static inline void SetDisableAmbientSway(bool enable) {
    reinterpret_cast<void(__fastcall*)(bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1CCFFE0))(enable);
  }
};
}