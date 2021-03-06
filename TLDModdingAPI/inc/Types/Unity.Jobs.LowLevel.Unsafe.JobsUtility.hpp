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
#include "ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobRanges.hpp"
#include "ModdingAPI.Exposed.Unity.Jobs.JobHandle.hpp"
#include "ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters.hpp"
#include "ModdingAPI::Exposed::Unity::Jobs::JobHandle.hpp"


namespace ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe {
struct __JobsUtility_Il2CppStaticFields {
};

struct __JobsUtility_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
};

struct __JobsUtility_Il2CppClass {
  Il2CppClass_1 _1;
  __JobsUtility_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __JobsUtility_Il2CppVtbl vtbl;
};

class JobsUtility {
public:
  // Il2Cpp fields:
  __JobsUtility_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Static methods:
  static inline bool GetWorkStealingRange(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobRanges ranges, int32_t jobIndex, int32_t beginIndex, int32_t endIndex) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobRanges, int32_t, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4360))(ranges, jobIndex, beginIndex, endIndex);
  }
  static inline ModdingAPI::Exposed::Unity::Jobs::JobHandle Schedule(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters parameters) {
    return reinterpret_cast<ModdingAPI::Exposed::Unity::Jobs::JobHandle(__fastcall*)(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC43E0))(parameters);
  }
  static inline ModdingAPI::Exposed::Unity::Jobs::JobHandle ScheduleParallelFor(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters parameters, int32_t arrayLength, int32_t innerloopBatchCount) {
    return reinterpret_cast<ModdingAPI::Exposed::Unity::Jobs::JobHandle(__fastcall*)(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4460))(parameters, arrayLength, innerloopBatchCount);
  }
  static inline intptr_t CreateJobReflectionData(ModdingAPI::Exposed::System::Type* wrapperJobType, ModdingAPI::Exposed::System::Type* userJobType, int32_t jobType, Il2CppObject* managedJobFunction0, Il2CppObject* managedJobFunction1, Il2CppObject* managedJobFunction2) {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type*, int32_t, Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4500))(wrapperJobType, userJobType, jobType, managedJobFunction0, managedJobFunction1, managedJobFunction2);
  }
  static inline intptr_t CreateJobReflectionData(ModdingAPI::Exposed::System::Type* type, int32_t jobType, Il2CppObject* managedJobFunction0, Il2CppObject* managedJobFunction1, Il2CppObject* managedJobFunction2) {
    return reinterpret_cast<intptr_t(__fastcall*)(ModdingAPI::Exposed::System::Type*, int32_t, Il2CppObject*, Il2CppObject*, Il2CppObject*)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4590))(type, jobType, managedJobFunction0, managedJobFunction1, managedJobFunction2);
  }
  static inline void Schedule_Injected(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters parameters, ModdingAPI::Exposed::Unity::Jobs::JobHandle ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters, ModdingAPI::Exposed::Unity::Jobs::JobHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4620))(parameters, ret);
  }
  static inline void ScheduleParallelFor_Injected(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters parameters, int32_t arrayLength, int32_t innerloopBatchCount, ModdingAPI::Exposed::Unity::Jobs::JobHandle ret) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::Unity::Jobs::LowLevel::Unsafe::JobsUtility::JobScheduleParameters, int32_t, int32_t, ModdingAPI::Exposed::Unity::Jobs::JobHandle)>(Helpers::Memory::GetInstance().MakeAbsolute(0xFC4680))(parameters, arrayLength, innerloopBatchCount, ret);
  }
};
}