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
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed {
struct __DialogueSequenceFP_Il2CppStaticFields {
};

struct __DialogueSequenceFP_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __DialogueSequenceFP_Il2CppClass {
  Il2CppClass_1 _1;
  __DialogueSequenceFP_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __DialogueSequenceFP_Il2CppVtbl vtbl;
};

class DialogueSequenceFP {
public:
  // Il2Cpp fields:
  __DialogueSequenceFP_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::Color m_DefaultNormalColor;
  ModdingAPI::Exposed::UnityEngine::Color m_DefaultHoveredColor;
  ModdingAPI::Exposed::UILabel* m_UILabel;
  ModdingAPI::Exposed::UILabel* m_UILabelCyrillic;
  ModdingAPI::Exposed::UnityEngine::Camera* m_TextRenderingCamera;
  ModdingAPI::Exposed::UnityEngine::Renderer* m_Foreground;
  ModdingAPI::Exposed::UnityEngine::Renderer* m_Backround;
  ModdingAPI::Exposed::TMPro::TextMeshPro* m_TextMesh;
  ModdingAPI::Exposed::UIRoot* m_UIRoot;
  int32_t m_ChoiceIndex;
  ModdingAPI::Exposed::DialogueModeRigFP* m_DialogueModeRigFP;
  bool m_IsChoiceEnabled;
  bool m_IsChoiceAssigned;
  System_String* m_StateName;
  float m_Duration;
  ModdingAPI::Exposed::DialogueModeRigFP::DialogueChoiceCategoryConfiguration* m_DialogueChoiceCategoryConfiguration;
  int32_t m_PreferredCategory;
  System_String* m_DisplayName;
  bool m_IsHovered;
  bool m_HasChanged;
  ModdingAPI::Exposed::RenderTextureGrabber* m_QuadRenderTextureGrabber;
  ModdingAPI::Exposed::UnityEngine::Renderer* m_QuadRenderer;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_QuadOriginalScale;
  ModdingAPI::Exposed::UnityEngine::Vector3 m_UILabelCyrillicOriginalScale;
  bool m_HasRequestedTextUpdate;
  int32_t m_OriginalFontSize;
  float m_MaxTextSizeFactor;

  // Member methods:
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F57D30))(this);
  }
  void UpdateText() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F58720))(this);
  }
  void Update() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F58B90))(this);
  }
  void SetPreferredCategory(int32_t category) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F58D60))(this, category);
  }
  void SetChoiceCategoryConfiguration(ModdingAPI::Exposed::DialogueModeRigFP::DialogueChoiceCategoryConfiguration* categoryConfig) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, ModdingAPI::Exposed::DialogueModeRigFP::DialogueChoiceCategoryConfiguration*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F58D70))(this, categoryConfig);
  }
  bool ProcessInteraction() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F58EC0))(this);
  }
  void Reset(ModdingAPI::Exposed::DialogueModeRigFP* dialogueModeRigFP) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, ModdingAPI::Exposed::DialogueModeRigFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A40))(this, dialogueModeRigFP);
  }
  System_String* GetHoverText() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x30F140))(this);
  }
  int32_t GetPreferredCategory() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5F1030))(this);
  }
  int32_t GetChoiceIndex() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A00))(this);
  }
  void Setup(System_String* text, int32_t choiceIndex, float textSize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, System_String*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F58FA0))(this, text, choiceIndex, textSize);
  }
  void SetupImages(ModdingAPI::Exposed::UnityEngine::Texture2D* fg, ModdingAPI::Exposed::UnityEngine::Texture2D* bg) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, ModdingAPI::Exposed::UnityEngine::Texture2D*, ModdingAPI::Exposed::UnityEngine::Texture2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F590E0))(this, fg, bg);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F59210))(this);
  }
  void EnableImage(ModdingAPI::Exposed::UnityEngine::Renderer* renderer, ModdingAPI::Exposed::UnityEngine::Texture2D* image) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, ModdingAPI::Exposed::UnityEngine::Renderer*, ModdingAPI::Exposed::UnityEngine::Texture2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F593C0))(this, renderer, image);
  }
  void DisableImage(ModdingAPI::Exposed::UnityEngine::Renderer* renderer) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, ModdingAPI::Exposed::UnityEngine::Renderer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F59680))(this, renderer);
  }
  void OnRenderComplete() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F59830))(this);
  }
  void EnableForeground(ModdingAPI::Exposed::UnityEngine::Texture2D* image) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, ModdingAPI::Exposed::UnityEngine::Texture2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F59930))(this, image);
  }
  void EnableBackground(ModdingAPI::Exposed::UnityEngine::Texture2D* image) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, ModdingAPI::Exposed::UnityEngine::Texture2D*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F59940))(this, image);
  }
  void DisableBackground() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F59950))(this);
  }
  void DisableForeground() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F59960))(this);
  }
  void SetChoiceEnabled(bool isEnabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F59970))(this, isEnabled);
  }
  void SetChoiceAssigned(bool isAssigned) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14DDC70))(this, isAssigned);
  }
  bool IsChoiceEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7F6490))(this);
  }
  bool IsChoiceAssigned() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x14DDC60))(this);
  }
  void SetHovered(bool isHovered) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEF70))(this, isHovered);
  }
  bool IsHovered() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A4AB30))(this);
  }
  void EnabledUILabel(ModdingAPI::Exposed::UILabel* uiLabel, bool enabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, ModdingAPI::Exposed::UILabel*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F59B20))(this, uiLabel, enabled);
  }
  void SetupNormalUILabelText(System_String* text, float textSize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F59BF0))(this, text, textSize);
  }
  void SetupCyrillicILabelText(System_String* text, float textSize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F59E10))(this, text, textSize);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DialogueSequenceFP*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F5A0E0))(this);
  }
};
}