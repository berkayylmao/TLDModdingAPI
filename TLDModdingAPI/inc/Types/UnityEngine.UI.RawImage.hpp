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


namespace ModdingAPI::Exposed::UnityEngine::UI {
struct __RawImage_Il2CppStaticFields {
};

struct __RawImage_Il2CppVtbl {
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

struct __RawImage_Il2CppClass {
  Il2CppClass_1 _1;
  __RawImage_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RawImage_Il2CppVtbl vtbl;
};

class RawImage {
public:
  // Il2Cpp fields:
  __RawImage_Il2CppClass* __pClassInstance;
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
  ModdingAPI::Exposed::UnityEngine::Texture* m_Texture;
  ModdingAPI::Exposed::UnityEngine::Rect m_UVRect;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::RawImage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE9A20))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Texture* get_mainTexture() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::RawImage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE9A50))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Texture* get_texture() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::RawImage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE352F0))(this);
  }
  void set_texture(ModdingAPI::Exposed::UnityEngine::Texture* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::RawImage*, ModdingAPI::Exposed::UnityEngine::Texture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE9C20))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Rect get_uvRect() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rect(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::RawImage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE9D10))(this);
  }
  void set_uvRect(ModdingAPI::Exposed::UnityEngine::Rect value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::RawImage*, ModdingAPI::Exposed::UnityEngine::Rect)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE9D20))(this, value);
  }
  void SetNativeSize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::RawImage*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFE9D90))(this);
  }
  void OnPopulateMesh(ModdingAPI::Exposed::UnityEngine::UI::VertexHelper* vh) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::UI::RawImage*, ModdingAPI::Exposed::UnityEngine::UI::VertexHelper*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFEA010))(this, vh);
  }
};
}