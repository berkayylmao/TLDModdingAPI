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
#include "ModdingAPI.Exposed.UnityEngine.UI.Navigation.hpp"
#include "ModdingAPI.Exposed.UnityEngine.UI.ColorBlock.hpp"
#include "ModdingAPI.Exposed.UnityEngine.UI.SpriteState.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Color.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector2.hpp"


namespace ModdingAPI::Exposed::UnityEngine::UI {
struct __Selectable_Il2CppStaticFields {
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* s_List;
};

struct __Selectable_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Awake;
  VirtualInvokeData _5_OnEnable;
  VirtualInvokeData _6_Start;
  VirtualInvokeData _7_OnDisable;
  VirtualInvokeData _8_OnDestroy;
  VirtualInvokeData _9_IsActive;
  VirtualInvokeData _10_OnRectTransformDimensionsChange;
  VirtualInvokeData _11_OnBeforeTransformParentChanged;
  VirtualInvokeData _12_OnTransformParentChanged;
  VirtualInvokeData _13_OnDidApplyAnimationProperties;
  VirtualInvokeData _14_OnCanvasGroupChanged;
  VirtualInvokeData _15_OnCanvasHierarchyChanged;
  VirtualInvokeData _16_IsDestroyed;
  VirtualInvokeData _24_IsInteractable;
  VirtualInvokeData _25_InstantClearState;
  VirtualInvokeData _26_DoStateTransition;
  VirtualInvokeData _27_FindSelectableOnLeft;
  VirtualInvokeData _28_FindSelectableOnRight;
  VirtualInvokeData _29_FindSelectableOnUp;
  VirtualInvokeData _30_FindSelectableOnDown;
  VirtualInvokeData _31_OnMove;
  VirtualInvokeData _32_OnPointerDown;
  VirtualInvokeData _33_OnPointerUp;
  VirtualInvokeData _34_OnPointerEnter;
  VirtualInvokeData _35_OnPointerExit;
  VirtualInvokeData _36_OnSelect;
  VirtualInvokeData _37_OnDeselect;
  VirtualInvokeData _38_Select;
};

struct __Selectable_Il2CppClass {
  Il2CppClass_1 _1;
  __Selectable_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Selectable_Il2CppVtbl vtbl;
};

class Selectable {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C24F10;
  static inline    __Selectable_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __Selectable_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Selectable_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Selectable_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::UI::Navigation m_Navigation;
  int32_t m_Transition;
  ModdingAPI::Exposed::UnityEngine::UI::ColorBlock m_Colors;
  ModdingAPI::Exposed::UnityEngine::UI::SpriteState m_SpriteState;
  ModdingAPI::Exposed::UnityEngine::UI::AnimationTriggers* m_AnimationTriggers;
  bool m_Interactable;
  ModdingAPI::Exposed::UnityEngine::UI::Graphic* m_TargetGraphic;
  bool m_GroupsAllowInteraction;
  int32_t m_CurrentSelectionState;
  bool _isPointerInside_k__BackingField;
  bool _isPointerDown_k__BackingField;
  bool _hasSelection_k__BackingField;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_CanvasGroupCache;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF7930))(this);
  }
  ModdingAPI::Exposed::UnityEngine::UI::Navigation get_navigation() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::Navigation(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF7CA0))(this);
  }
  void set_navigation(ModdingAPI::Exposed::UnityEngine::UI::Navigation value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::UI::Navigation)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF7CC0))(this, value);
  }
  int32_t get_transition() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF7DF0))(this);
  }
  void set_transition(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF7E00))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::UI::ColorBlock get_colors() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::ColorBlock(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF7EB0))(this);
  }
  void set_colors(ModdingAPI::Exposed::UnityEngine::UI::ColorBlock value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::UI::ColorBlock)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF7EF0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::UI::SpriteState get_spriteState() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::SpriteState(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8070))(this);
  }
  void set_spriteState(ModdingAPI::Exposed::UnityEngine::UI::SpriteState value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::UI::SpriteState)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8090))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::UI::AnimationTriggers* get_animationTriggers() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::AnimationTriggers*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFB9800))(this);
  }
  void set_animationTriggers(ModdingAPI::Exposed::UnityEngine::UI::AnimationTriggers* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::UI::AnimationTriggers*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF81B0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::UI::Graphic* get_targetGraphic() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::Graphic*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE352F0))(this);
  }
  void set_targetGraphic(ModdingAPI::Exposed::UnityEngine::UI::Graphic* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::UI::Graphic*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8270))(this, value);
  }
  bool get_interactable() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xADEF60))(this);
  }
  void set_interactable(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8330))(this, value);
  }
  bool get_isPointerInside() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8540))(this);
  }
  void set_isPointerInside(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x612D80))(this, value);
  }
  bool get_isPointerDown() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8550))(this);
  }
  void set_isPointerDown(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8560))(this, value);
  }
  bool get_hasSelection() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8570))(this);
  }
  void set_hasSelection(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8580))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::UI::Image* get_image() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::Image*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8590))(this);
  }
  void set_image(ModdingAPI::Exposed::UnityEngine::UI::Image* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F10A0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Animator* get_animator() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Animator*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8650))(this);
  }
  void Awake() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF86D0))(this);
  }
  void OnCanvasGroupChanged() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF87A0))(this);
  }
  bool IsInteractable() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF89F0))(this);
  }
  void OnDidApplyAnimationProperties() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8A10))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8A20))(this);
  }
  void OnTransformParentChanged() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xEC7070))(this);
  }
  void OnSetProperty() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8A10))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8B10))(this);
  }
  int32_t get_currentSelectionState() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8BE0))(this);
  }
  void InstantClearState() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8BF0))(this);
  }
  void DoStateTransition(int32_t state, bool instant) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8C70))(this, state, instant);
  }
  ModdingAPI::Exposed::UnityEngine::UI::Selectable* FindSelectable(ModdingAPI::Exposed::UnityEngine::Vector3 dir) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::Selectable*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::Vector3)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF8F40))(this, dir);
  }
  void Navigate(ModdingAPI::Exposed::UnityEngine::EventSystems::AxisEventData* eventData, ModdingAPI::Exposed::UnityEngine::UI::Selectable* sel) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::EventSystems::AxisEventData*, ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF9A00))(this, eventData, sel);
  }
  ModdingAPI::Exposed::UnityEngine::UI::Selectable* FindSelectableOnLeft() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::Selectable*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF9B40))(this);
  }
  ModdingAPI::Exposed::UnityEngine::UI::Selectable* FindSelectableOnRight() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::Selectable*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF9D40))(this);
  }
  ModdingAPI::Exposed::UnityEngine::UI::Selectable* FindSelectableOnUp() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::Selectable*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF9F40))(this);
  }
  ModdingAPI::Exposed::UnityEngine::UI::Selectable* FindSelectableOnDown() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::UI::Selectable*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFA140))(this);
  }
  void OnMove(ModdingAPI::Exposed::UnityEngine::EventSystems::AxisEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::EventSystems::AxisEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFA340))(this, eventData);
  }
  void StartColorTween(ModdingAPI::Exposed::UnityEngine::Color targetColor, bool instant) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::Color, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFA3E0))(this, targetColor, instant);
  }
  void DoSpriteSwap(ModdingAPI::Exposed::UnityEngine::Sprite* newSprite) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::Sprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFA500))(this, newSprite);
  }
  void TriggerAnimation(System_String* triggername) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFA5F0))(this, triggername);
  }
  bool IsHighlighted(ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* eventData) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFA880))(this, eventData);
  }
  bool IsPressed(ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* eventData) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFAB20))(this, eventData);
  }
  bool IsPressed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFAB20))(this);
  }
  void UpdateSelectionState(ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFAB70))(this, eventData);
  }
  void EvaluateAndTransitionToSelectionState(ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFAC00))(this, eventData);
  }
  void InternalEvaluateAndTransitionToSelectionState(bool instant) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFAC70))(this, instant);
  }
  void OnPointerDown(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFACF0))(this, eventData);
  }
  void OnPointerUp(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFAE70))(this, eventData);
  }
  void OnPointerEnter(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFAEA0))(this, eventData);
  }
  void OnPointerExit(ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::EventSystems::PointerEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFAF10))(this, eventData);
  }
  void OnSelect(ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFAF80))(this, eventData);
  }
  void OnDeselect(ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*, ModdingAPI::Exposed::UnityEngine::EventSystems::BaseEventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFAFF0))(this, eventData);
  }
  void Select() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Selectable*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFB060))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> s_List = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_List; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::System::Collections::Generic::List_T_* get_allSelectables() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::List_T_*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF7C00))();
  }
  static inline ModdingAPI::Exposed::UnityEngine::Vector3 GetPointOnRectEdge(ModdingAPI::Exposed::UnityEngine::RectTransform* rect, ModdingAPI::Exposed::UnityEngine::Vector2 dir) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector3(__fastcall*)(ModdingAPI::Exposed::UnityEngine::RectTransform*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFF96D0))(rect, dir);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xFFB1F0))();
  }
};
}