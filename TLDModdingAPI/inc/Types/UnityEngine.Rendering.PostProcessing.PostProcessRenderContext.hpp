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
#include "ModdingAPI.Exposed.UnityEngine.Rendering.RenderTargetIdentifier.hpp"
#include "ModdingAPI.Exposed.UnityEngine.RenderTextureDescriptor.hpp"


namespace ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing {
struct __PostProcessRenderContext_Il2CppStaticFields {
};

struct __PostProcessRenderContext_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __PostProcessRenderContext_Il2CppClass {
  Il2CppClass_1 _1;
  __PostProcessRenderContext_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __PostProcessRenderContext_Il2CppVtbl vtbl;
};

class PostProcessRenderContext {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C4EF90;
  static inline    __PostProcessRenderContext_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __PostProcessRenderContext_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__PostProcessRenderContext_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __PostProcessRenderContext_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::UnityEngine::Camera* m_Camera;
  ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer* _command_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier _source_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier _destination_k__BackingField;
  int32_t _sourceFormat_k__BackingField;
  bool _flip_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessResources* _resources_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* _propertySheets_k__BackingField;
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* _userData_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* _debugLayer_k__BackingField;
  int32_t _width_k__BackingField;
  int32_t _height_k__BackingField;
  bool _stereoActive_k__BackingField;
  int32_t _xrActiveEye_k__BackingField;
  int32_t _numberOfEyes_k__BackingField;
  int32_t _stereoRenderingMode_k__BackingField;
  int32_t _screenWidth_k__BackingField;
  int32_t _screenHeight_k__BackingField;
  bool _isSceneView_k__BackingField;
  int32_t _antialiasing_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* _temporalAntialiasing_k__BackingField;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PropertySheet* uberSheet;
  ModdingAPI::Exposed::UnityEngine::Texture* autoExposureTexture;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::LogHistogram* logHistogram;
  ModdingAPI::Exposed::UnityEngine::Texture* logLut;
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::AutoExposure* autoExposure;
  int32_t bloomBufferNameID;
  bool physicalCamera;
  ModdingAPI::Exposed::UnityEngine::RenderTextureDescriptor m_sourceDescriptor;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Camera* get_camera() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Camera*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  void set_camera(ModdingAPI::Exposed::UnityEngine::Camera* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::UnityEngine::Camera*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE1F0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer* get_command() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  void set_command(ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x33A3E0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier get_source() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE560))(this);
  }
  void set_source(ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE580))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier get_destination() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE5A0))(this);
  }
  void set_destination(ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE5C0))(this, value);
  }
  int32_t get_sourceFormat() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A00))(this);
  }
  void set_sourceFormat(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A10))(this, value);
  }
  bool get_flip() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6C1EA0))(this);
  }
  void set_flip(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1E56F30))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessResources* get_resources() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessResources*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319950))(this);
  }
  void set_resources(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessResources* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessResources*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383A40))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* get_propertySheets() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x321390))(this);
  }
  void set_propertySheets(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x47E020))(this, value);
  }
  ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* get_userData() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307640))(this);
  }
  void set_userData(ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E95A0))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* get_debugLayer() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3BC530))(this);
  }
  void set_debugLayer(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5E95D0))(this, value);
  }
  int32_t get_width() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC5D0))(this);
  }
  void set_width(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5EC5E0))(this, value);
  }
  int32_t get_height() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x8D7F50))(this);
  }
  void set_height(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE5E0))(this, value);
  }
  bool get_stereoActive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319870))(this);
  }
  void set_stereoActive(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x319880))(this, value);
  }
  int32_t get_xrActiveEye() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5F1040))(this);
  }
  void set_xrActiveEye(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE5F0))(this, value);
  }
  int32_t get_numberOfEyes() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1BD6CB0))(this);
  }
  void set_numberOfEyes(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x5D0140))(this, value);
  }
  int32_t get_stereoRenderingMode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x9CEAD0))(this);
  }
  void set_stereoRenderingMode(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE600))(this, value);
  }
  int32_t get_screenWidth() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA84B10))(this);
  }
  void set_screenWidth(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE610))(this, value);
  }
  int32_t get_screenHeight() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xA85030))(this);
  }
  void set_screenHeight(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE620))(this, value);
  }
  bool get_isSceneView() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1B4F290))(this);
  }
  void set_isSceneView(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1A88380))(this, value);
  }
  int32_t get_antialiasing() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x307730))(this);
  }
  void set_antialiasing(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE630))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* get_temporalAntialiasing() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1BE0))(this);
  }
  void set_temporalAntialiasing(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x4F1BF0))(this, value);
  }
  void Reset() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE640))(this);
  }
  bool IsTemporalAntialiasingActive() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE900))(this);
  }
  bool IsDebugOverlayEnabled(int32_t overlay) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE940))(this, overlay);
  }
  void PushDebugOverlay(ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer* cmd, ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier source, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PropertySheet* sheet, int32_t pass) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer*, ModdingAPI::Exposed::UnityEngine::Rendering::RenderTargetIdentifier, ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PropertySheet*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE970))(this, cmd, source, sheet, pass);
  }
  ModdingAPI::Exposed::UnityEngine::RenderTextureDescriptor GetDescriptor(int32_t depthBufferBits, int32_t colorFormat, int32_t readWrite) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RenderTextureDescriptor(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DE9D0))(this, depthBufferBits, colorFormat, readWrite);
  }
  void GetScreenSpaceTemporaryRT(ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer* cmd, int32_t nameID, int32_t depthBufferBits, int32_t colorFormat, int32_t readWrite, int32_t filter, int32_t widthOverride, int32_t heightOverride) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ModdingAPI::Exposed::UnityEngine::Rendering::CommandBuffer*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DEAD0))(this, cmd, nameID, depthBufferBits, colorFormat, readWrite, filter, widthOverride, heightOverride);
  }
  ModdingAPI::Exposed::UnityEngine::RenderTexture* GetScreenSpaceTemporaryRT(int32_t depthBufferBits, int32_t colorFormat, int32_t readWrite, int32_t widthOverride, int32_t heightOverride) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::RenderTexture*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t, int32_t, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x22DECD0))(this, depthBufferBits, colorFormat, readWrite, widthOverride, heightOverride);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
};
}