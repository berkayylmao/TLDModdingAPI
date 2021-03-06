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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector4.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Color32.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Vector2.hpp"


namespace ModdingAPI::Exposed::UnityEngine::UI {
struct __Image_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Material* s_ETC1DefaultUI;
  ModdingAPI::Exposed::UnityEngine::Vector2_array* s_VertScratch;
  ModdingAPI::Exposed::UnityEngine::Vector2_array* s_UVScratch;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* s_Xy;
  ModdingAPI::Exposed::UnityEngine::Vector3_array* s_Uv;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_TrackedTexturelessImages;
  bool s_Initialized;
  ModdingAPI::Exposed::System::Action_T_* __f__mg_cache0;
};

struct __Image_Il2CppVtbl {
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
  VirtualInvokeData _75_OnBeforeSerialize;
  VirtualInvokeData _76_OnAfterDeserialize;
  VirtualInvokeData _77_CalculateLayoutInputHorizontal;
  VirtualInvokeData _78_CalculateLayoutInputVertical;
  VirtualInvokeData _79_get_minWidth;
  VirtualInvokeData _80_get_preferredWidth;
  VirtualInvokeData _81_get_flexibleWidth;
  VirtualInvokeData _82_get_minHeight;
  VirtualInvokeData _83_get_preferredHeight;
  VirtualInvokeData _84_get_flexibleHeight;
  VirtualInvokeData _85_get_layoutPriority;
  VirtualInvokeData _86_IsRaycastLocationValid;
};

struct __Image_Il2CppClass {
  Il2CppClass_1 _1;
  __Image_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Image_Il2CppVtbl vtbl;
};

class Image {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C7D0B8;
  static inline    Image* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C76098;
  static inline    __Image_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline Image* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (Image**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __Image_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Image_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Image_Il2CppClass* __pClassInstance;
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
  ModdingAPI::Exposed::UnityEngine::Sprite* m_Sprite;
  ModdingAPI::Exposed::UnityEngine::Sprite* m_OverrideSprite;
  int32_t m_Type;
  bool m_PreserveAspect;
  bool m_FillCenter;
  int32_t m_FillMethod;
  float m_FillAmount;
  bool m_FillClockwise;
  int32_t m_FillOrigin;
  float m_AlphaHitTestMinimumThreshold;
  bool m_Tracked;
  bool m_UseSpriteMesh;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35290))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Sprite* get_sprite() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Sprite*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE352F0))(this);
  }
  void set_sprite(ModdingAPI::Exposed::UnityEngine::Sprite* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::Sprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35300))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Sprite* get_overrideSprite() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Sprite*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE353D0))(this);
  }
  void set_overrideSprite(ModdingAPI::Exposed::UnityEngine::Sprite* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::Sprite*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE353E0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Sprite* get_activeSprite() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Sprite*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE354B0))(this);
  }
  int32_t get_type() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35580))(this);
  }
  void set_type(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35590))(this, value);
  }
  bool get_preserveAspect() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35640))(this);
  }
  void set_preserveAspect(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35650))(this, value);
  }
  bool get_fillCenter() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35730))(this);
  }
  void set_fillCenter(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35740))(this, value);
  }
  int32_t get_fillMethod() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35820))(this);
  }
  void set_fillMethod(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35830))(this, value);
  }
  float get_fillAmount() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE358F0))(this);
  }
  void set_fillAmount(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35900))(this, value);
  }
  bool get_fillClockwise() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35A20))(this);
  }
  void set_fillClockwise(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35A30))(this, value);
  }
  int32_t get_fillOrigin() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35B10))(this);
  }
  void set_fillOrigin(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35B20))(this, value);
  }
  float get_eventAlphaThreshold() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35C00))(this);
  }
  void set_eventAlphaThreshold(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35C20))(this, value);
  }
  float get_alphaHitTestMinimumThreshold() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35C40))(this);
  }
  void set_alphaHitTestMinimumThreshold(float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35C50))(this, value);
  }
  bool get_useSpriteMesh() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35C60))(this);
  }
  void set_useSpriteMesh(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35C70))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Texture* get_mainTexture() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35EC0))(this);
  }
  bool get_hasBorder() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE360F0))(this);
  }
  float get_pixelsPerUnit() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE36240))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Material* get_material() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE36420))(this);
  }
  void set_material(ModdingAPI::Exposed::UnityEngine::Material* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE2CC90))(this, value);
  }
  void OnBeforeSerialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void OnAfterDeserialize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE36770))(this);
  }
  void PreserveSpriteAspectRatio(ModdingAPI::Exposed::UnityEngine::Rect rect, ModdingAPI::Exposed::UnityEngine::Vector2 spriteSize) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::Rect, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE36880))(this, rect, spriteSize);
  }
  ModdingAPI::Exposed::UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector4(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE36980))(this, shouldPreserveAspect);
  }
  void SetNativeSize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE36E50))(this);
  }
  void OnPopulateMesh(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper* toFill) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE37160))(this, toFill);
  }
  void TrackSprite() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE374A0))(this);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE37620))(this);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE37640))(this);
  }
  void UpdateMaterial() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE377A0))(this);
  }
  void GenerateSimpleSprite(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE37A80))(this, vh, lPreserveAspect);
  }
  void GenerateSprite(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE37E10))(this, vh, lPreserveAspect);
  }
  void GenerateSlicedSprite(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper* toFill) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE38580))(this, toFill);
  }
  void GenerateTiledSprite(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper* toFill) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE39180))(this, toFill);
  }
  ModdingAPI::Exposed::UnityEngine::Vector4 GetAdjustedBorders(ModdingAPI::Exposed::UnityEngine::Vector4 border, ModdingAPI::Exposed::UnityEngine::Rect adjustedRect) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector4(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::Vector4, ModdingAPI::Exposed::UnityEngine::Rect)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3AE80))(this, border, adjustedRect);
  }
  void GenerateFilledSprite(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper* toFill, bool preserveAspect) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3B1B0))(this, toFill, preserveAspect);
  }
  void CalculateLayoutInputHorizontal() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void CalculateLayoutInputVertical() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  float get_minWidth() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D1D0))(this);
  }
  float get_preferredWidth() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D1E0))(this);
  }
  float get_flexibleWidth() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D380))(this);
  }
  float get_minHeight() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D1D0))(this);
  }
  float get_preferredHeight() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D390))(this);
  }
  float get_flexibleHeight() {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D380))(this);
  }
  int32_t get_layoutPriority() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x594C70))(this);
  }
  bool IsRaycastLocationValid(ModdingAPI::Exposed::UnityEngine::Vector2 screenPoint, ModdingAPI::Exposed::UnityEngine::Camera* eventCamera) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D530))(this, screenPoint, eventCamera);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 MapCoordinate(ModdingAPI::Exposed::UnityEngine::Vector2 local, ModdingAPI::Exposed::UnityEngine::Rect rect) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Rect)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3D9B0))(this, local, rect);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Material*> s_ETC1DefaultUI = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Material*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_ETC1DefaultUI; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector2_array*> s_VertScratch = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector2_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_VertScratch; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector2_array*> s_UVScratch = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector2_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_UVScratch; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3_array*> s_Xy = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Xy; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3_array*> s_Uv = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Vector3_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Uv; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*> m_TrackedTexturelessImages = __CppStaticProperty<ModdingAPI::Exposed::System::Collections::Generic::List_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_TrackedTexturelessImages; }
  );
  static inline __CppStaticProperty<bool> s_Initialized = __CppStaticProperty<bool>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_Initialized; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Action_T_*> __f__mg_cache0 = __CppStaticProperty<ModdingAPI::Exposed::System::Action_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->__f__mg_cache0; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Material* get_defaultETC1GraphicMaterial() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Material*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xE35D50))();
  }
  static inline void AddQuad(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper* vertexHelper, ModdingAPI::Exposed::UnityEngine::Vector3_array* quadPositions, ModdingAPI::Exposed::UnityEngine::Color32 color, ModdingAPI::Exposed::UnityEngine::Vector3_array* quadUVs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::UnityEngine::Color32, ModdingAPI::Exposed::UnityEngine::Vector3_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3AAB0))(vertexHelper, quadPositions, color, quadUVs);
  }
  static inline void AddQuad(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper* vertexHelper, ModdingAPI::Exposed::UnityEngine::Vector2 posMin, ModdingAPI::Exposed::UnityEngine::Vector2 posMax, ModdingAPI::Exposed::UnityEngine::Color32 color, ModdingAPI::Exposed::UnityEngine::Vector2 uvMin, ModdingAPI::Exposed::UnityEngine::Vector2 uvMax) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Color32, ModdingAPI::Exposed::UnityEngine::Vector2, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3AC90))(vertexHelper, posMin, posMax, color, uvMin, uvMax);
  }
  static inline bool RadialCut(ModdingAPI::Exposed::UnityEngine::Vector3_array* xy, ModdingAPI::Exposed::UnityEngine::Vector3_array* uv, float fill, bool invert, int32_t corner) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3_array*, ModdingAPI::Exposed::UnityEngine::Vector3_array*, float, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3C790))(xy, uv, fill, invert, corner);
  }
  static inline void RadialCut(ModdingAPI::Exposed::UnityEngine::Vector3_array* xy, float cos, float sin, bool invert, int32_t corner) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Vector3_array*, float, float, bool, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3C960))(xy, cos, sin, invert, corner);
  }
  static inline void RebuildImage(ModdingAPI::Exposed::UnityEngine::U2D::SpriteAtlas* spriteAtlas) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::U2D::SpriteAtlas*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3DF10))(spriteAtlas);
  }
  static inline void TrackImage(ModdingAPI::Exposed::UnityEngine::UI::Image* g) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3E0F0))(g);
  }
  static inline void UnTrackImage(ModdingAPI::Exposed::UnityEngine::UI::Image* g) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::Image*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3E4A0))(g);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xE3E560))();
  }
};
}