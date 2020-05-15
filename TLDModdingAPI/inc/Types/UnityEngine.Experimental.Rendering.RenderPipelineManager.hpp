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


namespace ModdingAPI::Exposed::UnityEngine::Experimental::Rendering {
struct __RenderPipelineManager_Il2CppStaticFields {
  ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipelineAsset* s_CurrentPipelineAsset;
  ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipeline* _currentPipeline_k__BackingField;
};

struct __RenderPipelineManager_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __RenderPipelineManager_Il2CppClass {
  Il2CppClass_1 _1;
  __RenderPipelineManager_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __RenderPipelineManager_Il2CppVtbl vtbl;
};

class RenderPipelineManager {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C7E1E0;
  static inline    __RenderPipelineManager_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __RenderPipelineManager_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__RenderPipelineManager_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __RenderPipelineManager_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static fields:
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipelineAsset*> s_CurrentPipelineAsset = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipelineAsset*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_CurrentPipelineAsset; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipeline*> _currentPipeline_k__BackingField = __CppStaticProperty<ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipeline*>(
   []() { return &GetStaticClassInstance()->pStaticFields->_currentPipeline_k__BackingField; }
  );

  // Static methods:
  static inline ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipeline* get_currentPipeline() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipeline*(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xFDC1F0))();
  }
  static inline void set_currentPipeline(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipeline* value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipeline*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFDC270))(value);
  }
  static inline void CleanupRenderPipeline() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0xFDC300))();
  }
  static inline void DoRenderLoop_Internal(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipelineAsset* pipe, ModdingAPI::Exposed::UnityEngine::Camera_array* cameras, intptr_t loopPtr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipelineAsset*, ModdingAPI::Exposed::UnityEngine::Camera_array*, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFDC550))(pipe, cameras, loopPtr);
  }
  static inline void PrepareRenderPipeline(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipelineAsset* pipe) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::UnityEngine::Experimental::Rendering::IRenderPipelineAsset*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFDC790))(pipe);
  }
};
}