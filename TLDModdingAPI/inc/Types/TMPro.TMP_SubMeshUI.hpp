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
#include "ModdingAPI.Exposed.UnityEngine.Rect.hpp"
#include "ModdingAPI::Exposed::TMPro::MaterialReference.hpp"


namespace ModdingAPI::Exposed::TMPro {
struct __TMP_SubMeshUI_Il2CppStaticFields {
};

struct __TMP_SubMeshUI_Il2CppVtbl {
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
  VirtualInvokeData _18_UnityEngine_UI_ICanvasElement_get_transform;
  VirtualInvokeData _22_get_color;
  VirtualInvokeData _23_set_color;
  VirtualInvokeData _24_get_raycastTarget;
  VirtualInvokeData _25_set_raycastTarget;
  VirtualInvokeData _26_SetAllDirty;
  VirtualInvokeData _27_SetLayoutDirty;
  VirtualInvokeData _28_SetVerticesDirty;
  VirtualInvokeData _29_SetMaterialDirty;
  VirtualInvokeData _30_get_rectTransform;
  VirtualInvokeData _31_get_defaultMaterial;
  VirtualInvokeData _32_get_material;
  VirtualInvokeData _33_set_material;
  VirtualInvokeData _34_get_materialForRendering;
  VirtualInvokeData _35_get_mainTexture;
  VirtualInvokeData _36_OnCullingChanged;
  VirtualInvokeData _37_Rebuild;
  VirtualInvokeData _38_LayoutComplete;
  VirtualInvokeData _39_GraphicUpdateComplete;
  VirtualInvokeData _40_UpdateMaterial;
  VirtualInvokeData _41_UpdateGeometry;
  VirtualInvokeData _42_OnFillVBO;
  VirtualInvokeData _43_OnPopulateMesh;
  VirtualInvokeData _44_OnPopulateMesh;
  VirtualInvokeData _45_SetNativeSize;
  VirtualInvokeData _46_Raycast;
  VirtualInvokeData _47_CrossFadeColor;
  VirtualInvokeData _48_CrossFadeColor;
  VirtualInvokeData _49_CrossFadeAlpha;
  VirtualInvokeData _50_UnityEngine_UI_IClippable_get_gameObject;
  VirtualInvokeData _57_GetModifiedMaterial;
  VirtualInvokeData _58_Cull;
  VirtualInvokeData _59_SetClipRect;
  VirtualInvokeData _60_ParentMaskStateChanged;
  VirtualInvokeData _61_RecalculateClipping;
  VirtualInvokeData _62_RecalculateMasking;
};

struct __TMP_SubMeshUI_Il2CppClass {
  Il2CppClass_1 _1;
  __TMP_SubMeshUI_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __TMP_SubMeshUI_Il2CppVtbl vtbl;
};

class TMP_SubMeshUI {
public:
  // Il2Cpp fields:
  __TMP_SubMeshUI_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::Material* m_Material;
  ModdingAPI::Exposed::UnityEngine::Color Graphic_m_Color;
  bool Graphic_m_RaycastTarget;
  ModdingAPI::Exposed::UnityEngine::RectTransform* Graphic_m_RectTransform;
  ModdingAPI::Exposed::UnityEngine::CanvasRenderer* Graphic_m_CanvasRenderer;
  ModdingAPI::Exposed::UnityEngine::Canvas* Graphic_m_Canvas;
  bool Graphic_m_VertsDirty;
  bool Graphic_m_MaterialDirty;
  ModdingAPI::Exposed::UnityEngine::Events::UnityAction* m_OnDirtyLayoutCallback;
  ModdingAPI::Exposed::UnityEngine::Events::UnityAction* m_OnDirtyVertsCallback;
  ModdingAPI::Exposed::UnityEngine::Events::UnityAction* m_OnDirtyMaterialCallback;
  ModdingAPI::Exposed::UnityEngine::UI::CoroutineTween::TweenRunner_T_* Graphic_m_ColorTweenRunner;
  bool Graphic__useLegacyMeshGeneration_k__BackingField;
  bool m_ShouldRecalculateStencil;
  ModdingAPI::Exposed::UnityEngine::Material* m_MaskMaterial;
  ModdingAPI::Exposed::UnityEngine::UI::RectMask2D* MaskableGraphic_m_ParentMask;
  bool MaskableGraphic_m_Maskable;
  bool m_IncludeForMasking;
  ModdingAPI::Exposed::UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* MaskableGraphic_m_OnCullStateChanged;
  bool m_ShouldRecalculate;
  int32_t m_StencilValue;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* MaskableGraphic_m_Corners;
  ModdingAPI::Exposed::TMPro::TMP_FontAsset* m_fontAsset;
  ModdingAPI::Exposed::TMPro::TMP_SpriteAsset* m_spriteAsset;
  ModdingAPI::Exposed::UnityEngine::Material* m_material;
  ModdingAPI::Exposed::UnityEngine::Material* m_sharedMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* m_fallbackMaterial;
  ModdingAPI::Exposed::UnityEngine::Material* m_fallbackSourceMaterial;
  bool m_isDefaultMaterial;
  float m_padding;
  ModdingAPI::Exposed::UnityEngine::CanvasRenderer* m_canvasRenderer;
  ModdingAPI::Exposed::UnityEngine::Mesh* m_mesh;
  ModdingAPI::Exposed::TMPro::TextMeshProUGUI* m_TextComponent;
  bool m_isRegisteredForEvents;
  bool m_materialDirty;
  int32_t m_materialReferenceIndex;

  // Member methods:
  ModdingAPI::Exposed::TMPro::TMP_FontAsset* get_fontAsset() {
    return reinterpret_cast<ModdingAPI::Exposed::TMPro::TMP_FontAsset*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F1090))(this);
  }
  void set_fontAsset(ModdingAPI::Exposed::TMPro::TMP_FontAsset* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::TMPro::TMP_FontAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F10A0))(this, value);
  }
  ModdingAPI::Exposed::TMPro::TMP_SpriteAsset* get_spriteAsset() {
    return reinterpret_cast<ModdingAPI::Exposed::TMPro::TMP_SpriteAsset*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1BE0))(this);
  }
  void set_spriteAsset(ModdingAPI::Exposed::TMPro::TMP_SpriteAsset* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::TMPro::TMP_SpriteAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1BF0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Texture* get_mainTexture() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1C00))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* get_material() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1D50))(this);
  }
  void set_material(ModdingAPI::Exposed::UnityEngine::Material* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1EB0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Material* get_sharedMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F11D0))(this);
  }
  void set_sharedMaterial(ModdingAPI::Exposed::UnityEngine::Material* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1FF0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Material* get_fallbackMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3EBFD0))(this);
  }
  void set_fallbackMaterial(ModdingAPI::Exposed::UnityEngine::Material* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F2030))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Material* get_fallbackSourceMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3EBFF0))(this);
  }
  void set_fallbackSourceMaterial(ModdingAPI::Exposed::UnityEngine::Material* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F11F0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Material* get_materialForRendering() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F2200))(this);
  }
  bool get_isDefaultMaterial() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F22B0))(this);
  }
  void set_isDefaultMaterial(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F22C0))(this, value);
  }
  float get_padding() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F22D0))(this);
  }
  void set_padding(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F22E0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::CanvasRenderer* get_canvasRenderer() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::CanvasRenderer*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F22F0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Mesh* get_mesh() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Mesh*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F23C0))(this);
  }
  void set_mesh(ModdingAPI::Exposed::UnityEngine::Mesh* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::UnityEngine::Mesh*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33E090))(this, value);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F2C40))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F2C90))(this);
  }
  void OnDestroy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F2E40))(this);
  }
  void OnTransformParentChanged() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3010))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetModifiedMaterial(ModdingAPI::Exposed::UnityEngine::Material* baseMaterial) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3070))(this, baseMaterial);
  }
  float GetPaddingForMaterial() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3230))(this);
  }
  float GetPaddingForMaterial(ModdingAPI::Exposed::UnityEngine::Material* mat) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3310))(this, mat);
  }
  void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F33F0))(this, isExtraPadding, isUsingBold);
  }
  void SetAllDirty() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void SetVerticesDirty() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F34D0))(this);
  }
  void SetLayoutDirty() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void SetMaterialDirty() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3600))(this);
  }
  void SetPivotDirty() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3640))(this);
  }
  void Cull(ModdingAPI::Exposed::UnityEngine::Rect clipRect, bool validRect) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::UnityEngine::Rect, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3700))(this, clipRect, validRect);
  }
  void UpdateGeometry() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F37A0))(this);
  }
  void Rebuild(int32_t update) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3840))(this, update);
  }
  void RefreshMaterial() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3880))(this);
  }
  void UpdateMaterial() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F38A0))(this);
  }
  void RecalculateClipping() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3AB0))(this);
  }
  void RecalculateMasking() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3AC0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3F11D0))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetMaterial(ModdingAPI::Exposed::UnityEngine::Material* mat) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3AE0))(this, mat);
  }
  ModdingAPI::Exposed::UnityEngine::Material* CreateMaterialInstance(ModdingAPI::Exposed::UnityEngine::Material* source) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3C40))(this, source);
  }
  ModdingAPI::Exposed::UnityEngine::Material* GetSharedMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F3E60))(this);
  }
  void SetSharedMaterial(ModdingAPI::Exposed::UnityEngine::Material* mat) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1FF0))(this, mat);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4E9BA0))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::TMPro::TMP_SubMeshUI* AddSubTextObject(ModdingAPI::Exposed::TMPro::TextMeshProUGUI* textComponent, ModdingAPI::Exposed::TMPro::MaterialReference materialReference) {
    return reinterpret_cast<ModdingAPI::Exposed::TMPro::TMP_SubMeshUI*(__fastcall*)(ModdingAPI::Exposed::TMPro::TextMeshProUGUI*, ModdingAPI::Exposed::TMPro::MaterialReference)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F25A0))(textComponent, materialReference);
  }
};
}