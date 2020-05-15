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


namespace ModdingAPI::Exposed::NodeCanvas::Tasks::Actions {
struct __CameraFader_Il2CppStaticFields {
  ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::CameraFader* _current;
};

struct __CameraFader_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __CameraFader_Il2CppClass {
  Il2CppClass_1 _1;
  __CameraFader_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __CameraFader_Il2CppVtbl vtbl;
};

class CameraFader {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C56D20;
  static inline    __CameraFader_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __CameraFader_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__CameraFader_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __CameraFader_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  intptr_t Object_m_CachedPtr;
  float alpha;
  ModdingAPI::Exposed::UnityEngine::Texture2D* _blackTexture;

  // Member methods:
  ModdingAPI::Exposed::UnityEngine::Texture2D* get_blackTexture() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Texture2D*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::CameraFader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F15050))(this);
  }
  void FadeIn(float time) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::CameraFader*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F15470))(this, time);
  }
  void FadeOut(float time) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::CameraFader*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F155E0))(this, time);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* CoroutineFadeIn(float time) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::CameraFader*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F15750))(this, time);
  }
  ModdingAPI::Exposed::System::Collections::IEnumerator* CoroutineFadeOut(float time) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IEnumerator*(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::CameraFader*, float)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F158B0))(this, time);
  }
  void OnGUI() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::CameraFader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F15A10))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::CameraFader*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x389390))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::CameraFader*> _current = __CppStaticProperty<ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::CameraFader*>(
   []() { return &GetStaticClassInstance()->pStaticFields->_current; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::CameraFader* get_current() {
    return reinterpret_cast<ModdingAPI::Exposed::NodeCanvas::Tasks::Actions::CameraFader*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x1F15230))();
  }
};
}