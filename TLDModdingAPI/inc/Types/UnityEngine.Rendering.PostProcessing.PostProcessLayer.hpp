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
#include "ModdingAPI.Exposed.UnityEngine.LayerMask.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Rendering.RenderTargetIdentifier.hpp"
#include "ModdingAPI.Exposed.System.Nullable_T_.hpp"


namespace ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing {
struct __PostProcessLayer_Il2CppStaticFields {
};

struct __PostProcessLayer_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __PostProcessLayer_Il2CppClass {
  Il2CppClass_1 _1;
  __PostProcessLayer_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PostProcessLayer_Il2CppVtbl vtbl;
};

class PostProcessLayer {
public:
  // Il2Cpp fields:
  __PostProcessLayer_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  ModdingAPI::Exposed::UnityEngine::Transform* volumeTrigger;
  ModdingAPI::Exposed::UnityEngine::LayerMask volumeLayer;
  bool stopNaNPropagation;
  bool finalBlitToCameraTarget;
  int32_t antialiasingMode;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* temporalAntialiasing;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing* subpixelMorphologicalAntialiasing;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing* fastApproximateAntialiasing;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::Fog* fog;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::Dithering* dithering;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* debugLayer;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessResources* m_Resources;
  bool m_ShowToolkit;
  bool m_ShowCustomSorter;
  bool breakBeforeColorGrading;
  bool enableBuiltins;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_BeforeTransparentBundles;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_BeforeStackBundles;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_AfterStackBundles;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* _sortedBundles_k__BackingField;
  int32_t _cameraDepthFlags_k__BackingField;
  bool _haveBundlesBeenInited_k__BackingField;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* m_Bundles;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* m_PropertySheetFactory;
  ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer* m_LegacyCmdBufferBeforeReflections;
  ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer* m_LegacyCmdBufferBeforeLighting;
  ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer* m_LegacyCmdBufferOpaque;
  ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer* m_LegacyCmdBuffer;
  ModdingAPI::Exposed::UnityEngine::Camera* m_Camera;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* m_CurrentContext;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::LogHistogram* m_LogHistogram;
  bool m_SettingsUpdateNeeded;
  bool m_IsRenderingInSceneView;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::TargetPool* m_TargetPool;
  bool m_NaNKilled;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_ActiveEffects;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_Targets;

  // Member methods:
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* get_sortedBundles() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307640))(this);
  }
  void set_sortedBundles(ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E95A0))(this, value);
  }
  int32_t get_cameraDepthFlags() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383AA0))(this);
  }
  void set_cameraDepthFlags(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383AB0))(this, value);
  }
  bool get_haveBundlesBeenInited() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D1770))(this);
  }
  void set_haveBundlesBeenInited(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E7A220))(this, value);
  }
  void OnEnable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D1780))(this);
  }
  void InitLegacy() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D1C10))(this);
  }
  void Init(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessResources* resources) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessResources*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D23C0))(this, resources);
  }
  void InitBundles() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D2550))(this);
  }
  void UpdateBundleSortList(ModdingAPI::Exposed::System::Collections::Generic::List_T_* sortedList, int32_t evt) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D2C60))(this, sortedList, evt);
  }
  void OnDisable() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D38D0))(this);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D3D30))(this);
  }
  void OnPreCull() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D3D90))(this);
  }
  void OnPreRender() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D43E0))(this);
  }
  void UpdateSrcDstForOpaqueOnly(int32_t src, int32_t dst, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context, ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier cameraTarget, int32_t opaqueOnlyEffectsRemaining) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, int32_t, int32_t, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D44F0))(this, src, dst, context, cameraTarget, opaqueOnlyEffectsRemaining);
  }
  void BuildCommandBuffers() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D4690))(this);
  }
  void OnPostRender() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D5430))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessBundle* GetBundle(ModdingAPI::Exposed::System::Type* settingsType) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessBundle*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D5650))(this, settingsType);
  }
  void BakeMSVOMap(ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer* cmd, ModdingAPI::Exposed::UnityEngine::Camera* camera, ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier destination, ModdingAPI::Exposed::System::Nullable_T_ depthMap, bool invert, bool isMSAA) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer*, ModdingAPI::Exposed::UnityEngine::Camera*, ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier, ModdingAPI::Exposed::System::Nullable_T_, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D56F0))(this, cmd, camera, destination, depthMap, invert, isMSAA);
  }
  void OverrideSettings(ModdingAPI::Exposed::System::Collections::Generic::List_T_* baseSettings, float interpFactor) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D5970))(this, baseSettings, interpFactor);
  }
  void SetLegacyCameraFlags(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D5C30))(this, context);
  }
  void ResetHistory() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D5FD0))(this);
  }
  bool HasOpaqueOnlyEffects(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D6170))(this, context);
  }
  bool HasActiveEffects(int32_t evt, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, int32_t, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D6180))(this, evt, context);
  }
  void SetupContext(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D63F0))(this, context);
  }
  void UpdateVolumeSystem(ModdingAPI::Exposed::UnityEngine::Camera* cam, ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer* cmd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::Camera*, ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D6750))(this, cam, cmd);
  }
  void RenderOpaqueOnly(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D68E0))(this, context);
  }
  void Render(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D6A20))(this, context);
  }
  int32_t RenderInjectionPoint(int32_t evt, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context, System_String* marker, int32_t releaseTargetAfterUse) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, int32_t, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D75B0))(this, evt, context, marker, releaseTargetAfterUse);
  }
  void RenderList(ModdingAPI::Exposed::System::Collections::Generic::List_T_* list, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context, System_String* marker) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::System::Collections::Generic::List_T_*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D77F0))(this, list, context, marker);
  }
  void ApplyFlip(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context, ModdingAPI::Exposed::UnityEngine::MaterialPropertyBlock* properties) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::UnityEngine::MaterialPropertyBlock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D7EB0))(this, context, properties);
  }
  void ApplyDefaultFlip(ModdingAPI::Exposed::UnityEngine::MaterialPropertyBlock* properties) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::MaterialPropertyBlock*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D8010))(this, properties);
  }
  int32_t RenderBuiltins(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context, bool isFinalPass, int32_t releaseTargetAfterUse, int32_t eye) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, bool, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D8180))(this, context, isFinalPass, releaseTargetAfterUse, eye);
  }
  void RenderFinalPass(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context, int32_t releaseTargetAfterUse, int32_t eye) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D8C80))(this, context, releaseTargetAfterUse, eye);
  }
  bool ShouldGenerateLogHistogram(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D96A0))(this, context);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22D97A0))(this);
  }

  // Static methods:
  static inline bool RequiresInitialBlit(ModdingAPI::Exposed::UnityEngine::Camera* camera, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* context) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Camera*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x403F70))(camera, context);
  }
};
}