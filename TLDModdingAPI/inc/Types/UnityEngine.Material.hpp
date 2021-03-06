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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Matrix4x4.hpp"
#include "ModdingAPI.Exposed.UnityEngine.Vector4.hpp"


namespace ModdingAPI::Exposed::UnityEngine {
struct __Material_Il2CppStaticFields {
};

struct __Material_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Material_Il2CppClass {
  Il2CppClass_1 _1;
  __Material_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Material_Il2CppVtbl vtbl;
};

class Material {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C35C38;
  static inline    Material* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C25F28;
  static inline    __Material_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline Material* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (Material**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __Material_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Material_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Material_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Shader* shader) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Shader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1064F10))(this, shader);
  }
  void ::ctor(ModdingAPI::Exposed::UnityEngine::Material* source) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065000))(this, source);
  }
  void ::ctor(System_String* contents) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10650F0))(this, contents);
  }
  ModdingAPI::Exposed::UnityEngine::Shader* get_shader() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Shader*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10652D0))(this);
  }
  void set_shader(ModdingAPI::Exposed::UnityEngine::Shader* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Shader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065320))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Color get_color() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065380))(this);
  }
  void set_color(ModdingAPI::Exposed::UnityEngine::Color value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065420))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Texture* get_mainTexture() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10654C0))(this);
  }
  void set_mainTexture(ModdingAPI::Exposed::UnityEngine::Texture* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Texture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065550))(this, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_mainTextureOffset() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10655F0))(this);
  }
  void set_mainTextureOffset(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065680))(this, value);
  }
  void set_mainTextureScale(ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065720))(this, value);
  }
  bool HasProperty(int32_t nameID) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10657C0))(this, nameID);
  }
  bool HasProperty(System_String* name) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065820))(this, name);
  }
  int32_t get_renderQueue() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10658D0))(this);
  }
  void set_renderQueue(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065920))(this, value);
  }
  void EnableKeyword(System_String* keyword) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065980))(this, keyword);
  }
  void DisableKeyword(System_String* keyword) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10659E0))(this, keyword);
  }
  bool IsKeywordEnabled(System_String* keyword) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065A40))(this, keyword);
  }
  bool get_enableInstancing() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065AA0))(this);
  }
  void set_enableInstancing(bool value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065AF0))(this, value);
  }
  int32_t get_passCount() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065B50))(this);
  }
  void SetShaderPassEnabled(System_String* passName, bool enabled) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065BA0))(this, passName, enabled);
  }
  System_String* GetTagImpl(System_String* tag, bool currentSubShaderOnly, System_String* defaultValue) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, bool, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065C20))(this, tag, currentSubShaderOnly, defaultValue);
  }
  System_String* GetTag(System_String* tag, bool searchFallbacks) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065CB0))(this, tag, searchFallbacks);
  }
  bool SetPass(int32_t pass) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065DA0))(this, pass);
  }
  void CopyPropertiesFromMaterial(ModdingAPI::Exposed::UnityEngine::Material* mat) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065E00))(this, mat);
  }
  ModdingAPI::Exposed::System::String_array* GetShaderKeywords() {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065E60))(this);
  }
  void SetShaderKeywords(ModdingAPI::Exposed::System::String_array* names) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065EB0))(this, names);
  }
  ModdingAPI::Exposed::System::String_array* get_shaderKeywords() {
    return reinterpret_cast<ModdingAPI::Exposed::System::String_array*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065E60))(this);
  }
  void set_shaderKeywords(ModdingAPI::Exposed::System::String_array* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065EB0))(this, value);
  }
  void SetFloatImpl(int32_t name, float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065F10))(this, name, value);
  }
  void SetColorImpl(int32_t name, ModdingAPI::Exposed::UnityEngine::Color value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065F80))(this, name, value);
  }
  void SetMatrixImpl(int32_t name, ModdingAPI::Exposed::UnityEngine::Matrix4x4 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Matrix4x4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065FF0))(this, name, value);
  }
  void SetTextureImpl(int32_t name, ModdingAPI::Exposed::UnityEngine::Texture* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Texture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066060))(this, name, value);
  }
  void SetBufferImpl(int32_t name, ModdingAPI::Exposed::UnityEngine::ComputeBuffer* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::ComputeBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10660D0))(this, name, value);
  }
  float GetFloatImpl(int32_t name) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066140))(this, name);
  }
  ModdingAPI::Exposed::UnityEngine::Color GetColorImpl(int32_t name) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10661A0))(this, name);
  }
  ModdingAPI::Exposed::UnityEngine::Texture* GetTextureImpl(int32_t name) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066230))(this, name);
  }
  ModdingAPI::Exposed::UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int32_t name) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector4(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066290))(this, name);
  }
  void SetTextureOffsetImpl(int32_t name, ModdingAPI::Exposed::UnityEngine::Vector2 offset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066320))(this, name, offset);
  }
  void SetTextureScaleImpl(int32_t name, ModdingAPI::Exposed::UnityEngine::Vector2 scale) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066390))(this, name, scale);
  }
  void SetFloat(System_String* name, float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066400))(this, name, value);
  }
  void SetFloat(int32_t nameID, float value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065F10))(this, nameID, value);
  }
  void SetInt(System_String* name, int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10664C0))(this, name, value);
  }
  void SetInt(int32_t nameID, int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066580))(this, nameID, value);
  }
  void SetColor(System_String* name, ModdingAPI::Exposed::UnityEngine::Color value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066600))(this, name, value);
  }
  void SetColor(int32_t nameID, ModdingAPI::Exposed::UnityEngine::Color value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10666C0))(this, nameID, value);
  }
  void SetVector(System_String* name, ModdingAPI::Exposed::UnityEngine::Vector4 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, ModdingAPI::Exposed::UnityEngine::Vector4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066730))(this, name, value);
  }
  void SetVector(int32_t nameID, ModdingAPI::Exposed::UnityEngine::Vector4 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066830))(this, nameID, value);
  }
  void SetMatrix(System_String* name, ModdingAPI::Exposed::UnityEngine::Matrix4x4 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, ModdingAPI::Exposed::UnityEngine::Matrix4x4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10668E0))(this, name, value);
  }
  void SetMatrix(int32_t nameID, ModdingAPI::Exposed::UnityEngine::Matrix4x4 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Matrix4x4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10669C0))(this, nameID, value);
  }
  void SetTexture(System_String* name, ModdingAPI::Exposed::UnityEngine::Texture* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, ModdingAPI::Exposed::UnityEngine::Texture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066A50))(this, name, value);
  }
  void SetTexture(int32_t nameID, ModdingAPI::Exposed::UnityEngine::Texture* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Texture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066060))(this, nameID, value);
  }
  void SetBuffer(System_String* name, ModdingAPI::Exposed::UnityEngine::ComputeBuffer* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, ModdingAPI::Exposed::UnityEngine::ComputeBuffer*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066B10))(this, name, value);
  }
  float GetFloat(System_String* name) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066BD0))(this, name);
  }
  float GetFloat(int32_t nameID) {
    return reinterpret_cast<float(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066140))(this, nameID);
  }
  ModdingAPI::Exposed::UnityEngine::Color GetColor(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066C80))(this, name);
  }
  ModdingAPI::Exposed::UnityEngine::Color GetColor(int32_t nameID) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Color(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10661A0))(this, nameID);
  }
  ModdingAPI::Exposed::UnityEngine::Vector4 GetVector(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector4(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066D50))(this, name);
  }
  ModdingAPI::Exposed::UnityEngine::Vector4 GetVector(int32_t nameID) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector4(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066E20))(this, nameID);
  }
  ModdingAPI::Exposed::UnityEngine::Texture* GetTexture(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066EB0))(this, name);
  }
  ModdingAPI::Exposed::UnityEngine::Texture* GetTexture(int32_t nameID) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture*(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066230))(this, nameID);
  }
  void SetTextureOffset(System_String* name, ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1066F60))(this, name, value);
  }
  void SetTextureScale(System_String* name, ModdingAPI::Exposed::UnityEngine::Vector2 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1067020))(this, name, value);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetTextureOffset(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10670E0))(this, name);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetTextureOffset(int32_t nameID) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10671B0))(this, nameID);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetTextureScale(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1067240))(this, name);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 GetTextureScale(int32_t nameID) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1067310))(this, nameID);
  }
  void SetColorImpl_Injected(int32_t name, ModdingAPI::Exposed::UnityEngine::Color value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10673A0))(this, name, value);
  }
  void SetMatrixImpl_Injected(int32_t name, ModdingAPI::Exposed::UnityEngine::Matrix4x4 value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Matrix4x4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1067410))(this, name, value);
  }
  void GetColorImpl_Injected(int32_t name, ModdingAPI::Exposed::UnityEngine::Color ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1067480))(this, name, ret);
  }
  void GetTextureScaleAndOffsetImpl_Injected(int32_t name, ModdingAPI::Exposed::UnityEngine::Vector4 ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10674F0))(this, name, ret);
  }
  void SetTextureOffsetImpl_Injected(int32_t name, ModdingAPI::Exposed::UnityEngine::Vector2 offset) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1067560))(this, name, offset);
  }
  void SetTextureScaleImpl_Injected(int32_t name, ModdingAPI::Exposed::UnityEngine::Vector2 scale) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, int32_t, ModdingAPI::Exposed::UnityEngine::Vector2)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10675D0))(this, name, scale);
  }

  // Static methods:
  static inline void CreateWithShader(ModdingAPI::Exposed::UnityEngine::Material* self, ModdingAPI::Exposed::UnityEngine::Shader* shader) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Shader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10651C0))(self, shader);
  }
  static inline void CreateWithMaterial(ModdingAPI::Exposed::UnityEngine::Material* self, ModdingAPI::Exposed::UnityEngine::Material* source) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*, ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065220))(self, source);
  }
  static inline void CreateWithString(ModdingAPI::Exposed::UnityEngine::Material* self) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Material*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1065280))(self);
  }
};
}