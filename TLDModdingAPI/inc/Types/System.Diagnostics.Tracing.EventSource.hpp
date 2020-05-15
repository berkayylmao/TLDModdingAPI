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
#include "ModdingAPI.Exposed.System.Guid.hpp"
#include "ModdingAPI.Exposed.System.Diagnostics.Tracing.SessionMask.hpp"
#include "ModdingAPI.Exposed.System.Diagnostics.Tracing.EventSourceOptions.hpp"
#include "ModdingAPI.Exposed.System.Diagnostics.Tracing.EventDescriptor.hpp"
#include "ModdingAPI.Exposed.System.Diagnostics.Tracing.EventSource.EventMetadata.hpp"
#include "ModdingAPI::Exposed::System::Guid.hpp"


namespace ModdingAPI::Exposed::System::Diagnostics::Tracing {
struct __EventSource_Il2CppStaticFields {
  uint32_t s_currentPid;
  uint8_t m_EventSourceExceptionRecurenceCount;
  ModdingAPI::Exposed::System::Action_T_* s_activityDying;
  ModdingAPI::Exposed::System::Byte_array* namespaceBytes;
  ModdingAPI::Exposed::System::Guid AspNetEventSourceGuid;
};

struct __EventSource_Il2CppVtbl {
  VirtualInvokeData _0_Equals;
  VirtualInvokeData _1_Finalize;
  VirtualInvokeData _2_GetHashCode;
  VirtualInvokeData _3_ToString;
  VirtualInvokeData _4_Dispose;
  VirtualInvokeData _5_OnEventCommand;
  VirtualInvokeData _6_Dispose;
};

struct __EventSource_Il2CppClass {
  Il2CppClass_1 _1;
  __EventSource_Il2CppStaticFields* pStaticFields;
  Il2CppClass_2 _2;
  __EventSource_Il2CppVtbl vtbl;
};

class EventSource {
  static constexpr uint64_t         _rvaObjectInstance     = 0x3C41BC8;
  static inline    EventSource* _pStaticObjectInstance = nullptr;

  static constexpr uint64_t                     _rvaClassInstance     = 0x3C24EC0;
  static inline    __EventSource_Il2CppClass* _pStaticClassInstance = nullptr;

public:
// Singleton object getter:
  static inline EventSource* GetSingletonInstance() {
    while (!_pStaticObjectInstance) {
      Sleep(100);
      auto* ppObjectInstance = (EventSource**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaObjectInstance);
      if (ppObjectInstance)
        _pStaticObjectInstance = *ppObjectInstance;
    }
    return _pStaticObjectInstance;
  }

// Static class getter:
  static inline __EventSource_Il2CppClass* GetStaticClassInstance() {
    while (!_pStaticClassInstance) {
      Sleep(100);
      auto* ppClassInstance = (__EventSource_Il2CppClass**)Helpers::Memory::GetInstance().MakeAbsolute(_rvaClassInstance);
      if (ppClassInstance)
        _pStaticClassInstance = *ppClassInstance;
    }
    return _pStaticClassInstance;
  }

  // Il2Cpp fields:
  __EventSource_Il2CppClass* __pClassInstance;
  void* __monitor;

  // Member fields:
  ModdingAPI::Exposed::System::Byte_array* providerMetadata;
  System_String* m_name;
  int32_t m_id;
  ModdingAPI::Exposed::System::Guid m_guid;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventMetadata_array* m_eventData;
  ModdingAPI::Exposed::System::Byte_array* m_rawManifest;
  ModdingAPI::Exposed::System::EventHandler_TEventArgs_* m_eventCommandExecuted;
  int32_t m_config;
  bool m_eventSourceEnabled;
  int32_t m_level;
  int64_t m_matchAnyKeyword;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::EventDispatcher* m_Dispatchers;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::OverideEventProvider* m_provider;
  bool m_completelyInited;
  ModdingAPI::Exposed::System::Exception* m_constructionException;
  uint8_t m_outOfBandMessageCount;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::EventCommandEventArgs* m_deferredCommands;
  ModdingAPI::Exposed::System::String_array* m_traits;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::SessionMask m_curLiveSessions;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::EtwSession_array* m_etwSessionIdMap;
  ModdingAPI::Exposed::System::Collections::Generic::List_T_* m_legacySessions;
  int64_t m_keywordTriggers;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::SessionMask m_activityFilteringForETWEnabled;
  ModdingAPI::Exposed::System::Diagnostics::Tracing::ActivityTracker* m_activityTracker;

  // Member methods:
  void WriteMultiMerge(System_String* eventName, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSourceOptions options, ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, ModdingAPI::Exposed::System::Guid* activityID, ModdingAPI::Exposed::System::Guid* childActivityID, ModdingAPI::Exposed::System::Object_array* values) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, System_String*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSourceOptions, ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F3670))(this, eventName, options, eventTypes, activityID, childActivityID, values);
  }
  void WriteMultiMergeInner(System_String* eventName, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSourceOptions options, ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, ModdingAPI::Exposed::System::Guid* activityID, ModdingAPI::Exposed::System::Guid* childActivityID, ModdingAPI::Exposed::System::Object_array* values) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, System_String*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSourceOptions, ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F3700))(this, eventName, options, eventTypes, activityID, childActivityID, values);
  }
  void WriteMultiMerge(System_String* eventName, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSourceOptions options, ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, ModdingAPI::Exposed::System::Guid* activityID, ModdingAPI::Exposed::System::Guid* childActivityID, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventData* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, System_String*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSourceOptions, ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F3D30))(this, eventName, options, eventTypes, activityID, childActivityID, data);
  }
  void WriteCleanup(ModdingAPI::Exposed::System::Runtime::InteropServices::GCHandle* pPins, int32_t cPins) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Runtime::InteropServices::GCHandle*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F41E0))(this, pPins, cPins);
  }
  void InitializeProviderMetadata() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F42E0))(this);
  }
  ModdingAPI::Exposed::System::Diagnostics::Tracing::NameInfo* UpdateDescriptor(System_String* name, ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingEventTypes* eventInfo, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSourceOptions options, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventDescriptor descriptor) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Diagnostics::Tracing::NameInfo*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, System_String*, ModdingAPI::Exposed::System::Diagnostics::Tracing::TraceLoggingEventTypes*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSourceOptions, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventDescriptor)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F4F70))(this, name, eventInfo, options, descriptor);
  }
  System_String* get_Name() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x335360))(this);
  }
  ModdingAPI::Exposed::System::Guid get_Guid() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F50D0))(this);
  }
  bool IsEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F50E0))(this);
  }
  bool IsEnabled(int32_t level, int64_t keywords) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F50F0))(this, level, keywords);
  }
  bool IsEnabled(int32_t level, int64_t keywords, uint8_t channel) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, int64_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F50F0))(this, level, keywords, channel);
  }
  System_String* ToString() {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F5BC0))(this);
  }
  void ::ctor() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F5D30))(this);
  }
  void ::ctor(int32_t settings) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F5D40))(this, settings);
  }
  void ::ctor(int32_t settings, ModdingAPI::Exposed::System::String_array* traits) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F5D50))(this, settings, traits);
  }
  void OnEventCommand(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventCommandEventArgs* command) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventCommandEventArgs*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x2FEC40))(this, command);
  }
  void WriteEvent(int32_t eventId, int32_t arg1) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F5F90))(this, eventId, arg1);
  }
  void WriteEvent(int32_t eventId, System_String* arg1, System_String* arg2) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F6060))(this, eventId, arg1, arg2);
  }
  void WriteEvent(int32_t eventId, System_String* arg1, System_String* arg2, System_String* arg3) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, System_String*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F61A0))(this, eventId, arg1, arg2, arg3);
  }
  void WriteEventCore(int32_t eventId, int32_t eventDataCount, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventData* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, int32_t, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F6320))(this, eventId, eventDataCount, data);
  }
  void WriteEventWithRelatedActivityIdCore(int32_t eventId, ModdingAPI::Exposed::System::Guid* relatedActivityId, int32_t eventDataCount, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventData* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, ModdingAPI::Exposed::System::Guid*, int32_t, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F6350))(this, eventId, relatedActivityId, eventDataCount, data);
  }
  void WriteEvent(int32_t eventId, ModdingAPI::Exposed::System::Object_array* args) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F7040))(this, eventId, args);
  }
  void Dispose() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F7060))(this);
  }
  void Dispose(bool disposing) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F7110))(this, disposing);
  }
  void Finalize() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F72B0))(this);
  }
  void WriteStringToListener(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventListener* listener, System_String* msg, ModdingAPI::Exposed::System::Diagnostics::Tracing::SessionMask m) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventListener*, System_String*, ModdingAPI::Exposed::System::Diagnostics::Tracing::SessionMask)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F7330))(this, listener, msg, m);
  }
  void WriteEventRaw(System_String* eventName, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventDescriptor eventDescriptor, ModdingAPI::Exposed::System::Guid* activityID, ModdingAPI::Exposed::System::Guid* relatedActivityID, int32_t dataCount, intptr_t data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, System_String*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventDescriptor, ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Guid*, int32_t, intptr_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F76B0))(this, eventName, eventDescriptor, activityID, relatedActivityID, dataCount, data);
  }
  void Initialize(ModdingAPI::Exposed::System::Guid eventSourceGuid, System_String* eventSourceName, ModdingAPI::Exposed::System::String_array* traits) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Guid, System_String*, ModdingAPI::Exposed::System::String_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F77F0))(this, eventSourceGuid, eventSourceName, traits);
  }
  Il2CppObject* DecodeObject(int32_t eventId, int32_t parameterId, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventData* data) {
    return reinterpret_cast<Il2CppObject*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, int32_t, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F82E0))(this, eventId, parameterId, data);
  }
  ModdingAPI::Exposed::System::Diagnostics::Tracing::EventDispatcher* GetDispatcher(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventListener* listener) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Diagnostics::Tracing::EventDispatcher*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventListener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F8AE0))(this, listener);
  }
  void WriteEventVarargs(int32_t eventId, ModdingAPI::Exposed::System::Guid* childActivityID, ModdingAPI::Exposed::System::Object_array* args) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F8B10))(this, eventId, childActivityID, args);
  }
  ModdingAPI::Exposed::System::Object_array* SerializeEventArgs(int32_t eventId, ModdingAPI::Exposed::System::Object_array* args) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Object_array*(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F9900))(this, eventId, args);
  }
  void LogEventArgsMismatches(ModdingAPI::Exposed::System::Reflection::ParameterInfo_array* infos, ModdingAPI::Exposed::System::Object_array* args) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Reflection::ParameterInfo_array*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F9CB0))(this, infos, args);
  }
  int32_t GetParamLengthIncludingByteArray(ModdingAPI::Exposed::System::Reflection::ParameterInfo_array* parameters) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Reflection::ParameterInfo_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F9F00))(this, parameters);
  }
  void WriteToAllListeners(int32_t eventId, ModdingAPI::Exposed::System::Guid* childActivityID, int32_t eventDataCount, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventData* data) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, ModdingAPI::Exposed::System::Guid*, int32_t, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventData*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FA040))(this, eventId, childActivityID, eventDataCount, data);
  }
  void WriteToAllListeners(int32_t eventId, ModdingAPI::Exposed::System::Guid* childActivityID, ModdingAPI::Exposed::System::Object_array* args) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Object_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FA4F0))(this, eventId, childActivityID, args);
  }
  void DispatchToAllListeners(int32_t eventId, ModdingAPI::Exposed::System::Guid* childActivityID, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventWrittenEventArgs* eventCallbackArgs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, ModdingAPI::Exposed::System::Guid*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventWrittenEventArgs*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FA7F0))(this, eventId, childActivityID, eventCallbackArgs);
  }
  void WriteEventString(int32_t level, int64_t keywords, System_String* msgString) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, int64_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FAA70))(this, level, keywords, msgString);
  }
  void WriteStringToAllListeners(System_String* eventName, System_String* msg) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, System_String*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FB190))(this, eventName, msg);
  }
  ModdingAPI::Exposed::System::Diagnostics::Tracing::SessionMask GetEtwSessionMask(int32_t eventId, ModdingAPI::Exposed::System::Guid* childActivityID) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Diagnostics::Tracing::SessionMask(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, ModdingAPI::Exposed::System::Guid*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FB740))(this, eventId, childActivityID);
  }
  bool IsEnabledByDefault(int32_t eventNum, bool enable, int32_t currentLevel, int64_t currentMatchAnyKeyword) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, bool, int32_t, int64_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FBA90))(this, eventNum, enable, currentLevel, currentMatchAnyKeyword);
  }
  bool IsEnabledCommon(bool enabled, int32_t currentLevel, int64_t currentMatchAnyKeyword, int32_t eventLevel, int64_t eventKeywords, uint8_t eventChannel) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, bool, int32_t, int64_t, int32_t, int64_t, uint8_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FBB50))(this, enabled, currentLevel, currentMatchAnyKeyword, eventLevel, eventKeywords, eventChannel);
  }
  void ThrowEventSourceException(System_String* eventName, ModdingAPI::Exposed::System::Exception* innerEx) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, System_String*, ModdingAPI::Exposed::System::Exception*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FBB80))(this, eventName, innerEx);
  }
  void ValidateEventOpcodeForTransfer(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventMetadata eventData, System_String* eventName) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventMetadata, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FC210))(this, eventData, eventName);
  }
  void SendCommand(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventListener* listener, int32_t perEventSourceSessionId, int32_t etwSessionId, int32_t command, bool enable, int32_t level, int64_t matchAnyKeyword, ModdingAPI::Exposed::System::Collections::Generic::IDictionary_TKey__TValue_* commandArguments) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventListener*, int32_t, int32_t, int32_t, bool, int32_t, int64_t, ModdingAPI::Exposed::System::Collections::Generic::IDictionary_TKey__TValue_*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FC320))(this, listener, perEventSourceSessionId, etwSessionId, command, enable, level, matchAnyKeyword, commandArguments);
  }
  void DoCommand(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventCommandEventArgs* commandArgs) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventCommandEventArgs*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FC660))(this, commandArgs);
  }
  void UpdateEtwSession(int32_t sessionIdBit, int32_t etwSessionId, bool bEnable, System_String* activityFilters, bool participateInSampling) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t, int32_t, bool, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FD270))(this, sessionIdBit, etwSessionId, bEnable, activityFilters, participateInSampling);
  }
  void UpdateKwdTriggers(bool enable) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FD980))(this, enable);
  }
  bool EnableEventForDispatcher(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventDispatcher* dispatcher, int32_t eventId, bool value) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventDispatcher*, int32_t, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FDA50))(this, dispatcher, eventId, value);
  }
  bool AnyEventEnabled() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FDB60))(this);
  }
  bool get_IsDisposed() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FDC10))(this);
  }
  void EnsureDescriptorsInitialized() {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FDC50))(this);
  }
  bool SendManifest(ModdingAPI::Exposed::System::Byte_array* rawManifest) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Byte_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FE080))(this, rawManifest);
  }
  void AddListener(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventListener* listener) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventListener*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7017D0))(this, listener);
  }
  void ReportOutOfBandMessage(System_String* msg, bool flush) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, System_String*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7026F0))(this, msg, flush);
  }
  int32_t ValidateSettings(int32_t settings) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x702820))(this, settings);
  }
  bool get_ThrowOnEventWriteErrors() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x702900))(this);
  }
  bool get_SelfDescribingEvents() {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x702910))(this);
  }
  void ReportActivitySamplingInfo(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventListener* listener, ModdingAPI::Exposed::System::Diagnostics::Tracing::SessionMask sessions) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventListener*, ModdingAPI::Exposed::System::Diagnostics::Tracing::SessionMask)>(Helpers::Memory::GetInstance().MakeAbsolute(0x702920))(this, listener, sessions);
  }

  // Static fields:
  static inline __CppStaticProperty<uint32_t> s_currentPid = __CppStaticProperty<uint32_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_currentPid; }
  );
  static inline __CppStaticProperty<uint8_t> m_EventSourceExceptionRecurenceCount = __CppStaticProperty<uint8_t>(
   []() { return &GetStaticClassInstance()->pStaticFields->m_EventSourceExceptionRecurenceCount; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Action_T_*> s_activityDying = __CppStaticProperty<ModdingAPI::Exposed::System::Action_T_*>(
   []() { return &GetStaticClassInstance()->pStaticFields->s_activityDying; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*> namespaceBytes = __CppStaticProperty<ModdingAPI::Exposed::System::Byte_array*>(
   []() { return &GetStaticClassInstance()->pStaticFields->namespaceBytes; }
  );
  static inline __CppStaticProperty<ModdingAPI::Exposed::System::Guid> AspNetEventSourceGuid = __CppStaticProperty<ModdingAPI::Exposed::System::Guid>(
   []() { return &GetStaticClassInstance()->pStaticFields->AspNetEventSourceGuid; }
  );

  // Static methods:
  static inline int32_t AddValueToMetaData(ModdingAPI::Exposed::System::Collections::Generic::List_T_* metaData, System_String* value) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::List_T_*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F4A80))(metaData, value);
  }
  static inline int32_t HexDigit(wchar_t c) {
    return reinterpret_cast<int32_t(__fastcall*)(wchar_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F4E20))(c);
  }
  static inline ModdingAPI::Exposed::System::Guid GetGuid(ModdingAPI::Exposed::System::Type* eventSourceType) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F5120))(eventSourceType);
  }
  static inline System_String* GetName(ModdingAPI::Exposed::System::Type* eventSourceType) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F5470))(eventSourceType);
  }
  static inline void SetCurrentThreadActivityId(ModdingAPI::Exposed::System::Guid activityId) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Guid)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F5510))(activityId);
  }
  static inline ModdingAPI::Exposed::System::Guid get_CurrentThreadActivityId() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F58E0))();
  }
  static inline ModdingAPI::Exposed::System::Guid get_InternalCurrentThreadActivityId() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F5990))();
  }
  static inline ModdingAPI::Exposed::System::Guid get_FallbackActivityId() {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F5AD0))();
  }
  static inline System_String* GetName(ModdingAPI::Exposed::System::Type* eventSourceType, int32_t flags) {
    return reinterpret_cast<System_String*(__fastcall*)(ModdingAPI::Exposed::System::Type*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F7EF0))(eventSourceType, flags);
  }
  static inline ModdingAPI::Exposed::System::Guid GenerateGuidFromName(System_String* name) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Guid(__fastcall*)(System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6F8080))(name);
  }
  static inline int32_t GetOpcodeWithDefault(int32_t opcode, System_String* eventName) {
    return reinterpret_cast<int32_t(__fastcall*)(int32_t, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FC240))(opcode, eventName);
  }
  static inline bool ParseCommandArgs(ModdingAPI::Exposed::System::Collections::Generic::IDictionary_TKey__TValue_* commandArguments, bool participateInSampling, System_String* activityFilters, int32_t sessionIdBit) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::IDictionary_TKey__TValue_*, bool, System_String*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FD6E0))(commandArguments, participateInSampling, activityFilters, sessionIdBit);
  }
  static inline ModdingAPI::Exposed::System::Attribute* GetCustomAttributeHelper(ModdingAPI::Exposed::System::Reflection::MemberInfo* member, ModdingAPI::Exposed::System::Type* attributeType, int32_t flags) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Attribute*(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MemberInfo*, ModdingAPI::Exposed::System::Type*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FE3A0))(member, attributeType, flags);
  }
  static inline bool AttributeTypeNamesMatch(ModdingAPI::Exposed::System::Type* attributeType, ModdingAPI::Exposed::System::Type* reflectedAttributeType) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Type*, ModdingAPI::Exposed::System::Type*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FEAE0))(attributeType, reflectedAttributeType);
  }
  static inline ModdingAPI::Exposed::System::Type* GetEventSourceBaseType(ModdingAPI::Exposed::System::Type* eventSourceType, bool allowEventSourceOverride, bool reflectionOnly) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Type*(__fastcall*)(ModdingAPI::Exposed::System::Type*, bool, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FEDA0))(eventSourceType, allowEventSourceOverride, reflectionOnly);
  }
  static inline ModdingAPI::Exposed::System::Byte_array* CreateManifestAndDescriptors(ModdingAPI::Exposed::System::Type* eventSourceType, System_String* eventSourceDllName, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource* source, int32_t flags) {
    return reinterpret_cast<ModdingAPI::Exposed::System::Byte_array*(__fastcall*)(ModdingAPI::Exposed::System::Type*, System_String*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x6FF010))(eventSourceType, eventSourceDllName, source, flags);
  }
  static inline bool RemoveFirstArgIfRelatedActivityId(ModdingAPI::Exposed::System::Reflection::ParameterInfo_array* args) {
    return reinterpret_cast<bool(__fastcall*)(ModdingAPI::Exposed::System::Reflection::ParameterInfo_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x700A00))(args);
  }
  static inline void AddProviderEnumKind(ModdingAPI::Exposed::System::Diagnostics::Tracing::ManifestBuilder* manifest, ModdingAPI::Exposed::System::Reflection::FieldInfo* staticField, System_String* providerEnumKind) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::ManifestBuilder*, ModdingAPI::Exposed::System::Reflection::FieldInfo*, System_String*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x700CD0))(manifest, staticField, providerEnumKind);
  }
  static inline void AddEventDescriptor(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventMetadata_array* eventData, System_String* eventName, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventAttribute* eventAttribute, ModdingAPI::Exposed::System::Reflection::ParameterInfo_array* eventParameters, bool hasRelatedActivityID) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventMetadata_array*, System_String*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventAttribute*, ModdingAPI::Exposed::System::Reflection::ParameterInfo_array*, bool)>(Helpers::Memory::GetInstance().MakeAbsolute(0x701370))(eventData, eventName, eventAttribute, eventParameters, hasRelatedActivityID);
  }
  static inline void TrimEventDescriptors(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventMetadata_array* eventData) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventMetadata_array*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x7016C0))(eventData);
  }
  static inline void DebugCheckEvent(ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_* eventsByName, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventMetadata_array* eventData, ModdingAPI::Exposed::System::Reflection::MethodInfo* method, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventAttribute* eventAttribute, ModdingAPI::Exposed::System::Diagnostics::Tracing::ManifestBuilder* manifest, int32_t options) {
    reinterpret_cast<void(__fastcall*)(ModdingAPI::Exposed::System::Collections::Generic::Dictionary_TKey__TValue_*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventSource::EventMetadata_array*, ModdingAPI::Exposed::System::Reflection::MethodInfo*, ModdingAPI::Exposed::System::Diagnostics::Tracing::EventAttribute*, ModdingAPI::Exposed::System::Diagnostics::Tracing::ManifestBuilder*, int32_t)>(Helpers::Memory::GetInstance().MakeAbsolute(0x701AA0))(eventsByName, eventData, method, eventAttribute, manifest, options);
  }
  static inline int32_t GetHelperCallFirstArg(ModdingAPI::Exposed::System::Reflection::MethodInfo* method) {
    return reinterpret_cast<int32_t(__fastcall*)(ModdingAPI::Exposed::System::Reflection::MethodInfo*)>(Helpers::Memory::GetInstance().MakeAbsolute(0x702420))(method);
  }
  static inline void ::cctor() {
    reinterpret_cast<void(__fastcall*)()>(Helpers::Memory::GetInstance().MakeAbsolute(0x702D90))();
  }
};
}