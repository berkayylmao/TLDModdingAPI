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
#include "ModdingAPI::Exposed::UnityEngine::Vector4.hpp"
#include "ModdingAPI::Exposed::UnityEngine::Color.hpp"


namespace ModdingAPI::Exposed::UnityEngine {
struct __Shader_Il2CppStaticFields {
};

struct __Shader_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __Shader_Il2CppClass {
  Il2CppClass_1 _1;
  __Shader_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Shader_Il2CppVtbl vtbl;
};

class Shader {
public:
  // Il2Cpp fields:
  __Shader_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;

  // Member methods:
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Shader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC3C0))(this);
  }
  void set_maximumLOD(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Shader*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC4A0))(this, value);
  }
  bool get_isSupported() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Shader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC500))(this);
  }
  int32_t get_disableBatching() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Shader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC5F0))(this);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Shader* Find(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Shader*(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC450))(name);
  }
  static inline void EnableKeyword(System_String* keyword) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC550))(keyword);
  }
  static inline void DisableKeyword(System_String* keyword) {
    reinterpret_cast<void(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC5A0))(keyword);
  }
  static inline int32_t PropertyToID(System_String* name) {
    return reinterpret_cast<int32_t(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC640))(name);
  }
  static inline void SetGlobalFloatImpl(int32_t name, float value) {
    reinterpret_cast<void(__fastcall*)(int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC690))(name, value);
  }
  static inline void SetGlobalVectorImpl(int32_t name, ModdingAPI::Exposed::UnityEngine::Vector4 value) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Vector4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC6F0))(name, value);
  }
  static inline void SetGlobalTextureImpl(int32_t name, ModdingAPI::Exposed::UnityEngine::Texture* value) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Texture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC750))(name, value);
  }
  static inline void SetGlobalVectorArrayImpl(int32_t name, ModdingAPI::Exposed::UnityEngine::Vector4_array* values, int32_t count) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Vector4_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC7B0))(name, values, count);
  }
  static inline void SetGlobalVectorArray(int32_t name, ModdingAPI::Exposed::UnityEngine::Vector4_array* values, int32_t count) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Vector4_array*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC820))(name, values, count);
  }
  static inline void SetGlobalFloat(System_String* name, float value) {
    reinterpret_cast<void(__fastcall*)(System_String*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC9A0))(name, value);
  }
  static inline void SetGlobalFloat(int32_t nameID, float value) {
    reinterpret_cast<void(__fastcall*)(int32_t, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC690))(nameID, value);
  }
  static inline void SetGlobalVector(System_String* name, ModdingAPI::Exposed::UnityEngine::Vector4 value) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::UnityEngine::Vector4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10ACA50))(name, value);
  }
  static inline void SetGlobalVector(int32_t nameID, ModdingAPI::Exposed::UnityEngine::Vector4 value) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Vector4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10ACB00))(nameID, value);
  }
  static inline void SetGlobalColor(System_String* name, ModdingAPI::Exposed::UnityEngine::Color value) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10ACB60))(name, value);
  }
  static inline void SetGlobalColor(int32_t nameID, ModdingAPI::Exposed::UnityEngine::Color value) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Color)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10ACC50))(nameID, value);
  }
  static inline void SetGlobalTexture(System_String* name, ModdingAPI::Exposed::UnityEngine::Texture* value) {
    reinterpret_cast<void(__fastcall*)(System_String*, ModdingAPI::Exposed::UnityEngine::Texture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10ACCF0))(name, value);
  }
  static inline void SetGlobalTexture(int32_t nameID, ModdingAPI::Exposed::UnityEngine::Texture* value) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Texture*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10AC750))(nameID, value);
  }
  static inline void SetGlobalVectorArray(int32_t nameID, ModdingAPI::Exposed::UnityEngine::Vector4_array* values) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Vector4_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10ACDA0))(nameID, values);
  }
  static inline void SetGlobalVectorImpl_Injected(int32_t name, ModdingAPI::Exposed::UnityEngine::Vector4 value) {
    reinterpret_cast<void(__fastcall*)(int32_t, ModdingAPI::Exposed::UnityEngine::Vector4)>(Helpers::Memory::GetInstance().MakeAbsolute(0x10ACEF0))(name, value);
  }
};
}