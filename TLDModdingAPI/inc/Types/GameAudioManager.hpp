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
#include "ModdingAPI::Exposed::UnityEngine::Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __GameAudioManager_Il2CppStaticFields {
  float m_LastAudioFade;
  bool m_AudioPaused;
  int32_t m_FramesSincePlayedButtonClick;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_OnStopAllAudioCallbacks;
  int32_t m_AudioFadeState;
  int32_t m_AudioFadeRequestedState;
  float m_AudioFadeTimer;
  float m_AudioFadeDuration;
  System_String* m_WwiseEventOnStart;
  bool m_WwiseFadeInOnStart;
  bool m_WwiseStopAllOnStart;
};

struct __GameAudioManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __GameAudioManager_Il2CppClass {
  Il2CppClass_1 _1;
  __GameAudioManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __GameAudioManager_Il2CppVtbl vtbl;
};

class GameAudioManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6DAD8;
  static inline    __GameAudioManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __GameAudioManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__GameAudioManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __GameAudioManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_WiseAudioPrefab;
  float m_FadeInAudioSeconds;
  int32_t m_StopAudioFadeOutMicroseconds;
  System_String* m_ErrorAudio;
  System_String* m_ButtonClickAudio;
  System_String* m_ButtonBackAudio;
  System_String* m_MenuOpenAudio;
  System_String* m_MenuCloseAudio;
  System_String* m_ScrollAudio;
  System_String* m_ComboBoxScrollAudio;
  System_String* m_SliderAudio;
  System_String* m_MouseOver;
  System_String* m_Confirm;
  ModdingAPI::Exposed::UnityEngine::GameObject* m_WiseAudio;
  int32_t m_InsideHeavyOcclusionTriggerCount;
  int32_t m_InsideMediumOcclusionTriggerCount;
  int32_t m_InsideMildOcclusionTriggerCount;
  int32_t m_CurrentAudioOcclusionLevel;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F8C10))(this);
  }
  void Start() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F8C20))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F91A0))(this);
  }
  void EnterOcclusionTrigger(int32_t level) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FAA30))(this, level);
  }
  void ExitOcclusionTrigger(int32_t level) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FAA70))(this, level);
  }
  void UpdateAudioOcclusion() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FFD90))(this);
  }
  void UpdateAudioFade() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16000B0))(this);
  }
  void SetHeavyOcclusion() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16003E0))(this);
  }
  void SetMediumOcclusion() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1600510))(this);
  }
  void SetMildOcclusion() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1600640))(this);
  }
  void SetNoOcclusion() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1600770))(this);
  }
  void InstantiateWiseAudio() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x16008A0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GameAudioManager*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<float> m_LastAudioFade = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_LastAudioFade; }
  );
  static inline __CppStaticProperty<bool> m_AudioPaused = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_AudioPaused; }
  );
  static inline __CppStaticProperty<int32_t> m_FramesSincePlayedButtonClick = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_FramesSincePlayedButtonClick; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_OnStopAllAudioCallbacks = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_OnStopAllAudioCallbacks; }
  );
  static inline __CppStaticProperty<int32_t> m_AudioFadeState = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_AudioFadeState; }
  );
  static inline __CppStaticProperty<int32_t> m_AudioFadeRequestedState = __CppStaticProperty<int32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_AudioFadeRequestedState; }
  );
  static inline __CppStaticProperty<float> m_AudioFadeTimer = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_AudioFadeTimer; }
  );
  static inline __CppStaticProperty<float> m_AudioFadeDuration = __CppStaticProperty<float>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_AudioFadeDuration; }
  );
  static inline __CppStaticProperty<System_String*> m_WwiseEventOnStart = __CppStaticProperty<System_String*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_WwiseEventOnStart; }
  );
  static inline __CppStaticProperty<bool> m_WwiseFadeInOnStart = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_WwiseFadeInOnStart; }
  );
  static inline __CppStaticProperty<bool> m_WwiseStopAllOnStart = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_WwiseStopAllOnStart; }
  );

  // Static methods:
  static inline void StopAll() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F92C0))();
  }
  static inline bool CanPlaySpecialUIEntrySound() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F9380))();
  }
  static inline void PauseAudioImmediate() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F9420))();
  }
  static inline void PauseAudio() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F9640))();
  }
  static inline void UnPauseAudio() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F9860))();
  }
  static inline void PlayGUIError() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F9A80))();
  }
  static inline void PlayGUIButtonClick() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F9C10))();
  }
  static inline void PlayGUIButtonBack() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F9DC0))();
  }
  static inline void PlayGUIMenuOpen() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15F9F50))();
  }
  static inline void PlayGUIMenuClose() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FA0E0))();
  }
  static inline void PlayGUIScroll() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FA270))();
  }
  static inline void PlayGUIComboBoxScroll() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FA3F0))();
  }
  static inline void PlayGUISlider() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FA580))();
  }
  static inline void PlayGUIMouseOver() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FA710))();
  }
  static inline void PlayGuiConfirm() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FA8A0))();
  }
  static inline void SetAiStateSwitch(int32_t mode, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FAB00))(mode, go);
  }
  static inline void SetCookingSlotSwitch(ModdingAPI::Exposed::GearPlacePoint* gpp) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GearPlacePoint*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FB2C0))(gpp);
  }
  static inline void SetMaterialSwitch(System_String* tag, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FB580))(tag, go);
  }
  static inline void SetCuttingToolSwitch(ModdingAPI::Exposed::GearItem* gearItem, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::GearItem*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FC000))(gearItem, go);
  }
  static inline void SetWeaponTypeSwitch(int32_t weaponType, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FC3A0))(weaponType, go);
  }
  static inline void SetFootwearSwitch(int32_t footwearType, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FC7F0))(footwearType, go);
  }
  static inline void SetIndoorEnvironmentSwitch(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FCA90))(go);
  }
  static inline void SetOutdoorEnvironmentSwitch(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FCC10))(go);
  }
  static inline void SetAudioSourceTransform(ModdingAPI::Exposed::UnityEngine::GameObject* owner, ModdingAPI::Exposed::UnityEngine::Transform* t) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Transform*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FCD90))(owner, t);
  }
  static inline void PlayDynamicSequence(System_String* soundID, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FD110))(soundID, go);
  }
  static inline uint32_t PlayMusic(System_String* soundID, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<uint32_t(__fastcall*)(System_String*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FD8D0))(soundID, go);
  }
  static inline uint32_t PlayMusic(uint32_t soundID, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<uint32_t(__fastcall*)(uint32_t, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FD9E0))(soundID, go);
  }
  static inline uint32_t PlaySoundWithPositionTracking(System_String* soundID, ModdingAPI::Exposed::UnityEngine::GameObject* go, ModdingAPI::Exposed::AkCallbackManager::EventCallback* eventCallback, int32_t playOptions) {
    return reinterpret_cast<uint32_t(__fastcall*)(System_String*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::AkCallbackManager::EventCallback*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FDAC0))(soundID, go, eventCallback, playOptions);
  }
  static inline uint32_t PlayVoiceWithPositionTracking(System_String* soundID, ModdingAPI::Exposed::UnityEngine::GameObject* go, ModdingAPI::Exposed::AkCallbackManager::EventCallback* eventCallback) {
    return reinterpret_cast<uint32_t(__fastcall*)(System_String*, ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::AkCallbackManager::EventCallback*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FDD30))(soundID, go, eventCallback);
  }
  static inline uint32_t PlaySound(System_String* soundID, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<uint32_t(__fastcall*)(System_String*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FDF30))(soundID, go);
  }
  static inline void Seek(System_String* soundID, int32_t audioMs, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(System_String*, int32_t, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FE0F0))(soundID, audioMs, go);
  }
  static inline uint32_t PlaySound(uint32_t soundID, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<uint32_t(__fastcall*)(uint32_t, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FE4D0))(soundID, go);
  }
  static inline uint32_t Play3DSound(System_String* soundID, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<uint32_t(__fastcall*)(System_String*, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FE650))(soundID, go);
  }
  static inline uint32_t Play3DSound(uint32_t soundID, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<uint32_t(__fastcall*)(uint32_t, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FE860))(soundID, go);
  }
  static inline void NotifyAiAudioEvent(ModdingAPI::Exposed::UnityEngine::GameObject* sender, ModdingAPI::Exposed::UnityEngine::Vector3 pos, int32_t eventType) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*, ModdingAPI::Exposed::UnityEngine::Vector3, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FEA40))(sender, pos, eventType);
  }
  static inline ModdingAPI::Exposed::UnityEngine::GameObject* GetSoundEmitterFromGameObject(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FEC20))(go);
  }
  static inline void EnsureEmitterIsRegistered(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FEFB0))(go);
  }
  static inline void StopAllSoundsFromGameObject(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FF0C0))(go);
  }
  static inline void SetRTPCValue(uint32_t rtpcID, float rtpcValue, ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(uint32_t, float, ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FF2E0))(rtpcID, rtpcValue, go);
  }
  static inline void SetAudioFade(float normalizedValue) {
    reinterpret_cast<void(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FF3D0))(normalizedValue);
  }
  static inline void StartAudioFadeIn(float duration) {
    reinterpret_cast<void(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FF4E0))(duration);
  }
  static inline void StartAudioFadeOut(float duration) {
    reinterpret_cast<void(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FF5A0))(duration);
  }
  static inline bool AudioIsPaused() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FF660))();
  }
  static inline void FadeInAudioOnSceneStart() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FF700))();
  }
  static inline bool HasFadedInOnStart() {
    return reinterpret_cast<bool(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FF8B0))();
  }
  static inline void TriggerStopAllAudioCallbackFor(ModdingAPI::Exposed::UnityEngine::GameObject* gameObject) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FF960))(gameObject);
  }
  static inline void AddAudioComponents(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FFA80))(go);
  }
  static inline bool GameObjectHasCollider(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x15FFBB0))(go);
  }
  static inline void AddAudioComponentsInternal(ModdingAPI::Exposed::UnityEngine::GameObject* go) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1600A50))(go);
  }
  static inline ModdingAPI::Exposed::UnityEngine::GameObject* AddAudioEmitterProxy(ModdingAPI::Exposed::UnityEngine::GameObject* parent) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::GameObject*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::GameObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1600CC0))(parent);
  }
  static inline void SetRTPCAudioFade(float normalizedValue) {
    reinterpret_cast<void(__fastcall*)(float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1601330))(normalizedValue);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x16014B0))();
  }
};
}