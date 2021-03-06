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
#include "ModdingAPI.Exposed.System.Runtime.Serialization.StreamingContext.hpp"


namespace ModdingAPI::Exposed::System {
struct __Exception_Il2CppStaticFields {
  Il2CppObject* s_EDILock;
};

struct __Exception_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _5_get_Message;
  VirtualInvokeData _6_get_Data;
  VirtualInvokeData _7_get_InnerException;
  VirtualInvokeData _8_get_StackTrace;
  VirtualInvokeData _9_get_Source;
  VirtualInvokeData _10_GetObjectData;
  VirtualInvokeData _11_GetType;
};

struct __Exception_Il2CppClass {
  Il2CppClass_1 _1;
  __Exception_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __Exception_Il2CppVtbl vtbl;
};

class Exception {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C25A58;
  static inline    Exception* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C6BFB0;
  static inline    __Exception_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline Exception* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (Exception**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __Exception_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__Exception_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __Exception_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  System_String* _className;
  System_String* _message;
  ModdingAPI::Exposed::System::Collections::IDictionary* _data;
  ModdingAPI::Exposed::System::Exception* _innerException;
  System_String* _helpURL;
  Il2CppObject* _stackTrace;
  System_String* _stackTraceString;
  System_String* _remoteStackTraceString;
  int32_t _remoteStackIndex;
  Il2CppObject* _dynamicMethods;
  int32_t _HResult;
  System_String* _source;
  ModdingAPI::Exposed::System::Runtime::Serialization::SafeSerializationManager* _safeSerializationManager;
  ModdingAPI::Exposed::System::Diagnostics::StackTrace_array* captured_traces;
  ModdingAPI::Exposed::System::IntPtr_array* native_trace_ips;

  // Member methods:
  void Init() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65C3E0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65C530))(this);
  }
  void ::ctor(System_String* message) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65C540))(this, message);
  }
  void ::ctor(System_String* message, ModdingAPI::Exposed::System::Exception* innerException) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*, System_String*, ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65C570))(this, message, innerException);
  }
  void ::ctor(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65C5B0))(this, info, context);
  }
  System_String* get_Message() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65C8E0))(this);
  }
  ModdingAPI::Exposed::System::Collections::IDictionary* get_Data() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Collections::IDictionary*(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65CA20))(this);
  }
  System_String* GetClassName() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65CB90))(this);
  }
  ModdingAPI::Exposed::System::Exception* get_InnerException() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3110B0))(this);
  }
  System_String* get_StackTrace() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65CBE0))(this);
  }
  System_String* GetStackTrace(bool needFileInfo) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Exception*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65CC20))(this, needFileInfo);
  }
  void SetErrorCode(int32_t hr) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383990))(this, hr);
  }
  System_String* get_Source() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65CC70))(this);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65CEC0))(this);
  }
  System_String* ToString(bool needFileLineInfo, bool needMessage) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Exception*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65CED0))(this, needFileLineInfo, needMessage);
  }
  void GetObjectData(ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo* info, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*, ModdingAPI::Exposed::System::Runtime::Serialization::SerializationInfo*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65D2F0))(this, info, context);
  }
  void OnDeserialized(ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext context) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*, ModdingAPI::Exposed::System::Runtime::Serialization::StreamingContext)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65D6C0))(this, context);
  }
  System_String* StripFileInfo(System_String* stackTrace, bool isRemoteStackTrace) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Exception*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x64F310))(this, stackTrace, isRemoteStackTrace);
  }
  void RestoreExceptionDispatchInfo(ModdingAPI::Exposed::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionDispatchInfo) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*, ModdingAPI::Exposed::System::Runtime::ExceptionServices::ExceptionDispatchInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65D830))(this, exceptionDispatchInfo);
  }
  int32_t get_HResult() {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383980))(this);
  }
  void set_HResult(int32_t value) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Exception*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x383990))(this, value);
  }
  ModdingAPI::Exposed::System::Type* GetType() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65D910))(this);
  }
  ModdingAPI::Exposed::System::Exception* FixRemotingException() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Exception*(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65D9B0))(this);
  }

  // Static fields:
  static inline __CppStaticProperty<Il2CppObject*> s_EDILock = __CppStaticProperty<Il2CppObject*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_EDILock; }
  );

  // Static methods:
  static inline bool IsImmutableAgileException(ModdingAPI::Exposed::System::Exception* e) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x3077A0))(e);
  }
  static inline System_String* GetMessageFromNativeResources(int32_t kind) {
    return reinterpret_cast<System_String*(__fastcall*)(int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x65D920))(kind);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x65DAF0))();
  }
};
}