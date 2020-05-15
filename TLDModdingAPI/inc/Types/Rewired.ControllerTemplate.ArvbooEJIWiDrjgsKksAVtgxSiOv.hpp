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
#include "ModdingAPI.Exposed.UnityEngine.Vector2.hpp"


namespace ModdingAPI::Exposed::Rewired::ControllerTemplate {
struct __ArvbooEJIWiDrjgsKksAVtgxSiOv_Il2CppStaticFields {
};

struct __ArvbooEJIWiDrjgsKksAVtgxSiOv_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_get_id;
  VirtualInvokeData _5_get_descriptiveName;
  VirtualInvokeData _6_get_type;
  VirtualInvokeData _9_get_parent;
  VirtualInvokeData _13_get_elementCount;
  VirtualInvokeData _14_GetElement;
  VirtualInvokeData _15_GetElementTargets;
  VirtualInvokeData _16_get_source;
  VirtualInvokeData _17_get_exists;
  VirtualInvokeData _18_get_value;
  VirtualInvokeData _19_get_valuePrev;
  VirtualInvokeData _20_get_up;
  VirtualInvokeData _21_get_upRight;
  VirtualInvokeData _22_get_right;
  VirtualInvokeData _23_get_downRight;
  VirtualInvokeData _24_get_down;
  VirtualInvokeData _25_get_downLeft;
  VirtualInvokeData _26_get_left;
  VirtualInvokeData _27_get_upLeft;
};

struct __ArvbooEJIWiDrjgsKksAVtgxSiOv_Il2CppClass {
  Il2CppClass_1 _1;
  __ArvbooEJIWiDrjgsKksAVtgxSiOv_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __ArvbooEJIWiDrjgsKksAVtgxSiOv_Il2CppVtbl vtbl;
};

class ArvbooEJIWiDrjgsKksAVtgxSiOv {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C88398;
  static inline    __ArvbooEJIWiDrjgsKksAVtgxSiOv_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __ArvbooEJIWiDrjgsKksAVtgxSiOv_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__ArvbooEJIWiDrjgsKksAVtgxSiOv_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __ArvbooEJIWiDrjgsKksAVtgxSiOv_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::Rewired::IControllerTemplate* nVLlrYscJzaCOhibZEADDJKIfCYP_uNxdinwYVsqwsFuvrknqiyaoWaP;
  int32_t nVLlrYscJzaCOhibZEADDJKIfCYP_GWhYqtabLocDuVzCkkrAPmUjKTh;
  System_String* nVLlrYscJzaCOhibZEADDJKIfCYP_pouvrAGzgKKMJngewwBnCpncoOj;
  int32_t nVLlrYscJzaCOhibZEADDJKIfCYP_BKWeeAtaRjenxRXXISPPwMjqydU;
  int32_t CtWHpgOaCVZYpcBzymhejPsalLW;
  int32_t fCELHZUDXWsemCpKKGZLUIgkhbP;
  ModdingAPI::Exposed::Rewired::ControllerTemplate::nVLlrYscJzaCOhibZEADDJKIfCYP_array* zDYSoPuWRIUrndraUwJpaRdSJEG;

  // Member methods:
  void ::ctor(ModdingAPI::Exposed::Rewired::IControllerTemplate* parent, int32_t id, System_String* name, ModdingAPI::Exposed::Rewired::ControllerTemplate::nVLlrYscJzaCOhibZEADDJKIfCYP_array* elements) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::ArvbooEJIWiDrjgsKksAVtgxSiOv*, ModdingAPI::Exposed::Rewired::IControllerTemplate*, int32_t, System_String*, ModdingAPI::Exposed::Rewired::ControllerTemplate::nVLlrYscJzaCOhibZEADDJKIfCYP_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE51D00))(this, parent, id, name, elements);
  }
  void ::ctor(ModdingAPI::Exposed::Rewired::IControllerTemplate* parent, int32_t id, System_String* name, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp* up, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp* upRight, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp* right, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp* downRight, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp* down, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp* downLeft, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp* left, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp* upLeft) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::ArvbooEJIWiDrjgsKksAVtgxSiOv*, ModdingAPI::Exposed::Rewired::IControllerTemplate*, int32_t, System_String*, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*, ModdingAPI::Exposed::Rewired::ControllerTemplate::zdSHaHfLUGxPGQoutBAUlCwFLFp*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE51E30))(this, parent, id, name, up, upRight, right, downRight, down, downLeft, left, upLeft);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_value() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::ArvbooEJIWiDrjgsKksAVtgxSiOv*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE52280))(this);
  }
  ModdingAPI::Exposed::UnityEngine::Vector2 get_valuePrev() {
    return reinterpret_cast<ModdingAPI::Exposed::UnityEngine::Vector2(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::ArvbooEJIWiDrjgsKksAVtgxSiOv*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE52BC0))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateButton* get_up() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateButton*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::ArvbooEJIWiDrjgsKksAVtgxSiOv*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE534E0))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateButton* get_upRight() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateButton*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::ArvbooEJIWiDrjgsKksAVtgxSiOv*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE53620))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateButton* get_right() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateButton*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::ArvbooEJIWiDrjgsKksAVtgxSiOv*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE53760))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateButton* get_downRight() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateButton*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::ArvbooEJIWiDrjgsKksAVtgxSiOv*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE538A0))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateButton* get_down() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateButton*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::ArvbooEJIWiDrjgsKksAVtgxSiOv*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE539E0))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateButton* get_downLeft() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateButton*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::ArvbooEJIWiDrjgsKksAVtgxSiOv*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE53B60))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateButton* get_left() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateButton*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::ArvbooEJIWiDrjgsKksAVtgxSiOv*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE53CA0))(this);
  }
  ModdingAPI::Exposed::Rewired::IControllerTemplateButton* get_upLeft() {
    return reinterpret_cast<ModdingAPI::Exposed::Rewired::IControllerTemplateButton*(__fastcall*)(ModdingAPI::Exposed::Rewired::ControllerTemplate::ArvbooEJIWiDrjgsKksAVtgxSiOv*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xE53DE0))(this);
  }
};
}