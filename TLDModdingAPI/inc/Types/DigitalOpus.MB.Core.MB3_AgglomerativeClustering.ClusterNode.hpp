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
#include "ModdingAPI.Exposed.UnityEngine.Vector3.hpp"


namespace ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering {
struct __ClusterNode_Il2CppStaticFields {
};

struct __ClusterNode_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __ClusterNode_Il2CppClass {
  Il2CppClass_1 _1;
  __ClusterNode_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ClusterNode_Il2CppVtbl vtbl;
};

class ClusterNode {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C29478;
  static inline    __ClusterNode_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ClusterNode_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ClusterNode_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ClusterNode_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::item_s* leaf;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode* cha;
  ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode* chb;
  int32_t height;
  float distToMergedCentroid;
  ModdingAPI::Exposed::UnityEngine::Vector3 centroid;
  ModdingAPI::Exposed::System::Int32_array* leafs;
  int32_t idx;
  bool isUnclustered;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::item_s* ii, int32_t index) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::item_s*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x267F7E0))(this, ii, index);
  }
  void ::ctor(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode* a, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode* b, int32_t index, int32_t h, float dist, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode_array* clusters) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode*, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode*, int32_t, int32_t, float, ModdingAPI::Exposed::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x267F8E0))(this, a, b, index, h, dist, clusters);
  }
};
}