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
#include "ModdingAPI.Exposed.System.DateTime.hpp"
#include "ModdingAPI.Exposed.System.TimeSpan.hpp"
#include "ModdingAPI.Exposed.System.TimeZoneInfo.TransitionTime.hpp"
#include "ModdingAPI.Exposed.System.Runtime.Serialization.StreamingContext.hpp"
#include "ModdingAPI::Exposed::System::DateTime.hpp"
#include "ModdingAPI::Exposed::System::TimeSpan.hpp"
#include "ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime.hpp"


namespace ModdingAPI::Exposed::System::TimeZoneInfo {
struct __AdjustmentRule_Il2CppStaticFields {
};

struct __AdjustmentRule_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Equals;
  VirtualInvokeData _5_System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData _6_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
};

struct __AdjustmentRule_Il2CppClass {
  Il2CppClass_1 _1;
  __AdjustmentRule_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __AdjustmentRule_Il2CppVtbl vtbl;
};

class AdjustmentRule {
  static constexpr uint64_t                     _rvaClassInstance     = 0x3C2F538;
  static inline    __AdjustmentRule_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Static class getter:
  static inline __AdjustmentRule_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__AdjustmentRule_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __AdjustmentRule_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::DateTime m_dateStart;
  ModdingAPI::Exposed::System::DateTime m_dateEnd;
  ModdingAPI::Exposed::System::TimeSpan m_daylightDelta;
  ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime m_daylightTransitionStart;
  ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime m_daylightTransitionEnd;
  ModdingAPI::Exposed::System::TimeSpan m_baseUtcOffsetDelta;

  // Member methods:
  ModdingAPI::Exposed::System::DateTime get_DateStart() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x311320))(this);
  }
  ModdingAPI::Exposed::System::DateTime get_DateEnd() {
    return reinterpret_cast<ModdingAPI::Exposed::System::DateTime(__fastcall*)(ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  ModdingAPI::Exposed::System::TimeSpan get_DaylightDelta() {
    return reinterpret_cast<ModdingAPI::Exposed::System::TimeSpan(__fastcall*)(ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110A0))(this);
  }
  ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime get_DaylightTransitionStart() {
    return reinterpret_cast<ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime(__fastcall*)(ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x104A140))(this);
  }
  ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime get_DaylightTransitionEnd() {
    return reinterpret_cast<ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime(__fastcall*)(ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x104A160))(this);
  }
  bool Equals(ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule* other) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*, ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x104A180))(this, other);
  }
  int32_t GetHashCode() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x104A340))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this);
  }
  void System::Runtime::Serialization::IDeserializationCallback::OnDeserialization(Il2CppObject* sender) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x104AA60))(this, sender);
  }
  void System::Runtime::Serialization::ISerializable::GetObjectData(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x104AB80))(this, info, context);
  }
  void ::ctor(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x104AD40))(this, info, context);
  }

  // Static methods:
  static inline ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule* CreateAdjustmentRule(ModdingAPI::Exposed::System::DateTime dateStart, ModdingAPI::Exposed::System::DateTime dateEnd, ModdingAPI::Exposed::System::TimeSpan daylightDelta, ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime daylightTransitionStart, ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime daylightTransitionEnd) {
    return reinterpret_cast<ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*(__fastcall*)(ModdingAPI::Exposed::System::DateTime, ModdingAPI::Exposed::System::DateTime, ModdingAPI::Exposed::System::TimeSpan, ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime, ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x104A360))(dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd);
  }
  static inline ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule* CreateAdjustmentRule(ModdingAPI::Exposed::System::DateTime dateStart, ModdingAPI::Exposed::System::DateTime dateEnd, ModdingAPI::Exposed::System::TimeSpan daylightDelta, ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime daylightTransitionStart, ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime daylightTransitionEnd, ModdingAPI::Exposed::System::TimeSpan baseUtcOffsetDelta) {
    return reinterpret_cast<ModdingAPI::Exposed::System::TimeZoneInfo::AdjustmentRule*(__fastcall*)(ModdingAPI::Exposed::System::DateTime, ModdingAPI::Exposed::System::DateTime, ModdingAPI::Exposed::System::TimeSpan, ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime, ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime, ModdingAPI::Exposed::System::TimeSpan)>(Helpers::Memory::GetInstance().MakeAbsolute(0x104A5A0))(dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta);
  }
  static inline void ValidateAdjustmentRule(ModdingAPI::Exposed::System::DateTime dateStart, ModdingAPI::Exposed::System::DateTime dateEnd, ModdingAPI::Exposed::System::TimeSpan daylightDelta, ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime daylightTransitionStart, ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime daylightTransitionEnd) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::DateTime, ModdingAPI::Exposed::System::DateTime, ModdingAPI::Exposed::System::TimeSpan, ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime, ModdingAPI::Exposed::System::TimeZoneInfo::TransitionTime)>(Helpers::Memory::GetInstance().MakeAbsolute(0x104A610))(dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd);
  }
};
}